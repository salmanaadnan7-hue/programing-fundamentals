#include <iostream>
#include <iomanip> // For formatting decimals
using namespace std;

// Function Prototypes
void readsales(int arr[], int size);
void totalsales(int arr[], int size, int& total);
void maxselling(int arr[], int size, int& max);
void normalize(int arr[], float normal[], int size, int total);
void displaynormalized(float normal[], int size);

int main() {
    int N, maxsale = 0, total = 0;
    int sales[100];
    float normal[100];

    cout << "Enter number of sales entries: ";
    cin >> N;

    readsales(sales, N);
    totalsales(sales, N, total);
    maxselling(sales, N, maxsale);
    normalize(sales, normal, N, total);

    cout << "\n--- Sales Statistics ---" << endl;
    cout << "Total Volume: " << total << endl;
    cout << "Peak Sale Value: " << maxsale << endl;

    cout << "\nNormalized Contribution (Percentage):" << endl;
    displaynormalized(normal, N);

    return 0;
}

void readsales(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter sale for Product " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void totalsales(int arr[], int size, int& total) {
    total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
}

void maxselling(int arr[], int size, int& max) {
    max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Highest selling product is at Index: " << maxIndex << endl;
}

void normalize(int arr[], float normal[], int size, int total) {
    for (int i = 0; i < size; i++) {
        // Calculate percentage: (Individual / Total) * 100
        if (total != 0)
            normal[i] = (static_cast<float>(arr[i]) / total) * 100;
        else
            normal[i] = 0;
    }
}

void displaynormalized(float normal[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Product " << i + 1 << ": " << fixed << setprecision(2) << normal[i] << "%" << endl;
    }
}