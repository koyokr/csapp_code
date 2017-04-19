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
	movq	$string, %rsi
	movq	$1, %rdi
	call	write@PLT

	movq	$60, %rax
	movq	$0, %rdi
	call	_exit@PLT
	.cfi_endproc
