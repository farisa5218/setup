#include <stdio.h>

int main() {
    FILE *file;  // Declare a file pointer

    // Open an existing file named "existingfile.txt" for writing, or create a new one
    file = fopen("ratul.txt", "w");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Failed to open/create the file.\n");
        return 1;  // Exit with an error code
    }

    // Write data to the file using fprintf
    fprintf(file, "This is some data written to the file.\n");
    fprintf(file, "Hello, world!\n");

    // Close the file
    fclose(file);

    printf("File operation completed successfully.\n");

    return 0;
}
