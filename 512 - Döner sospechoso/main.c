#include <stdio.h>
#include <math.h>

int main() {
    int loop;
    short i;
    float rabbit;
    float horse;
    
    scanf("%i", &loop);
    
    for (i=0; i<loop; i++) {
        scanf("%f %f", &rabbit, &horse);
        printf("%i\n", (int)((rabbit*100) / (rabbit + horse)));
    }
    
    return 0;
}
