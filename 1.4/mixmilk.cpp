#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

ofstream fout ("mixmilk.out");
ifstream fin ("mixmilk.in");
int firstC, first;
int secondC, second;
int thirdC, third;
fin >> firstC >> first;
fin >> secondC >> second;
fin >> thirdC >> third;

for(int i = 0; i < 33; i++){
    while(first>0 && second<secondC ){
        first--;
        second++;
    }
    while(second>0 && third<thirdC ){
        second--;
        third++;
    }
    while(third>0 && first<firstC ){
        third--;
        first++;
    }
}

// a to b
while(first>0 && second<secondC ){
        first--;
        second++;
    }

fout << first << endl;
fout << second << endl;
fout << third << endl;
cout << first << endl;
cout << second << endl;
cout << third << endl;








}
