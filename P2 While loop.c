#include<stdio.h>
int main() {
    int N;
    int B;
    int t;
    int count=0,i=0;
    scanf("%d %d",&N,&B);
    while (i<N) {
        scanf("%d",&t);
        B=B+t;
        if (B<2000) {
            count++;
        }
        i++;
    }
printf("Final Balance:%d\n",B);
    printf("Low Balance Days:%d\n",count);
return 0;
}