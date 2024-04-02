#include <stdio.h>
#include <stdlib.h>

void process_data(int size) {
    // Allocate memory for an array
    int *data = (int *)malloc(size * sizeof(int));
    if (data == NULL) {
        // Error handling for memory allocation failure
        printf("Memory allocation failed\n");
        return;
    }
    // Perform some processing with the allocated memory
    // In this example, we'll just print a message
    printf("Processing data...\n");
    // Free the allocated memory
    free(data);
}

int main() {
    int input_size;

    // Prompt user for input size
    printf("Enter the size of data: ");
    scanf("%d", &input_size);

    // Process the data
    process_data(input_size);

    return 0;
}
