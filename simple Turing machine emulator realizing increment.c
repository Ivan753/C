#include <stdio.h>


int main(){

int state = 0;
char a[30];
int i,j;

char com[4][11] = {
	{' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'},  //alphabet
	{'1', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'},  //data for replacement
	{'h', 'h', 'h', 'h', 'h', 'h', 'h', 'h', 'h', 'h', 'l'},  //action for scan
	{'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1'}   //state
};

for(i = 0; i < 30; i++) a[i] = 0;

a[0] = ' ';

for(i = 1; (a[i] = getchar()) != 10; i++);

state = 1;

i--;

while(state){

	
	for(j = 0; j < 11; j++){
		
		if(a[i] == com[0][j]){
			
			a[i] = com[1][j];        //we replace the cell value with the desired one
			
			state = com[3][j] - '0'; //change the state
			
			break;
			
		} 
		
	}
	
	if(com[2][j] == 'l'){
		i--;
	}
	
}

for(i = 0; i < 11; i++){
	printf("%c", a[i]);
}


return 0;
	
}

