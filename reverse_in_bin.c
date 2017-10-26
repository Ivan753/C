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

return 0;

}
