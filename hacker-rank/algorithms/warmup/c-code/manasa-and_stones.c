#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int tot, sub, val, i, j, temp;
    
    struct testcase {
        int n;
        int a;
        int b;
        
    };
    
    scanf("%d", &tot);
    struct testcase t[tot];
    for (i=0;i<tot; i++) {
        scanf("%d", &t[i].n);
        scanf("%d", &t[i].a);
        scanf("%d", &t[i].b);
    }
    for (i=0;i<tot;i++) {
        sub = t[i].n;
        int res[sub];
        for (j=0;j<sub;j++) {
            if ( t[i].b < t[i].a ) 
                val = ( j * t[i].a ) + (t[i].n - (j + 1)) * t[i].b;
            else
                val = ( j * t[i].b ) + (t[i].n - (j + 1)) * t[i].a;           
            res[j] = val;
        }
        for (j=0;j<sub;j++) {
            temp = res[j];
            if (temp == res[j + 1]) continue;
            else printf("%d ",res[j]);
        }
        printf("\n");
    }
    return 0;
}
