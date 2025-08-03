#include <stdio.h>

int main() {
    FILE *file;  // Declare a file pointer

    // Open an existing file named "existingfile.txt" for reading
    file = fopen("ratul.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;  // Exit with an error code
    }

    // Read data from the file using fread
    char buffer[100];  // A buffer to store the read data

    // Assuming each line in the file is at most 99 characters
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Print each line to the console
        printf("%s", buffer);
    }

    // Alternatively, you can use fscanf to read formatted data
    /*
    int value;
    while (fscanf(file, "%d", &value) == 1) {
        // Process the read value
        printf("%d\n", value);
    }
    */

    // Close the file
    fclose(file);

    return 0;
}
