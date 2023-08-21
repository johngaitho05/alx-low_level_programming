
gm:     file format elf64-x86-64


Disassembly of section .init:

0000000000400568 <_init>:
  400568:	48 83 ec 08          	sub    $0x8,%rsp
  40056c:	48 8b 05 85 1a 20 00 	mov    0x201a85(%rip),%rax        # 601ff8 <__gmon_start__>
  400573:	48 85 c0             	test   %rax,%rax
  400576:	74 05                	je     40057d <_init+0x15>
  400578:	e8 b3 00 00 00       	call   400630 <__gmon_start__@plt>
  40057d:	48 83 c4 08          	add    $0x8,%rsp
  400581:	c3                   	ret    

Disassembly of section .plt:

0000000000400590 <.plt>:
  400590:	ff 35 72 1a 20 00    	push   0x201a72(%rip)        # 602008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400596:	ff 25 74 1a 20 00    	jmp    *0x201a74(%rip)        # 602010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40059c:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004005a0 <puts@plt>:
  4005a0:	ff 25 72 1a 20 00    	jmp    *0x201a72(%rip)        # 602018 <puts@GLIBC_2.2.5>
  4005a6:	68 00 00 00 00       	push   $0x0
  4005ab:	e9 e0 ff ff ff       	jmp    400590 <.plt>

00000000004005b0 <__stack_chk_fail@plt>:
  4005b0:	ff 25 6a 1a 20 00    	jmp    *0x201a6a(%rip)        # 602020 <__stack_chk_fail@GLIBC_2.4>
  4005b6:	68 01 00 00 00       	push   $0x1
  4005bb:	e9 d0 ff ff ff       	jmp    400590 <.plt>

00000000004005c0 <printf@plt>:
  4005c0:	ff 25 62 1a 20 00    	jmp    *0x201a62(%rip)        # 602028 <printf@GLIBC_2.2.5>
  4005c6:	68 02 00 00 00       	push   $0x2
  4005cb:	e9 c0 ff ff ff       	jmp    400590 <.plt>

00000000004005d0 <dprintf@plt>:
  4005d0:	ff 25 5a 1a 20 00    	jmp    *0x201a5a(%rip)        # 602030 <dprintf@GLIBC_2.2.5>
  4005d6:	68 03 00 00 00       	push   $0x3
  4005db:	e9 b0 ff ff ff       	jmp    400590 <.plt>

00000000004005e0 <__libc_start_main@plt>:
  4005e0:	ff 25 52 1a 20 00    	jmp    *0x201a52(%rip)        # 602038 <__libc_start_main@GLIBC_2.2.5>
  4005e6:	68 04 00 00 00       	push   $0x4
  4005eb:	e9 a0 ff ff ff       	jmp    400590 <.plt>

00000000004005f0 <srand@plt>:
  4005f0:	ff 25 4a 1a 20 00    	jmp    *0x201a4a(%rip)        # 602040 <srand@GLIBC_2.2.5>
  4005f6:	68 05 00 00 00       	push   $0x5
  4005fb:	e9 90 ff ff ff       	jmp    400590 <.plt>

0000000000400600 <time@plt>:
  400600:	ff 25 42 1a 20 00    	jmp    *0x201a42(%rip)        # 602048 <time@GLIBC_2.2.5>
  400606:	68 06 00 00 00       	push   $0x6
  40060b:	e9 80 ff ff ff       	jmp    400590 <.plt>

0000000000400610 <atoi@plt>:
  400610:	ff 25 3a 1a 20 00    	jmp    *0x201a3a(%rip)        # 602050 <atoi@GLIBC_2.2.5>
  400616:	68 07 00 00 00       	push   $0x7
  40061b:	e9 70 ff ff ff       	jmp    400590 <.plt>

0000000000400620 <rand@plt>:
  400620:	ff 25 32 1a 20 00    	jmp    *0x201a32(%rip)        # 602058 <rand@GLIBC_2.2.5>
  400626:	68 08 00 00 00       	push   $0x8
  40062b:	e9 60 ff ff ff       	jmp    400590 <.plt>

Disassembly of section .plt.got:

