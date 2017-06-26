#include <stdio.h>

int hoge(int);
int* hoge2(int);

int main(){

  char buf[3];
  buf[2] = '\0';
  buf[1] = 'f';
//  buf[0] = 'a';
//  printf("%s\n",buf);
  puts(buf);

  printf("HEllo\n");
  int a = 5,b = 0;
  int (*ptr)(int) = 0; 
  ptr = *hoge;

  int *ptr2 = 0;
  ptr2 = hoge2(a);
 
  printf("%d\n",hoge(a));
  printf("%d\n",(*ptr)(30*a));
  printf("%d\n",ptr2);
  return 0;
}

int hoge(int a)
{
  return a*10;
}

int* hoge2(int a)
{
  return &a;
}
