#include <stdio.h>
int main()
{
    float salary;
    float taxrate;
    float taxamount;
    float netSalary;
    printf("Enter your Salary amount:");
    scanf("%f", &salary);
    printf("Enter taxrate as percentage:");
    scanf("%f", &taxrate);
    taxamount=(taxrate/100)*salary;
    netSalary=salary-taxamount;
    printf("Amount of tax to be paid: %2f\n", taxamount);
    printf("Net salary with tax: %2f\n", netSalary);
    return 0;
}
    