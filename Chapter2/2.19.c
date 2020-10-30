#include <stdio.h>
#include <conio.h>
#include <math.h>

//Exercise 2.19- C- 01/04/2020


int main()
{
	//initialize
	int a,b,c;
	int sum, product, smallest, biggest;
	double average;
	
	//Prompt
	printf( "%s","Enter three different integers : " );
	scanf( "%d %d %d",&a,&b,&c );
	
	//Calculate
	sum = a+b+c ;
	product = a*b*c;
	average = sum/3;
	
	//Comparing arithmetics
	//Find the biggest
	if( (a>b)&&(a>c) ){
		biggest = a;
	} // end if
	if( (b>a)&&(b>c) ){
		biggest = b;
	} // end if
	if( (c>b)&&(c>a) ){
		biggest = c;
	} // end if
	
	// Find the smallest
		if( (a<b)&&(a<c) ){
		smallest = a;
	} // end if
	if( (b<a)&&(b<c) ){
		smallest = b;
	} // end if
	if( (c<b)&&(c<a) ){
		smallest = c;
	} // end if
	
	//display result
	printf("\n%s%d\n%s%d\n%s%5.2lf\n%s%d\n%s%d","Sum is ",sum,"Product is ",
	product,"Average is ",average,"Smallest is ",smallest,"Biggest is ", biggest );


} //end main

