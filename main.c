#include<stdio.h>
#include "myMath.h"

int main() {
  double x;
  double ans;

  printf("Please insert a real number:");
  scanf("%lf", &x);
  ans=Exp((int)x);
  ans=add(ans, Pow(x,3));
  ans=sub(ans,2);
  printf("The value of f(x)=e^x + x^3 - 2 at the point %lf is: %0.4lf\n",x,ans);

  printf("Please insert a real number:");
  scanf("%lf", &x);
  ans=mul(3,x);
  ans=add(ans,mul(2,Pow(x,2)));
  printf("The value of f(x)=3x + 2x^2 at the point %lf is: %0.4lf\n",x,ans);

  printf("Please insert a real number:");
  scanf("%lf", &x);
  ans=mul(4,Pow(x,3));
  ans=div(ans, 5);
  ans=sub(ans, mul(2,x));
  printf("The value of f(x)=(4x^3)/5-2x at the point %lf is: %0.4lf\n",x,ans);
    return 0;
}
