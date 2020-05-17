#include <iostream>
#include <bits/stdc++.h>
using namespace std;
inline char c(int y){
 if(y >= 10){
    return y - 10 + 'A';
 }
 return y + '0';
}
string r(string v){
 reverse(v.begin(), v.end());
 return v;
}
string convert(int n, int b){
 string xyz;
 int d = b;
 while(d < n)
  d *= b;
 for(d /= b;;){
  xyz += c(n / d);
  n = n % d;
  if(d < 2){
    break;
  }
  d /= b;
 }
 return xyz;
}

int main() {
 ofstream fout ("dualpal.out");
 ifstream fin ("dualpal.in");
 int s,n;
 fin >> n;
 fin >> s;
 int bignum = 100000;

 while(n > 0){
  if(++s > bignum){
   break;
  }
  int num = 0;
  for(int h = 2; h <= 10; ++h){
      //  cout << h << " ";
   string okay = convert(s, h);
   if(okay == r(okay)){
      //  cout << h << " ";
       //   cout << okay << " ";
        num++;
        if(num >= 2){
            n--;
         //   cout << endl;
            fout << s << endl;
            break;
        }
   }
   /*
   if(okay == r(okay) && ++num >= 2){
        cout << h << " ";
        n--;
        cout << endl;
        cout << "*" << s << endl;
        break;
   }*/
  }

 }

 return 0;
}
