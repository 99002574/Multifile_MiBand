#include "heart.h"
#include<vector>
#include<fstream>
#include<sstream>
#include<string>

#include "pbPlots.hpp"
#include "supportLib.hpp"
using namespace std;
vector<string> database;
string word;
string line;
double data[25]; 
int count;
int sum=0;
int sumAvg;
long int i,j;
fstream fin;

int displayBetween(int begTime, int endTime, string fname){
    count=0;
    
    
    fin.open(fname.c_str(), ios::in);
    if(!fin.is_open()){
        return -1;
    }
    while(!fin.eof()){
    getline(fin, line); 
    stringstream s(line);
    
    while (getline(s, word, ',')) { 
        database.push_back(word); 
    }
    }
    
    for (i = 0; i < database.size()-1; i++){
        if(i%4==0){
            if(stoi(database[i+3]) >= begTime && stoi(database[i+3]) <= endTime){
                count++;
                
            }
            
        }
    }
    
    fin.close();
    return count;

}
int highHeartRate(int beat, string file){
    count=0;
    fin.open(file.c_str(), ios::in);
    if(!fin.is_open()){
        return -1;
    }
    while(!fin.eof()){
    getline(fin, line); 
    stringstream s(line);
    
    while (getline(s, word, ',')) { 
        database.push_back(word); 
    }
    }
    for (i = 0; i < database.size()-1; i++){
        if(i%4==0){
            if(stoi(database[i]) >= beat){
                count++;                
            }
            
        }
    }
    return count;
}
int exerciseZoneMax(int age, string file){
    fin.open(file.c_str(), ios::in);
    if(!fin.is_open()){
        return -1;
    }
    while(!fin.eof()){
    getline(fin, line); 
    stringstream s(line);
    while (getline(s, word, ',')) { 
        database.push_back(word); 
    }
    }
    int mux_factor;
    mux_factor=200-age;
    return mux_factor*0.8;
    
}
// int main(){
//     cout<<displayBetween(75038,75157, "heart_data_csv.csv")<<endl;
//     cout<<generateReport(112346,"heart_data_csv.csv")<<endl;
//     cout<<highHeartRate(100, "heart_data_csv.csv")<<endl;
//     cout<<exerciseZoneMax(25,"heart_data_csv.csv")<<endl;
//     return 0;
// }