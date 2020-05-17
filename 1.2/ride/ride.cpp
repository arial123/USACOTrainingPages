
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string s1, s2;

    fin >> s1;

    fin >> s2;
    int product = 1;
    int product2 = 1;
    for(int i = 0; i < s1.length(); i++){
        int value = s1[i] - 64;
        product = product * value;

    }

     for(int i = 0; i < s2.length(); i++){
         int value = s2[i] - 64;
        product2 = product2 * value;

    }

    product = product % 47;
    product2 = product2 % 47;

    if(product == product2){
        fout << "GO";
    }
    else{
        fout << "STAY";
    }
  return 0;
}
