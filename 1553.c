#include<stdio.h>
int main(){
int i,j,n,k;
while(1){
    scanf("%d %d",&n,&k);
    int arr[1000],count[1000],faq=0;
    if(n==0 && k==0) break;
    for(i=1;i<=n;i++) count[i]=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(i=1;i<=n;i++){
        if(count[i]>=k){
            faq++;
        }
    }
    printf("%d\n",faq);
}

}