0000000000400630 <__gmon_start__@plt>:
  400630:	ff 25 c2 19 20 00    	jmp    *0x2019c2(%rip)        # 601ff8 <__gmon_start__>
  400636:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400640 <_start>:
  400640:	31 ed                	xor    %ebp,%ebp
  400642:	49 89 d1             	mov    %rdx,%r9
  400645:	5e                   	pop    %rsi
  400646:	48 89 e2             	mov    %rsp,%rdx
  400649:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40064d:	50                   	push   %rax
  40064e:	54                   	push   %rsp
  40064f:	49 c7 c0 70 0d 40 00 	mov    $0x400d70,%r8
  400656:	48 c7 c1 00 0d 40 00 	mov    $0x400d00,%rcx
  40065d:	48 c7 c7 a9 0b 40 00 	mov    $0x400ba9,%rdi
  400664:	e8 77 ff ff ff       	call   4005e0 <__libc_start_main@plt>
  400669:	f4                   	hlt    
  40066a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400670 <deregister_tm_clones>:
  400670:	b8 77 20 60 00       	mov    $0x602077,%eax
  400675:	55                   	push   %rbp
  400676:	48 2d 70 20 60 00    	sub    $0x602070,%rax
  40067c:	48 83 f8 0e          	cmp    $0xe,%rax
  400680:	48 89 e5             	mov    %rsp,%rbp
  400683:	76 1b                	jbe    4006a0 <deregister_tm_clones+0x30>
  400685:	b8 00 00 00 00       	mov    $0x0,%eax
  40068a:	48 85 c0             	test   %rax,%rax
  40068d:	74 11                	je     4006a0 <deregister_tm_clones+0x30>
  40068f:	5d                   	pop    %rbp
  400690:	bf 70 20 60 00       	mov    $0x602070,%edi
  400695:	ff e0                	jmp    *%rax
  400697:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40069e:	00 00 
  4006a0:	5d                   	pop    %rbp
  4006a1:	c3                   	ret    
  4006a2:	0f 1f 40 00          	nopl   0x0(%rax)
  4006a6:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
  4006ad:	00 00 00 

00000000004006b0 <register_tm_clones>:
  4006b0:	be 70 20 60 00       	mov    $0x602070,%esi
  4006b5:	55                   	push   %rbp
  4006b6:	48 81 ee 70 20 60 00 	sub    $0x602070,%rsi
  4006bd:	48 c1 fe 03          	sar    $0x3,%rsi
  4006c1:	48 89 e5             	mov    %rsp,%rbp
  4006c4:	48 89 f0             	mov    %rsi,%rax
  4006c7:	48 c1 e8 3f          	shr    $0x3f,%rax
  4006cb:	48 01 c6             	add    %rax,%rsi
  4006ce:	48 d1 fe             	sar    %rsi
  4006d1:	74 15                	je     4006e8 <register_tm_clones+0x38>
  4006d3:	b8 00 00 00 00       	mov    $0x0,%eax
  4006d8:	48 85 c0             	test   %rax,%rax
  4006db:	74 0b                	je     4006e8 <register_tm_clones+0x38>
  4006dd:	5d                   	pop    %rbp
  4006de:	bf 70 20 60 00       	mov    $0x602070,%edi
  4006e3:	ff e0                	jmp    *%rax
  4006e5:	0f 1f 00             	nopl   (%rax)
  4006e8:	5d                   	pop    %rbp
  4006e9:	c3                   	ret    
  4006ea:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004006f0 <__do_global_dtors_aux>:
  4006f0:	80 3d 79 19 20 00 00 	cmpb   $0x0,0x201979(%rip)        # 602070 <__TMC_END__>
  4006f7:	75 11                	jne    40070a <__do_global_dtors_aux+0x1a>
  4006f9:	55                   	push   %rbp
  4006fa:	48 89 e5             	mov    %rsp,%rbp
  4006fd:	e8 6e ff ff ff       	call   400670 <deregister_tm_clones>
  400702:	5d                   	pop    %rbp
  400703:	c6 05 66 19 20 00 01 	movb   $0x1,0x201966(%rip)        # 602070 <__TMC_END__>
  40070a:	f3 c3                	repz ret 
  40070c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400710 <frame_dummy>:
  400710:	bf 20 1e 60 00       	mov    $0x601e20,%edi
  400715:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400719:	75 05                	jne    400720 <frame_dummy+0x10>
  40071b:	eb 93                	jmp    4006b0 <register_tm_clones>
  40071d:	0f 1f 00             	nopl   (%rax)
  400720:	b8 00 00 00 00       	mov    $0x0,%eax
  400725:	48 85 c0             	test   %rax,%rax
  400728:	74 f1                	je     40071b <frame_dummy+0xb>
  40072a:	55                   	push   %rbp
  40072b:	48 89 e5             	mov    %rsp,%rbp
  40072e:	ff d0                	call   *%rax
  400730:	5d                   	pop    %rbp
  400731:	e9 7a ff ff ff       	jmp    4006b0 <register_tm_clones>

