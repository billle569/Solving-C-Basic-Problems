#include <stdio.h>
#include <conio.h>
#include <math.h>

//Exercise 3.16 - C- 01/04/2020

int main()
{
	//initiallize
	double sumOfMiles, sumOfGallons ; //Sum
	int s; // sentinel
	double miles, gallons ; //Input
	double average ;
	//Set to zero
	sumOfMiles = 0;
	sumOfGallons = 0;
	
	//Prompt
	printf( "%s","Enter gallons used, -1 to end : " );
	scanf( "%lf", &gallons );
	//while loop
	while( gallons != -1 ){
	sumOfGallons += gallons;
	//prompt
	printf( "\n%s","Enter the miles driven : ")	;
	scanf( "%lf",&miles );
	sumOfMiles += miles;
	
	//display average each time
	printf( "\n%s%lf\n","The average miles/gallons was ", miles/gallons);
	
	printf( "%s", "\nEnter gallons used, -1 to end :");
	scanf( "%lf", &gallons);	
	

	} // end while

	// Calculate the average !
	if( gallons == 0 ){
		printf(" \n There is no gallons used ! ");
	} //end if
	else {
		average = sumOfMiles / sumOfGallons ;
		printf( "\nThe overall average miles/ gallons was %lf", average );
	} // end else

}// end main

