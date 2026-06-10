/* Benyamin's machine program. This program is a part of my machine having 5 working-modes. */
#include <stdio.h>

/**********************************************
 * triangle - computes the area of a triangle *
 * Parameters								  *
 * width -- Width of the triangle			  *
 * hight -- hight of the triangle             *
 * Returns									  *
 * The area of triangle                       *
 **********************************************/
 float triangle(float width, float hight) {
	float area;		/* The area of triangle */
	area = width * hight / 2.0;
	return (area);
}

/*********************************************************
 * Miles to Kilo - Converts Miles per hour to kilomiters *
 * Parameters											 *
 * speed -- Speed in miles								 *
 * Returns						           			     *
 * Kilomiters per hour			                         *
 *********************************************************/
float speed(float miles) {
	float kilomiters;	/* Kilomiters per hour */
	kilomiters = miles * 1.60934;
	return (kilomiters);
}

char line[100];	/* Input variable */
int machineMode;

int main() {
	printf("**You are changing the machine's working-mode**\n");

		while(1) {
	printf("Enter the number (0-5): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &machineMode);

		switch(machineMode) {
			case 0:
			char line[1000]; /* To store speed in miles */
			float miles;
			printf("Miles per hour to kilomiters is launched.\n Enter speed in miles: ");
			fgets(line, sizeof(line), stdin);
			sscanf(line, "%f", &miles);
				if (miles >= 0)
			printf("%f mph = %f kph\n", miles, speed(miles));
				else
					printf();
			break;
			case 1:
				printf("Triangle area calculator is launched.\n");
				printf("Area = %f\n", triangle(41.5, 20.6));
			break;
			default:
				printf("!You have entered WRONG NUMBER. Please Enter a number between 0 to 5.\n");
			continue;
		}
		printf("Done!\n");
		break;
	}
	return (0);
}
