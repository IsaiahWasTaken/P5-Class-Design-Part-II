#include <iostream>
#include <string>
using namespace std;
class C{
private:
    string item ="";
    int quantity = 0;
    long id = 0;
    double price = 0.00;
public:
    C(){
        price = 0.00;
        id = 0;
        quantity = 0;
        item ="";
    };



    void setTitle(string b){
        item = b;
    }
    const string getTitle(){
        return item;
    }
    void setQ(int b1){
        quantity = b1;
    }
    const int getQ(){
        return quantity;
    }
    void setid(long b2){
        id = b2;
    }
    const long getid(){
        return id;
    }
    void setP(double b3){
        price = b3;
    }
    const double getP(){
        return price;
    }




};

class order{
private:
    double reciept;
public:

    int maxbuy[10];
    C stuff[10];

    void shoppingcart(C X, int n, int amount){
        stuff[n] = X;
        maxbuy[n] = amount;
    }
    const string addlist(){
        for (int i = 0; i <= 10; i++) {
            reciept += (stuff[i].getP() * maxbuy[i]);
        }
        return to_string(reciept);
    }

    const int getamount(int x){
        return maxbuy[x];
    }
    const C getitem(int c){
        return stuff[c];

}

};
class store{
private:
    C store[100];
    int i = 10;
public:

    void getstore(C j){
        store[j.getid()] = j;
    }
    const C setstore(int n){
        return store[n];
    }
    const void checkorder(C& e){
        while(i <=10){

        }
          // store- e.getitem(i);

    }
  //incomplete



};
void extfunctio3(){
    cout << 0;
}
