
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
int times[n*2];
for(int i = 0; i < n*2; i++){
    cin >> times[i];
}


int temp, lan;
for (int i = 0; i < n*2; i+=2) {

for (int j =i+2; j < n*2; j+=2) {
if (times[i] > times[j]) {
temp=times[i+1];
times[i+1]=times[j+1];
times[j+1]=temp;
lan=times[i];
times[i]=times[j];
times[j]=lan;



}

}

}


int maxi = 0;
for(int y = 1; y < n*2; y+=2){
    if(times[y]>maxi){
        maxi = times[y];
    }
}

int idletime = 0;
int currentstart, maxend;
int counter = 0;
counter = 2;
maxend = times[1];
if(times[0]==1 && times[1]==maxi){
    idletime = 0;

}


else{
    while(counter<(n*2)){
       currentstart=times[counter];

       if(currentstart<=maxend){
        if(times[counter+1]>maxend){
            maxend = times[counter+1];
        }
        counter+=2;
       }


       else{
        if((currentstart-maxend)>idletime){
            idletime = currentstart-maxend;
        }
        counter+=2;
        maxend = times[counter-1];
       }
    }
}


int longest = 0;
int mini = 0;
maxi = 0;
counter = 2;
int newmin, newmax;

for(int i = 0; i < n*2; i+=2){  //why going through the loop twice...once should be good enough - dont need this for loop?
    mini = times[i];
    maxi = times[i+1];
    for(int j = i+2; j < n*2; j+=2){
        newmin = times[j];
        newmax = times[j+1];
        if(newmin >= mini && newmin <=maxi){  //check logic - newmin >= mini
            if(newmax > maxi){
                maxi = newmax;
            }
        }
    }
    if(maxi-mini > longest){
        longest = maxi - mini;
    }
}


for(int i = 0; i < n*2; i+=2){
    if((times[i+1]-times[i])> longest){
        longest = times[i+1]-times[i];
    }
}

cout << longest << " " << idletime << endl;





}
