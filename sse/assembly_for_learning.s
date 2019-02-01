
./a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000000560 <_init>:
 560:	48 83 ec 08          	sub    $0x8,%rsp
 564:	48 8b 05 7d 0a 20 00 	mov    0x200a7d(%rip),%rax        # 200fe8 <__gmon_start__>
 56b:	48 85 c0             	test   %rax,%rax
 56e:	74 02                	je     572 <_init+0x12>
 570:	ff d0                	callq  *%rax
 572:	48 83 c4 08          	add    $0x8,%rsp
 576:	c3                   	retq   

Disassembly of section .plt:

0000000000000580 <.plt>:
 580:	ff 35 2a 0a 20 00    	pushq  0x200a2a(%rip)        # 200fb0 <_GLOBAL_OFFSET_TABLE_+0x8>
 586:	ff 25 2c 0a 20 00    	jmpq   *0x200a2c(%rip)        # 200fb8 <_GLOBAL_OFFSET_TABLE_+0x10>
 58c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000000590 <printf@plt>:
 590:	ff 25 2a 0a 20 00    	jmpq   *0x200a2a(%rip)        # 200fc0 <printf@GLIBC_2.2.5>
 596:	68 00 00 00 00       	pushq  $0x0
 59b:	e9 e0 ff ff ff       	jmpq   580 <.plt>

00000000000005a0 <memset@plt>:
 5a0:	ff 25 22 0a 20 00    	jmpq   *0x200a22(%rip)        # 200fc8 <memset@GLIBC_2.2.5>
 5a6:	68 01 00 00 00       	pushq  $0x1
 5ab:	e9 d0 ff ff ff       	jmpq   580 <.plt>

00000000000005b0 <malloc@plt>:
 5b0:	ff 25 1a 0a 20 00    	jmpq   *0x200a1a(%rip)        # 200fd0 <malloc@GLIBC_2.2.5>
 5b6:	68 02 00 00 00       	pushq  $0x2
 5bb:	e9 c0 ff ff ff       	jmpq   580 <.plt>

Disassembly of section .plt.got:

00000000000005c0 <__cxa_finalize@plt>:
 5c0:	ff 25 32 0a 20 00    	jmpq   *0x200a32(%rip)        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 5c6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000000000005d0 <_start>:
 5d0:	31 ed                	xor    %ebp,%ebp
 5d2:	49 89 d1             	mov    %rdx,%r9
 5d5:	5e                   	pop    %rsi
 5d6:	48 89 e2             	mov    %rsp,%rdx
 5d9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
 5dd:	50                   	push   %rax
 5de:	54                   	push   %rsp
 5df:	4c 8d 05 1a 03 00 00 	lea    0x31a(%rip),%r8        # 900 <__libc_csu_fini>
 5e6:	48 8d 0d a3 02 00 00 	lea    0x2a3(%rip),%rcx        # 890 <__libc_csu_init>
 5ed:	48 8d 3d e6 00 00 00 	lea    0xe6(%rip),%rdi        # 6da <main>
 5f4:	ff 15 e6 09 20 00    	callq  *0x2009e6(%rip)        # 200fe0 <__libc_start_main@GLIBC_2.2.5>
 5fa:	f4                   	hlt    
 5fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000000600 <deregister_tm_clones>:
 600:	48 8d 3d 09 0a 20 00 	lea    0x200a09(%rip),%rdi        # 201010 <__TMC_END__>
 607:	55                   	push   %rbp
 608:	48 8d 05 01 0a 20 00 	lea    0x200a01(%rip),%rax        # 201010 <__TMC_END__>
 60f:	48 39 f8             	cmp    %rdi,%rax
 612:	48 89 e5             	mov    %rsp,%rbp
 615:	74 19                	je     630 <deregister_tm_clones+0x30>
 617:	48 8b 05 ba 09 20 00 	mov    0x2009ba(%rip),%rax        # 200fd8 <_ITM_deregisterTMCloneTable>
 61e:	48 85 c0             	test   %rax,%rax
 621:	74 0d                	je     630 <deregister_tm_clones+0x30>
 623:	5d                   	pop    %rbp
 624:	ff e0                	jmpq   *%rax
 626:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 62d:	00 00 00 
 630:	5d                   	pop    %rbp
 631:	c3                   	retq   
 632:	0f 1f 40 00          	nopl   0x0(%rax)
 636:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 63d:	00 00 00 

