//
//  Actual_Lab.cpp
//  Lab7
//
//  Created by Rudolf Musika on 4/12/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

//#include <algorithm>
#include <cstdlib>
#include <iostream>

/* Solution should be " The city's central computer told you? R7D7, you know better than to trust a strange computer! --C8PO " */
void encrypt(char& c);
int main(){
    std:: string x = " ";
    std:: cout<<"Enter what is to be Encryptd below "<<std::endl;
    std::getline(std::cin, x);
    
    std::cout<<"\nThis is the original Message"<<std::endl;
    std::cout<<x<<std::endl;
    
    std::cout<<"\nThis is the encrypted message"<<std::endl;
    for_each (x.begin(),x.end(),encrypt);
    std::cout<<x<<std::endl;
    
    for (std::string::iterator it = x.begin(); it != x.end() ; ++it){
        encrypt(*it);
    }
    std::cout<<"\nThis is the decrypted Message"<<std::endl;
    std::cout<<x<<std::endl;
    return EXIT_SUCCESS;
}

void encrypt(char& Entered){
    bool Swap(false);
    
    if (islower(Entered)){
        Swap = true;
        Entered = toupper(Entered);
    }
    
    if (Entered <= 77 && Entered >= 65){
            Entered+=13;
    }
    else if ((Entered >= 78)  && (Entered<= 90)){
            Entered -= 13;
    }
   //To check if it is lowered.
    if (Swap == true){
        Entered = tolower(Entered);
    }
  //***************//    
    if (Entered <= 52 && Entered >= 48){
            Entered+=5;
    }
    else if ((Entered >= 53)  && (Entered<= 57)){
            Entered -= 5;
    }
}
//****LAST LAB CS II*****//
