#include<stdio.h>
int main(){

unsigned arr[1000000],count[1000000],n;
int i,j;
scanf("%u",&n);
for(i=0;i<n;i++){
    scanf("%u",&arr[i]);


}
for(i=0;i<n;i++){
    count[i]=0;
}
j=0;
unsigned p,k=0;
while(j>=0 && j<n){
        p=arr[j];
      // printf("j %d p %d k %d in\n",j,p,k);
        if(arr[j]>0){
                arr[j]--;
                count[j]++;
        }
        if(p%2==0 && p!=0) j--;
        else if(p%2!=0 && p!=0) j++;
        if(arr[j]==0) break;

k++;

}

unsigned long long sum=0,c=0;
for(i=0;i<n;i++){
    sum=sum+arr[i];
    //printf("arr[%d] %d ",i,count[i]);
    if(count[i]!=0) c++;
}
printf("%llu %llu\n",c,sum);







return 0;
}
