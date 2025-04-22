#include <stdio.h>
#include <stdlib.h>

int* fun(int size) {
    int *p;
    int i;

    // Allocate memory for `size` integers
    p = (int *)malloc(size * sizeof(int));

    // Always check if malloc succeeded
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    for (i = 0; i < size; i++)
        p[i] = i + 1;

    return p;
}

int main() {
    int *ptr, sz = 9;
    int i;

    ptr = fun(sz);  // get allocated and initialized array

    for (i = 0; i < sz; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the memory after use
    free(ptr);

    return 0;
}

 
