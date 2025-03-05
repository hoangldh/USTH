#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int ID;
    float score;
};

void inputStudents(struct Student students[], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        printf("\nEnter details for student %d: \n", i + 1);

        printf("\tName: ");
        scanf(" %[^\n]", students[i].name);

        printf("\tID: ");
        scanf("%d", &students[i].ID);

        printf("\tScore: ");
        scanf("%f", &students[i].score);
    }
}

void displayStudents(struct Student students[], int numStudents)
{
    printf("\nSTUDENT LIST:\n");
    printf("--------------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Name", "ID", "Score");
    printf("--------------------------------------\n");

    for (int i = 0; i < numStudents; i++)
    {
        printf("%-20s %-10d %-10.2f\n",
            students[i].name,
            students[i].ID,
            students[i].score);
    }

    printf("--------------------------------------\n\n");
}

float calculateAverage(struct Student students[], int numStudents)
{
    double sum = 0.0f;

    for (int i = 0; i < numStudents; i++)
    {
        sum += students[i].score;
    }

    return (sum / numStudents);
}

int main()
{
    printf("Enter the number of students: ");
    int numStudents; scanf("%d", &numStudents);

    struct Student students[numStudents];
    inputStudents(students, numStudents);

    displayStudents(students, numStudents);
    printf("Class average: %.2f", calculateAverage(students, numStudents));

    return 0;
}