0000000000400736 <check_input>:
  400736:	55                   	push   %rbp
  400737:	48 89 e5             	mov    %rsp,%rbp
  40073a:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  40073e:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  400741:	89 55 e0             	mov    %edx,-0x20(%rbp)
  400744:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
  40074b:	e9 8e 00 00 00       	jmp    4007de <check_input+0xa8>
  400750:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400753:	48 98                	cltq   
  400755:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  40075c:	00 
  40075d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400761:	48 01 d0             	add    %rdx,%rax
  400764:	8b 00                	mov    (%rax),%eax
  400766:	85 c0                	test   %eax,%eax
  400768:	7e 1b                	jle    400785 <check_input+0x4f>
  40076a:	8b 45 f8             	mov    -0x8(%rbp),%eax
  40076d:	48 98                	cltq   
  40076f:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  400776:	00 
  400777:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40077b:	48 01 d0             	add    %rdx,%rax
  40077e:	8b 00                	mov    (%rax),%eax
  400780:	83 f8 4b             	cmp    $0x4b,%eax
  400783:	7e 07                	jle    40078c <check_input+0x56>
  400785:	b8 00 00 00 00       	mov    $0x0,%eax
  40078a:	eb 7c                	jmp    400808 <check_input+0xd2>
  40078c:	8b 45 f8             	mov    -0x8(%rbp),%eax
  40078f:	83 c0 01             	add    $0x1,%eax
  400792:	89 45 fc             	mov    %eax,-0x4(%rbp)
  400795:	eb 3b                	jmp    4007d2 <check_input+0x9c>
  400797:	8b 45 f8             	mov    -0x8(%rbp),%eax
  40079a:	48 98                	cltq   
  40079c:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4007a3:	00 
  4007a4:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4007a8:	48 01 d0             	add    %rdx,%rax
  4007ab:	8b 10                	mov    (%rax),%edx
  4007ad:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4007b0:	48 98                	cltq   
  4007b2:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  4007b9:	00 
  4007ba:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4007be:	48 01 c8             	add    %rcx,%rax
  4007c1:	8b 00                	mov    (%rax),%eax
  4007c3:	39 c2                	cmp    %eax,%edx
  4007c5:	75 07                	jne    4007ce <check_input+0x98>
  4007c7:	b8 00 00 00 00       	mov    $0x0,%eax
  4007cc:	eb 3a                	jmp    400808 <check_input+0xd2>
  4007ce:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  4007d2:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4007d5:	3b 45 e0             	cmp    -0x20(%rbp),%eax
  4007d8:	7c bd                	jl     400797 <check_input+0x61>
  4007da:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
  4007de:	8b 45 f8             	mov    -0x8(%rbp),%eax
  4007e1:	3b 45 e0             	cmp    -0x20(%rbp),%eax
  4007e4:	0f 8c 66 ff ff ff    	jl     400750 <check_input+0x1a>
  4007ea:	83 7d e0 05          	cmpl   $0x5,-0x20(%rbp)
  4007ee:	75 13                	jne    400803 <check_input+0xcd>
  4007f0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%rbp)
  4007f4:	7e 06                	jle    4007fc <check_input+0xc6>
  4007f6:	83 7d e4 0f          	cmpl   $0xf,-0x1c(%rbp)
  4007fa:	7e 07                	jle    400803 <check_input+0xcd>
  4007fc:	b8 00 00 00 00       	mov    $0x0,%eax
  400801:	eb 05                	jmp    400808 <check_input+0xd2>
  400803:	b8 01 00 00 00       	mov    $0x1,%eax
  400808:	5d                   	pop    %rbp
  400809:	c3                   	ret    

