#include<stdio.h>
int main(){
int h,m,o,n;
scanf("%d",&n);
while(n>0){
    scanf("%d %d %d",&h,&m,&o);
    if(h>=0 && h<=9) printf("0");
    printf("%d:",h);
    if(m>=0 && m<=9) printf("0");
    printf("%d - ",m);
    if(o==1) printf("A porta abriu!\n");
    else printf("A porta fechou!\n");
    n--;

}

return 0;
}
