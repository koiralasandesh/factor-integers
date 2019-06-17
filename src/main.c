#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int j,k;

    printf("Input numbers for factoring (0 to quit):\n");
    printf("===============================================\n");
    while(true){
        printf("Number?\n");
        scanf("%d",&j);
        
        if (j==0) break;
        printf("\nFactors:\n");
        for (k=1;k<=j;k++){
            if(j%k==0){
                printf("%d\n",k);
            }
        }
        printf("--------------------------------------------------\n");
    }
    printf("===================END========================\n");
    return 0;
}
