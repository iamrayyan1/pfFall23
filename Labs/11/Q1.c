#include <stdio.h>

// Define the structure for student data
struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};

// Function to print names of all students who joined in a particular year
void printStudentsByYear(struct Student students[], int numStudents, int targetYear) {
    printf("Students who joined in %d:\n", targetYear);
    for (int i = 0; i < numStudents; i++) {
        if (students[i].yearOfJoining == targetYear) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student whose roll number is given
void printStudentByRollNumber(struct Student students[], int numStudents, int targetRollNumber) {
    int i;
    for (i = 0; i < numStudents; i++) {
        if (students[i].rollNumber == targetRollNumber) {
            printf("Student Data for Roll Number %d:\n", targetRollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", targetRollNumber);
}

int main() {
    // Assuming there are not more than 450 students in the college
    const int MaxStudents = 450;

    // Create an array to store student objects
    struct Student students[MaxStudents];

    // Prompt user to enter details for each student
    int numStudents;
    printf("Enter the number of students (up to %d): ", MaxStudents);
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }

    // Prompt user to perform operations
    int userChoice;
    printf("\nChoose operation:\n1. Print names of students by year\n2. Print data of a student by roll number\n");
    scanf("%d", &userChoice);

    if (userChoice == 1) {
        // Print names of students who joined in a particular year
        int targetYear;
        printf("Enter the year: ");
        scanf("%d", &targetYear);
        printStudentsByYear(students, numStudents, targetYear);
    } else if (userChoice == 2) {
        // Print data of a student by roll number
        int targetRollNumber;
        printf("Enter the roll number: ");
        scanf("%d", &targetRollNumber);
        printStudentByRollNumber(students, numStudents, targetRollNumber);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
