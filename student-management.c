#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    char name[30];
    char subject[15];
    float gpa;
    int age;
};

int main() {

    int choice, i, l, id, posit;
    
    struct Student students[10];
    
    printf("Welcome to the student management app\n");

    for (i = 0; i < 10;) {
    
        printf("\n****************************\n\n");
        
        printf("Please select an option:\n\n");
        printf("1 - Create a student\n");
        printf("2 - List students\n");
        printf("3 - Select student by ID\n");
        printf("0 - Quit\n\n");

        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                students[i].id = i+1;
                printf("\nPlease inform the student's name: ");
                scanf("%s", &students[i].name);
                getchar();
                printf("\nPlease inform the student's subject: ");
                scanf("%s", &students[i].subject);
                getchar();
                printf("\nPlease inform the student's GPA: ");
                scanf("%f", &students[i].gpa);
                getchar();
                printf("\nPlease inform the student's age: ");
                scanf("%d", &students[i].age);
                getchar();

                printf("\nStudent successfully created!\n");
                i++;
                break;
            
            case 2:
                printf("\nStudents:\n");
                printf("******************\n\n");
                
               for (l = 0; l < 10; l++) {
                   if (l < i) {
                        printf("ID: %d\n", students[l].id);
                        printf("Name: %s\n", students[l].name);
                        printf("Subject: %s\n", students[l].subject);
                        printf("GPA: %.1f\n", students[l].gpa);
                        printf("Age: %d\n\n", students[l].age);
                   }
               }

               printf("Press ENTER to continue.");
               while(getchar() != '\n');
               break;
            
            case 3:

                printf("\nPlease insert the desired Student ID: ");
                scanf("%d", &id);
                getchar();
                posit = id - 1;

                if (id == students[posit].id) {
                    printf("\nID: %d\n", students[posit].id);
                    printf("Name: %s\n", students[posit].name);
                    printf("Subject: %s\n", students[posit].subject);
                    printf("GPA: %.1f\n", students[posit].gpa);
                    printf("Age: %d\n\n", students[posit].age);

                    printf("Press ENTER to continue.");
                    while(getchar() != '\n');
                } else {
                    printf("Student ID no. %d not found.\n\n", id);
                    
                    printf("Press ENTER to continue.");
                    while(getchar() != '\n');
                }
                break;
            
            case 0:
                printf("\nThank you for using the application!\n");
                printf("Press ENTER to continue.");
                while(getchar() != '\n');
                exit(0);
            
            default:
                printf("\nInvalid option!\n");
                break;
        }
    }

    return 0;
}