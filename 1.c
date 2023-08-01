#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if( (n & 1) == 0 ){ //n & 1 == 0 の場合1 == 0が優先されてしまう為、(n & 1) == 0とする
    printf("%d は偶数です\n", n);
  }
  return 0;
}
