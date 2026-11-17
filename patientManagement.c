#include <stdio.h>

struct Patient
{
	int patient_ID;
	char name[20];
	int age;
	float temp;
	int days_admitted;
	
	};

int main()
{
	Patient patient1;
	
	printf("===Hospital patient registraftion system===\n");
	
	printf("Enter patient's name: \t");
	fgets(patient1.name, sizeof(patient1.name), stdin);
	
	printf("Enter patient's ID number: \t");
	scanf("%d", &patient1.patient_ID);
	
	printf("Ennter the age of the patient: \t");
	scanf("%d", &patient1.age);
	
	printf("Enter the patient's body temperature:  \t");
	scanf("%f", &patient1.temp);
	
	printf("Enter the number of days the patient has been admitted: \t");
	scanf("%d", &patient1.days_admitted);
	
	printf("===Patient's details===\n");
	printf("Name: %s \n", patient1.name);
	printf("ID number: %d\n", patient1.patient_ID);
	printf("Age: %d \n", patient1.age);
	printf("Temperature: %.1f\n", patient1.temp);
	printf("Days admitted: %d\n", patient1.days_admitted);
	printf("Cost: KSH.%.2f \n", patient1.days_admitted * 2500.00);
	return 0;
}
