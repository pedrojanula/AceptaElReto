#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    
    scanf("%i %i", &n1, &n2);
    
    while((n1 >= 0) && (n2 >= 0)){
        printf("%i\n", (n1*2)+(n2*2));
        
        scanf("%i %i", &n1, &n2);
    }

    return (EXIT_SUCCESS);
}

