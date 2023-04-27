#include <iostream>
using namespace std;

//------------------Class Definitions--------------------------------//
class Student{
    string name;
    int rollno;
    public:
    void get_details();
    void display_details();
};

class Examination: virtual public Student{
    public:
    float test1,test2,average;
    void cal_average();
    void display_average();
};

class Extracurricular : virtual public Student{
    public:
    float painting,music;
    void get_score();
    void display_total();
};

class Result : public Examination, public Extracurricular{
    float total;
    public:
    void cal_total();
    void comment();
};



//--------------------member function of class Student-----------------------------//

void Student::get_details(){
    cout<<"Enter the details of the student";
    cout<<"\nEnter the name of the student :";
    cin>>name;
    cout<<"Enter the roll number of the student : ";
    cin>>rollno;
}

void Student::display_details(){
    cout<<"\nStudents details";
    cout<<"\nStudent name : "<<name;
    cout<<"\nStudent roll : "<<rollno;
}

//-------------------member function of class Examination---------------------------//

void Examination::cal_average(){
    cout<<"\nEnter the marks of the tests";
    cout<<"\nEnter the marks of the first test : ";
    cin>>test1;
    cout<<"Enter the marks of the second test : ";
    cin>>test2;

    average  = (test1 + test2)/2.0;
}

void Examination::display_average(){
    cout<<"\nAverage marks obtained : "<<average;
}

//-------------------member function of class Extracurricular-----------------------//
void Extracurricular::get_score(){
    cout<<"\nEnter the marks of the painting : ";
    cin>>painting;
    cout<<"Enter the marks of the music : ";
    cin>>music;
}

void Extracurricular::display_total(){
    cout<<"\nTotal marks obtained in Extracurricular is : "<<painting+music;
}

//------------------member function of the class Result-----------------------------//
void Result::cal_total(){
    total = test1 + test2 + painting + music;
    cout<<"Total marks obtained in tests and extracurricular are : "<<total<<"out of "<<400;

}

void Result::comment(){
    if(test1 < 40 || test2 < 40)
        cout<<"\nFailed";
    else
    cout<<"\nPassed";
}


int main(){
    int n;
    cout<<"Enter the number of the students : ";
    cin>>n;
    Result students[n];
    for(int i = 0; i < n; ++i){
        students[i].get_details();
        students[i].cal_average();
        students[i].get_score();
        students[i].display_details();
        students[i].display_average();
        students[i].display_total();
        students[i].comment();
    }
}