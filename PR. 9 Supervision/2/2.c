#include<stdio.h>
#include<string.h>

struct student
{
	int rollno;
	char name[100];
	int chem;
	int math;
	int phy;
	int total;
	float per;
};

int main()
{
	struct student s[5];
	for(int i=0; i<5; i++){
		printf("Enter Detail of Student %d\n", i+1);
		printf("Roll No => ");
		scanf("%d", &s[i].rollno);
		printf("Name => ");
		scanf(" %s", &s[i].name);
		printf("Chemistry => ");
		scanf("%d",&s[i].chem);
		printf("Mathematics => ");
		scanf("%d",&s[i].math);
		printf("Physics => ");
		scanf("%d",&s[i].phy);
		printf("\n");
	    s[i].total = (s[i].chem + s[i].math + s[i].phy);
	    s[i].per = (s[i].total/3);
	}
	printf("\n");

	for(int i=0; i<5; i++)
	{
		printf(" %s => (%d)\n", s[i].name, s[i].rollno);
		printf("Chemistry => %d\n", s[i].chem);
		printf("Mathematics => %d\n", s[i].math);
		printf("Physics => %d\n", s[i].phy);
		printf("Total => %d/300\n", s[i].total);
		printf("Percent => %.2f\n", s[i].per);
		printf("\n");
	}


}


/*
Enter Detail of Student 1
Roll No => 121
Name => raj
Chemistry => 95
Mathematics => 90
Physics => 88

Enter Detail of Student 2
Roll No => 122
Name => Divya
Chemistry => 92
Mathematics => 90
Physics => 84

Enter Detail of Student 3
Roll No => 123
Name => piyush
Chemistry => 72
Mathematics => 87
Physics => 93

Enter Detail of Student 4
Roll No => 124
Name => vatsal
Chemistry => 68
Mathematics => 96
Physics => 85

Enter Detail of Student 5
Roll No => 125
Name => sagar
Chemistry => 91
Mathematics => 89
Physics => 77


raj => (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00

piyush => (122)
Chemistry => 92
Mathematics => 90
Physics => 84
Total => 266/300
Percent => 88.00

vatsal => (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00

sagar => (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00

Divya => (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.00
*/