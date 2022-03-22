#include<stdio.h>
int main(){
int arr[10000],i,j,n,m,p;

while(1){
    for(i=0;i<10000;i++){
    arr[i]=0;
    }
    scanf("%d %d",&n,&m);
    if(n==0 && m==0) break;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",& p);
            arr[p]++;


        }

    }
   int max1=0,max2=0;
   for(i=0;i<10000;i++) {
       // printf("aaaa");
        if (arr[i]>max1) {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]!=max1 && arr[i]>max2)
            max2=arr[i];
    }
    for(i=0;i<10000;i++){

        if(arr[i]==max2) printf("%d ",i);
    }
    printf("\n");
}

}
