#include<iostream>
#include<map>
using namespace std;
struct tagRecord{
    long nAccountNo;
    char sFirstName[24+1];
    char sLastName[24+1];
    char sCity[25+1];
    char sMobile[10+1];// or  long long nMobile;
    char sEmailId[40+1];
    bool bService[11];// 11 bytes=> 88 bits
    // instead use single short int (0000 0000 0000 0000)  STORE BIT WISE // 16 bits
    // 1st bit for 1st service
    // 2nd bit for 2nd service....
    float fSavingAccBalance;
    map<int ,void *>mapService;

};
struct  tagLifeInsurance{
int count;
int coverage;
};
int main(){
    cout<<sizeof(bool)<<endl;
}
