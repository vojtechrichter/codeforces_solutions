#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char buf[32];
    char *result = gets(buf);
    int n, m, a;

    char *t = strtok(buf, " ");
    n = atoi(t);
    t = strtok(NULL, " ");
    m = atoi(t);
    t = strtok(NULL, " ");
    a = atoi(t);

    printf("%lld\n", (long long int)(ceil((double)m/a) * ceil((double)n/a)));

    return(0);
}