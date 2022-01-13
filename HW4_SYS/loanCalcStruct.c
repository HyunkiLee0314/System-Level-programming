#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct s
{
double INT,B,P;
}cost[100];

int main(){

double loan,rate;
int num,i;
double A,r,b;

printf("Enter amount of loan : $ ");
scanf("%lf",&loan);
printf("Enter interest rate per year: %% ");
scanf("%lf",&rate);
printf("Enter number of payments : ");
scanf("%d",&num);

r = rate/1200;
A = loan*((r*pow(1+r,num))/(pow(1+r,num)-1));
cost[0].B = loan;

printf("\nMontly payment should be %.2lf\n",A);
printf("=============================AMORTIZATION SCHEDULE===================\n");
printf("# \t Payment \t Principal \t Interest \t Balance\n");

for( i=1; i<=num; i++){
cost[i].INT =cost[i-1].B*r;
cost[i].P = A-cost[i].INT;
cost[i].B = cost[i-1].B - cost[i].P;

printf("%d \t $%.2lf \t $%.2lf \t $%.2lf ",i,A,cost[i].P,cost[i].INT);

if(cost[i].INT/10.0<1.0)
printf("\t\t $%.2lf",cost[i].B);
else
printf("\t $%.2lf",cost[i].B);
printf("\n");
}

return 0;

}
