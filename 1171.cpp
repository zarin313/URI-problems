#include<stdio.h>
int main(){
int n,arr[2000],count[2000],i,j,max=0,min=2001;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]>=max) max=arr[i];
    if(arr[i]<=min) min=arr[i];
    count[arr[i]]=0;
}

for(i=0;i<n;i++){
        count[arr[i]]++;

}

for(i=min;i<=max;i++){
    if(count[i]>0) printf("%d aparece %d vez(es)\n",i,count[i]);
}

}
