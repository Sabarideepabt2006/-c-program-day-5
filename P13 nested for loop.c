#include<stdio.h>
int main() {
    int sum;
    for (int i=0;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
    return 0;
}