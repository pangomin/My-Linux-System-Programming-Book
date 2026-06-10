#include <stdio.h>

char line[100];
int work_time;
float hourly_wage;
float weekly_pay;
float overtime;
float overtime_wage;

int main()
{
	printf("Enter the number of time that you worked: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &work_time);

	printf("Enter your hourly wage: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &hourly_wage);

	if (40 < work_time) {
		overtime = work_time % 40;
	}

	overtime_wage = overtime * (hourly_wage / 2);
	weekly_pay = (work_time - overtime) * hourly_wage + overtime_wage;
	printf(" Overtime: %f\n Weekly_pay: %f\n overtime_wage: %f\n",
		overtime, weekly_pay, overtime_wage);

	return (0);
}
