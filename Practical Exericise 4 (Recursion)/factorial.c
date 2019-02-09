#include "header.h"
	
void nFact(){
	int prod=1, x, end;
	
	printf("\n\n\t\t\t\tFactorial series using non-recursive function.\n\n");
	
	end = numScan(0,12);
	
	for(x=2;x<=end;prod*=x++);

	printf("\n\t\t\t\t%d Factorial (%d!): %d\n\n\t\t\t\tPress any key to continue.", end, end, prod);
	
	getch();
}

void rFact(int x, int prod, int end){
	if(x==1){
		printf("\n\n\t\t\t\tFactorial series using non-recursive function.\n\n");
		
		end = numScan(0,12);
	}
	
	if(x<=end){
		prod *= x++;
		rFact(x, prod, end);
	}
	else{
		printf("\n\t\t\t\t%d Factorial (%d!): %d\n\n\t\t\t\tPress any key to continue.", end, end, prod);
	
		getch();
	}
}
