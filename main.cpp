#include <iostream>
using namespace std;

const float CourseUSD = 36.85;

void convert(int where);

void convert(int where){
    float UAH, USD;
    if (where == 2){
        cout << "UAH = ";
        cin >> UAH;
        cout << "USD = ";
        cin >> USD;
        cout << "UAH to USD = " << UAH / CourseUSD << endl;
        cout << "USD to UAH = " << USD * CourseUSD;
    } else if (where == 1){
        cout << "UAH = ";
        cin >> UAH;
        cout << "UAH to USD = " << UAH / CourseUSD;
    } else {
        cout << "USD = ";
        cin >> USD;
        cout << "USD to UAH = " << USD * CourseUSD;
    }
}
int where;
int main(){
    cout << "dollars(0) or hryvnias(1), or both(2)" << endl;
    cin >> where;
    convert(where);
    return 0;
}