#include<stdio.h>
#include<string.h>
int main(){
int n;
char c[10000];
scanf("%d",&n);
while(n>0){
    scanf("%s",&c);
    double l=strlen(c)/100.0;
    printf("%0.2lf\n",l);
    n--;
}
return 0;
}
