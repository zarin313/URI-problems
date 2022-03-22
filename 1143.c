#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            int a=pow(i,j);

            if(j==3) printf("%d",a);
            else printf("%d ",a);
                    }
        printf("\n");
    }
return 0;
}
