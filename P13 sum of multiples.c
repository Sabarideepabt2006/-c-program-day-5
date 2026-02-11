#include <stdio.h>
int main() {
    int n,m;
    int sum=0;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;i++) {
        if (i%n==0) {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}