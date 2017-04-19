	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
        .string "hello, world\n"
	.text
	.globl	main
	.type	main, @function
main:
	.cfi_startproc
	movq	$1, %rax
	movq	$13, %rdx
	leaq	.LC0(%rip), %rsi
	movq	$1, %rdi
	syscall

	movq	$60, %rax
	movq	$0, %rdi
	syscall
	.cfi_endproc
