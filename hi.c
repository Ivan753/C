#include <stdio.h>
//#include <limits.h>
//#include <float.h>

int hto1(int t)
{
	int p=0;
	
p = (int) t;
return p;

	/*
int i,p,c,n,o;

n = 0;
p = 0;
while (s>0){
	
c = s % 10;

if(n!=0){
	i=n;
	while(0<i){
	o = o*16;
	i--;
	}
}else{
o = 1;
}

printf("%d %d %d\n",o,n,c);
++n;
p = p + c*o;

o = 1;
s = s/10;

}
return p;
*/
}

main(){
	
int a = 0X1a;
int u;

u = hto1(a);

printf("%d ",u);

}
