/* Программа, которая назодит площадь S и периметр P треугольника */

#include <stdio.h>
#include <math.h>

int main(){

float a,b,c;
float P,p;
float S;
int x0,y0,x1,y1,x2,y2;
a=b=c=0;
x0=y0=x1=y1=x2=y2=0;

printf("Enter x0 and y0\n");
scanf("%d %d", &x0, &y0);
printf("Enter x1 and y1\n");
scanf("%d %d", &x1, &y1);
printf("Enter x2 and y2\n");
scanf("%d %d", &x2, &y2);

a = sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1));
b = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
c = sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0));


if(a+b > c && c+b > a && a+c > b){


P = a + b + c;
p = P/2;

S = sqrt(p*(p-a)*(p-b)*(p-c));

printf("P = %.2f; S = %.2f",P,S);

}else{
printf("There is no such triangle");
}
return 0;
}
