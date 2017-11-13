#include <stdio.h>

int main()
{
    int c = 72;
    int i, t;
    t = 1;
    int b,e; // for optim.

    b = 0;
    e = 0;

    if(c%2 !=0){ //ever / odd

        b = 3;
        e = 2;


        for(i = b; i <= c/2; i+= e){

            if(c%i == 0){
                t = 0;
                break;
            }

        }

    }else{
        t = 0;
    }

    if(t){
        printf("True\n");
    }else{
        printf("False\n");
    }

    return 0;
}
