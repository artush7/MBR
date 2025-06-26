.code16                    
.text                     
     .globl _start;
_start:                  

     movb $'X' , %al      
     movb $0x0e, %ah       
     int  $0x10           

     . = _start + 510      
     .byte 0x55            
     .byte 0xaa 