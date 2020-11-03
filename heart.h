#ifndef __HEART_
#define __HEART_
#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
vector<string> database;
string word;
string line;
double avgData[24]; 
int count=0;
int sum=0;
int sumAvg;
long int i,j;
int begTime, endTime;
string fname;
fstream fin;
// int file_open(string str, fstream fin){
    
//     fin.open(str.c_str(), ios::in);
//     if(!fin.is_open()){
//         return -1;
//     }
//     else
//         return 0; 
// }
// int file_close(fstream fin){
//     fin.close();
//     if(fin.is_open()){
//         return -1;
//     }
//     else return 0;
// }
// int read_file(fstream fin){
//     while(!fin.eof()){
//     getline(fin, line); 
//     stringstream s(line);
    
//     while (getline(s, word, ',')) { 
//         database.push_back(word); 
//     }
//     }
//     return 0;

// }
void display(){
    cout<<"Enter the beginning time : "<<endl;
    cin>>begTime;
    cout<<"Enter the end time : "<<endl;
    cin>>endTime;
    cout<<"Enter the filename : "<<endl;
    cin>>fname;
    
    
    fin.open(fname.c_str(), ios::in);
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
                cout<<"\n"<<database[i]<<endl;
                count++;
            }
            
        }
    }
    cout<<count<<endl;
    fin.close();

}
#endif