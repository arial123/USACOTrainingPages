#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int times = 0;
string dictionary[4617];
ifstream fdict("dict.txt"), fin("namenum.in");
ofstream fout("namenum.out");




string n;
//fin >> n;
fin >> n;
for(int i = 0; i < 4617; i++){
    fdict >> dictionary[i];


}
int results[n.length()];
for(int i = 0; i < n.length();i++){
    results[i] = 0;
}
int checker = 0;

int ochecker = 0;
int x =0;
int sum = 0;
for(int i = 0; i<4617; i++){
string word = dictionary[i];
    if(word.length()==n.length()){


    for(int counter = 0; counter< n.length(); counter++){
            if(n[counter]=='2'){

                if( (word[counter]=='A')){
                       // cout << "reached??" << endl;
                        results[x] = 22;

                }
                if( (word[counter]=='B')){
                       // cout << "reached??" << endl;
                        results[x] = 22;

                }
                if( (word[counter]=='C')){
                       // cout << "reached??" << endl;
                        results[x] = 22;

                }


            }
           else if(n[counter]=='3'){
                 //   cout << "reached??" << endl;

                if (word[counter]=='D'){
                        //cout << "reached??" << endl;
                        results[x] = 22;

                }
               if(word[counter]=='E'){
                        //cout << "reached??" << endl;
                        results[x] = 22;

                }
             if (word[counter]=='F'){
                        //cout << "reached??" << endl;
                        results[x] = 22;

                }


            }
          else  if(n[counter]=='4'){

                 //   cout << "reached??" << endl;
                if( (word[counter]=='G')){

                      // cout << "reached??" << endl;
                         results[x] = 22;

                }
              if( (word[counter]=='H')){

                      // cout << "reached??" << endl;
                         results[x] = 22;

                }
                 if( (word[counter]=='I')){

                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }


            }
           else if(n[counter]=='5'){
                if((word[counter]=='J')){
                       // cout << "reached??" << endl;
                         results[x] = 22;

                }
              if((word[counter]=='K')){
                       // cout << "reached??" << endl;
                         results[x] = 22;

                }
               if((word[counter]=='L')){
                       // cout << "reached??" << endl;
                         results[x] = 22;

                }

            }
           else if(n[counter]=='6'){
                if( (word[counter]=='M')){
                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }
                if( (word[counter]=='N')){
                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }
                 if( (word[counter]=='O')){
                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }


            }
         else if(n[counter]=='7'){
                if( (word[counter]=='P')){
                     //   cout << "reached??" << endl;
                          results[x] = 22;

                }
               if( (word[counter]=='R')){
                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }
                if( (word[counter]=='S')){
                      //  cout << "reached??" << endl;
                         results[x] = 22;

                }


            }
           else if(n[counter]=='8'){
                if((word[counter]=='T')){
                     //   cout << "reached??" << endl;
                         results[x] = 22;

                }
                if((word[counter]=='U')){
                     //   cout << "reached??" << endl;
                         results[x] = 22;

                }
                if((word[counter]=='V')){
                     //   cout << "reached??" << endl;
                         results[x] = 22;

                }


            }
          else  if(n[counter]=='9'){
                if((word[counter]=='W')){
                    //    cout << "reached??" << endl;
                         results[x] = 22;

                }
                if((word[counter]=='X')){
                    //    cout << "reached??" << endl;
                         results[x] = 22;

                }
                  if((word[counter]=='Y')){
                    //    cout << "reached??" << endl;
                         results[x] = 22;

                }

        }
        x++;

    }

}
else{
    continue;
}

for(int h = 0; h < n.length();h++){
    sum = sum +results[h];
}

if(sum==(n.length()*22)){
    fout << word << endl;
    checker = 22;

}
for(int h = 0; h < n.length();h++){
    results[h] = 0;
}
x = 0;
sum = 0;
}
if(checker == 0){
    fout << "NONE" << endl;
    return 0;
}

return 0;
/*
if(n-9<=0){
    // one digit numbers
    fout << "NONE";
    return 0;
}
if(n-19<=0){

    // two digits
    int first, second;
first = n/10;
second = n- ((n/10)*10);
char f, s;
    for(int i = 0; i < 3; i++){
        if(first == 2){
            if(i == 0){
                f = 'A';
            }
            if(i==1){
                f = 'B';
            }
            if(i == 2){
                f = 'C';
            }
        }
        else if(first == 3){

             if(i == 0){
                f = 'D';
            }
            if(i==1){
                f = 'E';
            }
            if(i == 2){
                f = 'F';
            }
        }
        else if(first == 4){
             if(i == 0){
                f = 'G';
            }
            if(i==1){
                f = 'H';
            }
            if(i == 2){
                f = 'I';
            }
        }
        else if(first == 5){
             if(i == 0){
                f = 'J';
            }
            if(i==1){
                f = 'K';
            }
            if(i == 2){
                f = 'L';
            }
        }
        else if(first == 6){
             if(i == 0){
                f = 'M';
            }
            if(i==1){
                f = 'N';
            }
            if(i == 2){
                f = 'O';
            }
        }
        else if(first == 7){
             if(i == 0){
                f = 'P';
            }
            if(i==1){
                f = 'R';
            }
            if(i == 2){
                f = 'S';
            }
        }
        else if(first == 8){
             if(i == 0){
                f = 'T';
            }
            if(i==1){
                f = 'U';
            }
            if(i == 2){
                f = 'V';
            }
        }
        else if(first == 9){
             if(i == 0){
                f = 'W';
            }
            if(i==1){
                f = 'X';
            }
            if(i == 2){
                f = 'Y';
            }
        }
        for(int j = 0; j < 3; j++){
            if(second == 2){
            if(j == 0){
                s = 'A';
            }
            if(j==1){
                s = 'B';
            }
            if(j== 2){
                s = 'C';
            }
        }
        else if(second == 3){

             if(j == 0){
                s = 'D';
            }
            if(j==1){
                s = 'E';
            }
            if(j == 2){
                s = 'F';
            }
        }
        else if(second == 4){
             if(j == 0){
                s = 'G';
            }
            if(j==1){
                s = 'H';
            }
            if(j == 2){
                s = 'I';
            }
        }
        else if(second == 5){
             if(j == 0){
                s = 'J';
            }
            if(j==1){
                s = 'K';
            }
            if(j == 2){
                s = 'L';
            }
        }
        else if(second == 6){
             if(j == 0){
                s = 'M';
            }
            if(j==1){
                s = 'N';
            }
            if(j == 2){
                s = 'O';
            }
        }
        else if(second == 7){
             if(j == 0){
                s = 'P';
            }
            if(j==1){
                s = 'R';
            }
            if(j == 2){
                s = 'S';
            }
        }
        else if(second == 8){
             if(j == 0){
                s = 'T';
            }
            if(j==1){
                s = 'U';
            }
            if(j == 2){
                s = 'V';
            }
        }
        else if(second == 9){
             if(j == 0){
                s = 'W';
            }
            if(j==1){
                s = 'X';
            }
            if(j == 2){
                s = 'Y';
            }
        }
        for(int g = 0; g <4617; g++){
        if((f+s).compare(dictionary[g])==0){
            fout << dictionary[g];
        }



        }
        }
    }
}

*/









}
