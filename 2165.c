#include<stdio.h>
#include<string.h>
int main(){
    char str[500];
    fgets(str,500, stdin);
    if((strlen(str)-1)<=140) printf("TWEET\n");
    else  printf("MUTE\n");


return 0;
}
