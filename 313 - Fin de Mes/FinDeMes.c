#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int i, n, s, c; 
    
    scanf("%i", &n);
    
    for(i=0; i<n; i++){
        scanf("%i %i", &s, &c);
        
        if(s + c >= 0){
            printf("SI\n");
        }else{
            printf("NO\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

