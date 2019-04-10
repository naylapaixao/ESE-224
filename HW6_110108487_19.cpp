/* Exercise 19 - Prime Numbers
 * File:   main.cpp
 * Author: Nayla
 *
 * Created on April 7, 2015, 3:08 PM
 */

#include <cstdlib>
#include<iostream>
#include<fstream>
#include<string>


using namespace std;
void primeGen(int num,ostream& fileout){
    int prime,cont=0;
    
    for(int i=1;i++;){
        prime=0;
        for (int j=2;j<i;j++){
            if(i%j==0){
                prime++;
            }        
        }
        if (prime==0){
            fileout<<i<<endl;
            cont++;
        }
        if (cont==num) break;
    }

    return;
}

int main(int argc, char** argv) {

    int number;
    string filename;
    ofstream fout;
    
    cout<<"Enter with a number "<<endl;
    cin>>number;
   
    cout<<"Enter with the name of the file "<<endl;
    cin>>filename;
    
    fout.open(filename.c_str());
    
    if (fout.fail())
    {
       cerr<<"Could not open the file \n ";
       exit(1);
    }
    
    primeGen(number,fout);
    fout.close();
    return 0;
}


