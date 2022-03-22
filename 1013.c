#include<stdio.h>
int main(){
    int a,b,c,g;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
            g=a;
    }
    else if (b>=a && b>=c){
        g=b;
    }
    else g=c;
    printf("%d eh o maior\n",g);
return 0;
}
