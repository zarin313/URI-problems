#include<stdio.h>
int main(){
int p,n,s,prev;
scanf("%d %d",&p,&n);
int i;
for (i=0;i<n;i++){
    scanf("%d",&s);
    if(i==0) prev=s;
    if(s-prev>p && s>prev){
        printf("GAME OVER\n");
        //i=0;
        break;
    }
    else if(prev-s>p && prev>s){
        printf("GAME OVER\n");
        //i=0;
        break;
    }
    else prev=s;
}
if(i==n){
    printf("YOU WIN\n");
}


return 0;
}
