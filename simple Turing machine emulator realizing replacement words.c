/**
* Данная программа эмулирует работу машины Тьюринга по преобразованию слов
*
* Словл "hello" в ленте заменяется на "HI   "
*
* Двумерный массив com является таблицей для МТ, 
* где каждые 4 строчки соответствуют очередному состоянию машины, начиная с 1
*
* Нулевое состояние (state = 0) соответствует прекращению работы машины
*/

#include <stdio.h>

int main(){

int state = 0;
char a[100];
int i,j,t;

char com[24][7] = {
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				1
	{'n', 'h', 'e', 'l', 'l', 'o'},  //data for replacement
	{'h', 'r', 'r', 'r', 'r', 'r'},  //action for scan
	{'0', '2', '1', '1', '1', '1'},  //state
	
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				2
	{'n', 'h', 'e', 'l', 'l', 'o'},  //data for replacement
	{'h', 'r', 'r', 'r', 'r', 'r'},  //action for scan
	{'0', '1', '3', '1', '1', '1'},  //state
	
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				3
	{'n', 'h', 'e', 'l', 'l', 'o'},  //data for replacement
	{'h', 'r', 'r', 'r', 'r', 'r'},  //action for scan
	{'0', '1', '1', '4', '1', '1'},  //state
	
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				4
	{'n', 'h', 'e', 'l', 'l', 'o'},  //data for replacement
	{'h', 'r', 'r', 'r', 'r', 'r'},  //action for scan
	{'0', '1', '1', '5', '5', '1'},  //state
	
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				5
	{'n', 'h', 'e', 'l', 'l', 'o'},  //data for replacement
	{'h', 'r', 'r', 'r', 'r', 'h'},  //action for scan
	{'0', '1', '1', '1', '1', '6'},  //state
	
	{'0', 'h', 'e', 'l', 'l', 'o'},  //alphabet				6
	{'n', 'H', 'I', ' ', ' ', ' '},  //data for replacement
	{'h', 'r', 'l', 'l', 'l', 'l'},  //action for scan
	{'0', '1', '6', '6', '6', '6'}   //state
};

for(i = 0; i < 100; i++) a[i] = 0;


for(i = 0; (a[i] = getchar()) != 10; i++);

i = 0;

state = 1;


while(state){


	for(j = 0; j < 6; j++){

		if(a[i] == com[(state-1)*4][j]){

			a[i] = com[(state-1)*4+1][j];        //we replace the cell value with the desired one
			
			state = com[(state-1)*4+3][j] - '0'; //change the state

			break;

		} 
	

	
	}
	
	
	
	if(j == 6){
		j = 5;
	}
	
	switch(com[(state - 1)*4+2][j]){
		case 'r': i++; break;
		case 'l': i--; break;
	}
	
}

for(i = 0; i < 100; i++){
	printf("%c", a[i]);
}


return 0;
	
}

