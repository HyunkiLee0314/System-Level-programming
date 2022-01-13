#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
double loan,rate;
int num,i;
double A,r,B;
double interestPay,principalPay;

printf("Enter amount of loan: $ ");
scanf("%lf",&loan);
printf("Enter Interest rate per year : %% ");
scanf("%lf",&rate);
printf("Enter number of payments : ");
scanf("%d",&num);
r = rate/(12*100);
A = loan*(r/(1 - pow((1 + r),-num)));
printf("\nMontly payment should be $%.2lf\n",A);
printf("============================AMORTIZATION SCHEDULE===============\n");
printf("#\tPayment\t\tPrincipal\tInterest\tBalance\n");

for(i = 1; i <= num;i++)
{
printf("%d\t$%.2lf\t\t",i,A);
interestPay = loan * r;
principalPay = A - interestPay;
B = loan - principalPay;
printf("$%.2lf\t\t$%.2lf\t\t$%.2lf\n",principalPay,interestPay,B);
loan = B;
}

return 0;
}
