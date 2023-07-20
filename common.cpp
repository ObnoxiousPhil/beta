#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream f1, f2, f3;
    string list1[20], list2[20];
    int size1, size2;
    f1.open("file1.txt", ios::out);
    f2.open("file2.txt", ios::out);
    f3.open("file3.txt", ios::out);
    cout << "Enter the number of names in list 1: ";
    cin >> size1;

    cout << "Enter the names for list 1:" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
        f1 << list1[i] << endl;
        
    }

    cout << "Enter the number of names in list 2: ";
    cin >> size2;

    cout << "Enter the names for list 2:" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
        f2 << list2[i] << endl;
        
    }

    cout << "Common names in both lists:" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (list1[i] == list2[j])
            {
                cout << list1[i] << endl;
                f3 << list1[i] << endl;
                break;
            }
        }
    }
    f1.close();
    f2.close();
    f3.close();

    return 0;
}
