/*Imagine a publishing company which does marketing for book and audio cassette versions.
Create a class publication that stores the title (a string) and price (type float) of publications.
From this class derive two classes: book which adds a page count (type int) and tape which adds a playing
time in minutes (type float).Write a program that instantiates the book and tape class, 
allows user to enter data and displays the data members. If an exception is caught, 
replace all the data member values with zero values.*/
#include<iostream>
#include<string>
using namespace std ;

class Publication
{
    protected:
        string title;
        float price;
    public:
        Publication(string t="No Title",float p=0.0):title(t),price(p){}
};

class Books : public Publication 
{
    public:
        int pages;
        Books(string t="No Title",float p=0.0,int pa=0):Publication(t,p),pages(pa){}
        void readb();
        void displayb();
};

class Tape : public Publication
{
    public:
        float min;
        Tape(string t="No Title",float p=0.0,float m=0.0):Publication(t,p),min(m){}
        void readt();
        void displayt();
};

void Books :: readb()
{
    cout<<"*****ENTER BOOKS DETAILS*****\n";
    cout<<"ENTER TITLE OF BOOK :\n";
    cin.ignore(2,'\n');
    getline(cin,title);
    cout<<"ENTER PRICE OF BOOK :\n";
    cin>>price;
    cout<<"ENTER PAGES OF BOOK :\n";
    cin>>pages;
    try
    {
        if(pages>100 and pages<2000)
        {
            if(price>100 and price<3000)
            {
                displayb();
            }
        }
        else
            throw(pages);
    }
    catch(int i)
    {
        cout<<"ENTERED INVALID DATA!!"<<endl;
        title="0";
        price=0;
        pages=0;
        displayb();
    }
    
}

void Books :: displayb()
{
    cout<<endl<<" Details of BOOK "<<endl;
    cout<<"TITLE :"<<title<<endl;
    cout<<"PRICE :"<<price<<endl;
    cout<<"PAGES :"<<pages<<endl;
}

void Tape :: readt()
{
    cout<<"*****ENTER TAPE DETAILS*****\n";
    cout<<"ENTER TITLE OF TAPE :\n";
    cin.ignore(2,'\n');
    getline(cin,title);
    cout<<"ENTER PRICE OF TAPE :\n";
    cin>>price;
    cout<<"ENTER TIME OF TAPE(in mins) :\n";
    cin>>min;
    try
    {
        if(min>40 and min<300)
        {
            if(price>100 and price<1000)
            {
                displayt();
            }
        }
        else
            throw(min);
    }
    catch(int i)
    {
        cout<<"ENTERED INVALID DATA!!"<<endl;
        title="0";
        price=0.0;
        min=0.0;
        displayt();
    }
}

void Tape :: displayt()
{
    cout<<endl<<" Details of TAPE "<<endl;
    cout<<"TITLE :"<<title<<endl;
    cout<<"PRICE :"<<price<<endl;
    cout<<"TIME :"<<min<<endl;
}

int main()
{
    Books obj1;
    Tape obj2;
    obj1.readb();
    obj2.readt();
    obj1.displayb();
    obj2.displayt();
    return 0;

}
