#include <stdio.h>
int main()
{
    int salary;
    float taxrate;
    float taxamount;
    float netSalary;
    printf("Enter your Salary amount:");
    scanf("%d", &salary);
    printf("Enter taxrate between 0 to 100:");
    scanf("%f", &taxrate);
    if(taxrate<0 || taxrate>100)
    {
        printf("Please enter value between 0 to 100.\n");
    }
    while(taxrate<0 || taxrate>100);
    taxamount=(taxrate/100)*salary;
    netSalary=salary-taxamount;
    printf("Amount of tax to be paid: %2f\n", taxamount);
    printf("Net salary after tax amount given: %2f\n", netSalary);
    return 0;
}
    
