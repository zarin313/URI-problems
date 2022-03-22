#include<stdio.h>
int main(){
    int i=0,j,n,k;
    scanf("%d",&n);
    j=1;
    while(i<n){
        if(j%4==0){
            printf("PUM\n");
            i++;
        }
        else{
            printf("%d ",j);
        }
        j++;
    }

return 0;
}
