#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,root1,root2;
scanf("%f %f %f",&a,&b,&c);
d=pow(b,2)-(4*a*c);
if(a==0.0 || d<0){
printf("Impossivel calcular\n");
}
else{
    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);
    printf("R1 = %0.5f\nR2 = %0.5f\n",root1,root2);
}

return 0;
}
