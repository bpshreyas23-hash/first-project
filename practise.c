#include<stdio.h.>
int main(){
 int marks[];
 printf("Enter marks of 5 subjects\n");
 for(int i=0; i<5; i++){
    printf("Enter marks of subject %d: ", i+1);
     scanf("%d", &marks[i]);
 }
 printf("Marks entered are:\n");
 for(int i=0; i<5; i++){
    printf("%d ", marks[i]);
 }
    return 0;
}