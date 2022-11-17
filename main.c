#include <stdio.h>
#include <math.h>
#define p 2.6
#define d 1

double af(double x){
    double a;
    a=pow(p,3)+pow(x,3);
    return a;
}

void task1(){
    double x;
    double y,a,b;
    scanf("%lf",&x);
    b=exp(sqrt(p+x));
    a=af(x);
    double py,pa;
    py = pow(b,3);
    pa = pow(a,2);
    y=py/pa;
    printf("%1.2lf\n",y);
}

void hw(){
    float x,y,f;
    printf("Введите х\n");
    scanf("%f",&x);
    printf("Введите y\n");
    scanf("%f",&y);
    //x=0.0000015;
    //y=-2000000000;
    f=(pow(cos(y),2)+2.4*d)/(exp(y)+log(pow(sin(x),2)+6));
    printf("Ответ:%0.2f\n",f);
}

void main() {
    hw();
}