000000000040080a <pick_numbers>:
  40080a:	55                   	push   %rbp
  40080b:	48 89 e5             	mov    %rsp,%rbp
  40080e:	53                   	push   %rbx
  40080f:	48 83 ec 18          	sub    $0x18,%rsp
  400813:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  400817:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  40081b:	bf 00 00 00 00       	mov    $0x0,%edi
  400820:	e8 db fd ff ff       	call   400600 <time@plt>
  400825:	89 c7                	mov    %eax,%edi
  400827:	e8 c4 fd ff ff       	call   4005f0 <srand@plt>
  40082c:	e8 ef fd ff ff       	call   400620 <rand@plt>
  400831:	89 c1                	mov    %eax,%ecx
  400833:	ba 89 88 88 88       	mov    $0x88888889,%edx
  400838:	89 c8                	mov    %ecx,%eax
  40083a:	f7 ea                	imul   %edx
  40083c:	8d 04 0a             	lea    (%rdx,%rcx,1),%eax
  40083f:	c1 f8 03             	sar    $0x3,%eax
  400842:	89 c2                	mov    %eax,%edx
  400844:	89 c8                	mov    %ecx,%eax
  400846:	c1 f8 1f             	sar    $0x1f,%eax
  400849:	29 c2                	sub    %eax,%edx
  40084b:	89 d0                	mov    %edx,%eax
  40084d:	89 c2                	mov    %eax,%edx
  40084f:	c1 e2 04             	shl    $0x4,%edx
  400852:	29 c2                	sub    %eax,%edx
  400854:	89 c8                	mov    %ecx,%eax
  400856:	29 d0                	sub    %edx,%eax
  400858:	8d 50 01             	lea    0x1(%rax),%edx
  40085b:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40085f:	89 10                	mov    %edx,(%rax)
  400861:	e8 ba fd ff ff       	call   400620 <rand@plt>
  400866:	89 c1                	mov    %eax,%ecx
  400868:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
  40086d:	89 c8                	mov    %ecx,%eax
  40086f:	f7 ea                	imul   %edx
  400871:	c1 fa 03             	sar    $0x3,%edx
  400874:	89 c8                	mov    %ecx,%eax
  400876:	c1 f8 1f             	sar    $0x1f,%eax
  400879:	29 c2                	sub    %eax,%edx
  40087b:	89 d0                	mov    %edx,%eax
  40087d:	6b c0 4b             	imul   $0x4b,%eax,%eax
  400880:	29 c1                	sub    %eax,%ecx
  400882:	89 c8                	mov    %ecx,%eax
  400884:	8d 50 01             	lea    0x1(%rax),%edx
  400887:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40088b:	89 10                	mov    %edx,(%rax)
  40088d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400891:	48 8d 58 04          	lea    0x4(%rax),%rbx
  400895:	e8 86 fd ff ff       	call   400620 <rand@plt>
  40089a:	89 c1                	mov    %eax,%ecx
  40089c:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
  4008a1:	89 c8                	mov    %ecx,%eax
  4008a3:	f7 ea                	imul   %edx
  4008a5:	c1 fa 03             	sar    $0x3,%edx
  4008a8:	89 c8                	mov    %ecx,%eax
  4008aa:	c1 f8 1f             	sar    $0x1f,%eax
  4008ad:	29 c2                	sub    %eax,%edx
  4008af:	89 d0                	mov    %edx,%eax
  4008b1:	6b c0 4b             	imul   $0x4b,%eax,%eax
  4008b4:	29 c1                	sub    %eax,%ecx
  4008b6:	89 c8                	mov    %ecx,%eax
  4008b8:	83 c0 01             	add    $0x1,%eax
  4008bb:	89 03                	mov    %eax,(%rbx)
  4008bd:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4008c1:	8b 08                	mov    (%rax),%ecx
  4008c3:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4008c7:	ba 02 00 00 00       	mov    $0x2,%edx
  4008cc:	89 ce                	mov    %ecx,%esi
  4008ce:	48 89 c7             	mov    %rax,%rdi
  4008d1:	e8 60 fe ff ff       	call   400736 <check_input>
  4008d6:	85 c0                	test   %eax,%eax
  4008d8:	74 b3                	je     40088d <pick_numbers+0x83>
  4008da:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4008de:	48 8d 58 08          	lea    0x8(%rax),%rbx
  4008e2:	e8 39 fd ff ff       	call   400620 <rand@plt>
  4008e7:	89 c1                	mov    %eax,%ecx
  4008e9:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
  4008ee:	89 c8                	mov    %ecx,%eax
  4008f0:	f7 ea                	imul   %edx
  4008f2:	c1 fa 03             	sar    $0x3,%edx
  4008f5:	89 c8                	mov    %ecx,%eax
  4008f7:	c1 f8 1f             	sar    $0x1f,%eax
  4008fa:	29 c2                	sub    %eax,%edx
  4008fc:	89 d0                	mov    %edx,%eax
  4008fe:	6b c0 4b             	imul   $0x4b,%eax,%eax
  400901:	29 c1                	sub    %eax,%ecx
  400903:	89 c8                	mov    %ecx,%eax
  400905:	83 c0 01             	add    $0x1,%eax
  400908:	89 03                	mov    %eax,(%rbx)
  40090a:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40090e:	8b 08                	mov    (%rax),%ecx
  400910:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400914:	ba 03 00 00 00       	mov    $0x3,%edx
  400919:	89 ce                	mov    %ecx,%esi
  40091b:	48 89 c7             	mov    %rax,%rdi
  40091e:	e8 13 fe ff ff       	call   400736 <check_input>
  400923:	85 c0                	test   %eax,%eax
  400925:	74 b3                	je     4008da <pick_numbers+0xd0>
  400927:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  40092b:	48 8d 58 0c          	lea    0xc(%rax),%rbx
  40092f:	e8 ec fc ff ff       	call   400620 <rand@plt>
  400934:	89 c1                	mov    %eax,%ecx
  400936:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
  40093b:	89 c8                	mov    %ecx,%eax
  40093d:	f7 ea                	imul   %edx
  40093f:	c1 fa 03             	sar    $0x3,%edx
  400942:	89 c8                	mov    %ecx,%eax
  400944:	c1 f8 1f             	sar    $0x1f,%eax
  400947:	29 c2                	sub    %eax,%edx
  400949:	89 d0                	mov    %edx,%eax
  40094b:	6b c0 4b             	imul   $0x4b,%eax,%eax
  40094e:	29 c1                	sub    %eax,%ecx
  400950:	89 c8                	mov    %ecx,%eax
  400952:	83 c0 01             	add    $0x1,%eax
  400955:	89 03                	mov    %eax,(%rbx)
  400957:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40095b:	8b 08                	mov    (%rax),%ecx
  40095d:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400961:	ba 04 00 00 00       	mov    $0x4,%edx
  400966:	89 ce                	mov    %ecx,%esi
  400968:	48 89 c7             	mov    %rax,%rdi
  40096b:	e8 c6 fd ff ff       	call   400736 <check_input>
  400970:	85 c0                	test   %eax,%eax
  400972:	74 b3                	je     400927 <pick_numbers+0x11d>
  400974:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400978:	48 8d 58 10          	lea    0x10(%rax),%rbx
  40097c:	e8 9f fc ff ff       	call   400620 <rand@plt>
  400981:	89 c1                	mov    %eax,%ecx
  400983:	ba b5 81 4e 1b       	mov    $0x1b4e81b5,%edx
  400988:	89 c8                	mov    %ecx,%eax
  40098a:	f7 ea                	imul   %edx
  40098c:	c1 fa 03             	sar    $0x3,%edx
  40098f:	89 c8                	mov    %ecx,%eax
  400991:	c1 f8 1f             	sar    $0x1f,%eax
  400994:	29 c2                	sub    %eax,%edx
  400996:	89 d0                	mov    %edx,%eax
  400998:	6b c0 4b             	imul   $0x4b,%eax,%eax
  40099b:	29 c1                	sub    %eax,%ecx
  40099d:	89 c8                	mov    %ecx,%eax
  40099f:	83 c0 01             	add    $0x1,%eax
  4009a2:	89 03                	mov    %eax,(%rbx)
  4009a4:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4009a8:	8b 08                	mov    (%rax),%ecx
  4009aa:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4009ae:	ba 05 00 00 00       	mov    $0x5,%edx
  4009b3:	89 ce                	mov    %ecx,%esi
  4009b5:	48 89 c7             	mov    %rax,%rdi
  4009b8:	e8 79 fd ff ff       	call   400736 <check_input>
  4009bd:	85 c0                	test   %eax,%eax
  4009bf:	74 b3                	je     400974 <pick_numbers+0x16a>
  4009c1:	90                   	nop
  4009c2:	48 83 c4 18          	add    $0x18,%rsp
  4009c6:	5b                   	pop    %rbx
  4009c7:	5d                   	pop    %rbp
  4009c8:	c3                   	ret    

