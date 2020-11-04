#include<iostream>
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
int generateReport(int begn, string file){
    
    
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
            if(stoi(database[i+3]) >= begn && count<=25){
                data[count]=stoi(database[i]);
                count++;
                if(count>25) break;
            }
            
        }
    }
    RGBABitmapImageReference *imageRef = CreateRGBABitmapImageReference();
    vector<double> x{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    vector<double> y{data[0],data[1],data[2],data[3],data[4],data[5],data[6],data[7],data[8],data[9],data[10],data[11],data[12],data[13],data[14],data[15],data[16],data[17],data[18],data[19],data[20],data[21],data[22],data[23],data[24]};
    DrawScatterPlot(imageRef, 600, 400, &x, &y);
    vector<double> *pngData = ConvertToPNG(imageRef->image);
    WriteToFile(pngData, "plot.png");
    DeleteImage(imageRef->image);
    fin.close();
    return 0;

}
int main(){
    int tim;
    int c;
    string fnam;
    cout<<"Enter the time to generate report :";
    cin>>tim;
    cout<<"\nEnter the file name of the heart beat database :";
    cin>>fnam;

    c=generateReport(tim,fnam);
    if(c==0){
        cout<<"\nHeart report PNG image generated succesfully"<<endl;
    }
    if(c==-1){
        cout<<"\nFile not found. Open failed!!!"<<endl;
    }
    return 0;
}