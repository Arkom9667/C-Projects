#include<stdio.h>

int main(){
char operator;
double first, second;
printf("Choose your operator(+,-,*,/): ");
scanf("%c", &operator);

printf("Enter the two nums in order: ");
scanf("%lf %lf", &first, &second);

switch(operator)
{
case '+' :
printf("%.2lf + %.2lf = %.2lf", first, second, (first+second));
break;

case '-' :
printf("%.2lf - %.2lf = %.2lf", first, second, (first-second));
break;

case '*' :
printf("%.2lf * %.2lf = %.2lf", first, second, (first*second));
break;

case '/' :
if(second !=0.0)
printf("%.2lf / %.2lf = %.2lf", first, second, (first/second));

else
printf("Yeah, divide by zero, while I'm at it, why don't I make a time machine as well");
break;

default:
printf("Wrong Operator");

}
return 0;
}