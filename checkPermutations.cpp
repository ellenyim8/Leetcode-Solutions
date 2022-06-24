
#include <iostream>
using namespace std;

bool checkPermutations(string s1, string s2);

int main() {
    string s1 = "hello";
    string s2 = "olleh";
    string s3 = "hola";
    cout << "s1 = " << s1 << "\ns2 = " << s2 << "\ns3 = " << s3 << endl; 

    if (checkPermutations(s1, s2)) {
        cout << "Yes: s1 is a permutation of s2 and vice versa." << endl; 
    }
    else {
        cout << "No s1 and s2 are not permutations of each other. " << endl; 
    }

    if (checkPermutations(s2, s3)) {
        cout << "Yes: s2 is a permutation of s3 and vice versa. " << endl; 
    }
    else {
        cout << "No s2 and s3 are not permutations of each other. " << endl; 
    }

} 

bool checkPermutations(string s1, string s2) 
{
    int l1 = s1.length();
    int l2 = s2.length();
    if (l1 != l2){
        return false;
    }  
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i=0; i<l1; i++) {
        if (s1[i] != s2[i]) return false; 
    }
    return true; 
}

