#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[256];
    // since C11, replaced with gets_s, but codeforces C11 5.1.0 GCC still accepts only gets
    char *res = gets(buf); 

    int nums[256];

    size_t len = 0;
    char *tok = strtok(buf, "+");
    while (tok != NULL) {
        nums[len] = tok[0] - '0';
        tok = strtok(NULL, "+");
        len += 1;
    }

    for (int i = 0; i < len; i++) {
        for (int k = i+1; k < len; k++) {
            if (nums[i] > nums[k]) {
                char temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        if (i+1 != len) {
            printf("%d+", nums[i]);
        } else {
            printf("%d", nums[i]);
        }
    }

    return 0;
}