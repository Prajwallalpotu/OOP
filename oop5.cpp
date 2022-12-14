/*Implement a function template selection Sort. Write a program that inputs,
sorts and outputs an integer array and a float array.*/

#include<iostream>
using namespace std;

template<class T>
void sort(T a[],int n)
{
    int min,i;
    T temp;

    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    cout<<"sorted elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{
    int n,i,ch;
    int a[10];
    float b[10];
    do
    {
        cout<<"\nSorting of elements"<<endl;
        cout<<"\n1.Sorting of integer elements :\n";
        cout<<"\n2.Sorting of float elements :\n";
        cout<<"\n3.Exit.\n";

        cout<<"\nEnter your choice :";
        cin>>ch;

        switch(ch)
        {
            case 1:
                cout<<"\n Enter no. of elements to be sorted :";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    cin>>a[i];
                }
                sort<int>(a,n);
                break;
            case 2:
                cout<<"\n Enter no. of elements to be sorted :";
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    cin>>b[i];

                }
                sort<float>(b,n);
                break;

            case 3:
            {
                exit(0);
            }
        }
    } while (ch!=3);
    return 0;
}

