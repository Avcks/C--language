#include <stdio.h>

int main() {
    FILE *file;
    char name[50], course[50];

    file=fopen("data.txt", "w");
    if(file==NULL) 
	{
        printf("Unable to open file for writing.\n");
    }

    for(int i=0; i<3; i++) 
	{
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", name);
        printf("Course: ");
        scanf("%s", course);

        fprintf(file, "Student %d:\n", i+1);
        fprintf(file, "Name: %s\n", name);
        fprintf(file, "Course: %s\n\n", course);
    }
    fclose(file);
    printf("writian successfully\n");
}

/*
Enter details for student 1:
Name: aum
Course: as
Enter details for student 2:
Name: sasaf
Course: as
Enter details for student 3:
Name: asdaf
Course: as
writian successfully

note:-
Student 1:
Name: aum
Course: as

Student 2:
Name: sasaf
Course: as

Student 3:
Name: asdaf
Course: as
*/