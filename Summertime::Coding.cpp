#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

void MainMenu();
void Test();
void Variables();
void DataTypes();
void UserInput();
const string lineBreak = string(120, '-');
const string blankSpace = string(2, '\n');
const string titleTabs = string(4, '\t');
const string Plsreview = "[!! Take some time to review the lesson carefully. !!]";


inline void Wait(int n) {
    this_thread::sleep_for(seconds(n));
}

inline void pause(){
    cout << "\n[Press enter key to continue . . .]";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any leftover input
    cin.get();
}

inline void displayPlaceholder() {
    cout << "\nThis paragraph serves as a temporary placeholder, designed to occupy space until the actual content is ready. It's intended to visually represent where text will eventually reside, allowing for layout and design adjustments in the interim. This filler text ensures that the overall structure and flow of the document or webpage can be assessed without the distraction of irrelevant or incomplete information.\n";
}

void endingMessage() {
    displayPlaceholder(); // goodbye message.
    cout << blankSpace << "Thank you for playing this game.";
}

void retake() {
    char retakeChoice;
        while (true) {
        cout << lineBreak << blankSpace << "Retake Quiz? Yes(Y) No(N): ";
        cin >> retakeChoice;
        if (retakeChoice == 'Y' || retakeChoice == 'y') {
            Test();
            break;
        } else if (retakeChoice == 'N' || retakeChoice == 'n') {
            endingMessage();
            break;
        } else {
            cout << "Please input Y or N only.\n";
        }
    }
}

