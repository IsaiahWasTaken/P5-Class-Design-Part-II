#include "Section A.h"
#include "Section B.h"
#include "Section C.h"
#include <iostream>
#include <string>


int main(){

    A obj("https://www.ornage.com/lobster");
    cout << obj <<endl;


    B call("potato");
    call.setDate(1,1,1000);
    call.setflash(true);
    call.setiso(1000);
    call.setauthorName("bob");
    call.setxposure(111);
    call.setType("GIF");
    call.setXY(105,100);
    call.setaptSize(22);
    call.setimgSize(92385.3);
    
    
    cout << call << endl;












    return 0;
}
