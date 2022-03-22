#include<stdio.h>
#include<math.h>
int main(){
    double s=0;
    int i=1,j=0;
    while(i<=7){
       double p=pow(2,j),q=(double)i/p;
       s=s+q;
       i=i+2;
       j++;
       //printf("%lf ",q);
    }
    printf("\n%lf",s);
return 0;
}
