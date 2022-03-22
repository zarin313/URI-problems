#include<stdio.h>
int main(){
unsigned long long a,r;
scanf("%llu",&a);
while(a!=0){
    r=a%10;
    a=a/10;
    printf("%llu",r);
}
printf("\n");
return 0;
}
