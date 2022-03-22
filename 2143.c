#include<stdio.h>
int main(){
int t,n,i,j;
while(1){
    scanf("%d",&t);
    if(t==0) break;
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n%2==0) printf("%d\n",n*2-2);
        else printf("%d\n",n*2-1);

    }

}


return 0;
}