00000000004009c9 <print_numbers>:
  4009c9:	55                   	push   %rbp
  4009ca:	48 89 e5             	mov    %rsp,%rbp
  4009cd:	48 83 ec 20          	sub    $0x20,%rsp
  4009d1:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  4009d5:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  4009d8:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  4009df:	eb 2b                	jmp    400a0c <print_numbers+0x43>
  4009e1:	8b 45 fc             	mov    -0x4(%rbp),%eax
  4009e4:	48 98                	cltq   
  4009e6:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  4009ed:	00 
  4009ee:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  4009f2:	48 01 d0             	add    %rdx,%rax
  4009f5:	8b 00                	mov    (%rax),%eax
  4009f7:	89 c6                	mov    %eax,%esi
  4009f9:	bf 88 0d 40 00       	mov    $0x400d88,%edi
  4009fe:	b8 00 00 00 00       	mov    $0x0,%eax
  400a03:	e8 b8 fb ff ff       	call   4005c0 <printf@plt>
  400a08:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  400a0c:	83 7d fc 04          	cmpl   $0x4,-0x4(%rbp)
  400a10:	7e cf                	jle    4009e1 <print_numbers+0x18>
  400a12:	8b 45 e4             	mov    -0x1c(%rbp),%eax
  400a15:	89 c6                	mov    %eax,%esi
  400a17:	bf 8c 0d 40 00       	mov    $0x400d8c,%edi
  400a1c:	b8 00 00 00 00       	mov    $0x0,%eax
  400a21:	e8 9a fb ff ff       	call   4005c0 <printf@plt>
  400a26:	90                   	nop
  400a27:	c9                   	leave  
  400a28:	c3                   	ret    

