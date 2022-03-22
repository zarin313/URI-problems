#include<stdio.h>
int main(){
int l,arr[500],i,j,level;
while(scanf("%d",&l)!=EOF){
    level=0;
    for(i=0;i<l;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<10 && level!=2 && level!=3)level=1;
        if (arr[i]>=10 && arr[i]<20 && level!=3) level=2;
        if(arr[i]>=20) level=3;
        //printf("%d\n",level);
    }
    printf("%d\n",level);


}
}
