#include <stdio.h>

int main(){
    int i, j, n, compartments, capacity, difference, liters;
    scanf("%i", &n);
    
    for(i=0; i<n; i++){
        liters = 0;
			
        scanf("%i %i %i", &compartments, &capacity, &difference);
			
        liters = capacity;
        capacity = capacity - difference;
			
        for(j=0; j<compartments-1; j++){
            liters = liters + capacity;
		    capacity = capacity - difference;
        }
        
        printf("%i\n", liters);
    }
    
    return 0;
}
