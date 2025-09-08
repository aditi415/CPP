#include <iostream>
using namespace std;
int main() {
   int year;
   cout<<"Enter Year:";
   cin>>year;
   if(year%4==0){
    cout<<"Entered year is leap year";
    }else{
       cout<<"Entered year is not a leap year";
    }
    return 0;
}
