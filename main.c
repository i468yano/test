#include <stdio.h>
#include<stdlib.h>
#include<math.h>

//浮動小数点数xの平方根を返す為、戻り値yも浮動小数点数にする
double myRoot(double x) // x の平方根を返す関数。x >= 0 ではないとき exit(1) とする。 
{
  double y;
  if( !(x >=0) ){ //x >=0でない場合である為 !(x >=0)とする
    exit(1);
  }
  y = sqrt(x);
  return y;
}

int main(void)
{
  int i=0;//iを初期化する
  double *x = (double *)malloc(sizeof(double) * 100);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //以下は確認用(このままで良い)
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);

  free(x);
  return 0;
}
