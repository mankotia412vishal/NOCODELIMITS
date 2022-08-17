#include<bits/stdc++.h>
using namespace std;
class student{

   int roll;
   public:
   void setRoll(int roll){
    this->roll =roll;

   }
    void Print(){
        cout<<roll<<endl;
    }

};
int main(){
    student a;
    // a.roll=12;
    a.setRoll(12);
     a.Print();

    
     return 0;
}