/*Create a structure named company which has name, address, phone and
 noOfEmployee as member variables. Read name of company, its address,
  phone and noOfEmployee. Finally display these members' value.*/

#include<stdio.h>
#include<conio.h>
struct company
{
    char name[50];
    char address[50];
   long long int phone;
    int noOfEmployee;

};
int main()
{
    struct company c;
    printf("Enter company name: ");
    scanf("%[^\n]s",&c.name);
    printf("\nEnter the address:\t");
    scanf(" %[^\n]s",&c.address);
    printf("\nEnter phone number:\t");
    scanf("%lld",&c.phone);
    printf("\nEnter no of Emplyees:\t");
    scanf("%d",&c.noOfEmployee);
    printf("\n\n");
    printf("Company name: %s",c.name);
    printf("\nAddress: %s",c.address);
    printf("\nPhone number: %lld",c.phone);
    printf("\nNo of Employee: %d",c.noOfEmployee);
    getch();
    return 0;
}

