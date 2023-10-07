#include <iostream>


int main(){
    char pass[8];
    bool ur_a_failure = false;

    std::cout << "Please input a 8-charactor long of password: ";
    std::cin >> pass;
    //std::cout << "For debug purpose\n" << (int)pass[0] << "\n" << (int)pass[1] << "\n"<< (int)pass[2]<< "\n" << (int)pass[3] << "\n" << (int)pass[4] << "\n" << (int)pass[5] << "\n" << (int)pass[6] << "\n" << (int)pass[7] << "\n";

    for(int i = 0; i<8; i++){ // check Uppercase
        if((int)pass[i] >= 65 && (int)pass[i] < 97)
            break;
        if(i==7)
            ur_a_failure = true;
    }

    for(int i = 0; i<8; i++){ // check Lowercase
        if((int)pass[i] >= 97 && (int)pass[i] <= 122)
            break;
        if(i==7)
            ur_a_failure = true;
    }

    for(int i = 0; i<8; i++){ // check number
        if((int)pass[i] >= 49 && (int)pass[i] < 65)
            break;
        if(i==7)
            ur_a_failure = true;
    }

    for(int i = 0; i<8; i++){ // check Special character
        if((int)pass[i] >= 49 && (int)pass[i] <= 97){
            //Yeah it's empty, don't suspect it.
        }
        else
            ur_a_failure = true;
    }

    if(ur_a_failure)
        std::cout << "error\n";
    else
        std::cout << "success\n";

    return 0;
}
