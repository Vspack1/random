#include <iostream>  
#include <ctime> //Su dung ham rand()

using namespace std;

// Ham sinh so ngau nhien trong khoang [min, max]  
int randomInt(int min, int max) {
    return min + (rand() % (max - min + 1)); // Sinh so ngau nhien  
}

int main() {
    int min, max;

    // Nhap khoang  
    cout << "Nhap khoang (min, max): ";
    cin >> min >> max;
    srand(time(0));

    // Goi ham va in so ngau nhien  
    int random_number = randomInt(min, max);
    cout << "So ngau nhien trong khoang [" << min << ", " << max << "]: " << random_number << endl;

    return 0;
}