#include <stdio.h>
#include <math.h>


int main(){

int a = 0x00A0F040;
int b = 0;
int maska = 0x0000000F;
int s[32];
int s1[32];

b = a;
	
for(int i = 0; i < 32; i++){
	s[31-i] = 0;
	s[31-i] = a%2;
	a =  a/2;	
}
// s = bin a


for(int i = 0; i < 16; i++){
	
s1[i]    = s[31-i];
s1[31-i] = s[i];
	
}
//s1 - reversed s
printf("Before:\n");
for(int i = 0; i<32; i++){
	
	printf("%d ", s[i]);

}

printf(" = %.8X\n", b);
printf("After:\n");

b = 0;

for(int i = 0; i<32; i++){
	
	b += s1[i] * pow(2, (31-i));
	printf("%d ", s1[i]);

}
printf(" = %.8X", b);

	
//без использования массиввов
/*


int a = 0x00000040;
int b = 0;
int maska = 0x00000001;
int i;
int j = 31;
int c, c1;

for(i = 31; i > 0; i--){

    if(i>15){
        b|=(a&maska)<<j;
        j-=2;
    }else{
        b|=(a&maska)>>j;
        j+=2;
    }

    maska<<=1;

}

//вывод a в двоичной системе
c = 0;
c1 = b;
printf("a = ");
for(i = 0; i<32; i++){

    c = c1%2;
    printf("%d ", c);
    c1 = c1/2;

}

printf("\n");

//вывод в b двоичной системе
c = 0;
c1 = a;
printf("b = ");

for(i = 0; i<32; i++){

	c = c1%2;
	printf("%d ", c);
	c1 = c1/2;
}


printf("\n\na = %.8X\nb = %.8X\n", a, b);
*/
	
return 0;

}