0000000000000640 <register_tm_clones>:
 640:	48 8d 3d c9 09 20 00 	lea    0x2009c9(%rip),%rdi        # 201010 <__TMC_END__>
 647:	48 8d 35 c2 09 20 00 	lea    0x2009c2(%rip),%rsi        # 201010 <__TMC_END__>
 64e:	55                   	push   %rbp
 64f:	48 29 fe             	sub    %rdi,%rsi
 652:	48 89 e5             	mov    %rsp,%rbp
 655:	48 c1 fe 03          	sar    $0x3,%rsi
 659:	48 89 f0             	mov    %rsi,%rax
 65c:	48 c1 e8 3f          	shr    $0x3f,%rax
 660:	48 01 c6             	add    %rax,%rsi
 663:	48 d1 fe             	sar    %rsi
 666:	74 18                	je     680 <register_tm_clones+0x40>
 668:	48 8b 05 81 09 20 00 	mov    0x200981(%rip),%rax        # 200ff0 <_ITM_registerTMCloneTable>
 66f:	48 85 c0             	test   %rax,%rax
 672:	74 0c                	je     680 <register_tm_clones+0x40>
 674:	5d                   	pop    %rbp
 675:	ff e0                	jmpq   *%rax
 677:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
 67e:	00 00 
 680:	5d                   	pop    %rbp
 681:	c3                   	retq   
 682:	0f 1f 40 00          	nopl   0x0(%rax)
 686:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 68d:	00 00 00 

0000000000000690 <__do_global_dtors_aux>:
 690:	80 3d 79 09 20 00 00 	cmpb   $0x0,0x200979(%rip)        # 201010 <__TMC_END__>
 697:	75 2f                	jne    6c8 <__do_global_dtors_aux+0x38>
 699:	48 83 3d 57 09 20 00 	cmpq   $0x0,0x200957(%rip)        # 200ff8 <__cxa_finalize@GLIBC_2.2.5>
 6a0:	00 
 6a1:	55                   	push   %rbp
 6a2:	48 89 e5             	mov    %rsp,%rbp
 6a5:	74 0c                	je     6b3 <__do_global_dtors_aux+0x23>
 6a7:	48 8b 3d 5a 09 20 00 	mov    0x20095a(%rip),%rdi        # 201008 <__dso_handle>
 6ae:	e8 0d ff ff ff       	callq  5c0 <__cxa_finalize@plt>
 6b3:	e8 48 ff ff ff       	callq  600 <deregister_tm_clones>
 6b8:	c6 05 51 09 20 00 01 	movb   $0x1,0x200951(%rip)        # 201010 <__TMC_END__>
 6bf:	5d                   	pop    %rbp
 6c0:	c3                   	retq   
 6c1:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
 6c8:	f3 c3                	repz retq 
 6ca:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000000006d0 <frame_dummy>:
 6d0:	55                   	push   %rbp
 6d1:	48 89 e5             	mov    %rsp,%rbp
 6d4:	5d                   	pop    %rbp
 6d5:	e9 66 ff ff ff       	jmpq   640 <register_tm_clones>

00000000000006da <main>:
#include <stdlib.h>
#include <string.h>

#define LENGTH 64000000

