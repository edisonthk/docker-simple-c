#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, result = 0;
    
    for (i = 1; i < argc; ++i)
    {
        printf("argv[%d] = %s\n", i, argv[i]);

        result += atoi(argv[i]);
    }

    printf("================\n");
    printf("合計 = %d\n", result);

    return 0;
}