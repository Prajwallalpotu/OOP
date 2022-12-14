/*Implement a class Complex which represents the Complex Number data type. Implement the following
Constructor (including a default constructor which creates the complex number 0+0i).
Overload operator+ to add two complex numbers.
Overload operator* to multiply two complex numbers.
Overload operators << and >> to print and read Complex Numbers.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imag;
    public:
        Complex(int i=0,int r=0)
        {
            real=r;
            imag=i;
        }
    
    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.real=real + obj.real;
        res.imag=imag + obj.imag;
        return res;
    }

    Complex operator*(Complex const &mul)
    {
        Complex result;
        result.real=((real*mul.real)-(imag*mul.imag));
        result.imag=((real*mul.imag)+(imag*mul.real));
        return result;
    }

    // friend istream &operator >>(istream &input,Complex &t)
    // {
    //     cout<<"Enter real part :";
    //     input>>t.real;
    //     cout<<"Enter imag part :";
    //     input>>t.imag;
    // }

    // friend ostream &operator <<(ostream &output,Complex &y)
    // {
    //     output<<y.real<<"+"<<y.imag<<"i"<<endl;
    // }

    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    // Complex c1,c2,c3,c4;
    // cout<<"enter element 1 :";
    // cin>>c1;
    // cout<<"enter element 2 :";
    // cin>>c2;
    // c3=c1+c2;
    // c4=c1*c2;
    // cout<<"Element 1 :"<<c1<<endl;
    // cout<<"Enlement 2 :"<<c2<<endl;
    // cout<<"Addition :"<<c3<<endl;
    // cout<<"mul :"<<c4<<endl;
    Complex c1(5,10),c2(11,2);
    Complex c3=c1+c2;
    Complex c4=c1*c2;
    c3.print();
    c4.print();
    return 0;

}