/* Write a program that computes the tax and tip on a restaurant bill for a patron with 
a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should 
be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip 
amount, and total bill on the screen. */
#include <iostream>
using namespace std;
int main(){
    float mealCharge= 88.67,
    Tax= 0.0675,
    Tip= .20,
    TotalBill,
    TaxAmount,
    TipAmount;
    
    TaxAmount = Tax*mealCharge;
    TipAmount = Tip*mealCharge;
    cout<<"Meal Cost is $"<<mealCharge<<endl;
    cout<<"Tax Amount is $"<<TaxAmount<<endl;
    cout<<"Tip Amount is $"<<TipAmount<<endl;

    TotalBill = mealCharge + TaxAmount + TipAmount;
    cout<<"Total Bill is $"<<TotalBill;
    
    return 0;
}