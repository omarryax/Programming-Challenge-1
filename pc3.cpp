/*Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the
state sales tax is 4 percent and the county sales tax is 2 percent.*/
#include <iostream>
using namespace std;
int main(){
    int purchase= 95;
    float state= .04, county= .02;
    float StateSalesTax= state*purchase,
    CountySalesTax= county*purchase;
    cout<<"state sale tax: "<<StateSalesTax<<endl<<"county sale tax: "<<CountySalesTax<<endl;
    float TotalSalesTax= (state+county)*purchase;
    cout<<"Sales Tax is: "<<TotalSalesTax;

    return 0;
}