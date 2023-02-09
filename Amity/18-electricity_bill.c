#include <stdio.h>

int main()
{
    int cust_id, cust_unit;
    float chrg, sur_chrg=0, gr_amt, net_amt;
    char cust_name;

    printf("Input Customer ID: ");
    scanf("%d", &cust_id);
    printf("Input the name of the customer: ");
    scanf("%c", &cust_name);
    printf("Input the unit consumed by the customer: ");
    scanf("%d", &cust_unit);
    if (cust_unit <200 )
        chrg = 1.20;
    else	if (cust_unit >= 200 && cust_unit < 500)
        chrg = 1.80;
    else
        chrg = 2.00;
    gr_amt = cust_unit  * chrg;
    if (gr_amt>400)
        sur_chrg = gr_amt * 15/100.0;
    net_amt = gr_amt + sur_chrg;
    if (net_amt  < 100)
        net_amt =100;
    printf("\nElectricity Bill");
    printf("\nCustomer IDNO                       : %d", cust_id);
    printf("\nCustomer Name                       : %c", cust_name);
    printf("\nunit Consumed                       : %d", cust_unit);
    printf("\nAmount Charges @Rs. %.2f  per unit  : %.2f",chrg,gr_amt);
    printf("\nSurchage Amount                     : %.2f",sur_chrg);
    printf("\nNet Amount Paid By the Customer     : %.2f",net_amt);
    printf("\n");
return 0;
}
