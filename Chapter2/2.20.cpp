#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159

//Exercise 2.20- C- 01/04/2020

int main()
{
	//initialize
	double r;
	double d,c,a;
	const double pi = 3.14159;
	//prompt
	printf("Please type the radius of circle : ");
	scanf( "%lf", &r );
	
	d = r*2;
	c = 2*PI*r;
	a = PI*r*r; 
	
	//d
	printf("\n%s%15.2lf\n%s%10.2lf\n%s%19.2lf","Diameter is ",d,"Circumference is ",c,"Area is ",a);








}

