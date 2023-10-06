#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    int age;
    char sex;
    char address[100];
    float marks;
};

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Create an array of Student structures to store the student information
    struct Student students[num_students];

    // Input student information
    for (int i = 0; i < num_students; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Sex (M/F): ");
        scanf(" %c", &students[i].sex);

        printf("Address: ");
        scanf(" %[^\n]s", students[i].address);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    printf("Students with more than 60%% marks:\n");
    for (int i = 0; i < num_students; i++) {
        if (students[i].marks > 60.0 && students[i].marks < 80.0) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No.: %d\n", students[i].roll_no);
            printf("Age: %d\n", students[i].age);
            printf("Sex: %c\n", students[i].sex);
            printf("Address: %s\n", students[i].address);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }

    printf("Students with more than 80%% marks:\n");
    for (int i = 0; i < num_students; i++) {
        if (students[i].marks > 80.0) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No.: %d\n", students[i].roll_no);
            printf("Age: %d\n", students[i].age);
            printf("Sex: %c\n", students[i].sex);
            printf("Address: %s\n", students[i].address);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
        }
    }

    return 0;
}
