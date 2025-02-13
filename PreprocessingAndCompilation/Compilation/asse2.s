    .file	"2LCM.c"
    .text
    .def	printf;	.scl	3;	.type	32;	.endef
    .seh_proc	printf
printf:
    pushq	%rbp
    .seh_pushreg	%rbp
    pushq	%rbx
    .seh_pushreg	%rbx
    subq	$56, %rsp
    .seh_stackalloc	56
    leaq	48(%rsp), %rbp
    .seh_setframe	%rbp, 48
    .seh_endprologue
    movq	%rcx, 32(%rbp)
    movq	%rdx, 40(%rbp)
    movq	%r8, 48(%rbp)
    movq	%r9, 56(%rbp)
    leaq	40(%rbp), %rax
    movq	%rax, -16(%rbp)
    movq	-16(%rbp), %rbx
    movl	$1, %ecx
    movq	__imp___acrt_iob_func(%rip), %rax
    call	*%rax
    movq	%rax, %rcx
    movq	32(%rbp), %rax
    movq	%rbx, %r8
    movq	%rax, %rdx
    call	__mingw_vfprintf
    movl	%eax, -4(%rbp)
    movl	-4(%rbp), %eax
    addq	$56, %rsp
    popq	%rbx
    popq	%rbp
    ret
    .seh_endproc
    .globl	gcd
    .def	gcd;	.scl	2;	.type	32;	.endef
    .seh_proc	gcd
gcd:
    pushq	%rbp
    .seh_pushreg	%rbp
    movq	%rsp, %rbp
    .seh_setframe	%rbp, 0
    subq	$16, %rsp
    .seh_stackalloc	16
    .seh_endprologue
    movl	%ecx, 16(%rbp)
    movl	%edx, 24(%rbp)
    jmp	.L4
.L5:
    movl	16(%rbp), %eax
    cltd
    idivl	24(%rbp)
    movl	%edx, -4(%rbp)
    movl	24(%rbp), %eax
    movl	%eax, 16(%rbp)
    movl	-4(%rbp), %eax
    movl	%eax, 24(%rbp)
.L4:
    cmpl	$0, 24(%rbp)
    jne	.L5
    movl	16(%rbp), %eax
    addq	$16, %rsp
    popq	%rbp
    ret
    .seh_endproc
    .def	__main;	.scl	2;	.type	32;	.endef
    .section .rdata,"dr"
.LC0:
    .ascii "The LCM of %d and %d is %d\12\0"
    .text
    .globl	main
    .def	main;	.scl	2;	.type	32;	.endef
    .seh_proc	main
main:
    pushq	%rbp
    .seh_pushreg	%rbp
    movq	%rsp, %rbp
    .seh_setframe	%rbp, 0
    subq	$48, %rsp
    .seh_stackalloc	48
    .seh_endprologue
    call	__main
    movl	$12, -4(%rbp)
    movl	$18, -8(%rbp)
    movl	-8(%rbp), %edx
    movl	-4(%rbp), %eax
    movl	%eax, %ecx
    call	gcd
    movl	%eax, %ecx
    movl	-4(%rbp), %eax
    cltd
    idivl	%ecx
    imull	-8(%rbp), %eax
    movl	%eax, %ecx
    movl	-8(%rbp), %edx
    movl	-4(%rbp), %eax
    movl	%ecx, %r9d
    movl	%edx, %r8d
    movl	%eax, %edx
    leaq	.LC0(%rip), %rax
    movq	%rax, %rcx
    call	printf
    movl	$0, %eax
    addq	$48, %rsp
    popq	%rbp
    ret
    .seh_endproc
    .ident	"GCC: (Rev7, Built by MSYS2 project) 12.2.0"
    .def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef