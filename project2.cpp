#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's Carpet Cleaning service" << endl;
    cout << "Hello, how many small rooms would you like cleaned" << endl;
    
    int numsmall;
    cin >> numsmall;
    
    cout << "Hello, how many large rooms would you like cleaned" << endl;
    
    int numlarge;
    cin >> numlarge;
    
    const double price_large=35;
    const double price_small=25;
    const double tax=6.6;
    const double total =  (numlarge*price_large) + (numsmall*price_small);
    
    
    
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numsmall << endl;
    cout << "Number of small rooms: " << numlarge << endl;
    cout << "Price per small room: $25" << endl;
    cout << "Price per big room: $35" << endl;
    cout << "Cost: " << total << endl;
    cout << "Tax: $6.6" << endl;
    cout << "===============================================" << endl;
    
    cout << "Total estimate: $" << total+tax << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}
