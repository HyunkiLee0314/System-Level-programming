#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argi, char *argc[]){

double loan,rate;
int num,i;
double A,r,b;
double INT[1000],B[1000],P[1000];

loan = atof(argc[1]);
rate = atof(argc[2]);
num = atof(argc[3]);

r = rate/1200;
A = loan*((r*pow(1+r,num))/(pow(1+r,num)-1));
*(B) = loan;

printf("\nMontly payment should be %.2lf\n",A);
printf("=============================AMORTIZATION SCHEDULE===================\n");
printf("# \t Payment \t Principal \t Interest \t Balance\n");

for( i=1; i<=num; i++){
*(INT+i) = *(B+i-1)*r;
*(P+i) = A-*(INT+i);
*(B+i) = *(B+i-1)-*(P+i);

printf("%d \t $%.2lf \t $%.2lf \t $%.2lf ",i,A,P[i],INT[i]);

if(INT[i]/10.0<1.0)
printf("\t\t $%.2lf",B[i]);
else
printf("\t $%.2lf",B[i]);
printf("\n");
}

return 0;

}
