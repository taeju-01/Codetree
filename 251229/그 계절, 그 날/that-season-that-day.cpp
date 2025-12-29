#include <iostream>

using namespace std;

int Y, M, D;
bool yoonyear(int Y){
    if(Y%400==0){
        return true;
    }
    else if(Y%100==0&&Y%4==0){
        return false;
    }
    else if(Y%4==0){
        return true;
    }
    else{
        return false;
    }
}

bool isright(int Y,int M,int D){
    if(M==1||M==3||M==5||M==7||M==8||M==10||M==12){
        if(D<=31){
            return true;
        }
    }
    if(M==4||M==6||M==9||M==11){
        if(D<=30){
            return true;
        }
    }
    if(M==2){
        if(yoonyear(Y)){
            if(D<=29){
                return true;
            }
        }
        else{
            if(D<=28){
                return true;
            }
        }
    }
    return false;
}

void weather(int Y,int M,int D){
    if(isright(Y,M,D)){
        if(M>=3&&M<=5){
            cout<<"Spring";
        }
        else if(M>=6&&M<=8){
            cout<<"Summer";
        }
        else if(M>=9&&M>=11){
            cout<<"Fall";
        }
        else if(M==12||M==1||M==2){
            cout<<"Winter";
        }
    }
    else{
        cout<<-1;
    }
}

int main() {
    cin >> Y >> M >> D;
    weather(Y,M,D);

    // Please write your code here.

    return 0;
}