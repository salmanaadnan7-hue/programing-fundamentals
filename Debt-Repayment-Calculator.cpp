#include<iostream>
using namespace std;

int main()
{
    float iy, mp, im, m = 0, i, paid, c, l;

    // l = loan, iy = interest per year, mp = monthly payment
    // im = interest per month, i = interest amount, m = month counter

    cout << "Enter loan amount=";
    cin >> l;
    cout << "Enter interest rate per year=";
    cin >> iy;
    cout << "Enter monthly payment=";
    cin >> mp;

    // Convert annual interest % to monthly decimal
    im = (iy / 12) / 100;

    // First month calculation
    i = l * im;
    paid = mp - i; // Amount that actually reduces the loan
    l = l - paid;
    m = 1;

    if (mp < i)
    {
        cout << "the monthly payment is too low, and with this monthly "
            << "payment, the loan amount could not be repaid.";
    }
    else
    {
        // Loop until the remaining loan is smaller than the interest
        for (c = 1; l > i; c++)
        {
            i = l * im;      // Calculate interest for this month
            paid = mp - i;   // Subtract interest from payment
            l = l - paid;    // Reduce the principal loan
            m = m + 1;       // Increment month count
        }
        cout << "Total months to repay: " << m << endl;
    }

    system("pause");
    return 0;
}