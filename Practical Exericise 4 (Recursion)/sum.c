#include "header.h"

void nSum(){
	int sum=0, x, end;
	
	printf("\n\n\t\t\t\tSum series using non-recursive function.\n\n");
	
	end = numScan(0,65000);
	
	printf("\n\t\t\t\tSum: ");
	
	for(x=1;x<=end;sum+=x++);
	
	printf("%d\n\n\t\t\t\tPress any key to continue.", sum);
	
	getch();
}

void rSum(int x, int sum, int end){
	
	if(x==1){
		printf("\n\n\t\t\t\tSum series using non-recursive function.\n\n");
	
		end = numScan(0,43000);
	
		printf("\n\t\t\t\tSum: ");
	}
	
	if(x<=end){
		sum+=x++;
		rSum(x, sum, end);
	}
	else{
		printf("%d\n\n\t\t\t\tPress any key to continue.", sum);
	
		getch();
	}
}
