#include<stdio.h>
int main(){
int n,i,s,m;
scanf("%d",&n);
while(n>0){
    scanf("%d",&m);
    s=0;
for(i=1;i<=m;i++){
    if(i%2==0) s=s-1;
    else s=s+1;

}
printf("%d\n",s);
n--;
}

return 0;
}
