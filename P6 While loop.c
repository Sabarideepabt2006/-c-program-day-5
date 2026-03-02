#include<stdio.h>
int main() {
    int maxWeight,N;
    int i=0;
    int weight;
    int totalWeight=0;
    int passengersAllowed=0;
    scanf("%d",&maxWeight);
    scanf("%d",&N);
    while (i<N) {
        scanf("%d",&weight);
        if (totalWeight+weight>maxWeight) {
            break;
        }
        totalWeight+=weight;
        passengersAllowed++;
        i++;
    }
    printf("Passengers allowed:%d\n",passengersAllowed);
    if (passengersAllowed<N) {
        printf("Overload: Yes\n");
    }
    else {
        printf("Overload: No\n");
    }
    return 0;
}
