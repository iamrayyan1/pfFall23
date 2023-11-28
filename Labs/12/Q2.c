/*
  Name: Rayyan
  Date: 28/11/23
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createWordFile(const char *fileName, const char *content) 
{
    FILE *file = fopen(fileName, "w");

    if (file == NULL) 
	{
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", content);
    fclose(file);
}

int areFilesEqual(const char *file1, const char *file2) 
{
    FILE *file1Pointer = fopen(file1, "rb");
    FILE *file2Pointer = fopen(file2, "rb");

    if (file1Pointer == NULL || file2Pointer == NULL) 
	{
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    int charFromFile1, charFromFile2;

    while ((charFromFile1 = fgetc(file1Pointer)) != EOF && (charFromFile2 = fgetc(file2Pointer)) != EOF) 
	{
        if (charFromFile1 != charFromFile2) 
		{
            fclose(file1Pointer);
            fclose(file2Pointer);
            return 0; 
        }
    }

    fclose(file1Pointer);
    fclose(file2Pointer);

    return charFromFile1 == charFromFile2;
}

int main() 
{
    const char *firstFileName = "document1.docx";
    const char *secondFileName = "document2.docx";
    const char *textContent = "This is a test.";

    createWordFile(firstFileName, textContent);
    createWordFile(secondFileName, textContent);

    if (areFilesEqual(firstFileName, secondFileName)) 
	{
        printf("Files are equal.\n");
    } else 
	{
        printf("Files are not equal.\n");
    }

    return 0;
}
