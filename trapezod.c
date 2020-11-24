#include <stdio.h>

double a, b, c, d;
double x, y, i;
double A, B = 0;

//式を決定


int main(void){
  printf("式は y = x*x+2*x-1 です。\n");
  //範囲を決定
  printf("範囲　x0 ~xn　を決定してください。\n");
  printf("x0 = ");
  scanf("%lf", &a);
  printf("xn = ");
  scanf("%lf", &b);
 //Δxを決定
  printf("Δx　を決定してください。\n");
  printf("Δx = ");
  scanf("%lf", &c);
  //計算回数を決定
  d = (b - a + 1)/c;
  //計算
  for(x = a;x <= b;x = x + c){
    y = x*x+2*x-1;
    B = B + y;
    printf("%lf\n", B);
  }
  B = 2*B;
  x = a;
  y = x*x+2*x-1;
  B = B - y;
  x = b;
  y = x*x+2*x-1;
  B = (B - y)/2;
  printf("答えは%lf。\n", B);
  return 0;
}
