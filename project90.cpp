#include <iostream>
using namespace std;
#include <vector>


int main()
{
    string a;
    vector<int> vec;
    int num;
    
    
   while (a != "Q" && a != "q"){
   	
   
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    
    cout << "Enter your choice" << endl;
    
    cin >> a;
    
    if (a == "P" || a == "p"){
        
        cout << "[ ";
    for (int i =0; i < vec.size();++i){
         cout << vec[i] << " ";
    }
        cout << "]"<<endl;

    }
    
    else if (a == "A" || a == "a"){
         cout << "Enter a number:" <<endl;
         cin >> num ;
         vec.push_back(num);
         cout << num << " added" <<endl;
    }
    
    else if (a == "M" || a == "m"){
        int sum =0;
        if (vec.size() == 0 ){
            cout << "Unable to determine the mean - no data "<<endl;
            
        }else {
            
            for (int i =0; i <vec.size();i++){
                sum = sum +vec[i];
                
            }
            cout << sum/vec.size()<< " is the mean"<<endl;
        }
        }
        
        
    else if (a == "S" || a == "s"){
        int smallest= vec[0];
        if (vec.size() == 0 ){
            cout << "Unable to determine the smallest number - no data "<<endl;
        }
        else {
            
            for (int i =0; i <vec.size();i++){
                if (vec[i] < smallest){
                    smallest = vec[i];
                }
                
            }
            cout << smallest<< " is the smallest number"<<endl;
        }
        }
        
    
        
    else if (a == "L" || a == "l"){
        int largest= vec[0];
        if (vec.size() == 0){
            cout << "Unable to determine the largest number - no data "<<endl;
        }  
        else {
            
            for (int i =0; i <vec.size();i++){
                if (vec[i] > largest){
                    largest = vec[i];
                }
                
            }
            cout << largest<< " is the largest number"<<endl;
        }
        }
    
   }
    
    cout << "Goodbye! "<<endl;
    
    return 0;
}
