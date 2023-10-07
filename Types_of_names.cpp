#include <iostream>


int main(){
    char name1[10], name2[10], name3[10];
    bool counter_loop = true;
    int counter1 = 9, counter2 = 9, counter3 = 9;    
    int i_cap;
    char c_cap;

    std::cout << "Please input ur name: ";
    std::cin >> name1 >> name2 >> name3; //輸入空格系統會把它當作下一個儲存的陣列，我搞了好久才發現ＸＤ


 //     _____ _               _    
 //    / ____| |             | |   
 //   | |    | |__   ___  ___| | __
 //   | |    | '_ \ / _ \/ __| |/ /
 //   | |____| | | |  __/ (__|   < 
 //    \_____|_| |_|\___|\___|_|\_\
                              
                              
    //下面確認幾個字的程式應該有更好的辦法避免重複三次
    while(counter_loop){ //先確認有幾個字(name1)
        if(name1[counter1])
            counter_loop = false;
        else{
            counter1 --;
        }
    }
    counter_loop = true;
    while(counter_loop){ //先確認有幾個字(name2)
        if(name2[counter2])
            counter_loop = false;
        else{
            counter2 --;
        }
    }
    counter_loop = true;
    while(counter_loop){ //先確認有幾個字(name3)
        if(name3[counter3])
            counter_loop = false;
        else{
            counter3 --;
        }
    }

  //    ______ _          _    
 //    |  ____(_)        | |   
 //    | |__   _ _ __ ___| |_  
 //    |  __| | | '__/ __| __| 
 //    | |    | | |  \__ \ |_  
 //    |_|    |_|_|  |___/\__| 
                        




    //#1
    c_cap = name1[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32); 
    std::cout << c_cap;
    for(int i=1; i<=counter1; i++){
        std::cout << name1[i];
    }
    std::cout << " ";

    //#2
    c_cap = name2[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32); 
    std::cout << c_cap;
    for(int i=1; i<=counter2; i++){
        std::cout << name2[i];
    }
    std::cout << " ";

    //#3
    c_cap = name3[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32); 
    std::cout << c_cap;
    for(int i=1; i<=counter3; i++){
        std::cout << name3[i];
    }
    std::cout << " \n";


//      _____                          _ 
//     / ____|                        | |
//    | (___   ___  ___ ___  _ __   __| |
//     \___ \ / _ \/ __/ _ \| '_ \ / _` |
//     ____) |  __/ (_| (_) | | | | (_| |
//    |_____/ \___|\___\___/|_| |_|\__,_|
                                    
    //#1
    c_cap = name1[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32); 
    std::cout << c_cap << ".";                    

    //#2
    c_cap = name2[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32); 
    std::cout << c_cap << ". ";

    //#3
    c_cap = name3[0];
    i_cap = (int)c_cap;
    c_cap = (char)(i_cap-32);  
    std::cout << c_cap;
    for(int i=1; i<=counter3; i++){
        std::cout << name3[i];
    }
    std::cout << " \n";



    return 0;
}
