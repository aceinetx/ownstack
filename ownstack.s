format ELF64

public f
f:
	;; rdi - new stack

	;; setup
	mov r8, rsp
	mov r9, rbp

	mov rsp, rdi
	mov rbp, rdi

	push r8
	push r9

	;; code
	mov qword [rbp-24], 69

	;; restore
	pop rbp
	pop rsp

	mov rax, 0
	ret
