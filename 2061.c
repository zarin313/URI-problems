#include<stdio.h>
#include<string.h>
int main(){
int n,m;
char str[10];
scanf("%d %d",&n,&m);
while(m>0){
    scanf("%s",&str);
    if(strcmp(str,"fechou")==0) n++;
    else if(strcmp(str,"clicou")==0) n--;
    m--;
    //printf("%d",n);
}

printf("%d\n",n);

return 0;
}
