#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, i;
    for(i = 0;i<100000; i++){
        total = i*i;
        printf("%d\n", total);
    }
    return 0;
}
