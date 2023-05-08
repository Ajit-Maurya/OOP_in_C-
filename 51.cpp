#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file1,file2;
    ofstream file3;

    file1.open("1.txt");
    file2.open("2.txt");

    file3.open("STORY.txt",ios::app);

    string line;
    while(getline(file1,line)){
        file3<<line<<'\n';
    }

    while(getline(file2,line)){
        file3<<line<<'\n';
    }

    file1.close();
    file2.close();
    file3.close();

    file1.open("STORY.txt",ios::in);

    while(getline(file1,line)){
        cout<<line<<'\n';
    }

}