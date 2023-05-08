#include <iostream>
#include <stdexcept>
using namespace std;

bool valid(string input){
    for(int i = 0; i < input.size(); ++i)
    {
        if(input[i] < 48 || input[i] > 57)
            return false;
    }
    return true;
}

int main(){
    while(1){
        string input;
        cout<<"Enter a string of length less than 5 and only containing numbers from 0-9\n";
        cin>>input;

        try{
            if(input.size() >= 5)
                throw length_error("string length is greater or equal to 5\n");
            else if(!valid(input))
                throw runtime_error("string contain values other than numbers\n");
            else
                throw  input;
        }
    
        catch(const length_error& e){
            cout<<"Error : "<<e.what()<<'\n';
        }
        catch(const runtime_error& e){
            cout<<"Error : "<<e.what()<<'\n';
        }
        catch(const string& input){
            cout<<"valid input : "<<input<<'\n';
            return 0;
        }
    }   
}