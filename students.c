#include<stdio.h>
int main()
{
      char name[100];
    int a, id, marks, age;
    char choice;
      printf("=====================================\n");
      printf("   STUDENT MANAGEMENT SYSTEM   \n");
      printf("=====================================\n");
      printf("1. Add Student\n");
      printf("2. View Students\n");
      printf("3. Search Student\n");
      printf("4. Update Student\n");
      printf("5. Delete Student\n");
      printf("6. Student Results\n");
      printf("7. Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &a);
     switch(a)
     {
         case 1:
             printf("\n=====================================\n");
             printf("   Add Student functionality   \n");
             printf("=====================================\n");
             printf("Add student details here...\n");
             printf("Enter student ID: ");
             scanf("%d", &id);
             printf("Enter student name: ");             
             scanf("%s", name);
             printf("Enter student marks: ");
             scanf("%d", &marks);
             printf("Enter student age: ");
             scanf("%d", &age);
             printf("Student added successfully!\n");
             printf("Student Details:\n-------------------------------------\n");
             printf("Student ID: %d\n", id);
             printf("Student Name: %s\n", name);
             printf("Student Marks: %d\n", marks);
             printf("Student Age: %d\n", age);
             printf("Do you want to add another student? (y/n): ");
             scanf(" %c", &choice);
             break;
         case 2:
             printf("\n=====================================\n");
             printf("   View Students functionality   \n");
             printf("=====================================\n");
             break;
         case 3:
             printf("\n=====================================\n");
             printf("   Search Student functionality   \n");
             printf("=====================================\n");
             break;
         case 4:
             printf("\n=====================================\n");
             printf("   Update Student functionality   \n");
             printf("=====================================\n");
             break;
         case 5:
             printf("\n=====================================\n");
             printf("   Delete Student functionality   \n");
             printf("=====================================\n");
             break;
         case 6:
             printf("\n=====================================\n");
             printf("   Student Results functionality   \n");
             printf("=====================================\n");
             break;
         case 7:
             printf("\n=====================================\n");
             printf("   Exiting the program   \n");
             printf("=====================================\n");
             break;
         default:
             printf("Invalid choice. Please try again.\n");
     }
    return 0;
}