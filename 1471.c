#include<stdio.h>
int main(){
int r,n,i,j;
while(scanf("%d %d ",&n,&r)!=EOF){
    int arr[10000],count[10000];
    for(i=0;i<=n;i++) count[i]=0;
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
        count[arr[i]]=1;
    }
    if(n==r) printf("*\n");
    else{
        int t=0;
        for(j=1;j<=n;j++){
            if(count[j]==0){
                t++;
                if(t==n-r) printf("%d\n",j);
                else printf("%d ",j);
        }


    }


}

}
}
