/*Write C++ program using STL for sorting and searching user defined records such
as personal records (Name, DOB, Telephone number etc) using vector container.
                                   OR
Write C++ program using STL for sorting and searching user defined records such
as Item records (Item code, name, cost, quantity etc) using vector container.*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Item
{
    public:
        char name[50];
        int code;
        int quantity;
        int cost;
    
        bool operator ==(const Item& i1)
        {
            if(code==i1.code)
            {
                return 1;
            }
            else
                return 0;
        }

        bool operator<(const Item& i2)
        {
            if(code<i2.code)
                return 1;
            else
                return 0;
        }

};

vector<Item>v;
void insert();
void display();
void serach();
void print(Item & i1);
void del();

void insert()
{
    Item i1;
    cout<<"code :\n";
    cin>>i1.code;
    cout<<"name :\n";
    cin>>i1.name;
    cout<<"cost :\n";
    cin>>i1.cost;
    cout<<"quentity :\n";
    cin>>i1.quantity;
    v.push_back(i1);
}

void display()
{
    for_each(v.begin(),v.end(),print);
}

void print(Item & i1)
{
    cout<<endl;
    cout<<"\nItem code :"<<i1.code;
    cout<<"\nItem name :"<<i1.name;
    cout<<"\nItem cost :"<<i1.cost;
    cout<<"\nItem quantity :"<<i1.quantity;
}

void search()
{
    vector<Item>::iterator p;
    Item i1;
    cout<<"Enter code :";
    cin>>i1.code;
    p=find(v.begin(),v.end(),i1);
    if(p==v.end())
        cout<<"Not found !!";
    else    
        cout<<"\n Found ";

}

void del()
{
    vector<Item>::iterator p;
    Item i1;
    cout<<"Enter code :";
    cin>>i1.code;
    p=find(v.begin(),v.end(),i1);
    if(p==v.end())
        cout<<"not found !! ";
    else
    {
        cout<<i1.code<<"has been deleted .";
        v.erase(p);
    }

}

bool compare(const Item i1,const Item i2)
{
    return i1.code<i2.code;
}

int main()
{
    int ch;
    do{
        cout<<"\n**** MENU ****\n";
        cout<<"1.INSERT \n 2.DISPLAY \n 3.SEARCH \n 4.SORT \n 5.DELETE \n 6.EXIT.\n\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;
            
            case 3:
                search();
                break;
            
            case 4 :
                sort(v.begin(),v.end(),compare);
                cout<<"\n sorted on code :";
                display();
                break;
            case 5:
                del();
                break;

            case 6:
                exit(0);

        }
    }while(ch!=7);
    return 0;

}