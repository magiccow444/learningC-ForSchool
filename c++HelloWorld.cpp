#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>

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

// void happyBirthday(std::string bdayPerson, int age);

// double square(double length);
// double cube(double length);
// std::string concatStrings(std::string string1, std::string string2);

// void bakePizza();
// void bakePizza(std::string topping1);
// void bakePizza(std::string topping1, std::string topping2);

// void printNum(int myNum);

// double getTotal(double prices[], int size);

// int searchArray(std::string array[], int size, std::string target);
// int binarySearch(int array[], int size, int target);

int main() {


    return 0;
}   

// YOOO I IMPLEMENTED THIS ALL ON MY OWN FOR THE FIRST TIME IN C++ WITH BARELY ANY HELP!! :DDDD
// int binarySearch(int array[], int size, int target) {
//     int low = 0;
//     int high = size - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (target > array[mid]) {
//             low =  mid + 1;
//         }
//         else if (target < array[mid]) {
//             high = mid - 1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }

// int searchArray(std::string array[], int size, std::string target) {
//     for (int i = 0; i < size; i++) {
//         if (array[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// When you pass an array through a function it decays into a pointer
// this means it no longer knows how long the original array is so we
// have to explicitly tell it.
// double getTotal(double prices[], int size) {
//     double total = 0;
//     for (int i = 0; i < size; i++) {
//         total += prices[i];
//     }

//     return total;
// }

// void printNum (int myNum) {
//     std::cout << myNum;
// }

// void bakePizza() {
//     std::cout << "Here is your pizza\n";
// }

// void bakePizza(std::string topping1) {
//     std::cout << "Here is your " << topping1 << " pizza\n";
// }

// void bakePizza(std::string topping1, std::string topping2) {
//     std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza\n";
// }

// std::string concatStrings(std::string string1, std::string string2) {
//     return string1 + " " + string2;
// }

// double square(double length) {
//     return length * length;
// }
// double cube(double length) {
//     return length * length * length;
// }

