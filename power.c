#include "myMath.h"
#define e 2.7182818284


double Exp(int x){
  return Pow(e, x);
}

double Pow(double x, int y){
 double ans=1;
 if(y==0){
 return 1;
}
 else if(y>0){
     for(int i=0;i<y;i++){
     ans=ans*x;
     }
 }
 else{
  int z=0-y;
  ans=Pow(x,z);
  ans=div(1,ans);
 }
 return ans;
}