int main() {
 6da:	4c 8d 54 24 08       	lea    0x8(%rsp),%r10
 6df:	48 83 e4 e0          	and    $0xffffffffffffffe0,%rsp
 6e3:	41 ff 72 f8          	pushq  -0x8(%r10)
 6e7:	55                   	push   %rbp
 6e8:	48 89 e5             	mov    %rsp,%rbp
 6eb:	41 52                	push   %r10
 6ed:	48 81 ec e8 00 00 00 	sub    $0xe8,%rsp
	char *a = malloc(LENGTH * sizeof(char));
 6f4:	bf 00 90 d0 03       	mov    $0x3d09000,%edi
 6f9:	e8 b2 fe ff ff       	callq  5b0 <malloc@plt>
 6fe:	48 89 85 18 ff ff ff 	mov    %rax,-0xe8(%rbp)
	char *b = malloc(LENGTH * sizeof(char));
 705:	bf 00 90 d0 03       	mov    $0x3d09000,%edi
 70a:	e8 a1 fe ff ff       	callq  5b0 <malloc@plt>
 70f:	48 89 85 20 ff ff ff 	mov    %rax,-0xe0(%rbp)
	memset(a, 0, LENGTH * sizeof(char));
 716:	48 8b 85 18 ff ff ff 	mov    -0xe8(%rbp),%rax
 71d:	ba 00 90 d0 03       	mov    $0x3d09000,%edx
 722:	be 00 00 00 00       	mov    $0x0,%esi
 727:	48 89 c7             	mov    %rax,%rdi
 72a:	e8 71 fe ff ff       	callq  5a0 <memset@plt>
	memset(b, 1, LENGTH * sizeof(char));
 72f:	48 8b 85 20 ff ff ff 	mov    -0xe0(%rbp),%rax
 736:	ba 00 90 d0 03       	mov    $0x3d09000,%edx
 73b:	be 01 00 00 00       	mov    $0x1,%esi
 740:	48 89 c7             	mov    %rax,%rdi
 743:	e8 58 fe ff ff       	callq  5a0 <memset@plt>
	
	__m256i* __a = (__m256i*) a;
 748:	48 8b 85 18 ff ff ff 	mov    -0xe8(%rbp),%rax
 74f:	48 89 85 28 ff ff ff 	mov    %rax,-0xd8(%rbp)
	__m256i* __b = (__m256i*) b;
 756:	48 8b 85 20 ff ff ff 	mov    -0xe0(%rbp),%rax
 75d:	48 89 85 30 ff ff ff 	mov    %rax,-0xd0(%rbp)
	
	const int len = LENGTH / 32;
 764:	c7 85 14 ff ff ff 80 	movl   $0x1e8480,-0xec(%rbp)
 76b:	84 1e 00 
	for(int i = 0; i < len; i++) {
 76e:	c7 85 10 ff ff ff 00 	movl   $0x0,-0xf0(%rbp)
 775:	00 00 00 
 778:	e9 cb 00 00 00       	jmpq   848 <main+0x16e>
		__m256i _a = _mm256_loadu_si256(__a+i);
 77d:	8b 85 10 ff ff ff    	mov    -0xf0(%rbp),%eax
 783:	48 98                	cltq   
 785:	48 c1 e0 05          	shl    $0x5,%rax
 789:	48 89 c2             	mov    %rax,%rdx
 78c:	48 8b 85 28 ff ff ff 	mov    -0xd8(%rbp),%rax
 793:	48 01 d0             	add    %rdx,%rax
 796:	48 89 85 48 ff ff ff 	mov    %rax,-0xb8(%rbp)
}

extern __inline __m256i __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm256_loadu_si256 (__m256i_u const *__P)
{
  return *__P;
 79d:	48 8b 85 48 ff ff ff 	mov    -0xb8(%rbp),%rax
 7a4:	c5 fe 6f 00          	vmovdqu (%rax),%ymm0
 7a8:	c5 fd 7f 85 50 ff ff 	vmovdqa %ymm0,-0xb0(%rbp)
 7af:	ff 
		__m256i _b = _mm256_loadu_si256(__b+i);
 7b0:	8b 85 10 ff ff ff    	mov    -0xf0(%rbp),%eax
 7b6:	48 98                	cltq   
 7b8:	48 c1 e0 05          	shl    $0x5,%rax
 7bc:	48 89 c2             	mov    %rax,%rdx
 7bf:	48 8b 85 30 ff ff ff 	mov    -0xd0(%rbp),%rax
 7c6:	48 01 d0             	add    %rdx,%rax
 7c9:	48 89 85 40 ff ff ff 	mov    %rax,-0xc0(%rbp)
 7d0:	48 8b 85 40 ff ff ff 	mov    -0xc0(%rbp),%rax
 7d7:	c5 fe 6f 00          	vmovdqu (%rax),%ymm0
 7db:	c5 fd 7f 85 70 ff ff 	vmovdqa %ymm0,-0x90(%rbp)
 7e2:	ff 
 7e3:	c5 fd 6f 85 50 ff ff 	vmovdqa -0xb0(%rbp),%ymm0
 7ea:	ff 
 7eb:	c5 fd 7f 45 b0       	vmovdqa %ymm0,-0x50(%rbp)
 7f0:	c5 fd 6f 85 70 ff ff 	vmovdqa -0x90(%rbp),%ymm0
 7f7:	ff 
 7f8:	c5 fd 7f 45 d0       	vmovdqa %ymm0,-0x30(%rbp)

extern __inline __m256i
__attribute__ ((__gnu_inline__, __always_inline__, __artificial__))
_mm256_max_epi8 (__m256i __A, __m256i __B)
{
  return (__m256i)__builtin_ia32_pmaxsb256 ((__v32qi)__A, (__v32qi)__B);
 7fd:	c5 fd 6f 45 d0       	vmovdqa -0x30(%rbp),%ymm0
 802:	c5 fd 6f 4d b0       	vmovdqa -0x50(%rbp),%ymm1
 807:	c4 e2 75 3c c0       	vpmaxsb %ymm0,%ymm1,%ymm0
		
		_mm256_storeu_si256(__a+i, _mm256_max_epi8(_a, _b));
 80c:	8b 85 10 ff ff ff    	mov    -0xf0(%rbp),%eax
 812:	48 98                	cltq   
 814:	48 c1 e0 05          	shl    $0x5,%rax
 818:	48 89 c2             	mov    %rax,%rdx
 81b:	48 8b 85 28 ff ff ff 	mov    -0xd8(%rbp),%rax
 822:	48 01 d0             	add    %rdx,%rax
 825:	48 89 85 38 ff ff ff 	mov    %rax,-0xc8(%rbp)
 82c:	c5 fd 7f 45 90       	vmovdqa %ymm0,-0x70(%rbp)
}

extern __inline void __attribute__((__gnu_inline__, __always_inline__, __artificial__))
_mm256_storeu_si256 (__m256i_u *__P, __m256i __A)
{
  *__P = __A;
 831:	c5 fd 6f 45 90       	vmovdqa -0x70(%rbp),%ymm0
 836:	48 8b 85 38 ff ff ff 	mov    -0xc8(%rbp),%rax
 83d:	c5 fe 7f 00          	vmovdqu %ymm0,(%rax)
	for(int i = 0; i < len; i++) {
 841:	83 85 10 ff ff ff 01 	addl   $0x1,-0xf0(%rbp)
 848:	8b 85 10 ff ff ff    	mov    -0xf0(%rbp),%eax
 84e:	3b 85 14 ff ff ff    	cmp    -0xec(%rbp),%eax
 854:	0f 8c 23 ff ff ff    	jl     77d <main+0xa3>
	}
	printf("%d", (int)a[0]);
 85a:	48 8b 85 18 ff ff ff 	mov    -0xe8(%rbp),%rax
 861:	0f b6 00             	movzbl (%rax),%eax
 864:	0f be c0             	movsbl %al,%eax
 867:	89 c6                	mov    %eax,%esi
 869:	48 8d 3d a4 00 00 00 	lea    0xa4(%rip),%rdi        # 914 <_IO_stdin_used+0x4>
 870:	b8 00 00 00 00       	mov    $0x0,%eax
 875:	e8 16 fd ff ff       	callq  590 <printf@plt>
 87a:	b8 00 00 00 00       	mov    $0x0,%eax
}
 87f:	48 81 c4 e8 00 00 00 	add    $0xe8,%rsp
 886:	41 5a                	pop    %r10
 888:	5d                   	pop    %rbp
 889:	49 8d 62 f8          	lea    -0x8(%r10),%rsp
 88d:	c3                   	retq   
 88e:	66 90                	xchg   %ax,%ax

0000000000000890 <__libc_csu_init>:
 890:	41 57                	push   %r15
 892:	41 56                	push   %r14
 894:	49 89 d7             	mov    %rdx,%r15
 897:	41 55                	push   %r13
 899:	41 54                	push   %r12
 89b:	4c 8d 25 06 05 20 00 	lea    0x200506(%rip),%r12        # 200da8 <__frame_dummy_init_array_entry>
 8a2:	55                   	push   %rbp
 8a3:	48 8d 2d 06 05 20 00 	lea    0x200506(%rip),%rbp        # 200db0 <__init_array_end>
 8aa:	53                   	push   %rbx
 8ab:	41 89 fd             	mov    %edi,%r13d
 8ae:	49 89 f6             	mov    %rsi,%r14
 8b1:	4c 29 e5             	sub    %r12,%rbp
 8b4:	48 83 ec 08          	sub    $0x8,%rsp
 8b8:	48 c1 fd 03          	sar    $0x3,%rbp
 8bc:	e8 9f fc ff ff       	callq  560 <_init>
 8c1:	48 85 ed             	test   %rbp,%rbp
 8c4:	74 20                	je     8e6 <__libc_csu_init+0x56>
 8c6:	31 db                	xor    %ebx,%ebx
 8c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
 8cf:	00 
 8d0:	4c 89 fa             	mov    %r15,%rdx
 8d3:	4c 89 f6             	mov    %r14,%rsi
 8d6:	44 89 ef             	mov    %r13d,%edi
 8d9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
 8dd:	48 83 c3 01          	add    $0x1,%rbx
 8e1:	48 39 dd             	cmp    %rbx,%rbp
 8e4:	75 ea                	jne    8d0 <__libc_csu_init+0x40>
 8e6:	48 83 c4 08          	add    $0x8,%rsp
 8ea:	5b                   	pop    %rbx
 8eb:	5d                   	pop    %rbp
 8ec:	41 5c                	pop    %r12
 8ee:	41 5d                	pop    %r13
 8f0:	41 5e                	pop    %r14
 8f2:	41 5f                	pop    %r15
 8f4:	c3                   	retq   
 8f5:	90                   	nop
 8f6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
 8fd:	00 00 00 

0000000000000900 <__libc_csu_fini>:
 900:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000000904 <_fini>:
 904:	48 83 ec 08          	sub    $0x8,%rsp
 908:	48 83 c4 08          	add    $0x8,%rsp
 90c:	c3                   	retq   
