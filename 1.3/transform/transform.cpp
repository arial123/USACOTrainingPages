/*
ID: arial
PROG: transform
LANG: C++
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int n = 0;
ifstream fin("transform.in");
ofstream fout("transform.out");
fin >> n;

int checker = 22;
char original[n][n];
/*
original[0][0] = 'a';
original[0][1] = 'b';
original[0][2] = 'c';
original[1][0] = 'd';
original[1][1] = 'e';
original[1][2] = 'f';
original[2][0] = 'g';
original[2][1] = 'h';
original[2][2] = 'i';
*/
char after[n][n];
for(int i=0; i <n; i++){
    for(int j = 0; j<n; j++){
        fin >> original[i][j];
    }
}
for(int i=0; i <n; i++){
    for(int j = 0; j<n; j++){
        fin >> after[i][j];
    }
}


int ccol = 0;
int crow = 0;
char ninety[n][n];
checker = 22;
// 90 degrees transform
for(int row = 0; row < n ;row++){
            for(int col = n-1; col >= 0; col--){
          ninety[ccol][crow] =  original[col][row];
          crow++;

        }
        crow = 0;
        ccol++;

    }

    for(int y = 0; y < n; y++){
    for(int t = 0; t<n;t++){
        if(ninety[y][t]!=after[y][t]){
            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 1 << endl;
    return 0;

}
// 180 degrees transform
char oneeighty[n][n];
ccol = 0;
crow = 0;
checker = 22;
for(int row = n-1; row>=0; row--){
    for(int col = n-1; col>=0; col--){
        oneeighty[ccol][crow] =original[row][col];
        crow++;
    }
   crow= 0;
   ccol++;
}



    for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(oneeighty[y][t]!=after[y][t]){
            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 2 << endl;
   return 0;

}
// 270 degrees transform
char twoseventy[n][n];
ccol = 0;
crow = 0;
checker = 22;
for(int col = n-1; col>=0; col--){
    for(int row = 0; row < n; row++){
        twoseventy[ccol][crow] = original[row][col];
        crow++;
    }
   crow = 0;
   ccol++;
}

    for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(twoseventy[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 3 << endl;
  return 0;

}
// reflection transform
char reflect[n][n];
ccol = 0;
crow = 0;
checker = 22;
for(int row = 0; row < n; row++){
    for(int col = n-1; col >= 0; col--){
        reflect[ccol][crow] = original[row][col];
        crow++;
    }
    crow=0;
    ccol++;
}
for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(reflect[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 4 << endl;
  return 0;

}
// combos
char reflect90[n][n];
ccol = 0;
crow = 0;
checker = 22;

for(int row = 0; row < n ;row++){
            for(int col = n-1; col >= 0; col--){
          reflect90[ccol][crow] =  reflect[col][row];
          crow++;

        }
        crow = 0;
        ccol++;

    }
for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(reflect90[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 5 << endl;
  return 0;

}
char reflect180[n][n];
ccol = 0;
crow = 0;
checker = 22;

for(int row = n-1; row>=0; row--){
    for(int col = n-1; col>=0; col--){
        reflect180[ccol][crow] =reflect[row][col];
        crow++;
    }
   crow= 0;
   ccol++;
}
for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(reflect180[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 5 << endl;
  return 0;

}
char reflect270[n][n];
ccol = 0;
crow = 0;
checker = 22;

for(int col = n-1; col>=0; col--){
    for(int row = 0; row < n; row++){
        reflect270[ccol][crow] = reflect[row][col];
        crow++;
    }
   crow = 0;
   ccol++;
}
for(int y = 0; y < n; y++){

    for(int t = 0; t<n;t++){

        if(reflect270[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 5 << endl;
  return 0;

}
for(int y = 0; y < n; y++){
    for(int t = 0; t<n;t++){

        if(original[y][t]!=after[y][t]){

            checker = 23;
            break;
        }
    }
    if(checker == 23){
        break;
    }
}
if(checker ==22){
    fout << 6 << endl;
    return 0;
}
fout << 7 << endl;
return 0;

}
