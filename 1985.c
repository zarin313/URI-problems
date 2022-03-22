#include<stdio.h>
int main(){
int n,a,b;
float sales=0;
scanf("%d",&n);
int i;
for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    if(a==1001) sales=sales+(b*1.50);
    else if(a==1002) sales=sales+(b*2.50);
    else if(a==1003) sales=sales+(b*3.50);
    else if(a==1004) sales=sales+(b*4.50);
    else if(a==1005) sales=sales+(b*5.50);
}
printf("%0.2f\n",sales);



return 0;
}
