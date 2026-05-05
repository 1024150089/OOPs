#include <iostream>

using namespace std;


class Time  {
    private: 
    int h,m,s;
    public: 
    Time (int h , int m , int s) {
        this->h = h;
        this->m =m;
        this->s = s;
    }
    Time () {
    
    }

    void show () {
        cout<<h<<":"<<m<<":"<<s;
    }

   Time operator+(Time t2) {
     Time temp;
     temp.h = this->h + t2.h;
     temp.m = this->m + t2.m;
     temp.s = this->s + t2.s;

     

     return temp;
   }

};

int main () {

    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1+t2;
    t3.show();
}