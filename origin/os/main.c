#include "defines.h"
#include "serial.h"
#include "lib.h"

int syobo_n(void);

int main(void){

  static  char  buf[32];
  void (*f)(void);

  puts("Hello World!!\n");

  while(1){
    puts("> ");
    gets(buf);

    if(!strncmp(buf,"echo",4))
    {
      puts(buf + 4);
      puts("\n");
    }else if(!strncmp(buf,"exit",4))
    {
      f = (void(*)(void))(0x00000110);
      f();
      break;
    }else if(!strncmp(buf,"syobo",5))
    {
      syobo_n();
    }else{
      puts("unknown.\n");
    }
  }

  return 0;
}

int syobo_n(void)
{
  char syobo[9] = "(´・ω・｀)\n";
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  puts(syobo);
  
  return 0;
}
