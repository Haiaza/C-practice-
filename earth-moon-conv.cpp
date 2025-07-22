/*
This program is meant to convert weight on Earth to its Moon equivalent
*/

#include <iostream>
using namespace std;

int main()
{
    //earth pounds
int ep;
//moon pounds
double mp;
//current count
// int cc;

for(ep=1; ep<=100; ep++){
    mp = .17 * ep;
    cout << "Earth weight : " << ep << " is the same as moon weight : " << mp << "\n";
    if(ep % 25 == 0){
        cout << "\n";
    }  
}
return 0;
}