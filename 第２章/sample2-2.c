#include <stdio.h>

int main(void)
{
  char moji = 'H';
  int cnt = 5;
  long goukei;
  float x,y;
  double z;
  
  x = 2.6;
  y = 3.8;
  z = x + y;
  
  goukei = 100 * cnt;
  
  printf("moji = %c\n", moji);
  printf("z = %f\n", z);
  printf("goukei = %d\n", goukei);
  
  return 0;
}
