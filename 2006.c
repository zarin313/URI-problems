#include<stdio.h>
int main(){
int n,arr[5],count[6],i;
scanf("%d",&n);
for(i=1;i<=5;i++){
    count[i]=0;
}
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    count[arr[i]]++;
}
printf("%d\n",count[n]);



return 0;
}
