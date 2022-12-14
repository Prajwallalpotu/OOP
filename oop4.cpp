/*Write a C++ program that creates an output file, writes information to it, closes the file, open
it again as an input file and read the information from the file.*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    int n,roll_no[10];
    string name[50];
    cout<<"Enter the no. of students :";
    cin>>n;

    ofstream outf;
    outf.open("stud_data.txt",ios::trunc);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name :\n";
        cin>>name[i];
        outf<<name[i]<<endl;
        cout<<"roll no. \n";
        cin>>roll_no[i];
        outf<<roll_no[i]<<endl;
    }
    outf.close();

    ifstream inf;
    inf.open("stud_data.txt");
    for(int i=0;i<n;i++)
    {
        while(inf)
        {
            inf>>name[i];
            inf>>roll_no[i];
            if(inf.eof()!=0)
            {
                cout<<"End of file "<<endl;
                exit(1);

            }
            cout<<"name :"<<name[i]<<endl;
            cout<<"roll no. :"<<roll_no[i]<<endl;

        }
    }
    inf.close();
    return 0;
}