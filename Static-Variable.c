#include<stdio.h>
void function ();
int a =1, b =10;
int main(){
  function();
  function();
  function();
  return 0;
}
void function(){
  static int b;
  printf("%d \n", a);
  printf("%d \n", b);
  a++;
  b++;
}