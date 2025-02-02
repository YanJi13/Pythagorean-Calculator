#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    cout << R"(
                                                  
                  -..:          ..                
              .-:-: .              .              
             :=++:                  :.             ____        _   _                                              _____ _                                    
            .++*.  .              . . .:          |  _ \ _   _| |_| |__   __ _  __ _  ___  _ __ ___  __ _ _ __   |_   _| |__   ___  ___  _ __ ___ _ __ ___  
           .-:-=:........      .    ....-         | |_) | | | | __| '_ \ / _` |/ _` |/ _ \| '__/ _ \/ _` | '_ \    | | | '_ \ / _ \/ _ \| '__/ _ \ '_ ` _ \ 
          =+==+       ...-++-.     .:.-=*.        |  __/| |_| | |_| | | | (_| | (_| | (_) | | |  __/ (_| | | | |   | | | | | |  __/ (_) | | |  __/ | | | | | 
         =**##= .   -.     -*#*=-:....-+=.        |_|    \__, |\__|_| |_|\__,_|\__, |\___/|_|  \___|\__,_|_| |_|   |_| |_| |_|\___|\___/|_|  \___|_| |_| |_| 
         =+#%*#*.. +%%#+-:. .*##*=:..  :=                |___/                |___/                                                                        
         +**%#*+#+ :-+*##*=: .+###+=:...:-=.        ____      _            _       _                                                                       
         .++*%**%-  .:==: .   -+*+=-:...--=*.      / ___|__ _| | ___ _   _| | __ _| |_ ___  _ __                                                             
           ..==+*     :-.     .++=-===++=.-+      | |   / _` | |/ __| | | | |/ _` | __/ _ \| '__|                                                            
            ---+*            .:*#=.::.+*--++      | |__| (_| | | (__| |_| | | (_| | || (_) | |                                                              
            =+=+: . ..     ..-*##=-:=+*+::+        \____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   version 4.2
            -*+.=+=+-:=.  .. :-+*+*#+::+.-.       
             +-:==*--:..=-.::-:-**#*+-+-:.        
            .==++:..=*. =:.....--*%#***=:                           Team Bangan - CCIS A122
           .-=+==--:.=:........-:-#+==-.                                SY: 2023 - 2024
           -+==:.     ..... ..:. .=                                     
          .-+*+=-:.       ..:...  ..                                    J. B. Bermudez        
           -==*=:::    . ---:=..   .                                    G. Cabrera
           .++*+--...- ..:++==       .                                  JM. K. Gorduiz
          .:-+*===+-.==:-:==.           . .       
       .-+*#*#*=+=**-=+-.--.           ..+-:..    
      :++**+****+**#-:.               ..-..--=+-. 
    :=+*+*+*#++=+++++-   .  .. .  ..   .: =.    .:
  ..=+**=*-=**+  .. =:.. .    ..  .  ..   -     . 
    =**++#*-+*+. :. :      .        -    =. .  .. 
 ...-**++*#+-+*=  . .   ..        .=.    :  ..    
 ..:-+*+**#*-+#*=.   ...         -+.    :...      
 .::--++***====#*+:.           .++     .          
  ..:::-*+*--==-:.  ......    +*=:.               
    ..-=+=+**+**+-:......   -+.                   
         :--+**##*+=-..                           
             ...::::...                                                          
  
                                                                                                                                                                                                    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
)" << '\n';

    char reset; // handles the 'back to main menu' function, closes program, or restarts the specifcic mode of the calculator after usage
             
    do {

        int menuOptions;
        
        cout << "Pythagorean Theorem Calculator v4.2\n\n"; // Project title and current version

        // Main menu
        cout << "Patch notes - input '1' to open\n"
                "Calculator - input '2' to open\n"
                "Close program - input '3' \n\n";
        cout << "Type number here: ";

        // input validation, ensures only numbers can be input
        if(!(cin >> menuOptions)){
        cin.clear();
        cin.ignore(123, '\n');
        } 

        // checks for invalid main menu inputs  z
        if(menuOptions>3 || menuOptions<1){
        cout << "invalid input, please select correct input ";
        reset = 'y';
        } 
            
        cout << '\n';
            
            switch(menuOptions){
            case 1: // Patch notes
                cout << "_____________________________________________________________________________________________________________________________________\n\n";
                cout << "v1.0 - Full functionality with 3 modes based on which side user is looking for.\n\n"
                        "v2.0 - Added reset function so user doesnt need to rerun the code everytime.\n\n"
                        "v3.0 - Fixed bug in Mode 2 (side B) due to incorrect formula, added patch notes for documentation purposes,\n\n"
                        "       and also added force reset in the reset function.\n\n"
                        "v3.1 - Improved reset function, removed force reset, added terminate program function in both after calculator usage \n\n"
                        "       and the main menu, and also added more output based on user input.\n\n"
                        "v3.2 - Added input validation for main menu, and improved functions that check for invalid inputs, \n\n"
                        "       added minor changes to make console interface look better and added more comments for ease of use and refactoring. \n\n"
                        "v3.3 - Added input validation for mode selection. \n\n"
                        "v3.4 - Added input validation for Mode 1 (Side A) and Mode 2 (Side B). \n\n"
                        "v3.5 - Changed the squared symbols in the formula table into a more simpler format as the old one has problems with ASCII \n\n"
                        "       thus wont properly print out in the terminal. \n\n"
                        "v4.0 - Added option menu directly after using calculator for user convenience. Added input validation in each \n\n"
                        "       mode of the calculator that ensure that input and side A & B output cannot be less than or equal to zero. Added more QoL functions \n\n"
                        "       such as the ability to restart the program in the mode options menu and in the options menu after using calculator. \n\n"
                        "       Also added more comments and improved overall source code layout for better reading and easier editing if needed. \n\n"
                        "       And finally, I added an ASCII art in the main menu to make it beautiful. \n\n"
                        "v4.1 - Improved input validation in mode selection menu as previous one has major issues when it comes to repeated invalid inputs. \n\n"
                        "       Also added developer notes in the patch notes section for additional information to users. \n\n"
                        "v4.2 - Changed some parts of the input validation in the mode selection menu (most annoying part of the program) \n\n"
                        "       due to major errors in the validation. Minor bug fixed to the mode option menu.\n\n";
                cout << "_____________________________________________________________________________________________________________________________________\n\n";

                // Developer notes
                cout << "Developer notes: \n\n";
                cout << "- Program is fully functional with many quality of life functions such as the going back to main menu , calculator restart after usage, \n"
                        "and quickly closing program. There are also input validations to ensure minimal errors and for user convenience. But there are parts of the \n"
                        "program that has no input validation against wrong data types such as the side inputs in the 3 different modes of the calculator. Its \n"
                        "too much work and I believe, its not really necessary as the user can just close the program and reopen it when an error occurs \n"
                        "and its expected for the user to put numerical inputs in the side input section. But if the professor suggests to add the input validators, \n"
                        "i will add it. \n\n"

                        "- After everything is done, I started the testing and debugging phase, I tested every input and output possible. And everything works except those \n"
                        "that are intentionally made not to work. I will submit the .txt file of the tests in the submission bin along with the .cpp file and the .exe file. \n"
                        "of the program. \n\n"

                        "- Knowing that the side inputs of the 3 modes doesnt have input validators against wrong data type input, I tried adding one for each. \n"
                        "But unfortunately due to my inexperience, I dont know how to properly implement them without causing issues to other systems.\n"
                        "I accept my defeat and will do my best to be better and eventually fix this problem, but for now, Ill leave it as is, besides, chances of error, is low. \n\n";                        
                
                cout << "type 'y' to go back to main menu ";
                cin >> reset;
                cout << "\n";
                        //checks for invalid inputs
                while(reset != 'y'){
                cout << "invalid input, type 'y' to go back to main menu ";
                cin >> reset;
                }
            break;  
            case 2: // The calculator
            
                cout << "Formula: \n\n" << 
                        "a^2 + b^2 = c^2" << '\n' << // C side or hypotenuse formula
                        "c^2 - b^2 = a^2" << '\n' << // A side formula
                        "c^2 - a^2 = b^2 \n\n"; // B side formula    
        
                int modeOptions;

                // Mode selection
                cout << "Which side of a triangle are you looking for? \n\n" <<
                "Type '1' for A side, '2' for B side, or '3' for C side or the hypotenuse. Type '4' to go back to main menu or '5' to exit program.(1-5 only)" << '\n';
                cout << "Type number here: ";

                // input validation, ensures only numbers can be input 
                while(!(cin >> modeOptions)){
                cin.clear();
                cin.ignore(123, '\n');    
                cout << '\n';
                cout << "invalid mode, please try again \n\n"; 
                cout << "_____________________________________________________________________________________________________________________________________\n\n";
                cout << "Which side of a triangle are you looking for? \n\n" <<
                        "Type '1' for A side, '2' for B side, or '3' for C side or the hypotenuse. Type '4' to go back to main menu or '5' to exit program. (1-5 only)" << '\n';
                cout << "Type number here: ";
                }
                
                // checks if input is more than 5 or less than 1
                while(modeOptions > 5 || modeOptions < 1){
                cin.clear(); 
                cin.ignore(123, '\n');
                cout << '\n';
                cout << "invalid mode, please try again \n\n"; 
                cout << "_____________________________________________________________________________________________________________________________________\n\n";
                cout << "Which side of a triangle are you looking for? \n\n" <<
                        "Type '1' for A side, '2' for B side, or '3' for C side or the hypotenuse. Type '4' to go back to main menu or '5' to exit program. (1-5 only)" << '\n';
                cout << "Type number here: ";
                cin >> modeOptions;
                }
                
                cout << '\n';

                cout << "\n\n";
        
                double sideA;
                double sideB;
                double sideC;
        
                switch(modeOptions){ // calculator modes
                case 1: // A side
            
                    // A side inputs and output
                    cout << "Side B value: ";
                    cin >> sideB;

                    cout << "Side C value: ";
                    cin >> sideC;
                    cout << '\n';

                    // ensures input cannot be less than or equal to zero
                    if(sideB <= 0 || sideC <= 0){
                    cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                    } else {
                    sideB = pow(sideB, 2);
                    sideC = pow(sideC, 2);
                    sideA = sqrt(sideC - sideB);
                    cout << '\n';
                    
                    // To handle sideA = -nan result.
                    if(isnan(sideA) || sideA == 0) {
                        cout << "Side B must be less than Side C or the Hypotenuse.\n\n";
                    } else {
                        cout << "Side A value: " << sideA << "\n\n"; // Side A answer
                        }
                    }
                    // pop-up after using calculator
                    cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";      
                    cin >> reset;
                        
                        // restart option that loops for user convenience
                        while(reset == 'r'){

                        cout << "_____________________________________________________________________________________________________________________________________\n\n";
                        cout << "Side B value: ";
                        cin >> sideB;
                    
                        cout << "Side C value: ";
                        cin >> sideC;
                        cout << '\n';

                        // ensures input cannot be less than or equal to zero
                        if(sideB <= 0 || sideC <= 0){
                        cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                        } else {
                        sideB = pow(sideB, 2);
                        sideC = pow(sideC, 2);
                        sideA = sqrt(sideC - sideB);
                        cout << '\n';
                    
                        // To handle sideA = -nan result.
                        if(isnan(sideA) || sideA == 0) {
                            cout << "Side B must be less than Side C or the Hypotenuse.\n\n";
                        } else {
                            cout << "Side A value: " << sideA << "\n\n"; // Side A answer
                            }
                        }

                        // pop-up after using calculator
                        cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";
                        cin >> reset;
                        }

                break;
                case 2: // B side

                    // B side inputs and output
                    cout << "Side A value: ";
                    cin >> sideA;
                    
                    cout << "Side C value: ";
                    cin >> sideC;
                    cout << '\n';

                    // ensures input cannot be less than or equal to zero
                    if(sideA <= 0 || sideC <= 0){
                    cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";

                    } else {
                    sideA = pow(sideA, 2);
                    sideC = pow(sideC, 2);
                    sideB = sqrt(sideC - sideA);
                    cout << '\n';
                    
                    // To handle sideB = -nan result.
                    if(isnan(sideB) || sideB == 0) {
                        cout << "Side A must be less than Side C or the Hypotenuse.\n\n";
                    } else {
                        cout << "Side B value: " << sideB << "\n\n"; // Side A answer
                        }
                    }
                    // pop-up after using calculator
                    cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";      
                    cin >> reset;
                        
                        // restart option that loops for user convenience
                        while(reset == 'r'){

                        cout << "_____________________________________________________________________________________________________________________________________\n\n";
                        cout << "Side A value: ";
                        cin >> sideA;
                    
                        cout << "Side C value: ";
                        cin >> sideC;
                        cout << '\n';

                        // ensures input cannot be less than or equal to zero
                        if(sideA <= 0 || sideC <= 0){
                        cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                        } else {
                        sideA = pow(sideA, 2);
                        sideC = pow(sideC, 2);
                        sideB = sqrt(sideC - sideA);
                        cout << '\n';
                    
                        // To handle sideB = -nan result.
                        if(isnan(sideB) | sideB == 0) {
                            cout << "Side A must be less than Side C or the Hypotenuse.\n\n";
                        } else {
                            cout << "Side B value: " << sideB << "\n\n"; // Side A answer
                            }
                        }

                        // pop-up after using calculator
                        cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";
                        cin >> reset;
                        }
                break;
                case 3: // C side or hypotenuse
                    
                    // C side inputs and output
                    cout << "Side A value: ";
                    cin >> sideA;
                    
                    cout << "Side B value: ";
                    cin >> sideB;
                    cout << '\n';

                    // ensures input cannot be less than or equal to zero
                    if(sideA <= 0 || sideB <= 0){
                    cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                    } else {
                    sideA = pow(sideA, 2);
                    sideB = pow(sideB, 2);
                    sideC = sqrt(sideA + sideB);
                    cout << "Side C value: " << sideC << "\n\n"; // Side C answer
                    }

                    // pop-up after using calculator
                    cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";      
                    cin >> reset;
                        
                        // restart option that loops for user convenience
                        while(reset == 'r'){

                        cout << "_____________________________________________________________________________________________________________________________________\n\n";
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side B value: ";
                        cin >> sideB;
                        cout << '\n';

                        // ensures input cannot be less than or equal to zero
                        if(sideA <= 0 || sideB <= 0){
                        cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                        } else {
                        sideA = pow(sideA, 2);
                        sideB = pow(sideB, 2);
                        sideC = sqrt(sideA + sideB);
                        cout << "Side C value: " << sideC << "\n\n"; // Side C answer
                        }

                        // pop-up after using calculator 
                        cout << "type 'y' to go back to main menu, 'c' to close program, or 'r' to restart calculator\n";
                        cin >> reset;
                        }    
                break;
                case 4:

                    // return to main menu from mode menu
                    reset = 'y';

                break;
                case 5:

                    // close program from mode menu
                    reset = 'c';

                break;
                }
                
            break;
            case 3:
                
                // terminates program from the main menu
                exit(0);
                
            break;
            }   
            // border to show where a session ends and for visual clarity
            cout << "_____________________________________________________________________________________________________________________________________\n\n";
        
        // closes program if value corresponds
        if(reset == 'c'){
        exit(0);
        } else 
                    // checks for invalid inputs
        while(reset != 'y' && reset != 'c'){ 
            cout << "invalid input, type 'y' to go back to main menu or 'c' to close program, restart option no longer available, must go back to main menu \n";
            cin >> reset;
        }

    } while(reset == 'y'); // do while loop to reset entire program if value corresponds
     
return 0;
}
