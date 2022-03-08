#include <iostream>
#include <string>

using namespace std;
class A {
private:
    string input;
    string scheme;
    string authority;
    string path;
    const string bob = "//";
    const string gob = "com";

    int z = input.size();

    int b = input.find(":");
    int c = input.find(bob);
    int d = input.find(gob);
public:
     A(string A){
        input  = A;

    }

    const string getInput() const {
        return input;
    }
     void setScheme(string s2){
        b = input.find(":");
        s2 = input.substr(0,b+1);
        scheme = s2;

    }
    const string getScheme(){
        return scheme;
    }
    const void setAuthority(string s3){
        c = input.find(bob);
        d = input.find(gob);
        s3 = input.substr(c, d-3);
        authority = s3;
    }
    const string getAuthority(){
        return authority;
    }
    const void setPath(string s4){
        d = input.find(gob);
        z = input.size();
        s4 = input.substr(d+3,z);
        path = s4;
    }
    const string getPath(){
        return path;
    }

};

ostream& operator << (ostream& output, A& a) {
    output <<"URL: " << a.getInput() << endl;
    output <<"SCHEME: " << a.getScheme() << endl ;
    output <<"AUTHORITY: "<< a.getAuthority() << endl;
    output <<"PATH: "<< a.getPath() << endl;
    return output;

}
