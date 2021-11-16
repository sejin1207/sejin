#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(0)));
    int r=rand()%100+1;
    int num;
    int count=0; 

    cout<<"Random Number is created (1-100)"<<endl;
    do{
        cout<<"Guess the Number: ";
        cin>>num;
        if(num>r)cout<<"Down"<<endl;
        else if(num<r)cout<<"Up"<<endl;
        ++count;
    }while(r!=num);
    cout<<"Correct (in "<<count<<" times)"<<endl;
    return 0;
}