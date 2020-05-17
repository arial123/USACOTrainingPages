#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
ofstream fout ("barn1.out");
ifstream fin ("barn1.in");
int maxBoards, stalls, o;
fin >> maxBoards;
fin >> stalls;
fin >> o;
int lan;
int occupied[o];
int result = o;
for(int i = 0; i < o; i++){
    fin >> occupied[i];
}

for (int i = 0; i < o; i++) {

    for (int j =i+1; j < o; j++) {
        if (occupied[i] > occupied[j]) {
            lan=occupied[i];
            occupied[i]=occupied[j];
            occupied[j]=lan;
        }

    }

}
int gaps[o-1];
for(int i = 0; i < o-1; i++){
    gaps[i] = occupied[i+1]-occupied[i] -1;
   // cout << occupied[i+1] << " " << occupied[i] << " " << gaps[i] << endl;

}

for (int i = 0; i < o-1; i++) {

    for (int j =i+1; j < o-1; j++) {
        if (gaps[i] > gaps[j]) {
            lan=gaps[i];
            gaps[i]=gaps[j];
            gaps[j]=lan;
        }

    }

}
/*for(int i = 0; i < o-1; i++){
    cout << gaps[i] << endl;
}*/
int starting;
for(int i = 0; i < o-1; i++){
    if(gaps[i] != 0){
        starting = i;
        break;
    }
}
int x = (o-1)-(maxBoards-1);
for(int i = starting; i < x; i++){
    result = result + gaps[i];
  // cout << result << endl;
}


fout << result << endl;


}
