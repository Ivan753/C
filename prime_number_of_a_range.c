#include <stdio.h>

int main()
{
    int i, j, t;
    int b,e;

    b = 10;

    e = 78;



        for(i = b; i <= e; i++){

            t = 1;

            for(j = 2; j <=i/2; j++){

                if(i%j == 0){
                    t = 0;
                    break;
                }
            }

            if(t){
                printf("%d\n", i);
            }

        }

    return 0;
}
