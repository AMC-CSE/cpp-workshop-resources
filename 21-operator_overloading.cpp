#include<iostream>
using namespace std;
class complex {
private:
    int real;
    int img;
public:
    complex() {
        real = 0;
        img = 0;
    }

    complex(const int r, const int i)
    {
        real = r;
        img = i;
    }
    void setreal(const int r)
    {
        real = r;
    }
    void setimg(const int i)
    {
        img = i;
    }
    int getreal()const
    {
        return real;
    }
    int getimg()const
    {
        return img;
    }
    void add(complex& x)
    {
        real += x.real;
        img += x.img;
    }
    void operator+(complex& x) {
        real += x.real;
        img += x.img;
    }
    void operator=(complex& x)
    {
        real = x.real;
        img = x.img;

    }
    void operator!() {
        img = img*-1;
    }
    int operator[](string s) {
        if (s == "real")
        {
            return real;
        }
        else
        {
            return img;
        }
    }
    void print()const
    {
        if (img > 0)
        {
            cout << real << "+" << img << "i"<<endl;
        }
        else
            cout << real << "+" <<"(" <<img<<")" << "i"<<endl;
    }
};
ostream operator<<(ostream& os, complex& n)
{
    n.print();

}
istream operator>>(istream& is, complex& n)
{
    int r1, i1;
    cin >> r1 >> i1;
    n.setreal(r1);
    n.setimg(i1);

}
int main()
{
    complex c;
    c.setimg(2);
    
    complex d(2, 3);
    c.print();
    d.print();

    c.add(d);//add the real and imaginary numbers in the objects a and d
    c.print();
    
    c + d;//operator overloading
    

    //now i want to overload an operator '=' and assign the value to the 
    complex e;
    e = c;    
    e.print();

    !e;//operator for not e
    e.print();

    //overloading of '[]' operator 
    cout<<c["real"]<<endl;
    cout << c["img"] << endl;

    //overloading of '<<' '>>' ostream and istream classes respectively
    complex f;
    cin >> f;
    cout << f;
}