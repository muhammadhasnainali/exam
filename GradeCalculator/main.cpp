#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3;

    do {
        cout << "Enter marks of 3 subjects (0 to 100 each): ";
        cin >> m1 >> m2 >> m3;

        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
            cout << "Error: Marks must be between 0 and 100. Please enter again." << endl;
        }
    } while (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100);

    float total = m1 + m2 + m3;
    float percentage = total / 300 * 100;

    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 80) cout << "Grade: A" << endl;
    else if (percentage >= 65) cout << "Grade: B" << endl;
    else if (percentage >= 50) cout << "Grade: C" << endl;
    else cout << "Grade: F" << endl;

    return 0;
}
