#include<stdio.h>
int main(){
float a,b,d;
scanf("%f %f",&a,&b);
d=b-a;
float p=(100*d/a);
printf("%0.2f%%\n",p);

return 0;
}
