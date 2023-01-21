/*Sales Prediction
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.*/
#include <iostream>
using namespace std;
int main(){
    float totalSales= 8.6E6,
    generate= .58*totalSales;
    cout<<"East Coast division will generate: "<<generate;
    return 0;

}