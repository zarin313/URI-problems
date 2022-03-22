#include<stdio.h>
int main(){
char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
int i,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("%c",str[i-1]);
}
printf("\n");



return 0;
}
