#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    short n, i, d, m;
    
    scanf("%hd", &n);
    
    for(i=0; i<n; i++){
        scanf("%hd %hd", &d, &m);
        
        if((d == 25) && (m == 12)){
            printf("SI\n");
        }else{
            printf("NO\n");
        }
    }
    
    return (EXIT_SUCCESS);
}

