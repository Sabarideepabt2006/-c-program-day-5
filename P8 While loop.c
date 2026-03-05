#include <stdio.h>
int main() {
    int n, i = 0;
    int payment;
    int currentStreak = 0, maxStreak = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &payment);
        if(payment == 0) {
            currentStreak++;
            if(currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }
    printf("Longest Default Streak: %d", maxStreak);
    return 0;
}