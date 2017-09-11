#include <stdio.h>

main(){

char s[20];
int i, number;
char t;
double res[2];

scanf("%d%s",&number,s);

for(i=0; i<20; i++){
if(s[i]=='C' || s[i]=='F' || s[i]=='K'){
t = s[i];
break;
}
}

switch(t){

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
	if (number>=0){
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
default: printf("Enter the unit of measure"); break;
}

}
