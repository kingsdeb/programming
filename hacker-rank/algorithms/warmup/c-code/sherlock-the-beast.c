#include <stdio.h>

void print(a, b) {
    
    for(a; a>0; a--)                                              
        printf("5");
    for(b; b>0; b--)
        printf("3");
    printf("\n");
             
}

int filldigits(num) {
    int max_div, num_of_5s, num_of_3s;
    if (num/3 == 0) {
        num_of_5s = num;
        print(num_of_5s, 0);
        return 0;
    }
    max_div = num/3;
    for (max_div; max_div>0; max_div--) {
        num_of_5s = max_div * 3;
        num_of_3s = num - num_of_5s;
        if (num_of_3s % 5 == 0 ) {
            print(num_of_5s, num_of_3s);
            return 0;
        }
        else
            continue;
    }

    max_div = num/5;
    for (max_div; max_div>=1; max_div--) {
        num_of_3s = max_div * 5;
        num_of_5s = num - num_of_3s;
        if (num_of_5s % 3 == 0)  {
            print(num_of_5s, num_of_3s);
            return 0; 
        }
        else
            continue;
    }
    return -1;
}

int main() {
    int tc, i, res;
    scanf("%d", &tc);
    long num[tc];
    for (i=0; i<tc; i++) 
        scanf("%ld",&num[i]);
    
    for(i=0; i<tc; i++) {
        if (num[i] < 3) {
            printf("-1\n");
            continue;
        }
        else 
            res = filldigits(num[i]);
        if (res == -1) {
            printf("-1\n");
            continue;
        }
        else
            continue;

    }
    
    return 0;
}
