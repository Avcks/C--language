#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int standard;
	char school[100];
};

int main()
{
	struct student s1, s2, s3;
	//s1
	s1.id = 101;
	s1.age = 18;
	s1.standard = 12;
	strcpy(s1.name, "john");
	strcpy(s1.course, "c");
	strcpy(s1.city, "NY");
	strcpy(s1.school, "abck ds");
	
	printf("id: %d\nname: %s\nage: %d\ncourse: %s\ncity: %s\nstandard: %d\nschool: %s", s1.id, s1.name, s1.age , s1.course, s1.city, s1.standard, s1.school);
	
	printf("\n");
	//s2
	s2.id = 102;
	s2.age = 17;
	s2.standard = 11;
	strcpy(s2.name, "johnathan");
	strcpy(s2.course, "c");
	strcpy(s2.city, "NY");
	strcpy(s2.school, "abck ds");
	
	printf("\nid: %d\nname: %s\nage: %d\ncourse: %s\ncity: %s\nstandard: %d\nschool: %s", s2.id, s2.name, s2.age , s2.course, s2.city, s2.standard, s2.school);
	
	printf("\n");
	//s3
	s3.id = 103;
	s3.age = 16;
	s3.standard = 10;
	strcpy(s3.name, "tech");
	strcpy(s3.course, "c");
	strcpy(s3.city, "NY");
	strcpy(s3.school, "abck ds");
	
	printf("\nid: %d\nname: %s\nage: %d\ncourse: %s\ncity: %s\nstandard: %d\nschool: %s", s3.id, s3.name, s3.age , s3.course, s3.city, s3.standard, s3.school);
}