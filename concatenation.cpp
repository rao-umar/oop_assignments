// this is concatenated program

#include <iostream>
using namespace std;

int main ()
{
    string str1;
    string str2;
    cout<<"Enter first string :";
    getline(cin,str1);
    cout<<"Enter second string :";
    getline(cin,str2);
    cout<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<endl;
    int str1_len= 0;
    while (str1[str1_len] != '\0')
        {
            str1_len++;
        }
    int str2_len= 0;
    while (str1[str2_len] != '\0')
        {
            str2_len++;
        }
    char str3[str1_len+str2_len];
     int i = 0;
    while (str1[i] != '\0')
        {
            str3[i] = str1[i];
            i++;
        }

    int j = 0;
    while (str2[j] != '\0')
        {
            str3[i] = str2[j];
            i++;
            j++;
        }

    str3[i] = '\0';

    cout << "The concatenated string is: " << str3 << endl;


    return 0;
}
