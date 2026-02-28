#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int i=0;
    int successful=0,failure=0;
    int order;
    while (i<N) {
        scanf("%d",&order);
        if (order==1) {
            successful++;
        }
        else if (order==0) {
                failure++;
            }
            i++;
        }
        printf("Sucessful:%d\n",successful);
        printf("Cancelled:%d\n",failure);
        if (failure>successful) {
            printf("Status:Risk\n");
        }
        else {
            printf("Status:Safe\n");
        }
        return 0;
    }
