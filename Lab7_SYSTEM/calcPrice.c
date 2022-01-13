#include <stdio.h>

int main(void)
{
int item;
double price;
double total;
int quantity;
char date[12];
printf("Enter item number: ");
scanf("%d", &item);

printf("Enter unit price: ");
scanf("%lf", &price);

printf("Enter quantity: ");
scanf("%d", &quantity);

printf("Enter purchase date (mm/dd/yyyy) : ");
scanf("%s", &date);

total=price*quantity;

printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");

printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", item, price, quantity, date, total);
return 0;
}
