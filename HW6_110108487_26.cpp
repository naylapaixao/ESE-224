/* 
 * Exercise 26 Dice Percentage
 * File:   main.cpp
 * Author: Nayla
 *
 * Created on April 8, 2015, 9:39 PM
 */

#include <cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int userroll,dice1,dice2,sum(0),sumaux(0),nrolls(0);
    
    cout<<"Enter with the number of rolls "<<endl;
    cin>>userroll;
    
    srand(time(NULL));
    while(nrolls<userroll){
      nrolls++;
      dice1=rand()%6+1;
      dice2=rand()%6+1;
      sum=dice1+dice2;
      
      if (sum==8)
          sumaux++;
    
      cout<<"Values of the dice: "<<dice1<<" "<<dice2<<endl;
    }
    cout<<"The number of sum 8s: "<<sumaux<<endl;
    cout<<"The percentage of the time does the sum 8 is: "<<100*sumaux/nrolls<<"%"<<endl;
    
    
    return 0;
}

