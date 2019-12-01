//Assignment - question 2 convert a number from decimal to binari

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void decToBinary(double); //Function declaretion

void main()
{
	double number ;
	
	printf("Enter flouting number: "); 
	scanf("%lf", &number);
	decToBinary(number);//Calls the function with the given variable and execute it.
}

void decToBinary(double number)//Convert the given veriable from decimal base to binary base
{
	int whole_number, reminder, binary_whole = 0, i = 1; /*Local variables*/
	int wholeOfFloat, count = 0;
	double fraction, binary_float = 0, binary_number, j = 10.0;
	
	whole_number = (int)number; //Saves only the whole value of the number
	fraction = number - whole_number;//saves only the fraction of the number

	while (whole_number != 0)//Takes the whole value and convert it to a binary number
	{
		reminder = whole_number % 2;
		whole_number = whole_number / 2;
		binary_whole = binary_whole + (reminder * i);
		i = i * 10;
	}

	while(fraction != 1 && count <= 8)//Takes the fraction value and convert it to a binary number
	{

		fraction = fraction * 2;
		wholeOfFloat = (int)fraction;
		binary_float = binary_float + wholeOfFloat / j;
		j = j *10;
		count++;
		
	}

	binary_number = binary_whole + binary_float;//Add both integet and fraction 
	printf("%lf (10) = %0.8lf (2)", (double)number, binary_number);//Print the binary converted number
}
