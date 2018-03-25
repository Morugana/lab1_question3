// TEE2101 Programming Methodology 
// Lab 1 Question 3

#include <stdio.h>
#include <math.h>
#define X 0.75
#define PI 3.14 //define X and PI so that the values will be fixed.


int main()
{
	double R, Z;

	printf("Enter Radius R: \n");
	scanf_s("%lf", &R);
	
	/*if-else statement below is to satisfy the input R range is within [0,1]
	and compute Z using the formula given
	other values will be rejected*/

	if (R >= 0 && R <= 1)
	{
		Z = 4.0 / 3.0 * PI*pow(R, 3); //divide 4.0 by 3.0 to prevent overflow
		printf("\nVolume of sphere: %.4lf\n", Z);

		/*nested if-else statement below is to compare between input R and the given X only.*/

		if (R > X)
		{
			printf("\nRadius R is greater than X\n");
		}
		else if (R == X)
		{
			printf("\nRadius R is equals to X\n");
		}
		else
		{
			printf("\nRadius R is smaller than X\n");
		}
	}
	else
	{
		/*nested if-else statement below is to check input R falls in negative or positive out of range [0,1]*/

		if (R < 0)
		{
			printf("\nRadius R is smaller than 0.\nOut of range [0,1].\n");
		}
		else
		{
			printf("\nRadius R is greater than 1.\nOut of range [0,1].\n");
		}

	}

	getchar();
	getchar();
	return 0;
}