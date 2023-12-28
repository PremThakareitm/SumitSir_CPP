#include <iostream>
using namespace std;

class student{
    public:
    int roll;
    float mark,per;
    string name;
    
    void setdata(){
        cout<<"Enter the Name of Student "<<":"<<endl;
        cin>>name;
        cout<<"Enter the Roll NO of Student "<<":"<<endl;
        cin>>roll;
        cout<<"Enter the Marks(500)"<<":"<<endl;
        cin>>mark;
        per=mark/5;
    }
};
class cseee:public student{
    public:
    void check(){
    if(per>90){
        cout<<"Eligible for CSE Engi."<<endl;
    }
    }
};

class mecha:public student{
    public:
    void check(){
    if(per>80){
        cout<<"Eligible for Mechanical Engi."<<endl;
    }
    }
};

class civil:public student{
    public:
    void check(){
    if(per>70){
        cout<<"Eligible for Civil Engi."<<endl;
    }
    }
};

class artss:public student{
    public:
    void check(){
    if(per>60){
        cout<<"Eligible for Arts."<<endl;
    }
    }
};

int main(){
    int roll,stdo,n,cho,cha;
    float mark,per;
    char dat;
    string name;
    cout<<"Enter the Number of Students:";
    cin>>n;
    cseee s1[n];
    mecha s2[n];
    civil s3[n];
    artss s4[n];

    cout<<"Enter Which Eligibility to be displayed \n1.CSE\n2.Mechani\n3.Civil\n4.Arts\n:";
    cin>>cho;
    for(int i=0;i<n;i++){
    switch(cho){
        case 1:
            s1[i].setdata();
            s1[i].check();
            break;
        case 2:
            s2[i].setdata();
            s2[i].check();
            break;
        case 3:
            s3[i].setdata();
            s3[i].check();
            break;
        case 4:
            s4[i].setdata();
            s4[i].check();
            break;
    }
    }

}