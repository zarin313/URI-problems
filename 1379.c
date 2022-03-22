#include<stdio.h>
int main(){
int a,b,c,d;
while(1){
 scanf("%d %d",&a,&b);
 if(a==0 && b==0) break;
 d=b-a;
 c=a-d;
 printf("%d\n",c);
}
return 0;
      }
