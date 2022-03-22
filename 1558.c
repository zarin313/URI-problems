#include<stdio.h>
int main(){
int n,i,j;
while(scanf("%d",&n)!=EOF){
    int arr[1000],flag=0;
    i=0,j=0;
    while(j<=n){
        arr[i]=j;
        //printf("%d \n",arr[i]);
        i++;
        j=i*i;

    }
    //printf("i %d\n",i);

      for(j=0;j<i;j++){
        int k=0,sum=0;

        while(sum<n){
        sum=arr[j]+(k*k);
        //printf("arr %d k %d sum %d\n",arr[j],k*k,sum);
        k++;
        if(sum>n){
            flag=0;
        }
        //printf("flag %d j %d\n",flag,j);
      }

        if(sum==n){
            flag=1;
            break;
        }
      }

if(flag==1) printf("YES\n");
if(flag==0) printf("NO\n");


}


}
