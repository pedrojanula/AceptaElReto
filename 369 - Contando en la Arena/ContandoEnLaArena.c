#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    short i, n;
    
    scanf("%hd", &n);
    
    while(n != 0){
        for(i=0; i<n; i++){
            printf("1");
        }
        
        printf("\n");
        
        scanf("%hd", &n);
    }
    
    return (EXIT_SUCCESS);
}

