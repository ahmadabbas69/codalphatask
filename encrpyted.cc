#include <iostream>
using namespace std;

void encrypt(char n[25]) {
    int a;
    cout << "Enter your confusion key: ";
    cin >> a;
    for (int b = 0; (b < 25 && n[b] != '\0'); b++) {
        n[b] = n[b] + a;
    }
    cout << "Your data is encrypted: " << n << endl;
}

void decrypt(char n[25]) {
    int a;
    cout << "Enter your defusion key: ";
    cin >> a;
    for (int b = 0; (b < 25 && n[b] != '\0'); b++) {
        n[b] = n[b] - a;
    }
    cout << "Your data is decrypted: " << n << endl;
}

int main() {
    char z[25];
    char m = 'y';
    
    while (m == 'y') {
        int d;
        cout << "Enter your input: ";
        cin >> z;
        cout << "Press 1 -> for encrypt" << endl;
        cout << "Press 2 -> for decrypt" << endl;
        cin >> d;
        
        switch (d) {
            case 1:
                encrypt(z);
                break;
            case 2:
                decrypt(z);
                break;
            default:
                cout << "Invalid option" << endl;
        }
        
        cout << "Do you want to continue (y/n): ";
        cin >> m;
    }
    
    return 0;
}

