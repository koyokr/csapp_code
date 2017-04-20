#include "csapp.h"

volatile sig_atomic_t pid;
// _Atomic sig_atomic_t pid;

void sigchld_handler(int s)
{
	int olderrno = errno;
	pid = waitpid(-1, NULL, 0);
	errno = olderrno;
}

void sigint_handler(int s)
{
}

int main(int argc, char **argv)
{
	sigset_t mask, prev;

	Signal(SIGCHLD, sigchld_handler);
	Signal(SIGINT, sigint_handler);
	Sigemptyset(&mask);
	Sigaddset(&mask, SIGCHLD);

	while (1) {
		Sigprocmask(SIG_BLOCK, &mask, &prev); // Block SIGCHLD
		if (Fork() == 0)
			exit(0);

		pid = 0;
		while (!pid)
			sigsuspend(&prev);

		Sigprocmask(SIG_SETMASK, &prev, NULL); // Optionally unblock SIGCHLD

		printf(".");
	}
	exit(0);
}
