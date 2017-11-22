#include <stdio.h>

void push(int *x, int a, short *n){

	x[*n] = a;
	(*n)++;

}

int pull(int *x, short *n){

	int res = x[*n - 1];
	x[*n - 1] = 0;
	(*n)--;
	return res;

}


int main(){
	
int stack[20];
short *count;
int i,b;	


*count = 0;

for(i = 0; i < 20; i++) stack[i] = 0;

push(stack, 34, count);
push(stack, -56, count);
push(stack, 34, count);
push(stack, 100034, count);

for(i = 0; i < 20; i++){
	printf("%d ", stack[i]);
}	

printf("\n");

b = pull(stack, count);

for(i = 0; i < 20; i++){
	printf("%d ", stack[i]);
}	

printf("\n%d ", b);

}
