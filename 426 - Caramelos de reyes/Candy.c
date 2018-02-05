#include <stdio.h>

int main(){
    int candy, cont=0, fin=0;
    long total=0;
    
    while(fin!=1){
        scanf("%i", &candy);
        cont = 0;
        total = 0;
        
        if(candy!=0){
            while(candy!=0){
                cont++;
                total = total + candy;
                
                scanf("%i", &candy);
            }
            
            if(total % cont == 0){
                printf("REPARTO JUSTO\n");
            }else{
                printf("IMPOSIBLE\n");
            }
        }else{
            fin=1;          
        }
    }
    
    return 0;   
}
