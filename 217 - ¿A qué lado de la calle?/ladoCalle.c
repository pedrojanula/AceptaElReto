#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    unsigned short num;
    
    scanf("%hu", &num);
    
    while(num != 0){
        if(num%2==0){
            printf("DERECHA\n");
        }else{
            printf("IZQUIERDA\n");
        }
        
        scanf("%hu", &num);
    }
    
    return (EXIT_SUCCESS);
}