0000000000400a29 <check_result>:
  400a29:	55                   	push   %rbp
  400a2a:	48 89 e5             	mov    %rsp,%rbp
  400a2d:	48 83 ec 30          	sub    $0x30,%rsp
  400a31:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  400a35:	89 75 e4             	mov    %esi,-0x1c(%rbp)
  400a38:	48 89 55 d8          	mov    %rdx,-0x28(%rbp)
  400a3c:	89 4d e0             	mov    %ecx,-0x20(%rbp)
  400a3f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%rbp)
  400a46:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
  400a4d:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%rbp)
  400a54:	eb 4d                	jmp    400aa3 <check_result+0x7a>
  400a56:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  400a5d:	eb 3a                	jmp    400a99 <check_result+0x70>
  400a5f:	8b 45 f8             	mov    -0x8(%rbp),%eax
  400a62:	48 98                	cltq   
  400a64:	48 8d 14 85 00 00 00 	lea    0x0(,%rax,4),%rdx
  400a6b:	00 
  400a6c:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400a70:	48 01 d0             	add    %rdx,%rax
  400a73:	8b 10                	mov    (%rax),%edx
  400a75:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400a78:	48 98                	cltq   
  400a7a:	48 8d 0c 85 00 00 00 	lea    0x0(,%rax,4),%rcx
  400a81:	00 
  400a82:	48 8b 45 d8          	mov    -0x28(%rbp),%rax
  400a86:	48 01 c8             	add    %rcx,%rax
  400a89:	8b 00                	mov    (%rax),%eax
  400a8b:	39 c2                	cmp    %eax,%edx
  400a8d:	75 06                	jne    400a95 <check_result+0x6c>
  400a8f:	83 45 f0 01          	addl   $0x1,-0x10(%rbp)
  400a93:	eb 0a                	jmp    400a9f <check_result+0x76>
  400a95:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  400a99:	83 7d fc 04          	cmpl   $0x4,-0x4(%rbp)
  400a9d:	7e c0                	jle    400a5f <check_result+0x36>
  400a9f:	83 45 f8 01          	addl   $0x1,-0x8(%rbp)
  400aa3:	83 7d f8 04          	cmpl   $0x4,-0x8(%rbp)
  400aa7:	7e ad                	jle    400a56 <check_result+0x2d>
  400aa9:	8b 45 e4             	mov    -0x1c(%rbp),%eax
  400aac:	3b 45 e0             	cmp    -0x20(%rbp),%eax
  400aaf:	75 07                	jne    400ab8 <check_result+0x8f>
  400ab1:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%rbp)
  400ab8:	83 7d f0 00          	cmpl   $0x0,-0x10(%rbp)
  400abc:	75 15                	jne    400ad3 <check_result+0xaa>
  400abe:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400ac2:	75 0f                	jne    400ad3 <check_result+0xaa>
  400ac4:	bf 98 0d 40 00       	mov    $0x400d98,%edi
  400ac9:	e8 d2 fa ff ff       	call   4005a0 <puts@plt>
  400ace:	e9 d3 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400ad3:	83 7d f0 01          	cmpl   $0x1,-0x10(%rbp)
  400ad7:	75 15                	jne    400aee <check_result+0xc5>
  400ad9:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400add:	75 0f                	jne    400aee <check_result+0xc5>
  400adf:	bf c0 0d 40 00       	mov    $0x400dc0,%edi
  400ae4:	e8 b7 fa ff ff       	call   4005a0 <puts@plt>
  400ae9:	e9 b8 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400aee:	83 7d f0 02          	cmpl   $0x2,-0x10(%rbp)
  400af2:	75 15                	jne    400b09 <check_result+0xe0>
  400af4:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400af8:	75 0f                	jne    400b09 <check_result+0xe0>
  400afa:	bf e8 0d 40 00       	mov    $0x400de8,%edi
  400aff:	e8 9c fa ff ff       	call   4005a0 <puts@plt>
  400b04:	e9 9d 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400b09:	83 7d f0 03          	cmpl   $0x3,-0x10(%rbp)
  400b0d:	75 15                	jne    400b24 <check_result+0xfb>
  400b0f:	83 7d f4 00          	cmpl   $0x0,-0xc(%rbp)
  400b13:	75 0f                	jne    400b24 <check_result+0xfb>
  400b15:	bf e8 0d 40 00       	mov    $0x400de8,%edi
  400b1a:	e8 81 fa ff ff       	call   4005a0 <puts@plt>
  400b1f:	e9 82 00 00 00       	jmp    400ba6 <check_result+0x17d>
  400b24:	83 7d f0 03          	cmpl   $0x3,-0x10(%rbp)
  400b28:	75 12                	jne    400b3c <check_result+0x113>
  400b2a:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400b2e:	75 0c                	jne    400b3c <check_result+0x113>
  400b30:	bf 10 0e 40 00       	mov    $0x400e10,%edi
  400b35:	e8 66 fa ff ff       	call   4005a0 <puts@plt>
  400b3a:	eb 6a                	jmp    400ba6 <check_result+0x17d>
  400b3c:	83 7d f0 04          	cmpl   $0x4,-0x10(%rbp)
  400b40:	75 12                	jne    400b54 <check_result+0x12b>
  400b42:	83 7d f4 00          	cmpl   $0x0,-0xc(%rbp)
  400b46:	75 0c                	jne    400b54 <check_result+0x12b>
  400b48:	bf 38 0e 40 00       	mov    $0x400e38,%edi
  400b4d:	e8 4e fa ff ff       	call   4005a0 <puts@plt>
  400b52:	eb 52                	jmp    400ba6 <check_result+0x17d>
  400b54:	83 7d f0 04          	cmpl   $0x4,-0x10(%rbp)
  400b58:	75 12                	jne    400b6c <check_result+0x143>
  400b5a:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400b5e:	75 0c                	jne    400b6c <check_result+0x143>
  400b60:	bf 60 0e 40 00       	mov    $0x400e60,%edi
  400b65:	e8 36 fa ff ff       	call   4005a0 <puts@plt>
  400b6a:	eb 3a                	jmp    400ba6 <check_result+0x17d>
  400b6c:	83 7d f0 05          	cmpl   $0x5,-0x10(%rbp)
  400b70:	75 12                	jne    400b84 <check_result+0x15b>
  400b72:	83 7d f4 00          	cmpl   $0x0,-0xc(%rbp)
  400b76:	75 0c                	jne    400b84 <check_result+0x15b>
  400b78:	bf 88 0e 40 00       	mov    $0x400e88,%edi
  400b7d:	e8 1e fa ff ff       	call   4005a0 <puts@plt>
  400b82:	eb 22                	jmp    400ba6 <check_result+0x17d>
  400b84:	83 7d f0 05          	cmpl   $0x5,-0x10(%rbp)
  400b88:	75 12                	jne    400b9c <check_result+0x173>
  400b8a:	83 7d f4 01          	cmpl   $0x1,-0xc(%rbp)
  400b8e:	75 0c                	jne    400b9c <check_result+0x173>
  400b90:	bf b8 0e 40 00       	mov    $0x400eb8,%edi
  400b95:	e8 06 fa ff ff       	call   4005a0 <puts@plt>
  400b9a:	eb 0a                	jmp    400ba6 <check_result+0x17d>
  400b9c:	bf de 0e 40 00       	mov    $0x400ede,%edi
  400ba1:	e8 fa f9 ff ff       	call   4005a0 <puts@plt>
  400ba6:	90                   	nop
  400ba7:	c9                   	leave  
  400ba8:	c3                   	ret    

