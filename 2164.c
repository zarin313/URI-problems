#include<stdio.h>
#include<math.h>
int main(){
int n;
double a,b,c,f;
scanf("%d",&n);
a=(1+sqrt(5))/2;
b=(1-sqrt(5))/2;
c=pow(a,n)-pow(b,n);
f=c/sqrt(5);
printf("%0.1lf",f);
return 0;
}
