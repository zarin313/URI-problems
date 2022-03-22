#include<stdio.h>
int main(){
int h,m,d;
while(scanf("%d:%d",&h, &m)!=EOF){
    h=h+1;
    if(h<8){
        d=0;
    }
    else if(h>8){
        d=((h-8)*60)+(m-0);
    }
    else d=m-0;

    printf("Atraso maximo: %d\n",d);
}


return 0;
}
