#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    i=0;

    printf("So, you want two numbers factored?\nGive them to me one by one and I will do the factoring.\n");
    while(i<2){
        printf("Number? ");
        scanf("%d",&j);
        for (k=1;k<=j;k++){
            if(j%k==0){
                printf("%d\n",k);
            }
        }
        i++;
    }
    return 0;
}