0000000000400ba9 <main>:
  400ba9:	55                   	push   %rbp
  400baa:	48 89 e5             	mov    %rsp,%rbp
  400bad:	48 83 ec 60          	sub    $0x60,%rsp
  400bb1:	89 7d ac             	mov    %edi,-0x54(%rbp)
  400bb4:	48 89 75 a0          	mov    %rsi,-0x60(%rbp)
  400bb8:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400bbf:	00 00 
  400bc1:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400bc5:	31 c0                	xor    %eax,%eax
  400bc7:	83 7d ac 07          	cmpl   $0x7,-0x54(%rbp)
  400bcb:	74 1e                	je     400beb <main+0x42>
  400bcd:	be f0 0e 40 00       	mov    $0x400ef0,%esi
  400bd2:	bf 02 00 00 00       	mov    $0x2,%edi
  400bd7:	b8 00 00 00 00       	mov    $0x0,%eax
  400bdc:	e8 ef f9 ff ff       	call   4005d0 <dprintf@plt>
  400be1:	b8 01 00 00 00       	mov    $0x1,%eax
  400be6:	e9 f8 00 00 00       	jmp    400ce3 <main+0x13a>
  400beb:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400bef:	48 83 c0 08          	add    $0x8,%rax
  400bf3:	48 8b 00             	mov    (%rax),%rax
  400bf6:	48 89 c7             	mov    %rax,%rdi
  400bf9:	e8 12 fa ff ff       	call   400610 <atoi@plt>
  400bfe:	89 45 c0             	mov    %eax,-0x40(%rbp)
  400c01:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400c05:	48 83 c0 10          	add    $0x10,%rax
  400c09:	48 8b 00             	mov    (%rax),%rax
  400c0c:	48 89 c7             	mov    %rax,%rdi
  400c0f:	e8 fc f9 ff ff       	call   400610 <atoi@plt>
  400c14:	89 45 c4             	mov    %eax,-0x3c(%rbp)
  400c17:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400c1b:	48 83 c0 18          	add    $0x18,%rax
  400c1f:	48 8b 00             	mov    (%rax),%rax
  400c22:	48 89 c7             	mov    %rax,%rdi
  400c25:	e8 e6 f9 ff ff       	call   400610 <atoi@plt>
  400c2a:	89 45 c8             	mov    %eax,-0x38(%rbp)
  400c2d:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400c31:	48 83 c0 20          	add    $0x20,%rax
  400c35:	48 8b 00             	mov    (%rax),%rax
  400c38:	48 89 c7             	mov    %rax,%rdi
  400c3b:	e8 d0 f9 ff ff       	call   400610 <atoi@plt>
  400c40:	89 45 cc             	mov    %eax,-0x34(%rbp)
  400c43:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400c47:	48 83 c0 28          	add    $0x28,%rax
  400c4b:	48 8b 00             	mov    (%rax),%rax
  400c4e:	48 89 c7             	mov    %rax,%rdi
  400c51:	e8 ba f9 ff ff       	call   400610 <atoi@plt>
  400c56:	89 45 d0             	mov    %eax,-0x30(%rbp)
  400c59:	48 8b 45 a0          	mov    -0x60(%rbp),%rax
  400c5d:	48 83 c0 30          	add    $0x30,%rax
  400c61:	48 8b 00             	mov    (%rax),%rax
  400c64:	48 89 c7             	mov    %rax,%rdi
  400c67:	e8 a4 f9 ff ff       	call   400610 <atoi@plt>
  400c6c:	89 45 bc             	mov    %eax,-0x44(%rbp)
  400c6f:	8b 4d bc             	mov    -0x44(%rbp),%ecx
  400c72:	48 8d 45 c0          	lea    -0x40(%rbp),%rax
  400c76:	ba 05 00 00 00       	mov    $0x5,%edx
  400c7b:	89 ce                	mov    %ecx,%esi
  400c7d:	48 89 c7             	mov    %rax,%rdi
  400c80:	e8 b1 fa ff ff       	call   400736 <check_input>
  400c85:	85 c0                	test   %eax,%eax
  400c87:	75 1b                	jne    400ca4 <main+0xfb>
  400c89:	be f0 0e 40 00       	mov    $0x400ef0,%esi
  400c8e:	bf 02 00 00 00       	mov    $0x2,%edi
  400c93:	b8 00 00 00 00       	mov    $0x0,%eax
  400c98:	e8 33 f9 ff ff       	call   4005d0 <dprintf@plt>
  400c9d:	b8 01 00 00 00       	mov    $0x1,%eax
  400ca2:	eb 3f                	jmp    400ce3 <main+0x13a>
  400ca4:	48 8d 55 b8          	lea    -0x48(%rbp),%rdx
  400ca8:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400cac:	48 89 d6             	mov    %rdx,%rsi
  400caf:	48 89 c7             	mov    %rax,%rdi
  400cb2:	e8 53 fb ff ff       	call   40080a <pick_numbers>
  400cb7:	8b 55 b8             	mov    -0x48(%rbp),%edx
  400cba:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400cbe:	89 d6                	mov    %edx,%esi
  400cc0:	48 89 c7             	mov    %rax,%rdi
  400cc3:	e8 01 fd ff ff       	call   4009c9 <print_numbers>
  400cc8:	8b 75 b8             	mov    -0x48(%rbp),%esi
  400ccb:	8b 4d bc             	mov    -0x44(%rbp),%ecx
  400cce:	48 8d 55 c0          	lea    -0x40(%rbp),%rdx
  400cd2:	48 8d 45 e0          	lea    -0x20(%rbp),%rax
  400cd6:	48 89 c7             	mov    %rax,%rdi
  400cd9:	e8 4b fd ff ff       	call   400a29 <check_result>
  400cde:	b8 00 00 00 00       	mov    $0x0,%eax
  400ce3:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
  400ce7:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  400cee:	00 00 
  400cf0:	74 05                	je     400cf7 <main+0x14e>
  400cf2:	e8 b9 f8 ff ff       	call   4005b0 <__stack_chk_fail@plt>
  400cf7:	c9                   	leave  
  400cf8:	c3                   	ret    
  400cf9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400d00 <__libc_csu_init>:
  400d00:	41 57                	push   %r15
  400d02:	41 56                	push   %r14
  400d04:	41 89 ff             	mov    %edi,%r15d
  400d07:	41 55                	push   %r13
  400d09:	41 54                	push   %r12
  400d0b:	4c 8d 25 fe 10 20 00 	lea    0x2010fe(%rip),%r12        # 601e10 <__frame_dummy_init_array_entry>
  400d12:	55                   	push   %rbp
  400d13:	48 8d 2d fe 10 20 00 	lea    0x2010fe(%rip),%rbp        # 601e18 <__do_global_dtors_aux_fini_array_entry>
  400d1a:	53                   	push   %rbx
  400d1b:	49 89 f6             	mov    %rsi,%r14
  400d1e:	49 89 d5             	mov    %rdx,%r13
  400d21:	4c 29 e5             	sub    %r12,%rbp
  400d24:	48 83 ec 08          	sub    $0x8,%rsp
  400d28:	48 c1 fd 03          	sar    $0x3,%rbp
  400d2c:	e8 37 f8 ff ff       	call   400568 <_init>
  400d31:	48 85 ed             	test   %rbp,%rbp
  400d34:	74 20                	je     400d56 <__libc_csu_init+0x56>
  400d36:	31 db                	xor    %ebx,%ebx
  400d38:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  400d3f:	00 
  400d40:	4c 89 ea             	mov    %r13,%rdx
  400d43:	4c 89 f6             	mov    %r14,%rsi
  400d46:	44 89 ff             	mov    %r15d,%edi
  400d49:	41 ff 14 dc          	call   *(%r12,%rbx,8)
  400d4d:	48 83 c3 01          	add    $0x1,%rbx
  400d51:	48 39 eb             	cmp    %rbp,%rbx
  400d54:	75 ea                	jne    400d40 <__libc_csu_init+0x40>
  400d56:	48 83 c4 08          	add    $0x8,%rsp
  400d5a:	5b                   	pop    %rbx
  400d5b:	5d                   	pop    %rbp
  400d5c:	41 5c                	pop    %r12
  400d5e:	41 5d                	pop    %r13
  400d60:	41 5e                	pop    %r14
  400d62:	41 5f                	pop    %r15
  400d64:	c3                   	ret    
  400d65:	90                   	nop
  400d66:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
  400d6d:	00 00 00 

0000000000400d70 <__libc_csu_fini>:
  400d70:	f3 c3                	repz ret 

Disassembly of section .fini:

0000000000400d74 <_fini>:
  400d74:	48 83 ec 08          	sub    $0x8,%rsp
  400d78:	48 83 c4 08          	add    $0x8,%rsp
  400d7c:	c3                   	ret    
