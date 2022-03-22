#include<stdio.h>
int main(){
int n,b,d,c,v,i,j,k;
while(1){
    scanf("%d %d",&b,&n);
    if(b==0 && n==0) break;
    int res[21],flag=1;
    for(i=1;i<=b;i++){
            //printf("t ");
        scanf("%d",&res[i]);
    }
    for(i=1;i<=n;i++){
            scanf("%d %d %d",&d,&c,&v);
            res[d]=res[d]-v;
            res[c]=res[c]+v;

    }
    for(i=1;i<=b;i++){
        if(res[i]<0) {
            flag=0;
            break;
        }
    }
    if(flag==0) printf("N\n");
    else printf("S\n");


}
return 0;
}
