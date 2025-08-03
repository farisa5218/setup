#include <stdio.h>
int main()
{
FILE *filePointer;
char bioghapy[1000];
filePointer = fopen("Abdur Rahman.txt", "w");
if (filePointer == NULL)
 {
printf("Error creating the file.\n");
return 1;
}
printf("Enter the bio:\n");
fgets(bioghapy, sizeof(bioghapy), stdin);
fprintf(filePointer, "%s", bioghapy);
fclose(filePointer);
filePointer = fopen("Abdur Rahman", "r");
if (filePointer == NULL)
 {
printf("Error opening the file.\n");
return 1;
}
printf("\bioghapy written in file:\n");
while (fgets(bioghapy, sizeof(bioghapy), filePointer) != NULL)
 {
printf("%s", bioghapy);
}
fclose(filePointer);
return 0;
}