#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int numberOfFriends = 0;
cin >> numberOfFriends;
string names[numberOfFriends];
int money[numberOfFriends];
for(int j = 0; j < numberOfFriends; j++){
    money[j] = 0;
}
for(int i = 0; i < numberOfFriends; i++){
    cin >> names[i];
}
for(int i = 0; i < numberOfFriends; i++){
    string giver;
    cin >> giver;
    int moneyGiven;
    cin >> moneyGiven;
    int numOfPeople;
    cin >> numOfPeople;
    if(moneyGiven == 0 && numOfPeople == 0)
        continue;
    int moneyPerPerson = moneyGiven / numOfPeople;
    int remainder = moneyGiven % numOfPeople;
    for(int j = 0; j < numOfPeople; j++){
        string receiver;
        cin >> receiver;
        for(int h =0; h < numberOfFriends; h++){
            if(receiver == names[h]){
                money[h] += moneyPerPerson;
            }
        }
    }
    for(int h =0; h < numberOfFriends; h++){
            if(giver == names[h]){
                money[h] -= moneyGiven;
                money[h] += remainder;
            }
    }
}

    for(int v = 0; v < numberOfFriends; v++){
        cout << names[v] << " " << money[v] << endl;
    }

    return 0;


}

