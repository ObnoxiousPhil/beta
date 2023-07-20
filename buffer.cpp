#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void bubbleSort(string arr[], string arr2[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap(arr2[j], arr2[j + 1]);
            }
        }
    }
}

int main() {
    string name[20], usn[10];
    int n, count = 0;
    string susn;
    fstream file1;

    while (true) {
        cout << "\n1.Write\n2.Display\n3.Search\n4.Modify\n5.Exit\nEnter your choice: ";
        cin >> n;

        switch (n) {
        case 1:
            cout << "Enter name: ";
            cin >> name[count];
            cout << "Enter usn: ";
            cin >> usn[count];
            count++;
            break;
        case 2:
            bubbleSort(name, usn, count);
            file1.open("he.txt", ios::out);
            for (int i = 0; i < count; i++) {
                cout << name[i] << "\t" << usn[i] << endl;
                file1 << name[i] << "|" << usn[i] << endl;
            }
            file1.close(); 
            break;
        case 3:
            cout << "Enter usn: ";
            cin >> susn;
            for (int i = 0; i < count; i++) {
                if (usn[i] == susn) {
                    cout << "Record found\n" << name[i] << "\t" << usn[i] << endl;
                    break;
                }
            }
            break;
        case 4:
            cout << "Enter usn: ";
            cin >> susn;
            for (int i = 0; i < count; i++) {
                if (usn[i] == susn) {
                    cout << "Enter new name: ";
                    cin >> name[i];
                    cout << "Enter new usn: ";
                    cin >> usn[i];
                    break;
                }
            }
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
