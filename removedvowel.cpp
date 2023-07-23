// this program is for removing vowel from string

#include <iostream>
using namespace std;

int main() {
  string str1, str2 = "";
  cout << "Enter a string: ";
  getline(cin, str1);
    int length=0;
    for(int i=0; str1[i]!='\0'; i++)
    {
        length++;
    }
  for(int i=0; i<length; i++) {
    if(str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' && str1[i] != 'u' &&
       str1[i] != 'A' && str1[i] != 'E' && str1[i] != 'I' && str1[i] != 'O' && str1[i] != 'U') {
      str2= str2 + str1[i];
    }
  }
  cout << "Original string: " << str1 << endl;
  cout<<endl;
  cout<<"----------------------------------"<<endl;
  cout<<endl;
  cout << "String with vowels removed: " <<str2 << endl;

  return 0;
}
