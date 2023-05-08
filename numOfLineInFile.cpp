#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ifstream obj;
    obj.open("STORY.txt", ios::in);

    string line;
    int count = 0;
    while(getline(obj,line)){
        if(line[0] != 'A')
            count++;
    }

    cout<<"number of line not starting with 'A' are : "<<count;
}