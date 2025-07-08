__asm__(".code16\n");
__asm__("jmpl $0x0000, $main\n");

void printString(const char* pStr) 
{
  while(*pStr) 
  {
    __asm__ __volatile__ 
    (
    "int $0x10" : : "a"(*pStr | 0x0e00), "b"(0x0007)
    );
    ++pStr;
  }
}

void main() {
    printString("Hello, World");
} 