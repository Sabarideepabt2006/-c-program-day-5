#include <ctype.h>
#include<stdio.h>
int main() {
    int N;
    int d,count=0;
    scanf("%d",&N);
    for (;N>0;N=N/10) {
        d=N%10;
        if (d%2==0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
