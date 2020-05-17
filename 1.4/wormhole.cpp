
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int x[13];
int right_array[13];
int y[13];
int p[13];
int n = 0;

bool cycle()
{
  for (int s=1; s<=n; s++) {
    // does there exist a cylce starting from start
    int index = s;
    for (int b=0; b<n; b++){
      index = right_array[(p[index])];
    }
    if (index != 0) return true;
  }
  return false;
}

// count all solutions
int solve()
{
  // find first unpaired wormhole
  int i;
  int t=0;
  for (i=1; i<=n; i++)
    if (p[i] == 0) break;

  // everyone paired?
  if (i > n) {
    if (cycle()){
        return 1;
    }
    else{
            return 0;
    }
  }

  // try pairing i with all possible other wormholes j
  for (int j=i+1; j<=n; j++)
    if (p[j] == 0) {

      p[i] = j;
      p[j] = i;
      t += solve();
      p[i]= 0;
      p[j] = 0;
    }
  return t;
}

int main()
{
  ifstream fin("wormhole.in");
  ofstream fout("wormhole.out");
  fin >> n;
  for (int i=1; i<=n; i++){
    fin >> x[i] >> y[i];
  }


  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++){
      if (x[j] > x[i] && y[i] == y[j]) {
	if (right_array[i] == 0 || x[j]-x[i] < x[right_array[i]]-x[i]){
	  right_array[i] = j;
	}

      }
    }
  }


  fout << solve() << endl;
  return 0;
}
