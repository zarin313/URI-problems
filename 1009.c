#include<stdio.h>
int main(){
double a,b,sal;
scanf("%*s %lf %lf", &a,&b);
sal=((15*b)/100)+a;
printf("TOTAL = R$ %0.2lf\n",sal);
return 0;
}
