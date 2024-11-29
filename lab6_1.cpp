#include<iostream>
using namespace std;

int main(){

    int numbers = 589;
    int evenCount = 0;
    int oddCount = 0;
    while (numbers != 0){
        cout << "Enter an integer: ";
        cin >> numbers;

        if (numbers == 0) {
            break; 
        } 
        if (numbers%2 == 0)
        {
           evenCount++;
        }else
           oddCount++;
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;
    return 0;
}
