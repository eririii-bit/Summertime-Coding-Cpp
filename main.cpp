#include <iostream>
#include <thread>
#include <chrono>
#include <limits>

using namespace std;
using namespace chrono;

void MainMenu();

void displayPlaceholder(int lines = 19) {
    cout << string(120, '-') << string(lines, '\n')
         << "This paragraph serves as a temporary placeholder, designed to occupy space until the actual content is ready. It's intended to visually represent where text will eventually reside, allowing for layout and design adjustments in the interim. This filler text ensures that the overall structure and flow of the document or webpage can be assessed without the distraction of irrelevant or incomplete information.";
}

void VarLesson() {
    displayPlaceholder();
}

void gameIntro() {
    cout << "\n--Introduction:--\n";
    cout << "C++ is a widely-used programming language, especially in game development and creating computer programs.\n";
    cout << "It was developed as an extension of C, sharing similar syntax.\n\n";
    this_thread::sleep_for(seconds(1));

    cout << "\nC++ is a cross-platform language designed for high-performance applications. Created by Bjarne Stroustrup,\n";
    cout << "it provides control over system resources and memory. It has evolved through updates like C++11, C++14, C++17, C++20,\n";
    cout << "and C++23. C++ is object-oriented, portable, and allows code reuse, making it cost-effective and versatile.\n\n";
    this_thread::sleep_for(seconds(1));

    cout << "\nTo begin with C++, you need a text editor (e.g., Notepad) and a compiler (e.g., GCC).\n";
    cout << "The tutorial recommends using an IDE like Code::Blocks, Eclipse, or Visual Studio for editing and debugging.\n";
    cout << "It guides users to write and execute their first C++ program, \"Hello World,\" using Code::Blocks.\n\n";
    system("pause");

    cout << "\n--Syntax:--\n";
    cout << "C++ syntax is similar to C. A basic program includes headers (e.g., <iostream>), a main() function, and\n";
    cout << "statements ending with semicolons. The tutorial emphasizes understanding the structure and flow of a C++ program.\n\n";
    this_thread::sleep_for(seconds(1));

    cout << "\n--Statements:--\n";
    cout << "C++ uses statements to perform actions. These include declaration statements (e.g., int x = 5;),\n";
    cout << "control statements (e.g., if, for, while), and more. Statements are the building blocks of a C++ program.\n\n";
    system("pause");

    VarLesson();
}

void storyIntro() {
    char storyIntroChoice;
    displayPlaceholder(25);

    while (true) {
        cout << "\n\nProceed to game intro? (Y/N): ";
        cin >> storyIntroChoice;
        if (storyIntroChoice == 'Y' || storyIntroChoice == 'y') {
            gameIntro();
            break;
        } else if (storyIntroChoice == 'N' || storyIntroChoice == 'n') {
            break;
        } else {
            cout << "Please input Y or N only.\n";
        }
    }
    if (storyIntroChoice == 'N' || storyIntroChoice == 'n'){
        MainMenu();
    }
}

void Credits() {
    cout << "\n\n";
    cout << string(120, '-') << "\n";
    displayPlaceholder(1);
    this_thread::sleep_for(seconds(1));
    cout << "\n\t\tProject Manager  | Dungo, Mitchelle Kyle L.\n"
         << "\n\t\tBusiness Analyst | Ebuenga, Caryl Yasmin P.\n"
         << "\n\t\tDeveloper        | Fabillar, John Xzibit C.\n"
         << "\n\t\tDeveloper        | Alpas, Lee Endrey A.\n"
         << "\n\t\tQ.A. Tester     | Malate, Mae Clare S.\n"
         << "\n\t\tQ.A. Tester     | Castro, John Paolo J.\n"
         << "\n\t\tQ.A. Tester     | Ubias, Breldan Dave H.\n"
         << "\n\t\tQ.A. Tester     | Aniceto, Ezekiel Leinard B.\n\n";
    this_thread::sleep_for(seconds(1));
    displayPlaceholder(1);
    this_thread::sleep_for(seconds(1));
    displayPlaceholder(1);
    cout << string(120, '-') << string(15, '\n');
    MainMenu();
}

void exitMsg() {
    cout << string(120, '-') << string(9, '\n');
    cout << "\nExiting game .";
    this_thread::sleep_for(seconds(1));
    cout << " .";
    this_thread::sleep_for(seconds(1));
    cout << " .\n\n";
}

void MainMenu() {
    cout << "\n";
    int mainMenuChoice;
    cout << "\n1. Start.\n2. Credits.\n3. Exit\n\nEnter Choice: ";

    while (!(cin >> mainMenuChoice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number.\nEnter Choice: ";
    }

    switch (mainMenuChoice) {
        case 1:
            storyIntro();
            break;
        case 2:
            Credits();
            break;
        case 3:
            exitMsg();
            break;
        default:
            cout << "Please enter among these 3 choices.\n";
            MainMenu();
            break;
    }
}

void welcomeMsg() {
    cout << string(120, '-')
         << "\n\t\t\t\t|-\t\t  -Welcome to-      \t\t-|\n"
         << "\t\t\t\t|-\t  ---------------------Summertime Coding:|\n"
         << "\t\t\t\t|A C++ Tutorial Game---------------------  \t-|\n"
         << string(120, '-');

    MainMenu();
}

int main() {
    welcomeMsg();
    return 0;
}
