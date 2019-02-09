#include "header.h"

int main(int argc, char *argv[]) {
	int choice=1;
	char ch;
	
	for(;;){
		
		printf("code by: do not steal\n\n\n");
		if(choice==1){printf("\t\t\t\t[X] Factorial series using non-recursive function.\n");}else{printf("\t\t\t\t[ ] Factorial series using non-recursive function.\n");}
		if(choice==2){printf("\t\t\t\t[X] Factorial series using recursive function.\n");}else{printf("\t\t\t\t[ ] Factorial series using recursive function.\n");}
		if(choice==3){printf("\t\t\t\t[X] Fibonacci series using non-recursive function.\n");}else{printf("\t\t\t\t[ ] Fibonacci series using non-recursive function.\n");}
		if(choice==4){printf("\t\t\t\t[X] Fibonacci series using recursive function.\n");}else{printf("\t\t\t\t[ ] Fibonacci series using recursive function.\n");}
		if(choice==5){printf("\t\t\t\t[X] Sum series using non-recursive function.\n");}else{printf("\t\t\t\t[ ] Sum series using non-recursive function.\n");}
		if(choice==6){printf("\t\t\t\t[X] Sum series using recursive function.\n\n");}else{printf("\t\t\t\t[ ] Sum series using recursive function.\n\n");}
		if(choice==7){printf("\t\t\t\t[X] Exit.\n");}else{printf("\t\t\t\t[ ] Exit.\n");}
		
		ch = getch();
		
		if(tolower(ch)=='w' || ch==72){
			if(choice>1){
				choice--;
			}
			else{
				choice = 7;
			}
		}
		else if(tolower(ch)=='s' || ch==80){
			if(choice<7){
				choice++;
			}
			else{
				choice = 1;
			}
		}
		else if(ch==13 || ch==32){
			if(choice==1){nFact();}
			else if(choice==2){rFact(1,1,1);}
			else if(choice==3){nFibo();}
			else if(choice==4){rFibo(1,0,1,1);}
			else if(choice==5){nSum();}
			else if(choice==6){rSum(1,0,1);}
			else if(choice==7){printf("\n\n\t\t\t\tgoodbye ma nigga!\n\n");break;}
			
			//choice=1;
		}
		
		system("cls");
	}
	
	return 0;
}

int numScan(int min, int max){
	char input[5];
	int num=1;
	
	do{
		if(num<min || num>max){
			printf("\t\t\t\tInvalid input, enter again [%d - %d]: ", min, max);
		}	
		else{
			printf("\t\t\t\tEnter limit [%d - %d]: ", min, max);
		}
		
		gets(input);
		
		if(isdigit(input[0])){
			num = atoi(input);		
		}
		else{
			num = max+1;
		}
	}while(num<min || num>max);
	
	return num;
}
