#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 100000; i++) {
        FILE *file;
        file = fopen("test.txt", "w");
        fclose(file);
        return 0;
    }
}