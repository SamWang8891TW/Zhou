#include <complex.h>
#include <iostream>
#include <string>

int main(){
    char carray[101];
    int counter = 100, counter_from_begin = 0;
    bool counter_loop = true, except_cirrumstance = true;
    std::cout << "Please enter character(s) followed by an enter: ";
    std::cin >> carray;

    while(counter_loop){ //先確認有幾個字
        if(carray[counter])
            counter_loop = false;
        else{
            counter --;
        }
    }

    std::cout << "You have entered " << counter+1 << " characters." << "\n";
    std::cout << "The program needs to check its balance for " << ceil((counter+1)/2.0) << " times.\n"; //The decimal (.0) for 2.0 is VERY IMPORTANT, floating is needed in order to get the correct value.

    for(int i = ceil((counter+1)/2.0); i>=0; i--){ //開始檢查對稱
        while(except_cirrumstance){ //只有一個字
            std::cout << "Start checking...\n";
            if(counter_from_begin==counter){
                std::cout << "Do'n mess with me!\n";
                goto endLoop;
            }
            except_cirrumstance = false;
        }
        if(counter_from_begin >= counter){ //如果已經檢查到底了就要跳脫，這個要擺在前面，不然會出錯
            std::cout << "The character(s) you entered are blanced!\n";
            break;
        }
        else if(carray[counter_from_begin] == carray[counter]){ //持續檢查
            counter_from_begin ++;
            counter --;
        }
        else{ //一遇到沒有對稱的就跳脫並告知使用者
            std::cout << "The character(s) you entered are NOT balanced.\n";
            break;
        }
    }
    endLoop:
    return 0;
}