void Test() {
    cout << lineBreak << blankSpace << titleTabs << "--Test--" << blankSpace;
    char MChoices1, MChoices2, MChoices3, MChoices4, MChoices5, TF1, TF2, TF3, TF4, TF5;
    int score = 0;

    while(true) {
        cout << lineBreak << "\nA. A fixed value in a program\nB. A container for storing data values\nC. A function that performs calculations"
             << blankSpace << "1. What is a variable in C++? ";
        cin >> MChoices1;
        if (MChoices1 == 'A' || MChoices1 == 'a' || MChoices1 == 'B' || MChoices1 == 'b' || MChoices1 == 'C' || MChoices1 == 'c') {
            if (MChoices1 == 'B' ||MChoices1 == 'b') {
                score++;
            }
            break;
            } else {
            cout << "\n ";
            }
        }

    while(true) {
        cout << lineBreak << "\nA. string\nB. cout\nC. int"
             << blankSpace << "2. Which keyword is used to declare variables in C++? ";
        cin >> MChoices2;
        if (MChoices2 == 'A' || MChoices2 == 'a' || MChoices2 == 'B' || MChoices2 == 'b' || MChoices2 == 'C' || MChoices2 == 'c') {
            if (MChoices2 == 'C' ||MChoices2 == 'c') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    while(true) {
        cout << lineBreak << "\nA. Using cin\nB. Using printf\nC. Using cout"
             << blankSpace << "3. How do you take user input in C++? ";
        cin >> MChoices3;
        if (MChoices3 == 'A' || MChoices3 == 'a' || MChoices3 == 'B' || MChoices3 == 'b' || MChoices3 == 'C' || MChoices3 == 'c') {
            if (MChoices3 == 'A' || MChoices3 == 'a') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    while(true) {
        cout << lineBreak << "\nA. integer\nB. char\nC. stringify"
             << blankSpace << "4. Which of the following is a correct data type in C++? ";
        cin >> MChoices4;
        if (MChoices4 == 'A' || MChoices4 == 'a' || MChoices4 == 'B' || MChoices4 == 'b' || MChoices4 == 'C' || MChoices4 == 'c') {
            if (MChoices4 == 'b' || MChoices4 == 'B') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

     while(true) {
        cout << lineBreak << "\nA. >>\nB. <<\nC. ::"
             << blankSpace << "5. What symbol is used to insert data into cin for user input? ";
        cin >> MChoices5;
        if (MChoices5 == 'A' || MChoices5 == 'a' || MChoices5 == 'B' || MChoices5 == 'b' || MChoices5 == 'C' || MChoices5 == 'c') {
            if (MChoices5 == 'A' || MChoices5 == 'a') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    while(true) {
        cout << lineBreak << "True (T) False (F)"
             << blankSpace << "1. In C++, the int keyword is used to declare integer variables. ";
        cin >> TF1;
        if (TF1 == 'T' || TF1 == 't' || TF1 == 'F' || TF1 == 'f') {
            if (TF1 == 'T' || TF1 == 't') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    while(true) {
        cout << lineBreak << "True (T) False (F)"
             << blankSpace << "2. The symbol '<<' is used to get user input with cin. ";
        cin >> TF2;
        if (TF2 == 'T' || TF2 == 't' || TF2 == 'F' || TF2 == 'f') {
            if (TF2 == 'F' ||TF2 == 'f') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    while(true) {
        cout << lineBreak << "True (T) False (F)"
             << blankSpace << "3. In C++, string is a valid data type for declaring a variable. ";
        cin >> TF3;
        if (TF3 == 'T' || TF3 == 't' || TF3 == 'F' || TF3 == 'f') {
            if (TF3 == 'T' ||TF3 == 't') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

        while(true) {
        cout << lineBreak << "True (T) False (F)"
             << blankSpace << "4. The main function is mandatory in all C++ programs. ";
        cin >> TF4;
        if (TF4 == 'T' || TF4 == 't' || TF4 == 'F' || TF4 == 'f') {
            if (TF4 == 'T' ||TF4 == 't') {
                TF4++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

        while(true) {
        cout << lineBreak << "True (T) False (F)"
             << blankSpace << "5.   -The cout function in C++ is used for output to the console. ";
        cin >> TF5;
        if (TF5 == 'T' || TF5 == 't' || TF5 == 'F' || TF5 == 'f') {
            if (TF5 == 'T' || TF5 == 't') {
                score++;
            }
            break;
            } else {
            cout << "\n";
            }
        }

    cout << lineBreak << blankSpace << titleTabs << "Score " << score << "/10.\n";
    retake();
}

void TestMonolouge() {
    displayPlaceholder();

    cout << lineBreak << "\n[Press Enter to continue to Test]";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any leftover input
    cin.get();
    Test();
}

void Whichlesson() {
    int WhichlessonChoice;
    cout << lineBreak << blankSpace << "!! WARNING !! if you choose \"Variables\" it will continue to DataTypes and User Input"
         << "\nWhich Lesson would you like to start with?\n"
         << "1. Variables.\n2. Data Types.\n3. User Input" << blankSpace << "Enter Choice: ";

    while (!(cin >> WhichlessonChoice)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number.\nEnter Choice: ";
    }
    switch (WhichlessonChoice) {
        case 1:
            Variables(); break;
        case 2:
            DataTypes(); break;
        case 3:
            UserInput(); break;
        default:
            cout << "Please enter among these 3 choices.\n";
            Whichlesson();
            break;
    }
}

void ReviewLessons() {
    cout << lineBreak << blankSpace << titleTabs << "!! Warning, A test is coming !!\n";
    char ReviewLessonsChoice;
    while (true) {
        cout << blankSpace << "(Y)Review Lessons? (N)Continue to Test? ";
        cin >> ReviewLessonsChoice;
        if (ReviewLessonsChoice == 'Y' || ReviewLessonsChoice == 'y') {
            Whichlesson();
            break;
        } else if (ReviewLessonsChoice == 'N' || ReviewLessonsChoice == 'n') {
            Test();
            break;
        } else {
            cout << "Please input Y or N only.\n";
        }
    }
}

void UserInputQuiz() {
    cout << lineBreak << "\n" << titleTabs << "--Surprise Quiz!--" << blankSpace;
    string dataType, Cin1, Cin2, answer;
    char answerUI;
    int score = 10;

    cout << "#include <iostream>\n"
         << "using namespace std;\n\n"
         << "\tint main() {\n"
         << "\t___ age;  //(Declare an integer variable)\n"
         << "\tcout << \"Enter your age: \";\n"
         << "\tcin ___ ___;  //(Accept user input)" << blankSpace

         << "\tcout << \"Your age is: \" << age << endl;\n\treturn 0;\n}" << blankSpace;

    while(true) {
        cout << lineBreak << "\nEnter the data type: ";
        cin >> dataType;
        if (dataType == "int") {
            cout << "\n[int age;  //Declare an integer variable]\n[You're right! You entered the data type \'int\'.]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Clue: \'int\'eger variable.]";
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                UserInput();
        }
    }
}

    cout << lineBreak << "[cin ___ ___;  //(Accept user input)]";
    while(true) {
        cout << "\nWhat comes after cin: ";
        cin >> Cin1;
        if (Cin1 == ">>") {
            cout << "\n[cin >> ___;  //(Accept user input)\n[You're that smart, keep going!]" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Clue: cin (Character Input)\n";
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                UserInput();
        }
    }
}

    cout << lineBreak << "\n[cin >> ___;  //(Accept user input)";
    while(true) {
        cout << "\nWhat comes after >>: ";
        cin >> Cin2;
        if (Cin2 == "age") {
            cout << "\n[cin >> age;  //(Accept user input)\n[Correct! Are you a genius or what?]\n" << blankSpace;
            score++;
            break;
        } else {
            cout << "[Incorrect. Clue: What did you declare?]\n";
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                UserInput();
        }
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
            cout << "\n[Incorrect. Clue: read /'getline/'.]";
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << "[!! Try to read the lesson seriously !!]" << blankSpace;
                UserInput();
        }
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
    cout << lineBreak << titleTabs << "--Surprise Quiz!--\n" << "Rules: You have 10 Score, Score is deducted by one (1) every wrong answer." << blankSpace;
    string int1, float2, char3, string4, bool5;
    int score = 10;

    cout << "Add correct data type for the following variables:" << blankSpace
         << "1.___ myNum = 15;\n"
         << "2.___ myFloat = 15.05;\n"
         << "3.___ myChar = 'a';\n"
         << "4.___ mySting = \"Hello Love\";\n"
         << "5.___ myBool = true;\n" << blankSpace;

    while(true) {
        cout << lineBreak << "\n1: ";
        cin >> int1;
        if (int1 == "int") {
            cout << "\n['int' myNum = 15;] [You've got it! \"myNum\" is the correct data. Way to go!]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: Data Type of a WHOLE Number.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                DataTypes();
        }
    }
}
    while(true) {
        cout << lineBreak << "\n2: ";
        cin >> float2;
        if (float2 == "float") {
            cout << "\n['float' myFloat = 15.05;]\n[You correctly identified \"myFloat\". Keep shining withf those sharp coding skills!]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: Data Type of a Real Number with DECIMAL points.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                DataTypes();
        }
    }
}
        while(true) {
        cout << lineBreak << "\n3: ";
        cin >> char3;
        if (char3 == "char") {
            cout << "\n['char' myChar = 'a';]\n[You nailed it! \"myChar\" is the data we were looking for. Great work!.]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: This Data Type is used to store SINGLE characters.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                DataTypes();
        }
    }
}

        while(true) {
        cout << lineBreak << "\n4: ";
        cin >> string4;
        if (string4 == "string") {
            cout << "\n['string' myString = \"Hello Love\";]\n[Fantastic work! You've correctly pinpointed \"myString\". Keep rocking it!]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: Data Type contains a SEQUENCES of characters.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                DataTypes();
            }
        }
    }

    while(true) {
        cout << lineBreak << "\n5: ";
        cin >> bool5;
        if (bool5 == "bool") {
            cout << "\n['bool' myBool = true;]\n[That's right! You've aced it" << score << "/4. Brilliant work!]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: Data Type that represents LOGICAL VALUES.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                DataTypes();
            }
        }
    }

    cout << lineBreak << "\n[Press Enter to continue to User Input Lesson]";
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
         << "\tExample syntax: [bool isTrue = true;]\n" << lineBreak;
    Wait(1);
    cout << blankSpace << "- Characters: The char type is used to store single characters like 'A' or '@'.\n"
         << "\tExample syntax: [char letter = 'A';]\n" << lineBreak;
    Wait(1);
    cout << blankSpace << "- Strings: These represent sequences of characters and are often used for words or sentences."
         << "\nExample syntax:\n\t[#include <string>\n"
         << "\t\tstd::string greeting = \"Hello, World!\"];\n" << lineBreak;
    cout << blankSpace << "- Invalid way to use: [int Name = 25;]  >>This will result an error"
         << "\n- Valid way to use: char myChar = 'A'  >>This won't result any errors.\n" << lineBreak << blankSpace;
    Wait(2);
    pause();
    DataTypesQuiz();
}

void VariablesQuiz() {
    cout << lineBreak << titleTabs << "--Surprise Quiz!--\n" << "Rules: You have 10 Score, Score is deducted by one (1) every wrong answer." << blankSpace;
    string dataType, variableName;
    int value, score = 10;
    char answerVar;

    cout << "[What do we call the process of creating a variable in C++ by specifying its type and name,\nwithout necessarily assigning a value?]"
         << "\nA. Assignment\nB. Declaration\nC.Initialization\n";
    while(true) {
        cout << blankSpace << "Enter your answer: ";
        cin >> answerVar;
        if (answerVar == 'B' || answerVar == 'b') {
            cout << "\n[Correct! the answer was B. declaration.]" << blankSpace;
            break;
        } else {
            score -= 1;
            cout << "\n[Incorrect." << score << "/10, Clue: \'Creating\' without \'assigning\'.]";
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                Wait(1);
                Variables();
            }
        }
    }

    cout << lineBreak << "\n[Create in integer named myNum and assign the value 15 to it.]\n[___ ___ = ___;]\n";
    while(true) {
        cout << "\nEnter the data type: ";
        cin >> dataType;
        if (dataType == "int") {
            cout << "\n[int ___ = ___;]\n[Correct! You entered the data type \'int\'.]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: \'int\'eger.]";
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                Variables();
            }
        }
    }

    while(true) {
        cout << lineBreak << "\nEnter the variable name: ";
        cin >> variableName;
        if (variableName == "myNum") {
            cout << "\n[int myNum = ___;]\n[Correct! You identified the data myNum.]" << blankSpace;
            break;
        } else {
            cout << "[Incorrect. Clue: named \'myNum\'.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                Variables();
            }
        }
    }

    while(true) {
        cout << lineBreak << "\nEnter the value: ";
        cin >> value;
        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            cout << "[Invalid input! Please enter an integer.]\n";
        }

        if (value == 15) {
            cout << "int myNum = 15;\n[Congratulations! Now you can declare a variable by scratch.]" << blankSpace;
            cout << "Score: " << score << "/10\n";
            break; // Exit the loop
        } else {
            cout << "[Incorrect. Clue: value '15'.]" << blankSpace;
            score -= 1;
            if (score <= 0) {
                cout << blankSpace << Plsreview << blankSpace;
                Variables();
                break;
            }
        }
    }

    cout << "\n[Press Enter to continue to Data Types Lesson]";
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
    Wait(1);

    cout << "\nC++ is a cross-platform language designed for high-performance applications. Created by Bjarne Stroustrup,\n";
    cout << "it provides control over system resources and memory. It has evolved through updates like C++11, C++14, C++17, C++20,\n";
    cout << "and C++23. C++ is object-oriented, portable, and allows code reuse, making it cost-effective and versatile." << blankSpace;
    Wait(1);

    cout << "\nTo begin with C++, you need a text editor (e.g., Notepad) and a compiler (e.g., GCC).\n";
    cout << "The tutorial recommends using an IDE like Code::Blocks, Eclipse, or Visual Studio for editing and debugging.\n";
    cout << "It guides users to write and execute their first C++ program, \"Hello World,\" using Code::Blocks." << blankSpace;
    Wait(1);

    cout << "\n\n--Syntax:--\n";
    cout << "C++ syntax is similar to C. A basic program includes headers (e.g., <iostream>), a main() function, and\n";
    cout << "statements ending with semicolons. The tutorial emphasizes understanding the structure and flow of a C++ program." << blankSpace;
    Wait(1);

    cout << "\n--Statements:--\n";
    cout << "C++ uses statements to perform actions. These include declaration statements (e.g., int x = 5;),\n";
    cout << "control statements (e.g., if, for, while), and more. Statements are the building blocks of a C++ program." << blankSpace;

    cout << "[Press Enter to continue to Variable Lesson]";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any leftover input
    cin.get();
    Variables();
}

void storyIntro() {

    char storyIntroChoice;
    displayPlaceholder();

    while (true) {
        cout << "\nProceed to game intro? Yea (Y) No (N): ";
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
    Wait(1);
    cout << "\n" << string(2, '\t') << "Project Manager  | Dungo, Mitchelle Kyle L." << blankSpace
         << string(2, '\t') << "Business Analyst | Ebuenga, Caryl Yasmin P.\n" << blankSpace
         << string(2, '\t') << "Developer        | Fabillar, John Xzibit C.\n" << blankSpace
         << string(2, '\t') << "Developer        | Alpas, Lee Endrey A.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Malate, Mae Clare S.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Castro, John Paolo J.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Ubias, Breldan Dave H.\n" << blankSpace
         << string(2, '\t') << "Q.A. Tester      | Aniceto, Ezekiel Leinard B." << blankSpace;

    Wait(1);
    displayPlaceholder();
    //cout << "Shoutout kay lee pogi sa pag tapos ng Protoype!!"
    cout << lineBreak << blankSpace;
    MainMenu();
}

void exitMsg() {
    cout << lineBreak << blankSpace;
    cout << "\nExiting game .";
    Wait(1);
    cout << " .";
    Wait(1);
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