// void happyBirthday(std::string bdayPerson, int age) {
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "Happy Birthday dear " << bdayPerson << "!\n";
//     std::cout << "Happy Birthday to you!\n";
//     std::cout << "YAY now you're " << age << "!\n";
// }

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

    // HYPOTENUSE CALC PROGRAM: ----------------------------

    // double a;
    // double b;
    // double c;
    
    // std::cout << "Enter side A: ";
    // std::cin >> a;
    
    // std::cout << "Enter side B: ";
    // std::cin >> b;

    // c = sqrt(pow(a, 2) + pow(b, 2));

    // std::cout << "Side C is: " << c;

    // IF STATEMENTS: --------------------------------------

    // int age;

    // std::cout << "Enter your age: ";
    // std::cin >> age;

    // if (age >= 100) {
    //     std::cout << "You are too old to enter this site!";
    // }
    // else if (age >= 18) {
    //     std::cout << "Welcome to the site!";
    // }    
    // else if (age < 0) {
    //     std::cout << "You haven't been born yet!";
    // }
    // else {
    //     std::cout << "You are not old enough to enter :(";
    // }

    // SWITCH STATEMENTS: ----------------------------

    // int month;
    // std::cout << "Enter the month, (1-12): ";
    // std::cin >> month;
    
    // switch (month) {
    //     case 1:
    //         std::cout << "It is January";
    //         break;
    //     case 2:
    //         std::cout << "It is February";
    //         break;
    //     case 3:
    //         std::cout << "It is March";
    //         break;
    //     case 4:
    //         std::cout << "It is April";
    //         break;
    //     case 5:
    //         std::cout << "It is May";
    //         break;
    //     case 6: 
    //         std::cout << "It is June";
    //         break;
    //     case 7:
    //         std::cout << "It is July";
    //         break;
    //     case 8:
    //         std::cout << "It is August";
    //         break;
    //     case 9: 
    //         std::cout << "It is September";
    //         break;
    //     case 10:
    //         std::cout << "It is October";
    //         break; 
    //     case 11:
    //         std::cout << "It is November";
    //         break;  
    //     case 12:
    //         std::cout << "It is December";
    //         break;
    //     default:
    //         std::cout << "Please enter in only numbers (1-12)";
    // }   

    // char grade;

    // switch (grade) {
    //     case 'A':
    //         std::cout << "You got an A!";
    //         break;
    // }

    // CALCULATOR PROGRAM: ----------------------------

    // char op;
    // double num1;
    // double num2;
    // double result;

    // std::cout << "*********** Calculator ****************\n";

    // std::cout << "Enter either (+ - * /): ";
    // std::cin >> op;

    // std::cout << "Enter the first number: ";
    // std::cin >> num1;

    // std::cout << "Enter the second number: ";
    // std::cin >> num2;

    // switch (op) {
    //     case '+':
    //         result = num1 + num2;
    //         std::cout << "The answer is " << result << '\n';
    //         break;
    //     case '-':
    //         result = num1 - num2;
    //         std::cout << "The answer is " << result << '\n';
    //         break;
    //     case '*':
    //         result = num1 * num2;
    //         std::cout << "The answer is " << result << '\n';
    //         break;
    //     case '/':
    //         result = num1 / num2;
    //         std::cout << "The answer is " << result << '\n';
    //         break;
    //     default:
    //         std::cout << "That wasn't a valid operator\n";
    //         break;
    // }
    
    // std::cout << "****************************************";

    // TERNARY OPERATORS: ----------------------------

    // int grade = 75;

    // if (grade >= 60) {
    //     std::cout << "You pass!";
    // }   
    // else {
    //     std::cout << "You fail :(";
    // }

    // The if/else above is equal to the ternary operator equation below

    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // LOGICAL OPERATORS: -------------------------------

    // int temp;
    // bool sunny = false;

    // std::cout << "Enter the temperature: ";
    // std::cin >> temp;

    // if (temp > 0 && temp < 30) {
    //     std::cout << "The temperature is good!";
    // }
    // if (temp <= 0 || temp >= 30) {
    //     std::cout << "The temperature is bad!";
    // }
    // if (!sunny) {
    //     std::cout << "It is not sunny outside";
    // }

    // TEMP CONVERSION PROGRAM: ---------------------------

    // double temp;
    // char unit;

    // std::cout << "***** TEMP CONVERSION *******\n";
    
    // std::cout << "F = Farenheit\n";
    // std::cout << "C = Celsius\n";
    // std::cout << "What unit would you like to convert to? ";
    // std::cin >> unit;

    // if (unit == 'F' || unit == 'f') {
    //     std::cout << "Enter the temperature in Celsius: ";
    //     std::cin >> temp;

    //     temp = (1.8 * temp) + 32.0;
    //     std::cout << "Temperature is: " << temp << "F\n";
    // }
    // else if (unit == 'C' || unit == 'c') {
    //     std::cout << "Enter the temperature in Fahrenheit: ";

    //     temp = (temp - 32.0) / 1.8;
    //     std::cout << "Temperature is: " << temp << "C\n";
    // }
    // else {
    //     std::cout << "Please enter in only C or F\n";
    // }

    // std::cout << "*********************************";

    // USEFUL STRING METHODS: ------------------------------

    // std::string name;

    // std::cout << "Enter your name: ";
    // std::getline(std::cin, name);

    // if (name.length() > 12) {
    //     std::cout << "Your name can't be more than 12 characters long.";
    // }
    // else {
    //     std::cout << "Welcome " << name;
    // }

    // if (name.empty()) {
    //     std::cout << "You didn't enter your name";
    // }
    // else {
    //     std::cout << "Hello " << name; 
    // }

    // name.clear();

    // std::cout << "Hello " << name;
    
    // name.append("@gamil.com");

    // std::cout << "Your username is now " << name;

    // std::cout << name.at(1);

    // name.insert(0, "@");

    // std::cout << name;

    // std::cout << name.find(' '); 
    
    // name.erase(0, 3);

    // std::cout << name;

    // WHILE LOOPS: ---------------------------------

    // std::string name;

    // while (name.empty()) {
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin, name);
    // }

    // std::cout << "Hello " << name;

    // int number;

    // Do while means do the first part once no matter what
    // and then loop if the condition is not fulfilled

    // do {
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // } while (number < 0);

    // std::cout << "The # is: " << number;

    // FOR LOOPS: --------------------------------------

    // for (int i = 10; i > -1; i--) {
    //     std::cout << i << '\n';
    // }

    // std::cout << "HAPPY NEW YEAR!\n";

    // BREAK AND CONTINUE: ----------------------------------

    // for (int i = 0; i < 20; i++) {
    //     if (i == 13) {
    //         continue;
    //     }
    //     if (i == 19) {
    //         break;
    //     }
    //     std::cout << i << '\n';
    // }

    // NESTED LOOPS: ------------------------------------
    
    // int rows;
    // int columns;
    // char symbol;
    
    // std::cout << "How many rows: ";
    // std::cin >> rows;
    
    // std::cout << "How many columns: ";
    // std::cin >> columns;

    // std::cout << "Enter a symbol to use: ";
    // std::cin >> symbol;
    
    // for (int i = 0; i < rows; i++) {
    //     for (int j = 0; j < columns; j++) {
    //         std::cout << symbol;
    //     }
    //     std::cout << '\n';
    // }

    // RANDOM NUMBER GENERATOR: ---------------------

    //LOL usually programmers use the current time as the seed
    // srand(time(NULL)); 

    // int num1 = (rand() % 6) + 1;
    // int num2 = (rand() % 6) + 1;
    // int num3 = (rand() % 20) + 1;

    // std::cout << num1 << '\n' << num2 << '\n' << num3;

    // RANDOM EVENT GENERATOR: -------------------------------

    // srand(time(0));
    // int randNum = rand() % 5 + 1;

    // switch(randNum) {
    //     case 1: 
    //         std::cout << "You win a bumper sticker!\n";
    //         break;
    //     case 2:
    //         std::cout << "You win a t-shirt!\n";
    //         break;
    //     case 3:
    //         std::cout << "You win a free lunch!\n";
    //         break;
    //     case 4:
    //         std::cout << "You win a gift card!\n";
    //         break;
    //     case 5:
    //         std::cout << "You win a concert ticket!\n";
    //         break;
    // }

    // NUMBER GUESSING GAME: --------------------------

    // int num;
    // int guess;
    // int tries;

    // srand(time(NULL));
    // num = rand() % 100 + 1;

    // std::cout << "*********** NUMBER GUESSING GAME *************\n";

    // do {
    //     std::cout << "Enter a guess between (1-100): ";
    //     std::cin >> guess;
    //     tries++;

    //     if (guess > num) {
    //         std::cout << "Too high\n";
    //     }
    //     else if (guess < num) {
    //         std::cout << "Too low\n";
    //     }
    //     else {
    //         std::cout << "CORRECT! # of tries: " << tries << '\n';
    //     }
    // } while (guess != num);

    // std::cout << "***********************************************";

    // USER DEFINED FUNCTIONS: ----------------------------

    // std::string name = "Nico";
    // int age = 19;

    // happyBirthday(name, age);

    // RETURN IN C++: -----------------------------------

    // double length = 6.0;
    // double area = square(length);
    // double volume = cube(length);

    // std::cout << "Area: " << area << "cm^2\n";
    // std::cout << "Volume: " << volume << "cm^3\n";

    // std::string first = "Nico";
    // std::string last = "Mendoza";
    // std::string full = concatStrings(first, last);

    // std::cout << full;

    // FUNCTION OVERLOADING: ------------------------------

    // Don't forget a functions signature is its name and parameters
    // so to overload you need to change the parameters

    // bakePizza("pepperoni", "tomato");

    // VARIABLE SCOPE: -----------------------------------
    
    // Functions will use local variables over global if they are
    // named the same

    // int myNum = 1;

    // If you want to use the global variable over the local one
    // just put two colons before like so:

    // std::cout << ::myNum;

    // printNum(myNum);

    // ARRAYS: -----------------------------------------

    // std::string cars[] = {"Kia", "Corvette", "Mustang"};
    // std::string otherCars[3];

    // cars[1] = "Camaro";
    // otherCars[0] = "Camry";
    // otherCars[1] = "VolksW";
    // otherCars[2] = "Audi";

    // std::cout << cars[0] << '\n';
    // std::cout << cars[1] << '\n';
    // std::cout << cars[2] << "\n\n";

    // std::cout << otherCars[0] << '\n';
    // std::cout << otherCars[1] << '\n';
    // std::cout << otherCars[2] << '\n';

    // double prices[] = {5.00, 7.50, 9.99, 15.00};

    // std::cout << prices[0] << '\n';
    // std::cout << prices[1] << '\n';
    // std::cout << prices[2] << '\n';
    // std::cout << prices[3] << '\n';

    // SIZE OF OPERATOR: --------------------------------

    // std::string name = "Nico";
    // double gpa = 2.5;
    // char grade = 'A';
    // bool student = true;
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};
    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    // std::cout << sizeof(students) << " bytes";

    // ARRAY ITERATION: ------------------------------

    // std::string students[] = {"James", "Jack", "Josh", "Jim", "John"};
    // char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
    //     std::cout << students[i] << '\n';
    // }

    // FOR EACH LOOP: ------------------------------------

    // std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    // int grades[] = {65, 23, 94, 75};

    // for (int grade : grades) {
    //     std::cout << grade << '\n';
    // }

    // PASSING ARRAYS INTO FUNCTIONS: ----------------

    // double prices[] = {49.99, 15.05, 75, 9.99};
    // int size = sizeof(prices)/sizeof(double);
    // double total = getTotal(prices, size);

    // std::cout << "$" << total;

    // SEARCHING ARRAYS: -----------------------------------

    // int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // int index;
    // int target;

    // std::string foods[] = {"pizza", "hamburger", "hotdog"};
    // int fsize = sizeof(foods)/sizeof(foods[0]);
    // std::string ftarget;
    
    // std::cout << "Enter element to search for: " << '\n';
    // std::getline(std::cin, ftarget);

    // index = searchArray(foods, size, ftarget);

    // if (index != -1) {
    //     std::cout << ftarget << " is at index " << index;
    // }
    // else {
    //     std::cout << ftarget << " is not in the array";
    // }

    // std::cout << "Yk what to do: ";
    // std::cin >> target;

    // index = binarySearch(numbers, size, target);

    // std::cout << index;