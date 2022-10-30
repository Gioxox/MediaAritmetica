#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    float n; 
    float sum, k, total;

    cout << "ITALY - Quanti valori devi calcolare?\n";
    cout << "ENGLISH - How many values do you need to calculate?\n";
    cin >> n;
    cout << "ITALY - Inserisci i valori\n";
    cout << "ENGLISH - Enter the values\n";

    sum = 0;
    total = n; 

    while (n > 0) {
        cin >> k;
        sum = sum + k;
        n = n - 1;
    }
    
    float media = sum / total;
    cout << "ITALY - La media dei " << total << " valori che hai inserito e' di " << media << "\n";
    cout << "ENGLISH - The average of " << total << " values you entered is of " << media << "\n";

    return 0;
}



