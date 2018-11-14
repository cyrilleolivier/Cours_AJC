	.file	"main.c"
	.text
	.globl	relier
	.type	relier, @function
relier:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, 56(%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	relier, .-relier
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$64, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	$1819044199, (%rax)
	movw	$101, 4(%rax)
	movq	-24(%rbp), %rax
	movq	$0, 56(%rax)
	movl	$64, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movabsq	$7307499909289239923, %rcx
	movq	%rcx, (%rax)
	movw	$110, 8(%rax)
	movq	-16(%rbp), %rax
	movq	$0, 56(%rax)
	movl	$64, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$1853190754, (%rax)
	movw	$111, 4(%rax)
	movq	-8(%rbp), %rax
	movq	$0, 56(%rax)
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	relier
	movq	-8(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	relier
	movq	-24(%rbp), %rax
	movq	56(%rax), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
