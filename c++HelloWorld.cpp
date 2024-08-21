#include <iostream>
// #include <vector>
// #include <cmath>

// Comment
/*
Comment
*/

// THIS WAS FOR NAMESPACES
// namespace first {
//     int x = 1;
// }
// namespace second {
//     int x = 2;
// }

// THIS IS FOR TYPEDEF
// But it is basically just renaming data types
// Also you usually add _t after for type
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int num_t;
// USING keyword is more popular and recommended nowadays cuz of something
// using txt_t = std::string;
// using num_t = int;

int main() {
    
    
    return 0;
}
    // INTRO: --------------------------------

    // std::cout << "I like pizza" << std::endl;
    // std::cout << "It's really good" << '/n';

    // int x = 5;
    // int y = 6;
    // int sum = x + y;

    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << sum << '\n';

    // BASIC DATA TYPES: ------------------------

    // int age = 21;
    // int year = 2024;
    
    // double price = 10.99;
    // double temp = 25.1;

    // char grade = 'A';
    // char initial = 'N';

    // bool isStudent = true;
    // bool isLame = false;

    // std::string name = "Nico Mendoza";
    // std::string day = "Wednesday";
    // std::cout << "Hello " << name;

    // CONSTANTS: --------------------------------

    // Usually you make all letters uppercase in constants
    // const double PI = 3.14159;
    // const int LIGHT_SPEED = 299792458;

    // NAMESPACES: ---------------------------------------

    // using namespace first; 
    // If this line below wasn't here the "using namespace" line would make x always refer to the "first" namespace
    // int x = 0;

    // std::cout << x << first::x << second::x;

    // using namespace std;
    // This is lowk an op namespace as it lets you write strings and cout's without the std, buuuut maybe don't use it as you might run into a naming conflict 

    // cout << x;
    // string name = "Nico";

    // using  std::cout;
    // using  std::string;
    // This is what you should do instead of just using namespace std (namespace standard)

    // TYPEDEFS: -----------------------------------------------

    // pairlist_t pairlist;
    // text_t firstName = "Nico";
    // num_t age = 19;

    // std::cout << firstName << '\n';
    // std::cout << age << '\n';

    // ARITHMETIC OPERATORS: ------------------------------

    // int students = 20;

    // students += 2;
    // students ++;

    // students -= 2;
    // students --;

    // students *= 2;
    // students /= 3;

    // int remainder = students % 2;

    // std::cout << remainder << '\n';

    // std::cout << students;

    // TYPE CONVERSION: --------------------------

    // double x = (int) 3.14;
    // char y = 100;

    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << (char) 101 << '\n';

    // int correct = 8;
    // int questions = 10;
    // double score = correct/(double)questions * 100;

    // std::cout << score << "%";
    
    // USER INPUT: ----------------------------

    // std::string name;
    // std::string fullName;
    // int age;

    // std::cout << "What is your name?";
    // std::cin >> name;
    // std::cout << "How old are you?";
    // std::cin >> age;
    // // When get line is after a cin, the get line will take in the leftover \n from the previous cin
    // // To fix this we add std::ws to eliminate any whitespace or newline characters
    // std::cout << "What is your full name?";
    // std::getline(std::cin >> std::ws, fullName);
  
    // std::cout << "Hello " << name << ", you are " << age << " years old." << '\n';
    // std::cout << fullName;

    // USEFUL MATH FUNCTIONS: ------------------------------

    // double x = 3;
    // double y = 4;
    // double pie = 3.145;
    // double z;
     
    // I mean what do you think these two do... lol
    // z = std::max(x, y);
    // z = std::min(x, y);

    // These need the cmath import
    // z = pow(2, 3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(pie);
    // YOOOOO CEILING AND FLOOR FUNCTIONS #DISCRETEMATHISOP
    // z = ceil(pie);
    // z = floor(pie);

    // std::cout << z;

