#include<stdio.h>
int main(){
int arr[10000],n,i,r,j;
i=0;
scanf("%d",&n);
while(n!=0){
    r=n%16;
    arr[i]=r;
    n=n/16;
    i++;
}
for(j=i-1;j>=0;j--){
    if(arr[j]==10) printf("A");
    else if(arr[j]==11) printf("B");
    else if(arr[j]==12) printf("C");
    else if(arr[j]==13) printf("D");
    else if(arr[j]==14) printf("E");
    else if(arr[j]==15) printf("F");
    else printf("%d",arr[j]);
    if(j==0) printf("\n");
}














return 0;
}
