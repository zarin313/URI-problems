#include<stdio.h>
int main(){

int n,i,x,r;
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&x);
    if(x<2015){
        r=2015-x;
        printf("%d D.C.\n",r);
    }
    else{
     r=(x-2015+1);
     printf("%d A.C.\n",r);
    }



}

return 0;
}
