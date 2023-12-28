#include <iostream>
using namespace std;

class student{
    public:
    int roll,stdo;
    string name;
    
    void setdata(){
        cout<<"Enter the Name of Student "<<":"<<endl;
        cin>>name;
        cout<<"Enter the Roll NO of Student "<<":"<<endl;
        cin>>roll;
        cout<<"Enter the Class of Student "<<":"<<endl;
        cin>>stdo;
    }
    
    void getdata(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Class : "<<stdo<<endl;

    }
};

int main(){
    int roll,stdo,n,cho,cha;
    char dat;
    string name;
    cout<<"Enter the No. of Students: "<<endl;
    cin>>n;
    student s1[n];
    for(int i=0;i<n;i++){
        s1[i].setdata();
    }
    cout<<"Which Data to be Displayed: "<<endl;
    cin>>cho;
    for(int i=0;i<n;i++){
    if(cho==s1[i].roll){
        s1[i].getdata();
    }
    }
    cout<<"Do you want to Change the Data?(y/n)"<<endl;
    cin>>dat;
    if(dat=='y'){
    cout<<"Which Data to be Changed: "<<endl;
    cin>>cha;
    for(int i=0;i<n;i++){
    if(cha==s1[i].roll){
        s1[i].setdata();
    }
    }
    }
    else{
        cout<<"thank you!"<<endl;
    }
    cout<<"Which Data to be Displayed: "<<endl;
    cin>>cho;
    for(int i=0;i<n;i++){
    if(cho==s1[i].roll){
        s1[i].getdata();
    }
    }
}