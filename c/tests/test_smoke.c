#include <stdio.h>
#include <string.h>

int main(void) {
    if (strlen("interp-lab") != 10) {
        printf("FAIL: strlen is broken\n");
        return 1;
    }
    printf("smoke test passed\n");
    return 0;
}