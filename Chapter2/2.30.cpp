#include <stdio.h>
#include <conio.h>
#include <math.h>

//Exercise 2.30 - C- 01/04/2020

int main()
{
	//initialize
	int a;
	int tmp1,tmp2,tmp3,tmp4,tmp5; // temporary variable.
	int rmd1,rmd2,rmd3,rmd4,rmd5; // remainder variable.
	int p1,p2,p3,p4,p5;           //position variable in order.
	
	//Prompt
	printf("%s","Please type 5-digit-number: ");
	scanf("%d",&a );
	
	//Arithmetics
	
	//Block 1
	tmp1 = a/10;
	rmd1 = a%10;
	if( rmd1 == 0 ){
		p5 = 0;
	}
	else p5 = rmd1 ;
	
	//Block 2
	tmp2 = tmp1/10;
	rmd2 = tmp1%10;
	if( rmd2 == 0 ){
		p4 = 0;
	}
	else p4 = rmd2 ;
	
	//Block 3
	tmp3 = tmp2/10;
	rmd3 = tmp2%10;
	if( rmd3 == 0 ){
		p3 = 0;
	}
	else p3 = rmd3 ;
	//Block 4
	tmp4 = tmp3/10;
	rmd4 = tmp3%10;
	if( rmd4 == 0 ){
		p2 = 0;
	}
	else p2 = rmd4 ;
	//Block 5
	tmp5 = tmp4/10;
	rmd5 = tmp4%10;
	if( rmd5 == 0 ){
		p1 = 0;
	}
	else p1 = rmd5 ;


	printf("\n%5d%5d%5d%5d%5d", p1, p2, p3, p4, p5 );





}

