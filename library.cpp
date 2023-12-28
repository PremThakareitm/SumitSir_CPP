#include <iostream>

using namespace std;

class Item{
    protected:
        int id;
        string title;
        int stock;
        string author;
        string numPages;
    public:
        Item(){
            id = 0;
            title = "None";
            stock = 0;
        }
        Item(int i , int stk , string t){
            id = i;
            stock = stk;
            title = t;
        }

        void setdetails(){
            cout<<" ID : ";
            cin>>id;
            cout<<" TITLE : ";
            cin>>title;
            cout<<"NO. OF COPIES AVAILABLE : ";
            cin>>stock;
        }

        void displaydetails(){
            cout<<"ID : "<<id;
            cout<<"Title : "<<title;
            cout<<"NO. OF COPIES AVAILABLE : "<<stock;
        }

};

class Book:public Item{
    protected:
        string author;
        int numPages;
    public:
        Book(){
            id = 0;
            title = "None";
            stock = 0;
            author = "None";
            numPages = 0;
        }
        Book(int i , int stk , string t , string auth , int np){
            id = i;
            stock = stk;
            title = t;
            author = auth;
            numPages = np;
        }
        void setdetails(){
            cout<<" ID : ";
            cin>>id;
            cout<<" TITLE : ";
            cin>>title;
            cout<<"NO. OF COPIES AVAILABLE : ";
            cin>>stock;
            cout<<"Author : ";
            cin>>author;
            cout<<"Num Pages : ";
            cin>>numPages;

        }
        void displayDetails(){
            cout<<"\nID : "<<id;
            cout<<"\nTitle : "<<title;
            cout<<"\nNO. OF COPIES AVAILABLE : "<<stock;
            cout<<"\nAUTHOR : "<<author;
            cout<<"\nPages : "<<numPages;
        }
};

class Magazine:public Item{
    private:
        string publisher;
        int issuenumber;
    public:
        Magazine(){
            id = 0;
            title = "None";
            stock = 0;
        }

        Magazine(int i , int stk , string t , string pb , int issnum){
            id = i;
            stock = stk;
            title = t;
            publisher = pb;
            issuenumber = issnum;
        }

        void setdetails(){
            cout<<" ID : ";
            cin>>id;
            cout<<" TITLE : ";
            cin>>title;
            cout<<"NO. OF COPIES AVAILABLE : ";
            cin>>stock;
            cout<<"Publisher : ";
            cin>>publisher;
            cout<<"Issue number : ";
            cin>>issuenumber;

        }
        void displayDetails(){
            cout<<"\nID : "<<id;
            cout<<"\nTitle : "<<title;
            cout<<"\nNO. OF COPIES AVAILABLE : "<<stock;
            cout<<"\nPUBLISHER : "<<author;
            cout<<"\nISSUE NUMBER : "<<numPages;
        }

};

class CD:public Item{
    private:
        string artist;
        int numTracks;
    public:
        CD(){
            id = 0;
            title = "None";
            stock = 0;
            artist = "None";
            numTracks = 0;
        }
        CD(int i , int stk , string t , string atst , int nt){
            id = i;
            stock = stk;
            title = t;
            artist = atst;
            numTracks = nt;

        }
        void setdetails(){
            cout<<"\n ID : ";
            cin>>id;
            cout<<"\n TITLE : ";
            cin>>title;
            cout<<"\nNO. OF COPIES AVAILABLE : ";
            cin>>stock;
            cout<<"\nARSTIST : ";
            cin>>artist;
            cout<<"\nNumber of Track : ";
            cin>>numTracks;

        }
        void displayDetails(){
            cout<<"\nID : "<<id;
            cout<<"\nTitle : "<<title;
            cout<<"\nNO. OF COPIES AVAILABLE : "<<stock;
            cout<<"\nARTIST : "<<artist;
            cout<<"\nTrack No.  : "<<numTracks;
        }
        ~CD(){
            cout<<"\nDestructor runned. ";
        }

};



int main(){

    CD i;
    i.setdetails();
    i.displayDetails();
    return 0;
    
}