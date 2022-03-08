#include <iostream>
#include <string>
#include <vector>
using namespace std;
class B {
private:
    string name = "";
    string type = "";
    int d = 0, m = 0, y = 0;
    double imgSize = 0.0;
    string authorName = "";
    int width, height = 0;
    int aperture = 0;
    int exposure = 0;
    bool flash = false;
    int iso = 0;
public:
    B(string a){
        name = a;

    }
    const string getName(){
        return name;


    }
    void setType(string a1){
        if(a1 != "GIF" || a1 != "JPEG" || a1 != "PNG" ){
            cout<< "input error";
        }
        else{type = a1; }

    }
    string getType(){
        return type;
    }
    void setDate(int day, int month, int year){
        day = d;
        month = m;
        year  = y;
    }
    const string getDate(){
        return to_string(m) + "." + to_string(d) + "." + to_string(y);
    }
    void setimgSize(double a2){
        imgSize = a2;
    }
    const double getimgSize(){
        return imgSize;
    }
    void setauthorName(string a3){
        authorName = a3;
    }
    const string getauthorName(){
        return authorName;
    }

    void setXY(int x, int y){
        width = x;
        height = y;
    }
    const string getXY(){
        return to_string(width) + " by " + to_string(height);
    }
    void setaptSize(int a4){
        aperture = a4;
    }
    const int getaptSize(){
        return aperture;
    }
    void setxposure(int a5){
        exposure = a5;
    }
    const int getxposure(){
        return exposure;
    }
    void setiso(int a5){
        iso = a5;
    }
    const int getiso(){
        return iso;
    }
    void setflash(bool a5) {
        flash = a5;
    }
    const bool getflash(){
        return flash;
    }





};

ostream& operator << (ostream& output, B& show) {
    output << "File name: " << show.getName() << endl;
    output << "image type:" << show.getType() << endl;
    output << "date:" << show.getDate() << endl;
    output << "Size:" << show.getimgSize() << endl;
    output << "Photographer:" << show.getauthorName() << endl;
    output << "Dimensions:" << show.getXY() << endl;
    output << "aperture: f/" << show.getaptSize() << endl;
    output<< "exposure: 1/" << show.getxposure() << endl;
    output<< "ISO:" << show.getiso() << endl;
    output<< "flash:" << show.getflash() << endl;
    return output;

}
