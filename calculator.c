#include <stdio.h>

int main(){
		int x, y, result;
		
		printf("Please enter your first number: ");
		scanf("%d", &x);

		printf("Please enter your second number: ");
		scanf("%d", &y);

		char operator;
		
		printf("Please enter your arithmetic operator :");
		scanf("%hhd", &operator);
		
		if(operator='+'){
			result=x+y;
			printf("The sum of the two numbers is %d ", result);
		}
		else if(operator='-'){
			result=x-y;
			printf("Subtracting the two numbers results to %d ", result);
		}
		else if(operator='*'){
			result=x*y;
			printf("Multiplying the two numbers results to %d ", result);
		}
		else if(operator='/'){
			result=x/y;
			printf("Dividing the two numbers results to %d ", result);
		}
		else if(operator='%'){
			result=x%y;
			printf("The modulus of the two numbers is %d ", result);
		}

		return 0;
}
