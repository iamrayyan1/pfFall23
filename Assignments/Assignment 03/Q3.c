/*
Name: Rayyan Merchant
ID: 23K-0073
Date: 7/12/23
Description: merging personal.txt and department.txt into combine.txt
 */


#include <stdio.h>

struct Employee 
{
    char id[10];
    char name[20];
    double salary;
};

void combineFiles(FILE *personalFile, FILE *departmentFile, FILE *combinedFile) 
{
    if (personalFile == NULL || departmentFile == NULL || combinedFile == NULL) 
	{
        printf("Invalid file pointers!\n");
        return;
    }

    char line[100];

    rewind(personalFile);
    while (fgets(line, sizeof(line), personalFile) != NULL) 
	{
        fputs(line, combinedFile);
    }

    rewind(departmentFile);
    while (fgets(line, sizeof(line), departmentFile) != NULL) 
	{
        fputs(line, combinedFile);
    }

    printf("Data combined successfully!\n");
}

int main() 
{
	printf("\nRayyan Merchant-23K-0073\n");
	printf("\nData combined and written to Combine.txt successfully!\n");


    FILE *personalFile, *departmentFile, *combinedFile;
    struct Employee employees[3];

    for (int i = 0; i < 3; i++) 
	{
        printf("\nEnter the ID for employee %d: ", i + 1);
        scanf("%s", employees[i].id);

        printf("\nEnter the name for employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("\nEnter the salary for employee %d: ", i + 1);
        scanf("%lf", &employees[i].salary);
    }

    personalFile = fopen("Personal.txt", "w");
    if (personalFile == NULL) 
	{
        printf("Error opening Personal.txt\n");
        return 1;
    }

    fprintf(personalFile, "Employee ID\tEmployee Name\n");

    for (int i = 0; i < 3; i++) 
	{
        fprintf(personalFile, "%s\t\t%s\n", employees[i].id, employees[i].name);
    }

    fclose(personalFile);

    departmentFile = fopen("Department.txt", "w");
    if (departmentFile == NULL) 
	{
        printf("Error opening Department.txt\n");
        return 1;
    }

    fprintf(departmentFile, "Employee ID\tEmployee Salary\n");

    for (int i = 0; i < 3; i++) 
	{
        fprintf(departmentFile, "%s\t\t%.2lf\n", employees[i].id, employees[i].salary);
    }

    fclose(departmentFile);

    combinedFile = fopen("Combine.txt", "w");
    if (combinedFile == NULL) 
	{
        printf("Error opening Combine.txt\n");
        return 1;
    }
    

    combineFiles(fopen("Personal.txt", "r"), fopen("Department.txt", "r"), combinedFile);

    fclose(combinedFile);

    return 0;
}
