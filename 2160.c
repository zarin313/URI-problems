#include<stdio.h>
#include<string.h>
int main(){
    char str[500];
    fgets(str,500, stdin);
    if((strlen(str)-1)<=80) printf("YES\n");
    else  printf("NO\n");
    printf("%d",strlen(str));

return 0;
}
