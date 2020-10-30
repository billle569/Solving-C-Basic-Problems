#include <stdio.h>
#include <conio.h>
#include <math.h>

//Exercise 2.18- C- 01/04/2020

int main()
{
	//intitialize a and b
	int a;
	int b;
	
	// Prompt
	printf( "%s", "Please type 2 numbers :" );
	scanf( "%d %d",&a,&b );
	
	// if loop to compare a and b
	if( a>b ){
		printf("\n%d%s",a," is larger !");
	}
	if( a<b ){
		printf( "\n%d%s",b," is larger !");
	}
	if( a==b ){
		printf( "%s","They are equal !");
	}


}

