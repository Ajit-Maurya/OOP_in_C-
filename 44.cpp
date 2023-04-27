#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    void get_details(){
        cout<<"\nEnter name of the student : ";
        cin>>name;
        cout<<"Enter rollno : ";
        cin>>rollno;
    }

    //Pure virtual Function
    virtual void getCourseDetails() = 0; 

    //Pure virtual Function
    virtual void display() = 0;
};

//------------------Derived Class-------------------------------------------//

class Engineering: public Student{
    string *subjects;
    int numOfSub;
    string course;
    public:

    //---------implementation of pure function of base class-------------

    void getCourseDetails(){
        cout<<"\nEnter Student details ";
        get_details();
        cout<<"\nEnter course : ";
        cin>>course;
        cout<<"Enter the number of subjects : ";
        cin>>numOfSub;
        subjects = new string[numOfSub];
        for(int i = 0; i < numOfSub; ++i)
        {
            cout<<"Enter the subject "<<i+1<<" : ";
            cin>>subjects[i];
        }
    }

    void display(){
        cout<<"\nStudent name : "<<name;
        cout<<"\nStudent roll no : "<<rollno;
        cout<<"\nStudent course is : "<<course;
        cout<<"\nSubjects choosen are ";
        for(int i = 0; i < numOfSub; ++i){
            cout<<"\nSubject "<<i+1<<" : "<<subjects[i];
        }
    }

};



class Science: public Student{
    string *subjects;
    int numOfSub;
    string course;
    public:

    //---------implementation of pure function of base class-------------

    void getCourseDetails(){
        cout<<"\nEnter Student details ";
        get_details();
        cout<<"\nEnter course : ";
        cin>>course;
        cout<<"Enter the number of subjects : ";
        cin>>numOfSub;
        subjects = new string[numOfSub];
        for(int i = 0; i < numOfSub; ++i)
        {
            cout<<"Enter the subject "<<i+1<<" : ";
            cin>>subjects[i];
        }
    }

    void display(){
        cout<<"\nStudent name : "<<name;
        cout<<"\nStudent roll no : "<<rollno;
        cout<<"\nStudent course is : "<<course;
        cout<<"\nSubjects choosen are ";
        for(int i = 0; i < numOfSub; ++i){
            cout<<"\nSubject "<<i+1<<" : "<<subjects[i];
        }
    }

};

class Medicine: public Student{
    string *subjects;
    int numOfSub;
    string course;
    public:

    //---------implementation of pure function of base class-------------

    void getCourseDetails(){
        cout<<"\nEnter Student details ";
        get_details();
        cout<<"\nEnter course : ";
        cin>>course;
        cout<<"Enter the number of subjects : ";
        cin>>numOfSub;
        subjects = new string[numOfSub];
        for(int i = 0; i < numOfSub; ++i)
        {
            cout<<"Enter the subject "<<i+1<<" : ";
            cin>>subjects[i];
        }
    }

    void display(){
        cout<<"\nStudent name : "<<name;
        cout<<"\nStudent roll no : "<<rollno;
        cout<<"\nSubjects choosen are ";
        cout<<"\nStudent course is : "<<course;
        for(int i = 0; i < numOfSub; ++i){
            cout<<"\nSubject "<<i+1<<" : "<<subjects[i];
        }
    }

};

//------------------------Driver code-------------------------------//
int main(){
    int n;
    cout<<"\nEnter the number of the Students : ";
    cin>>n;

    //array of pointers to the base class
    Student *base[n];

    for(int i = 0; i < n; ++i){
        int choice;
        cout<<"\nStudent belongs to which course?";
        cout<<"\n1.Engeering\n2.Science\n3.Medicine\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            base[i] = new Engineering();//pointer to derived class Engineering
            base[i]->getCourseDetails();
            break;
        
        case 2:
            base[i] = new Science();//pointer to derived class Science
            base[i]->getCourseDetails();
            break;
        
        case 3:
            base[i] = new Medicine();//pointer to derived class Medicine
            base[i]->getCourseDetails();
            break;
        
        default:
            break;
        }
    }

    cout<<"\nStudent Details";

    for(int i  = 0; i < n; ++i){
        base[i]->display();
    }
}