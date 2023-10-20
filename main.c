#include <stdio.h>
#include <stdlib.h>
typedef struct Person{
	char* name; 
	int age; 
}person; //  person refer to struct Person 
typedef struct Student{
	int school_number;
	struct Person p; 
}student;
int main() {
	student* std = (student*)malloc(sizeof(student));
	std -> school_number = 2000;
	std -> p.name= "Derya";
	std -> p.age=30; 
	
	
	printf("Adress of std's pointer: %p\n",&std);
	printf("Adress of student: %p\n",std); // Adress of student keeps on being  code with  malloc 
	printf("Adress of student's school number: %p\n",&(std-> school_number));
	printf("Adress of student's person: %p\n",&(std->p));
	printf("Adress of student's person's name : %p\n",&(std->p.name));
	printf("Adress of student's person's age: %p\n",&(std->p.age));
	return 0;
}
