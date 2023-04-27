#include <iostream>
using namespace std;

class Polygon{
    public:
    float width,heigth;
    virtual void set_value(){
        cout<<"\nEnter the width : ";
        cin>>width;
        cout<<"Enter the height : ";
        cin>>heigth;
    }
};

class Triangle : public Polygon{
    public:
    void set_value(){
        cout<<"\nEnter the perpendicular heigth : ";
        cin>>heigth;
        cout<<"Enter the base length : ";
        cin>>width;
    }

    void calculate_area(){
        cout<<"\nArea of the triangle : "<<0.5*width*heigth;
    }
};

class Rectangle : public Polygon{
    public:
    void set_value(){
        cout<<"\nEnter the width of the rectangle : ";
        cin>>width;
        cout<<"Enter the height of the rectangle : ";
        cin>>heigth;
    }

    void calculate_area(){
        cout<<"\nArea of the Rectangle : "<<width*heigth;
    }
};

int main(){
    Polygon* tbase,*rbase;
    Triangle t;
    Rectangle r;

    tbase = &t;
    rbase = &r;

    tbase->set_value();
    rbase->set_value();
    t.calculate_area();
    r.calculate_area();

}