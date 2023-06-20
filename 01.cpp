#include<iostream>

#include<string.h>

#include<fstream>

#include<stdlib.h>

using namespace std;
char * strrev(char * name) {
  int i1 = 0, l;
  char temp;

  l = strlen(name);
  while (i1 < l) {
    temp = name[i1];
    name[i1] = name[l - 1];
    name[l - 1] = temp;
    i1++;
    l--;
  }
  return name;

}
int main() {
  fstream file1, file2;
  char ifile[10], ofile[10], temp[25];
  int n, i = 0;
  cout << "Enter the first filename" << endl;
  cin >> ofile;
  cout << "Enter the number of names to be entered" << endl;
  cin >> n;
  cout << "Enter the names:" << endl;
  file1.open(ofile, ios::out);
  while (i < n) {
    cin >> temp;
    file1 << temp << endl;
    i++;
  }
  file1.close();
  file1.open(ofile, ios::in);
  cout << "Enter the second filename" << endl;
  cin >> ifile;
  file2.open(ifile, ios::out);
  i = 0;
  while (i < n) {
    file1 >> temp;
    file2 << strrev(temp) << endl;
    cout << temp << endl;
    i++;
  }
  cout << "Names are reversed and written successfully :) ";
}
