#include <stdio.h>

int main(){
		int x, y, sum, div, mul, sub, mod;
		char operator;


		printf("Enter operator");
		scanf("%c", &operator);
		printf("Enter two operands: ");
		scanf("%d %d", &x, &y);

		switch(operator)
		{
			case '+':
				sum = x + y;
				printf("sum = %d", sum);
				break;
			case '-':
				sub = x- y;
				printf("subtraction = %d", sub);
				break;
			case '*':
				mul = x * y;
				printf("Multiplication = %d", mul);
				break;
			case '/':
				div = x / y;
				printf("Division = %d", div);
				break;
			case '%':
				mod = x % y;
				printf("Modulus = %d", mod);
				break;

		}

		/**printf("Please enter your first number: ");
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
		}*/

		return 0;
}
