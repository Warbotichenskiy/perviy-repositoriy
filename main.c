#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIB_NUM 50
int main(int argc, char* argv[])
{
    char str[] = "Omnia Gallia";

    char buf[20];

    strcpy(buf, str);

    printf("%s\n", buf);

    for(int i = 0; i < 20; i++) {
        printf("Character #%d is %c with code %d\n", i, buf[i], buf[i]);
    }

    /*
    int a[FIB_NUM];

    for(int i=0; i<FIB_NUM; i++){
        a[i] = i > 1 ? a[i-2] + a[i-1] : i;
    }

    for(int i=0; i<FIB_NUM; i++){
        printf("Fibonacci num #%d = %d\n", i, a[i]);
    }
    */

    return 0;
}

