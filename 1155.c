#include<stdio.h>
int main(){
float sum=0,i;
for(i=1;i<=100;i++){
    sum=sum+(1/i);
}
printf("%0.2f",sum);
return 0;
}
