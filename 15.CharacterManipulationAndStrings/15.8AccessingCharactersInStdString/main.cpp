#include <iostream>
#include <string>

int main(){

    /*
    std::string str1 {"Hello there"};
	
	//Size of a string : doesn't count the null terminator
	std::cout << "str1.size() : " << str1.size() << std::endl;
    
    //Reading characters in std::string : array index operator
    //Regular indexed loop. Can also be adapted to use while and do-while
	//This is left as an exercise.
    std::cout << std::endl;
    std::cout << "For loop with array index notation : "<< std::endl;
	
	std::cout << "str1(for loop) : " ;
    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1[i] ;
    }
	std::cout << std::endl;
    */

    //Can also use range based for loop
    /*
    std::string str1 {"Hello there"};
    std::cout << std::endl;
    std::cout << "Using range based for loop : "<< std::endl;
	
	std::cout << "str1(range based for loop) : " ;
    for(char value : str1){
        std::cout << " " << value ;
    }
	std::cout << std::endl;
    */

   //at() syntax to target characters
   /*
    std::cout << std::endl;
    std::cout << "Using the std::string::at() method : "<< std::endl;

    std::string str1 {"Hello there"};
	std::cout << "str1 : (for loop with at()) : " ;

    for(size_t i{}; i < str1.size(); ++i){
        std::cout << " " << str1.at(i) ;
    }
	std::cout << std::endl;
    */

    //modifying with operator[] and at()
    /*
    std::string str1 {"hello there"};
    str1[0] = 'b';
    str1.at(1) = 'a';
    std::cout << "str1(modified) : " << str1 << std::endl;
    */

    //getting the front and back characters
    /*
    std::string str2{"the phoenix king"};    
    char& front_char = str2.front();
    char& back_char = str2.back();
    std::cout << "the front char in str2 is : " << front_char << std::endl;
    std::cout << "the back char in str2 is : " << back_char << std::endl;

    front_char = 'r';
    back_char = 'd';

    std::cout << "str2 : " << str2 << std::endl;
    */


	//c_str method
    /*
	//doc : https://en.cppreference.com/w/cpp/string/basic_string/c_str
	//returns const char * to the wrapped string. you shouldn't use 
	//it to modify data in the string.
    std::string str2{"the phoenix king"}; 
    const char * wrapped_c_string = str2.c_str();
    std::cout << "wrapped c string : " << wrapped_c_string << std::endl;
    //wrapped_c_string[0] = 'e'; // compiler error
    */

   //data()
    std::string str2 { "hello world"};
    
    char * data = str2.data();
    std::cout << "wrapped c string : " << data << std::endl;
    
    data[0] = 'b';// this also changes std::string.
    
    std::cout << "wrapped c string (after modification) : " << data << std::endl;
    std::cout << "original string (after modification ) :" << str2 << std::endl;


    return 0;
}
