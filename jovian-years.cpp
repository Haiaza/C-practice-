/*This program is convert Jupiter-years into Earth years
    One Jupiter Year == Twelve Earth years
*/

#include <iostream>
using namespace std;

int main(){
    int jy;
    int ey;

    cout << "How many Jupiter years are we comparing? \n";
    cin >> jy;
    ey = jy / 12;
    cout << jy << " Jovian years is equivalent to " << ey << " years on Earth";

    return 0;
} 