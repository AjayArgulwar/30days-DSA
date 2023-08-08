#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silentt";


    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());


    if (str1 == str2) {
        cout << "Strings are anagrams";
    } else {
        cout << "Strings are not anagrams";
    }

    return 0;
}
/*
int main()
{
    string str1 = "listen";
    string str2 = "silentt";
    int count = 0;
    if(str1.length() == str2.length()){
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1.at(i) == str2.at(j)){
                count++;
            }
        }
    }
    }
    if(count == str1.length()){
        cout<<"String is anagram";
    }
    else
        cout<<"Sting is not an anagram";

}
*/
