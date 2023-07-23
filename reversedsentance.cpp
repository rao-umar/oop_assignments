// This program used for reverse sentence

#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    int length=0;
    int array_size = 0;
    for(int i=0; s[i]!='\0'; i++){
        length++;
        if(s[i]==' '){
           array_size++;
        }
    }
    cout<<array_size;
    int word_index = 0;
    string word[array_size+1];
    string charcter;
    for(int i=0;i<length; i++)
    {
        if(s[i]==' '){
           word[word_index]=charcter;
           word_index++;
           charcter="";
        }
        else{
            charcter += s[i];
        }
        if (i+1 == length){
            word[word_index]=charcter;
        }
    }
    string reversed_sentence;
    for(int i=word_index; i>=0; i--)
    {
        reversed_sentence=reversed_sentence+' '+word[i];
    }

    cout << "Reversed sentence is: " << reversed_sentence;

    return 0;
}
