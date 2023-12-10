/*
Name: Rayyan Merchant
ID: 23K-0073
Date: 7/12/23
Description: Displaying the details of the workers having a maximum salary for each department.
 */

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 8
#define MAX_DEPARTMENTS 10
#define MAX_STRING_LENGTH 20

struct Employee 
{
    int id;
    char firstName[MAX_STRING_LENGTH];
    char lastName[MAX_STRING_LENGTH];
    int salary;
    char joiningDate[MAX_STRING_LENGTH];
    char department[MAX_STRING_LENGTH];
};

void displayMaxSalaryEmployees(struct Employee employees[], int size) 
{
    char uniqueDepartments[MAX_DEPARTMENTS][MAX_STRING_LENGTH];
    int maxSalaries[MAX_DEPARTMENTS] = {0};

    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        strcpy(uniqueDepartments[i], "");
    }

    for (int i = 0; i < size; i++) 
	{
        for (int j = 0; j < MAX_DEPARTMENTS; j++) 
		{
            if (strcmp(employees[i].department, uniqueDepartments[j]) == 0) 
			{
                if (employees[i].salary > maxSalaries[j]) 
				{
                    maxSalaries[j] = employees[i].salary;
                }
                break;
            } else if (strcmp(uniqueDepartments[j], "") == 0) 
			{
                strcpy(uniqueDepartments[j], employees[i].department);
                maxSalaries[j] = employees[i].salary;
                break;
            }
        }
    }

    printf("\nDetails of Employees with Maximum Salary for Each Department:\n");
    printf("%-15s %-12s %-12s %-8s %-15s %-15s\n", "Department", "Employee ID", "Name", "Salary", "Joining Date", "-------------");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        if (strcmp(uniqueDepartments[i], "") != 0) 
		{
            for (int j = 0; j < size; j++) 
			{
                if (strcmp(employees[j].department, uniqueDepartments[i]) == 0 && employees[j].salary == maxSalaries[i]) 
				{
                    printf("%-15s %-12d %-12s %-8d %-15s -------------\n",
                           employees[j].department, employees[j].id,
                           strcat(employees[j].firstName, employees[j].lastName),
                           maxSalaries[i], employees[j].joiningDate);
                    break;
                }
            }
        }
    }
}

void calculateTotalSalariesByDepartment(struct Employee employees[], int size) 
{
    char uniqueDepartments[MAX_DEPARTMENTS][MAX_STRING_LENGTH];
    int totalSalaries[MAX_DEPARTMENTS] = {0};

    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        strcpy(uniqueDepartments[i], "");
    }

    for (int i = 0; i < size; i++) 
	{
        for (int j = 0; j < MAX_DEPARTMENTS; j++) 
		{
            if (strcmp(employees[i].department, uniqueDepartments[j]) == 0) 
			{
                totalSalaries[j] += employees[i].salary;
                break;
            } else if (strcmp(uniqueDepartments[j], "") == 0) 
			{
                strcpy(uniqueDepartments[j], employees[i].department);
                totalSalaries[j] += employees[i].salary;
                break;
            }
        }
    }

    printf("\nDepartments and Total Salaries:\n");
    printf("%-15s %-12s\n", "Department", "Total Salary");
    for (int i = 0; i < MAX_DEPARTMENTS; i++) 
	{
        if (strcmp(uniqueDepartments[i], "") != 0) 
		{
            printf("%-15s %-12d\n", uniqueDepartments[i], totalSalaries[i]);
        }
    }
}

int main() 
{
    struct Employee employees[MAX_EMPLOYEES] = {
        {1, "Monika", "Arora", 100000, "2014-02-20", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11", "Admin"},
    };

    int size = sizeof(employees) / sizeof(employees[0]);

    displayMaxSalaryEmployees(employees, size);
    calculateTotalSalariesByDepartment(employees, size);

    return 0;
}
