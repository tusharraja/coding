# include<iostream>
#include<string>
using namespace std;
class animal{


    private:
    int love;
    int kumo;


    public:
    int sound;
    int legs;


    void setdata(int b,int o);


    void showdata(){
        cout<<"The value of love is "<<love<<endl;
        cout<<"The value of sound is "<<sound<<endl;
        cout<<"The value of legs is "<<legs<<endl;
        cout<<kumo;

    }
};


void animal :: setdata(int kk,int o){
    love =kk;
    kumo=o;

}

int main(){
    animal dog ;
    dog.legs=4;
    dog.sound = 2;
    dog.setdata(88,55);
    dog.showdata();
    return 0;

}