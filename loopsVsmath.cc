#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n = 1000000;  // Change the type to long if it exceed the range of int
    int total_for = 0;
    int total_while = 0;
    int total_math = 0;
    clock_t start_time, end_time;

    // Timing for loop
    start_time = clock();
    for (int i = 1; i <= n; ++i) {
        total_for += i;
    }
    end_time = clock();
    cout << "Sum with for loop: " << total_for << endl;
    cout << "Time taken for for loop: " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;

    // Timing while loop
    total_while = 0; // reset total_while
    start_time = clock();
    int i = 1;
    while (i <= n) {
        total_while += i;
        ++i;
    }
    end_time = clock();
    cout << "Sum with while loop: " << total_while << endl;
    cout << "Time taken for while loop: " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;

    // Timing mathematical formula
    start_time = clock();
    total_math = n * (n + 1) / 2;
    end_time = clock();
    cout << "Sum with mathematical formula: " << total_math << endl;
    cout << "Time taken for mathematical formula: " << double(end_time - start_time) / CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}
