#include<stdio.h>
int main(){
double d,v,h,a,r;
while(scanf("%lf %lf",&v,&d)!=EOF){
    r=d/2;
    h=(v/(3.14*r*r));
    a=3.14*r*r;
    printf("ALTURA = %0.2lf\nAREA = %0.2lf\n",h,a);
}

return 0;
}
