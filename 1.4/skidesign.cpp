#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int skiHills[1000];
int n = 0;
ifstream fin("skidesign.in");
ofstream fout("skidesign.out");
fin >> n;
for (int i=0; i<n; i++){
    fin >> skiHills[i];
}

	int mCost =1000000000;
	for (int i=0; i< 84; i++)
	{

		int currentCost=0,x;
		for (int h=0; h<n; h++)
		{

			if (skiHills[h]<i){
				x=i-skiHills[h];
			}

			else if (skiHills[h]>(i+17)){
				x=skiHills[h]-(i+17);
			}
			else{
				x=0;
			}
			currentCost+=x*x;
		}

		mCost =min(mCost,currentCost);
	}


	fout << mCost << endl;


}
