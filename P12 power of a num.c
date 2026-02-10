#include <stdio.h>
int main() {
    int n,p;
    int r=1;
    scanf("%d%d",&n,&p);
    for (int i=0;i<p;i++) {
        r*=n;
    }
    printf("%d",r);
    return 0;
    }
