#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // Allocating memory for one integer

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 10;  // Assigning value to the allocated memory
    printf("Value: %d\n", *ptr);  // Printing the value

//    free(ptr);  // Freeing the allocated memory
    return 0;
}
