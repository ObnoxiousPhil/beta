#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
char *strrev(char *name)
{
    int i1 = 0, l;
    char temp;
    l = strlen(name);
    while (i1 < l)
    {
        temp = name[i1];
        name[i1] = name[l - 1];
        name[l - 1] = temp;
        i1++;
        l--;
    }
    return name;
}
int main()
{
    fstream f1, f2;
    char t[20];
    int n, i;
    f1.open("file1.txt", ios::out);
    f2.open("file2.txt", ios::out);
    cout << "Enter number of names to be entered";
    cin >> n;
    cout << "Enter names\n";
    while (i < n)
    {
        cin >> t;
        f1 << t << endl;
        i++;
    }
    i = 0;
    while (i < n)
    {
        f1 << t;
        f2 << strrev(t) << endl;
        cout << t << endl;
        i++;
    }
    f1.close();
    f2.close();
}
