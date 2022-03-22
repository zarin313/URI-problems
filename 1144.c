#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<2;j++){
                int a=pow(i,2),b=pow(i,3);
            if(j==0) printf("%d %d %d\n",i,a,b);
            else printf("%d %d %d\n",i,a+1,b+1);
        }
    }
return 0;
}
