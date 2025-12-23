#include <iostream>

int main(void) {
    double a,b;
    char grade;
    int score;
    double ans;
    int score_grade;// for grade converter
    // mode for option 1 and 2
    // sign for option 1, assigning arithmetic operators
    char mode,sign;

    std::cout<<"Please choose a mode\n1.Calculator\n2.Grade converter ";
    std::cin>>mode;

    switch (mode)
    {
    case '1': // calculator
        std::cout<<"Please enter a value for a: ";
        std::cin>>a;
        std::cout<<"Please enter a vlaue for b: ";
        std::cin>>b;

        std::cout<<"Please choose the operator sign[+,-,*,/]: ";
        std::cin>>mode;
        switch (mode)
        {
        case '+':
            ans = a+b;
            break;
        case '-':
            ans = a-b;
            break; 
        case '*':
            ans = a*b;
            break;
        case '/':
            ans = a/b;
            break;
        default:
            std::cout<<"invalid sign!";
            break;
        }
        std::cout<<a<<' '<<mode<<' '<<b<<" = "<<ans<<'\n';
        break;
    case  '2':// grade convertor
        std::cout<<"Please enter your score: ";
        std::cin>>score;// score is stored in a
        std::cin.ignore(1000, '\n'); // Clears the buffer just in case
        score_grade = score / 10;
        switch (score_grade)
        {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            grade = 'F';
            break;
        default:
            std::cout<<"Inavlid score!";
            break;
        }
        std::cout<<"Your grade: "<<grade<<'\n';
        break;
    default:
        std::cout<<"Invalid choice!";
        break;
    }
    
    
}