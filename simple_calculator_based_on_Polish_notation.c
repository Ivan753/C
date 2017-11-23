/**
* Простой калькулятор, работающий с выражениями, построенными по правилам обратной польской записи
* 
* Данные хранятся в стеке (см.реализайию https://github.com/Ivan753/C/blob/master/stack.c)
*/

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
	
int stack[30];

int i, j, k;
int start_number = 0;
int sum = 0;
char type;
char a[30] = "";	
short count;
int t;

count = 0;

for(i = 0; i < 20; i++) stack[i] = 0;


for(;;){

sum = 0;

//Enter stroke
for(i = 0; (a[i] = getchar()) != 10; i++);


for(j = 0; j < i; j++){
	

	
	if(a[j] >= '0' && a[j] <= '9'){
		type = 'n';
		start_number = 1;
	}else{
		type = a[j];
	}
	
	switch(type){
	
	case 'n':{
		sum *= 10;
		sum += a[j] - '0';
	} break;
	
	case ' ': {
		if(start_number){
			push(stack, sum, &count);
			start_number = 0;
			sum = 0;
		}
	} break;
	
	case '+': {
		if(start_number){
			push(stack, sum, &count);
			start_number = 0;
			sum = 0;
		}
		
		sum = pull(stack, &count);
		sum += pull(stack, &count);
		push(stack, sum, &count);
		sum = 0;
		
	} break;
	
	case '-': {
		if(start_number){
			push(stack, sum, &count);
			start_number = 0;
			sum = 0;
		}
		
		int sum1 = 0;
		
		sum = pull(stack, &count);
		sum1 = pull(stack, &count);
		push(stack, sum1 - sum, &count);		
		sum = 0;
		
	} break;

	case '*': {
		if(start_number){
			push(stack, sum, &count);
			start_number = 0;
			sum = 0;
		}

		sum = pull(stack, &count);
		sum *= pull(stack, &count);
		push(stack, sum, &count);		
		sum = 0;
		
	} break;	
	
	case '/': {
		if(start_number){
			push(stack, sum, &count);
			start_number = 0;
			sum = 0;
		}

		int sum1 = 0;
		
		sum = pull(stack, &count);
		sum1 = pull(stack, &count);
		push(stack, sum1 / sum, &count);		
		sum = 0;
		
	} break;
	
	case 'x': {
		t = 1;
	} break;

	default: { printf("\nError\n"); } break;
	
		
	}
	
}

if(start_number){
	push(stack, sum, &count);
	start_number = 0;
}		

if(t == 1){
	break;
}


		//print stack---
		printf("stack: ");
		
		for(k = 0; k < count; k++){
			printf("%d ", stack[k]);
		}
		
		printf("\n");
		//--------------



}

printf("*The End*");

return 0;
	
	
}

