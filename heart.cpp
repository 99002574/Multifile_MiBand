#include "heart.h"
using namespace std;
int main(){
    cout<<displayBetween(75038,75157, "heart_data_csv.csv")<<endl;
    cout<<generateReport(112346,"heart_data_csv.csv")<<endl;
    cout<<highHeartRate(100, "heart_data_csv.csv")<<endl;
    cout<<exerciseZoneMax(25,"heart_data_csv.csv")<<endl;
    return 0;
}