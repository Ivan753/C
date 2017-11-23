/*
* Простой конвертер температур
* Преобразует температцру в шкалы Цельсия, Кельвина и Фаренгейта
*/

#include <stdio.h>

int main(){

char s;
int number;
double res[2];


scanf("%d%c",&number,&s);

switch(s){

case 'C':  
	if (number>=-273){
	res[0] = number + 273.15; //For K
	res[1] = number*9.0/5.0 + 32.0; //For F
	printf("%.2f K %.2f F",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero");
	}
break;

case 'F':  
	if (number>=-459){
	res[0] = (number - 32.0)*5.0/9.0; //For C
	res[1] = res[0] + 273.15; //For K
	printf("%.2f C %.2f K",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero");
	}
break;
case 'K':
	if (number>=0){
	res[0] = number - 273.15; //For C
	res[1] = res[0]*9.0/5.0 + 32.0; //For F
	printf("%.2f C %.2f F",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero");
	}
break;
default:

printf("%d C:\n", number);
if (number>=-273){
	
	res[0] = number + 273.15; //For K
	res[1] = number*9.0/5.0 + 32.0; //For F
	printf("%.2f K %.2f F\n\n",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero (C)\n");
	}
	
	printf("%d F:\n", number);
	if (number>=-459){	
	res[0] = (number - 32.0)*5.0/9.0; //For C
	res[1] = res[0] + 273.15; //For K
	printf("%.2f C %.2f K\n\n",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero (F)\n");
	}
	printf("%d K:\n", number);
	if (number>=0){
	res[0] = number - 273.15; //For C
	res[1] = res[0]*9.0/5.0 + 32.0; //For F
	printf("%.2f C %.2f F\n",res[0],res[1]);
	}else{
	printf("The entered temperature is below absolute zero (K)\n");
	}
break;
}

return 0;
}
