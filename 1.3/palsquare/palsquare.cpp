
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


inline char c(int c){
 if(c >= 10) return c - 10 + 'A';
 return c + '0';
}
string tobase(int n, int b){
 string ret;
 int div = b;
 while(div < n)
  div *= b;
 for(div /= b;;){
  ret += c(n / div);
  n = n % div;
  if(div < 2) break;
  div /= b;
 }
 return ret;
}

string r(string str){
 reverse(str.begin(), str.end());
 return str;
}

int main() {
 ofstream fout ("palsquare.out");
 ifstream fin ("palsquare.in");
 int base;
 fin >> base;

 for(int i = 1; i <= 300; ++i){
  string n = tobase(i, base), n2(tobase(i * i, base));
  if(n2 == r(n2))
   fout << n << " " << n2 << endl;
 }

 return 0;
}

