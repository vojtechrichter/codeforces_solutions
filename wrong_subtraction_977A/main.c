#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char input[256];
    char *res = gets(input); // some C11 compilers reject this, and other gets_s
    // char *res = gets_s(input, sizeof(input));

    int n = atoi(strtok(input, " "));
    int k = atoi(strtok(NULL, " "));

    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    printf("%d\n", n);

    return 0;
}