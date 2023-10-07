#include <complex.h>
#include <iostream>
#include <string>

int main(){
    char carray[101];
    int counter = 100, counter_from_begin = 0;
    bool counter_loop = true, except_cirrumstance = true;
    std::cout << "Please enter character(s) followed by an enter: ";
    std::cin >> carray;

    while(counter_loop){
        if(carray[counter])
            counter_loop = false;
        else{
            counter --;
        }
    }

    std::cout << "You have entered " << counter+1 << " characters." << "\n";
    std::cout << "The program needs to check its balance for " << ceil((counter+1)/2.0) << " times.\n"; //The decimal (.0) for 2.0 is VERY IMPORTANT, floating is needed in order to get the correct value.

    for(int i = ceil((counter+1)/2.0); i>=0; i--){
        while(except_cirrumstance){
            std::cout << "Start checking...\n";
            if(counter_from_begin==counter){
                std::cout << "Do'n mess with me!\n";
                goto endLoop;
            }
            except_cirrumstance = false;
        }
        if(counter_from_begin >= counter){
            std::cout << "The character(s) you entered are blanced!\n";
            break;
        }
        else if(carray[counter_from_begin] == carray[counter]){
            counter_from_begin ++;
            counter --;
        }
        else{
            std::cout << "The character(s) you entered are NOT balanced.\n";
            break;
        }
    }
    endLoop:
    return 0;
}
