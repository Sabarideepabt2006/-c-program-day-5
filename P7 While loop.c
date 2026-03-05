#include <stdio.h>

int main() {
    int capacity, N;
    int change;
    int occupied = 0;
    int critical = 0;
    int i = 0;
    scanf("%d", &capacity);
    scanf("%d", &N);
    while(i < N) {
        scanf("%d", &change);
        occupied = occupied + change;
        if(occupied > capacity)
            occupied = capacity;
        if(occupied < 0)
            occupied = 0;
        if(occupied > (0.9 * capacity))
            critical++;
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", critical);
    return 0;
}