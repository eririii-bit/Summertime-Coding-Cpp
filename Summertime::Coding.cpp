#include <iostream>
#include <thread>
#include <chrono>
#include <limits>

using namespace std;
using namespace chrono;

void MainMenu();
const string lineBreak = string(120, '-');
const string blankSpace = string(2, '\n');
const string titleTabs = string(4, '\t');


inline void Wait(int n) {
    this_thread::sleep_for(seconds(n));
}

inline void pause(){
    cout << "\n[Press enter key to continue . . .]";
    cin.ignore();
}

inline void displayPlaceholder() {
    cout << "\nThis paragraph serves as a temporary placeholder, designed to occupy space until the actual content is ready. It's intended to visually represent where text will eventually reside, allowing for layout and design adjustments in the interim. This filler text ensures that the overall structure and flow of the document or webpage can be assessed without the distraction of irrelevant or incomplete information.\n";
}

void ReviewLessons() {
    cout << lineBreak << blankSpace << "!! Warning, A test is coming !!";
    cout << blankSpace << "(Y)Review Lessons? (N)Play Games all night.";

}

void UserInputQuiz() {
    cout << lineBreak << blankSpace << titleTabs << "--Surprise Quiz!--" << blankSpace;
    string dataType, Cin1, Cin2, answer;
    char answerUI;
    int score = 0;

    cout << "#include <iostream>\n"
         << "using namespace std;\n\n"
         << "\tint main() {\n"
         << "\t___ age;  //(Declare an integer variable)\n"
         << "\tcout << \"Enter your age: \";\n"
         << "\tcin ___ ___;  //(Accept user input)" << blankSpace

         << "\tcout << \"Your age is: \" << age << endl;\n\treturn 0;\n}" << blankSpace;

    while(true) {
        cout << "\nEnter the data type: ";
        cin >> dataType;
        if (dataType == "int") {
            cout << "\n[int age;  //Declare an integer variable]\n[You're right! You entered the data type \'int\'.]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Hint: \'int\'eger variable.]";
        }
    }

    cout << "[cin ___ ___;  //(Accept user input)]";
    while(true) {
        cout << "\nWhat comes after cin: ";
        cin >> Cin1;
        if (Cin1 == ">>") {
            cout << "\n[cin >> ___;  //(Accept user input)\n[Your'e that smart, keep going!]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Hint: cin (Character Input)\n";
        }
    }

    cout << "\n[cin >> ___;  //(Accept user input)";
    while(true) {
        cout << "\nWhat comes after >>: ";
        cin >> Cin2;
        if (Cin2 == "age") {
            cout << "\n[cin >> age;  //(Accept user input)\n[Correct! Are you a genius or what?]\n" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Hint: What did you declare?]\n";
        }
    }

    cout << "[Create a program that prompts the user to input their age.\nWhich line of code correctly captures and stores the user's input in a variable?]"
         << "\nA. age = cin.input();\nB. cin >> age;\nC. getline(cin, age);\n";
    while(true) {
        cout << "\nEnter your answer: ";
        cin >> answerUI;
        if (answerUI == 'C' || answerUI == 'c') {
            cout << "\n[Comfirmed, You really are a genius!]" << blankSpace;

            break;
        } else {
            cout << "\n[Incorrect. Hint: read /'getline/'.]";
        }
    }
    ReviewLessons();
}

void UserInput() {
    cout << lineBreak << blankSpace << titleTabs << "--User Input--\n"
         << "\nUser input is handled using functions like cin and getline from the <iostream> library."
         << "\nThese allow users to provide data during program execution,"
         << "\nwhich can then be stored in variables for processing.\n";
    pause();
    cout << "\ncin (Character Input): Used for basic input like integers, floating-point numbers, or single words. Example:"
         << blankSpace << "int age;\n\tcout << \"Enter your age: \";\n\tcin >> age;\n";
    pause();
    cout << "\ngetline: Used for more complex inputs like full strings (e.g., names or sentences). Example:\n"
         << "\nstring name;\n\tcout << \"Enter your full name: \";\n\tgetline(cin, name);\n";
    pause();
    cout << "\nInput Buffer Considerations:\nWhen using cin and getline together, clearing the input buffer (e.g., with cin.ignore())"
         << "\nmay be needed to avoid skipping inputs.\n";
    UserInputQuiz();
}

