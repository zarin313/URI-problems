#include<stdio.h>
int main(){
int i,j,n,m;
while(1){
    scanf("%d %d",&n,&m);
    int arr[1000],count[10000];
    if(n==0 && m==0) break;
    else{
    for(i=0;i<=n;i++) count[i]=0;
    for(i=0;i<m;i++){
        scanf("%d",&arr[i]);
        printf("aaa\n");
        count[arr[i]]++;

    }
    int dup=0;
    for(i=0;i<=n;i++){
        if(count[i]>1) dup++;
    }
    printf("%d\n",dup);

    }

}


}
