#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// main
int main(void)
{
    int nmem;
    int i;
    for (i = 1; i <= 100000; i++) {
        // 1024個(charのサイズが1Bだとすると1024B = 1KB)のメモリを確保して0で埋める
        nmem = 1024;
        char *p;
        p = (char *)calloc(nmem * 64,sizeof(char));
        if (p == NULL) {
            printf("ERROR,calloc\n");
            exit(EXIT_FAILURE);
        }
    }

    return 0;
}