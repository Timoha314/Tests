#pragma once

class NOD{
private:
    unsigned num1,num2;
public:
    NOD():num1{1},num2{1}{}
    NOD(unsigned n1,unsigned n2){
        num1 = n1;
        num2 = n2;
    }
    unsigned Nod(){
        unsigned a, b;
        a = num1;
        b = num2;
        if(a<=0||b<=0) return 0;
        if (a < b) {
            unsigned t;
            t = a;
            a = b;
            b = t;
        }
        while (a % b != 0) {
            a = a % b;
            unsigned t;
            t = a;
            a = b;
            b = t;
        }
        return b;
    }

    unsigned Nok(){
        if(Nod()==0)return 0;
        return num1*num2/Nod();
    }

};