void DataTypesQuiz() {



    cout << "\n[Press Enter to continue to User Input Lesson]\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any leftover input
    cin.get();
    UserInput();
}

void DataTypes() {
    cout << lineBreak << blankSpace << titleTabs << "--Data Types--" << blankSpace;
    cout << "In C++, data types specify the type of data that a variable is designed to store. Here's a concise overview:" << blankSpace;
    pause();
    Wait(1);
    cout << "\nBasic Data Types: These are the foundational types like integers (int),\n"
         << "floating-point numbers (float or double), and void (void), which represents no data.\n" << lineBreak;
    cout << blankSpace << "- Numbers: Covers whole numbers (int) and real numbers with decimal points (float, double).\n"
         << "\tExample syntax: [int variableName = 42;] and [float floatNumber = 3.14;]\n" << lineBreak;
    Wait(1);
    cout << blankSpace << "- Booleans: The bool type represents logical values (true or false.)\n"
         << "\tExample syntax: [bool isTrue = true;]" << lineBreak;
    Wait(1);
    cout << blankSpace << "- Characters: The char type is used to store single characters like 'A' or '@'.\n"
         << "\tExample syntax: [char letter = 'A';]\n" << lineBreak;
    cout << blankSpace << "- Strings: These represent sequences of characters and are often used for words or sentences."
         << "\nExample syntax:\n\t[#include <string>\n"
         << "\t\tstd::string greeting = \"Hello, World!\"];" << blankSpace;
    Wait(2);
    pause();
    DataTypesQuiz();
}

void VariablesQuiz() {
    cout << lineBreak << blankSpace << titleTabs << "--Surprise Quiz!--" << blankSpace;
    string dataType, variableName;
    int value, score = 0;
    char answerVar;

    cout << "[What do we call the process of creating a variable in C++ by specifying its type and name,\nwithout necessarily assigning a value?]"
         << "\nA. Assignment\nB. Declaration\nC.Initialization\n";
    while(true) {
        cout << "\nEnter your answer: ";
        cin >> answerVar;
        if (answerVar == 'B' || answerVar == 'b') {
            cout << "\n[Correct! the answer was B. declaration.]" << blankSpace;
            score++;
            break;
        } else {
            cout << "\n[Incorrect. Hint: \'Creating\' without \'assigning\'.]";
        }
    }

    cout << lineBreak << "[Create in integer named myNum and assign the value 15 to it.]\n[___ ___ age = ___;]\n";
    while(true) {
        cout << "\nEnter the data type: ";
        cin >> dataType;
        if (dataType == "int") {
            cout << "\n[int ___ age = ___;]\n[Correct! You entered the data type \'int\'.]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Hint: \'int\'eger.]";
        }
    }

    while(true) {
        cout << "\nEnter the variable name: ";
        cin >> variableName;
        if (variableName == "myNum") {
            cout << "\n[int myNum age = ___];\n[Correct! You identified the data myNum.]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Hint: named \'myNum\'.]" << blankSpace;
        }
    }

    while(true) {
        cout << "\nEnter the value: ";
        cin >> value;
        if (value == 15) {
            cout << "int myNum age = 15;\n[Congratulations! Now you can declare a variable by scratch.]" << blankSpace;
            score++;
        cout << "Score: " << score << "/4\n";
            break;
        } else {
            cout << "[Incorrect. Hint: value \'15\'.]" << blankSpace;
        }
    }

    cout << "\n[Press Enter to continue to Data Types Lesson]\n";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any leftover input
    cin.get();
    DataTypes();
}

void Variables() {
    cout << lineBreak << string(3, '\n') << titleTabs << "--Variables--\n\n";
    cout << "- Declare Variables:\n\tThis refers to creating a variable in C++ and assigning it a name and type (like int, float, or char).\n\tFor example: int age = 25;.\n";
    pause();

    cout << "\n- Multiple Variables:\n\tDiscusses how you can declare and initialize several variables at once, streamlining your code.\n\tFor instance: int x = 1, y = 2, z = 3;.\n";
    pause();

    cout << "\n- Identifiers:\n\tThese are the unique names you give to variables, functions, or classes to identify them in the code.\n\tFor example: string myCar = \"car\";.\n";
    pause();

    cout << "\n-  Constants:\n\tRepresents values that do not change throughout the program's execution.\n\tThey are declared using the keyword const. Example: const float PI = 3.14;.\n";
    pause();
    VariablesQuiz();
}

