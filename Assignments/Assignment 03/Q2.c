/*
Name: Rayyan Merchant
ID: 23K-0073
Date: 7/12/23
Description: 
 */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Employee 
{
    char name[30];
    char role[30];
    int communication;
    int teamwork;
    int creativity;
};

struct Department 
{
    char name[30];
    struct Employee employees[5];
};

int generateRandomNumber(int min, int max) 
{
    return rand() % (max - min + 1) + min;
}

void generateRandomNames(char namePool[20][30]) 
{
    char randomNames[20][30] = {"Malik", "Arham", "Aliya", "Zara", "Simran",
                                "Sohail", "Harry", "Henry", "Sam", "Talha",
                                "Rohail", "Farhan", "Mustafa", "Ejaz", "Ayaan",
                                "Ayiesh", "Ahmed", "Sabeeh", "Murtaza", "Mahummad"};

    for (int i = 0; i < 20; i++) 
	{
        strcpy(namePool[i], randomNames[i]);
    }
}

void assignDepartments(struct Department *department, char namePool[20][30], char assignedNames[20]) 
{
    char assignedFlag[20] = {0};

    for (int i = 0; i < 5; i++) 
	{
        int index;
        do 
		{
            index = generateRandomNumber(0, 19);
        } while (assignedFlag[index] || assignedNames[index]);

        strcpy(department->employees[i].name, namePool[index]);
        assignedFlag[index] = 1;
        assignedNames[index] = 1;

        switch (i) 
		{
            case 0: strcpy(department->employees[i].role, "Director"); break;
            case 1: strcpy(department->employees[i].role, "Executive"); break;
            case 2: strcpy(department->employees[i].role, "Manager"); break;
            case 3: strcpy(department->employees[i].role, "Employee"); break;
            case 4: strcpy(department->employees[i].role, "Trainee"); break;
        }

        department->employees[i].communication = generateRandomNumber(1, 100);
        department->employees[i].creativity = generateRandomNumber(1, 100);
        department->employees[i].teamwork = generateRandomNumber(1, 100);
    }
}

int calculateSum(struct Department *department) 
{
    int sum = 0;
    for (int i = 0; i < 5; i++) 
	{
        sum += department->employees[i].communication + department->employees[i].creativity + department->employees[i].teamwork;
    }
    return sum;
}

int main() 
{
    char namePool[20][30];
    generateRandomNames(namePool);
    
    struct Department departments[4];
    srand(time(NULL));

    char assignedNames[20] = {0};

    for (int i = 0; i < 4; i++) 
	{
        switch (i) 
		{
            case 0: strcpy(departments[i].name, "Finance"); break;
            case 1: strcpy(departments[i].name, "Logistics"); break;
            case 2: strcpy(departments[i].name, "Marketing"); break;
            case 3: strcpy(departments[i].name, "HR"); break;
        }
    }

    for (int i = 0; i < 4; i++) 
	
    {
        assignDepartments(&departments[i], namePool, assignedNames);
    }

    for (int i = 0; i < 4; i++) 
	{
        printf("-------|%s|-------\n\n", departments[i].name);
        for (int j = 0; j < 5; j++) 
		{
            printf("Name: %s\n", departments[i].employees[j].name);
        }
        printf("__________________________\n");
    }

    int sumHR = 0, sumFinance = 0, sumMarketing = 0, sumLogistics = 0;

    for (int i = 0; i < 5; i++) 
	{
        sumHR += departments[0].employees[i].communication + departments[0].employees[i].creativity + departments[0].employees[i].teamwork;
    }
    for (int i = 0; i < 5; i++) 
	{
        sumFinance += departments[1].employees[i].communication + departments[1].employees[i].creativity + departments[1].employees[i].teamwork;
    }
    for (int i = 0; i < 5; i++) 
	{
        sumMarketing += departments[2].employees[i].communication + departments[2].employees[i].creativity + departments[2].employees[i].teamwork;
    }
    for (int i = 0; i < 5; i++) 
	{
        sumLogistics += departments[3].employees[i].communication + departments[3].employees[i].creativity + departments[3].employees[i].teamwork;
    }

    printf("*******************************************\n\n");
    printf("\t*Department Total: \n\n");
    printf("HR:\t\t%d\nFinance:\t%d\nMarketing:\t%d\nLogistics:\t%d\n", sumHR, sumFinance, sumMarketing, sumLogistics);
    printf("\n");

    int maxSum = 0;
    int maxIndex = 0;

    for (int i = 0; i < 4; i++) 
	{
        int departmentSum = calculateSum(&departments[i]);

        if (departmentSum > maxSum) 
		{
            maxSum = departmentSum;
            maxIndex = i;
        }
    }

    printf("*******************************************\n\n");
    printf("\nDepartment with the highest sum:\n\n");
    printf("\t*%s*\t\n\n", departments[maxIndex].name);

    for (int j = 0; j < 5; j++) 
	{
         printf("Name: %-10s Role: %-10s Communication: %-3d Teamwork: %-3d Creativity: %-3d\n",
               departments[maxIndex].employees[j].name, departments[maxIndex].employees[j].role,
               departments[maxIndex].employees[j].communication, departments[maxIndex].employees[j].teamwork,
               departments[maxIndex].employees[j].creativity);
    }

    return 0;
}
