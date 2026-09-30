#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define FILE_NAME "students.dat"

typedef struct {
    int   id;
    char  name[64];
    int   age;
    float gpa;
} Student;

void add_student(void)
{
    Student s;
    printf("Enter student's id:");
    scanf("%d", &s.id);
    printf("Enter name:");
    scanf(" %[^\n]", s.name);
    printf("Enter age:");
    scanf("%d", &s.age);
    printf("Enter gpa:");
    scanf("%f", &s.gpa);

    int fd = open(FILE_NAME, O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0)
    {
        perror("Error opening file");
        return;
    }

    if (write(fd, &s, sizeof(Student)) != sizeof(Student))
    {
        perror("Error writing to file");
        return;
    }
    else
    {
        printf("Student added successfuly.\n");
    }

    close(fd);
}

void list_student(void)
{
    int fd = open(FILE_NAME, O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return;
    }
    
    Student s;
    int count = 0;

    printf("\n--- List of Students ---\n");
    while (read(fd, &s, sizeof(Student)) == sizeof(Student))
    {
        printf("ID: %d | Name: %s | Age: %d | GPA: %.2f\n", s.id, s.name, s.age, s.gpa);
        count++;
    }
    if (count == 0) {
        printf("The list is empty.\n");
    }
    close(fd);
}

void find_student()
{
    int target_id;
    printf("Enter Student ID to find: ");
    scanf("%d", &target_id);
    int fd = open(FILE_NAME, O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return;
    }

    Student s;
    int found = 0;

    while (read(fd, &s, sizeof(Student)) == sizeof(Student))
    {
        if (s.id == target_id)
        {
            printf("\nStudent found:\n");
            printf("ID: %d | Name: %s | Age: %d | GPA: %.2f\n", s.id, s.name, s.age, s.gpa);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Student with ID %d not found.\n", target_id);
    }
    close(fd);
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Add student\n");
        printf("2. List all students\n");
        printf("3. Find student by ID\n");
        printf("4. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                add_student();
                break;
            case 2:
                list_student();
                break;
            case 3:
                find_student();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choic. Please enter from 1 - 4\n");
        }
    }
    return 0;
}
