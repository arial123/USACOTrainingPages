#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> solutions;

int main()
{
ofstream fout ("combo.out");
ifstream fin ("combo.in");
int n = 0;
fin >> n;
int master[3];
int combo[3];
int x = 0;
int result = 0;
for(int i = 0; i < 3; i ++){
    fin >> combo[i];
}
for(int i = 0; i < 3; i ++){
    fin >> master[i];
}
bool checker = true;
int first[5];
int second[5];
int third[5];
int counter = -2;
if(n==1){
    for(int i = 0; i < 5; i++){
        first[i] = combo[0];
        second[i] = combo[1];
        third[i] = combo[2];
    }
}
else{
for(int i = 0; i < 5; i++){

    first[i] = combo[0] + counter;
    if(first[i] < 1){
        first[i] = n + first[i];

    }
    if(first[i] > n){
        first[i] = (first[i]-n);
    }
    second[i] = combo[1] + counter;
    if(second[i] < 1){
        second[i] = n + second[i];

    }
    if(second[i] > n){
        second[i] = second[i]-n;
    }
    third[i] = combo[2] + counter;
    if(third[i] < 1){
        third[i] = n + third[i];

    }
    if(third[i] > n){
        third[i] = (third[i]-n);
    }
    counter++;

}
}/*
for(int i = 0; i < 5; i ++){
    cout << first[i] << endl;
    cout << second[i] << endl;
    cout << third[i] << endl;
}*/

for(int i = 0; i < 5; i++){
    for(int j = 0; j <5; j++){
        for(int h = 0; h < 5; h++){
            x = (first[i]*100) + (second[j]*10) + third[h];
            for(int g = 0; g < solutions.size(); g++){
                if(solutions[g] == x || i > n || j > n || h > n){
                    checker = false;

                }
            }
            if(checker){
                  //  cout << x << endl;
                result++;
                solutions.push_back(x);
            }
            checker = true;
        }
    }
}
counter = -2;
if(n==1){
    for(int i = 0; i < 5; i++){
        first[i] = master[0];
        second[i] = master[1];
        third[i] = master[2];
    }
}
else{
for(int i = 0; i < 5; i++){

    first[i] = master[0] + counter;
    if(first[i] < 1){
        first[i] = n + first[i];

    }
     if(first[i] > n){
        first[i] = (first[i]-n);
    }
    second[i] = master[1] + counter;
    if(second[i] < 1){
        second[i] = n + second[i];

    }
    if(second[i] > n){
        second[i] = second[i]-n;
    }
    third[i] = master[2] + counter;
    if(third[i] < 1){
        third[i] = n + third[i];

    }
    if(third[i] > n){
        third[i] = (third[i]-n);
    }
    counter++;

}
}
for(int i = 0; i < 5; i++){
    for(int j = 0; j <5; j++){
        for(int h = 0; h < 5; h++){
            x = (first[i]*100) + (second[j]*10) + third[h];
            for(int g = 0; g < solutions.size(); g++){
                if(solutions[g] == x || i > n || j > n || h > n){
                    checker = false;

                }
            }
            if(checker){
                 //   cout << x << endl;
                result++;
                solutions.push_back(x);
            }
            checker = true;
        }
    }
}
fout << result << endl;


}
