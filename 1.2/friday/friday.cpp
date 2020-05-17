#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int months, day, years;
    months = 0;
    day = 2;
    int amounts[7] = {0,0,0,0,0,0,0};
    ifstream fin("friday.in.txt");
    ofstream fout("friday.out.txt");
    fin >> years;
    int counter = 0;

    int num = 0;
    int daysofmonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leapyear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(counter < years){
            // this if statement checks if leap yr or not
        if(((1900+counter)% 100 == 0 && (1900+counter)% 400 == 0)||((1900+counter)% 100 != 0 && (1900+counter)% 4 == 0)){

                while(months < 12){
            num = 0;
            while(num < leapyear[months]){
                if(num == 12){
                    amounts[day]++;

                }
                day++;
                num++;
                if(day == 7){
                day = 0;

            }

            }


            months++;
            if(day == 7){
                day = 0;
            }
                }
        }

        else {
                while(months < 12){
                      cout << "month: " << months;
                num = 0;
                    while(num < daysofmonth[months]){
                if( num == 12){
                    amounts[day]++;
                   cout << "year: " << 1900+counter <<" num: " << num << " day: " << day << endl;
                }
                day++;
                num++;
                if(day == 7){
                day = 0;

            }

            }

            months++;

            if(day == 7){
                day = 0;
            }
                }
        }

        counter++;
        months = 0;

        if(day == 7){
           day = 0;
        }




    }
    for(int i = 0; i < 7; i++){
        fout << amounts[i] << " ";
    }

    return 0;

}


