#include <iostream>

using namespace std;

float ReadPrice(string messages)
{ float price; 

    do
    {
        cout << messages << endl;
        cin >> price;
    } while (price < 0);

    return price;
    
}
    float totalBillAfterServiceAndTax(float totalBill)
    {

        totalBill = totalBill * 1.1;
        totalBill = totalBill * 1.16;

        return totalBill;
         
    }
int main ()
{
   float totalBill =  ReadPrice("please enter price :");

    cout << " total bill :" <<  totalBill <<endl;

    cout << " total bill service Fee And Sales Tax \t" << totalBillAfterServiceAndTax(totalBill) << endl;
}