void gameIntro() {
    cout << lineBreak << string(4, '\n');
    cout << titleTabs << "--Introduction:--" << blankSpace;
    cout << "C++ is a widely-used programming language, especially in game development and creating computer programs.\n";
    cout << "It was developed as an extension of C, sharing similar syntax." << blankSpace;
    this_thread::sleep_for(seconds(1));

    cout << "\nC++ is a cross-platform language designed for high-performance applications. Created by Bjarne Stroustrup,\n";
    cout << "it provides control over system resources and memory. It has evolved through updates like C++11, C++14, C++17, C++20,\n";
    cout << "and C++23. C++ is object-oriented, portable, and allows code reuse, making it cost-effective and versatile." << blankSpace;
    this_thread::sleep_for(seconds(1));

    cout << "\nTo begin with C++, you need a text editor (e.g., Notepad) and a compiler (e.g., GCC).\n";
    cout << "The tutorial recommends using an IDE like Code::Blocks, Eclipse, or Visual Studio for editing and debugging.\n";
    cout << "It guides users to write and execute their first C++ program, \"Hello World,\" using Code::Blocks." << blankSpace;
   this_thread::sleep_for(seconds(1));

    cout << "\n\n--Syntax:--\n";
    cout << "C++ syntax is similar to C. A basic program includes headers (e.g., <iostream>), a main() function, and\n";
    cout << "statements ending with semicolons. The tutorial emphasizes understanding the structure and flow of a C++ program." << blankSpace;
    this_thread::sleep_for(seconds(1));

    cout << "\n--Statements:--\n";
    cout << "C++ uses statements to perform actions. These include declaration statements (e.g., int x = 5;),\n";
    cout << "control statements (e.g., if, for, while), and more. Statements are the building blocks of a C++ program." << blankSpace;

    cout << "[Press Enter to continue to Variable Lesson]\n";
    cin.ignore();
    getchar();
    Variables();
}

void storyIntro() {

    char storyIntroChoice;
    displayPlaceholder();

    while (true) {
        cout << "\nProceed to game intro? (Y/N): ";
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
    cout << lineBreak << "\n";
    displayPlaceholder();
    this_thread::sleep_for(seconds(1));
    cout << "\n" << string(2, '\t') << "Project Manager  | Dungo, Mitchelle Kyle L." << blankSpace
         << string(2, '\t') << "Business Analyst | Ebuenga, Caryl Yasmin P.\n" << blankSpace
         << string(2, '\t') << "Developer        | Fabillar, John Xzibit C.\n" << blankSpace
         << string(2, '\t') << "Developer        | Alpas, Lee Endrey A.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Malate, Mae Clare S.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Castro, John Paolo J.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Ubias, Breldan Dave H.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Aniceto, Ezekiel Leinard B." << blankSpace;
    this_thread::sleep_for(seconds(1));
    displayPlaceholder();
    cout << lineBreak << blankSpace;
    MainMenu();
}

void exitMsg() {
    cout << lineBreak << blankSpace;
    cout << "\nExiting game .";
    this_thread::sleep_for(seconds(1));
    cout << " .";
    this_thread::sleep_for(seconds(1));
    cout << string(2, '\n');
}

void MainMenu() {
    int mainMenuChoice;
    cout << "\n1. Start.\n2. Credits.\n3. Exit\n\nEnter Choice: ";

    while (!(cin >> mainMenuChoice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number.\nEnter Choice: ";
    }
    switch (mainMenuChoice) {
        case 1:
            storyIntro(); break;
        case 2:
            Credits(); break;
        case 3:
            exitMsg(); break;
        default:
            cout << "Please enter among these 3 choices.\n";
            MainMenu();
            break;
    }
}

void welcomeMsg() {
    cout << lineBreak
         << "\n" << titleTabs << "|-" << string(2, '\t') << "  -Welcome to-      " << string(2, '\t') << "-|\n"
         << titleTabs << "|-\t  ---------------------Summertime::Coding|\n"
         << titleTabs << "|A C++ Tutorial Game---------------------  \t-|\n"
         << lineBreak;

    MainMenu();
}

int main() {
    welcomeMsg();
    return 0;
}
