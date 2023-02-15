#include <stdio.h>

int main(){
		int x, y, result;
		
		printf("Please enter your first number: ");
		scanf("%d", &x);

		printf("Please enter your second number: ");
		scanf("%d", &y);

		char operator;
		
		printf("Please enter your arithmetic operator :");
		scanf("%d", &operator);
		
		if(operator='+'){
			result=x+y;
			printf("The sum of the two numbers is %d ", &result);
		}
}
