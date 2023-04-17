#include<iostream>
using namespace std;

class Student{
	int roll_number;
	string name;
	string course;
	public:
		void input_student(){
			cout<<"\nEnter student details";
			cout<<"\nStudent roll number : ";
			cin>>roll_number;
			cout<<"Student name : ";
			cin>>name;
			cout<<"Student course : ";
			cin>>course;
		}
		
		void display_student(){
			cout<<"\nstudent name : "<<name;
			cout<<"\nstudent roll number : "<<roll_number;
			cout<<"\nstudent course : "<<course;			
		}
};

class Exam : public Student{
	float mark1,mark2,mark3;
	public:
		void input_marks(){
			input_student();
			cout<<"\nEnter the three marks";
			cout<<"\nEnter the first marks : ";
			cin>>mark1;
			cout<<"Enter the second marks : ";
			cin>>mark2;
			cout<<"Enter the third marks : ";
			cin>>mark3;
		}
		
		void display_result(){
			display_student();
			cout<<"\nfirst marks : "<<mark1;
			cout<<"\nsecond marks : "<<mark1;
			cout<<"\nthird marks : "<<mark1;
			cout<<"\npercentage : "<<(mark1 + mark2 + mark3)/3.0;
		}
};

int main(){
	Exam o;
	o.input_marks();
	o.display_result();
}
