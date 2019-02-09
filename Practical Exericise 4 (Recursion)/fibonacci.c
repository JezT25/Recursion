#include "header.h"
	
void nFibo(){
	int i, x=0, y=1, z, end;
	
	printf("\n\n\t\t\t\tFibonacci series using non-recursive function.\n\n");
	
	end = numScan(1,15);
	
	printf("\n\t\t\t\tFibonacci Sequence: ");
	
	for(i=0;i<end;i++){
		printf("%d ", x);
		z = x+y;
		x = y;
		y = z;
	}
	
	printf("\n\n\t\t\t\tPress any key to continue.");
	
	getch();
	
}

void rFibo(int rec, int x, int y, int end){
	int z;
	
	if(rec==1){
		printf("\n\n\t\t\t\tFibonacci series using non-recursive function.\n\n");
	
		end = numScan(1,15);
		
		printf("\n\t\t\t\tFibonacci Sequence: ");
	}
	
	if(rec<=end){
		printf("%d ", x);
		z = x+y;
		rFibo(++rec, y, z, end);
	}
	else{
		printf("\n\n\t\t\t\tPress any key to continue.");
	
		getch();
	}
}
