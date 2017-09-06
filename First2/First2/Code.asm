INCLUDE Irvine32.inc
.data
sub1 WORD 9
sub2 WORD 9
sub3 WORD 9
sub4 WORD 9
sub5 WORD 9
credits WORD 15
ss

.code
main PROC
mov ax,sub1
add ax,sub2
add ax,sub3
add ax,sub4
add ax,sub5
xor ebx,ebx
mov bx,credits


call DumpRegs
exit
main ENDP
END main