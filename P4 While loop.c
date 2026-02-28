#include<stdio.h>
int main() {
    int N;
    int i=0;
    int s;
    int currentStreak=0;
    int M=0;
    scanf("%d",&N);
    while (i<N) {
        scanf("%d",&s);
        if (s==0){
            currentStreak++;
            if (currentStreak>M) {
                M=currentStreak;
            }
        }
        else {
            currentStreak=0;
        }
        i++;
    }
    printf("Longest Failure Streak:%d",M);
    return 0;
}