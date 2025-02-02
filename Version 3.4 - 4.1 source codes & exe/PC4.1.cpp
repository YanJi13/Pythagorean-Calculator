#include <iostream>
#include <cmath>


using namespace std;

int main() {
    
    cout << R"(
 ________  ___    ___ _________  ___  ___  ________  ________  ________  ________  _______   ________  ________                                                                              
|\   __  \|\  \  /  /|\___   ___\\  \|\  \|\   __  \|\   ____\|\   __  \|\   __  \|\  ___ \ |\   __  \|\   ___  \                                                                            
\ \  \|\  \ \  \/  / ||___ \  \_\ \  \\\  \ \  \|\  \ \  \___|\ \  \|\  \ \  \|\  \ \   __/|\ \  \|\  \ \  \\ \  \                                                                           
 \ \   ____\ \    / /     \ \  \ \ \   __  \ \   __  \ \  \  __\ \  \\\  \ \   _  _\ \  \_|/_\ \   __  \ \  \\ \  \                                                                          
  \ \  \___|\/  /  /       \ \  \ \ \  \ \  \ \  \ \  \ \  \|\  \ \  \\\  \ \  \\  \\ \  \_|\ \ \  \ \  \ \  \\ \  \                                                                         
   \ \__\ __/  / /          \ \__\ \ \__\ \__\ \__\ \__\ \_______\ \_______\ \__\\ _\\ \_______\ \__\ \__\ \__\\ \__\                                                                        
    \|__||\___/ /            \|__|  \|__|\|__|\|__|\|__|\|_______|\|_______|\|__|\|__|\|_______|\|__|\|__|\|__| \|__|                                                                        
         \|___|/                                                                                                                                                                             
                                                                                                                                                                                             
                                                                                                                                                                                             
 _________  ___  ___  _______   ________  ________  _______   _____ ______           ________  ________  ___       ________  ___  ___  ___       ________  _________  ________  ________     
|\___   ___\\  \|\  \|\  ___ \ |\   __  \|\   __  \|\  ___ \ |\   _ \  _   \        |\   ____\|\   __  \|\  \     |\   ____\|\  \|\  \|\  \     |\   __  \|\___   ___\\   __  \|\   __  \    
\|___ \  \_\ \  \\\  \ \   __/|\ \  \|\  \ \  \|\  \ \   __/|\ \  \\\__\ \  \       \ \  \___|\ \  \|\  \ \  \    \ \  \___|\ \  \\\  \ \  \    \ \  \|\  \|___ \  \_\ \  \|\  \ \  \|\  \   
     \ \  \ \ \   __  \ \  \_|/_\ \  \\\  \ \   _  _\ \  \_|/_\ \  \\|__| \  \       \ \  \    \ \   __  \ \  \    \ \  \    \ \  \\\  \ \  \    \ \   __  \   \ \  \ \ \  \\\  \ \   _  _\  
      \ \  \ \ \  \ \  \ \  \_|\ \ \  \\\  \ \  \\  \\ \  \_|\ \ \  \    \ \  \       \ \  \____\ \  \ \  \ \  \____\ \  \____\ \  \\\  \ \  \____\ \  \ \  \   \ \  \ \ \  \\\  \ \  \\  \| 
       \ \__\ \ \__\ \__\ \_______\ \_______\ \__\\ _\\ \_______\ \__\    \ \__\       \ \_______\ \__\ \__\ \_______\ \_______\ \_______\ \_______\ \__\ \__\   \ \__\ \ \_______\ \__\\ _\ 
        \|__|  \|__|\|__|\|_______|\|_______|\|__|\|__|\|_______|\|__|     \|__|        \|_______|\|__|\|__|\|_______|\|_______|\|_______|\|_______|\|__|\|__|    \|__|  \|_______|\|__|\|__|                                                                           

)" << '\n';

    char reset; // handles the 'back to main menu' function, closes program, or restarts the specifcic mode of the calculator after usage
    do {

        int menuOptions;
        
        cout << "Pythagorean Theorem Calculator v4.1\n\n"; // Project title and current version

        // Main menu
        cout << "Patch notes - input '1' to open\n"
                "Calculator - input '2' to open\n"
                "Close program - input '3' \n\n";
        cout << "Type number here: ";

        // input validation, ensures only numbers can be input
        if(!(cin >> menuOptions)){
        cin.clear();
        cin.ignore(123, '\n');
        } else reset ='y';

        // checks for invalid main menu inputs 
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
                            "       mode of the calculator that ensure that input cannot be less than or equal to zero. Added more QoL functions such as \n\n"
                            "       the ability to restart the program in the mode options menu and in the options menu after using calculator. \n\n"
                            "       Also added more comments and improved overall source code layout for better reading and easier editing if needed. \n\n"
                            "       And finally, I added an ASCII art in the main menu to make it beautiful. \n\n"
                            "v4.1 - Improved input validation in mode selection menu as previous one has major issues when it comes to repeated invalid inputs. \n\n"
                            "       Also added developer notes in the patch notes section for additional information to users. \n\n";
                    cout << "_____________________________________________________________________________________________________________________________________\n\n";

                    // Developer notes
                    cout << "Developer notes: \n\n";
                    cout << "- Program is fully functional with many quality of life functions such as the going back to main menu , calculator restart after usage, \n"
                            "and quickly closing program. There are also input validations to ensure minimal errors and for user convenience. But there are parts of the \n"
                            "program that has no input validation against wrong data types such as the side inputs in the 3 different modes of the calculator. Its \n"
                            "too much work and I believe, its not really necessary as the user can just close the program and reopen it when an error occurs \n"
                            "and its expected for the user to put numerical inputs in the side input section. But if the professor suggests to add the input validators, \n"
                            "i will add it. \n\n";
                    
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
                    "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse (1-3 only)" << '\n';
                    cout << "Type number here: ";
                    cin >> modeOptions;
                    
                    // checks if input is more than 3 or less than 1
                    while(modeOptions>3 || modeOptions<1){
                    cin.clear(); 
                    cin.ignore(123, '\n');
                    cout << '\n';
                    cout << "invalid mode, please try again \n\n"; 
                    cout << "_____________________________________________________________________________________________________________________________________\n\n";
                    cout << "Which side of a triangle are you looking for? \n\n" <<
                            "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse. Type '4' to go back to main menu. (1-4 only)" << '\n';
                    cout << "Type number here: ";
                    cin >> modeOptions;
                    cout << '\n';
                    }

                    
                    // input validation, ensures only numbers can be input 
                    while(!(cin >> modeOptions)){
                    cin.clear();
                    cin.ignore(123, '\n');    
                    cout << '\n';
                    cout << "invalid mode, please try again \n\n"; 
                    cout << "_____________________________________________________________________________________________________________________________________\n\n";
                    cout << "Which side of a triangle are you looking for? \n\n" <<
                            "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse. Type '4' to go back to main menu. (1-4 only)" << '\n';
                    cout << "Type number here: ";
                    cin >> modeOptions;
                    cout << '\n';
                    }
                    
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
                            reset == 'y';
                        } else {
                        sideB = pow(sideB, 2);
                        sideC = pow(sideC, 2);
                        sideA = sqrt(sideC - sideB);
                        cout << '\n';
                        
                        // To handle sideA = -nan result.
                        if(isnan(sideA)) {
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
                            reset == 'y';
                            } else {
                            sideB = pow(sideB, 2);
                            sideC = pow(sideC, 2);
                            sideA = sqrt(sideC - sideB);
                            cout << '\n';
                        
                            // To handle sideA = -nan result.
                            if(isnan(sideA)) {
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
                        reset == 'y';
                        } else {
                        sideA = pow(sideA, 2);
                        sideC = pow(sideC, 2);
                        sideB = sqrt(sideC - sideA);
                        cout << '\n';
                        
                        // To handle sideA = -nan result.
                        if(isnan(sideB)) {
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
                            reset == 'y';
                            } else {
                            sideA = pow(sideA, 2);
                            sideC = pow(sideC, 2);
                            sideB = sqrt(sideC - sideA);
                            cout << '\n';
                        
                            // To handle sideA = -nan result.
                            if(isnan(sideB)) {
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
                    case 3: // C side or hypothenuse
                        
                        // C side inputs and output
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side B value: ";
                        cin >> sideB;
                        cout << '\n';

                        // ensures input cannot be less than or equal to zero
                        if(sideA <= 0 || sideB <= 0){
                        cout << "ERROR: A side of a triangle cannot be less than or equal to zero. \n\n";
                        reset == 'y';
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
                            reset == 'y';
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

                        reset == 'y'; // go back to main menu from the mode options menu

                    break;
                    case 5:

                        reset == 'c';

                    break;
                    }

                    cout << '\n';

                    // terminates program after calculator usage
                    if(reset == 'c'){
                        exit(0); 
                                    //checks for invalid inputs
                        } else while(reset != 'y' && reset != 'c'){ 
                                cout << "invalid input, type 'y' to go back to main menu or 'c' to close program, restart option no longer available, must go back to main menu \n";
                                cin >> reset;
                            }
                break;
                case 3:
                    
                    // terminates program from the main menu
                    exit(0);
                    
                break;
                }   
                // border to show where a session ends and for visual clarity
                cout << "_____________________________________________________________________________________________________________________________________\n\n"; 
                
    } while(reset == 'y'); // do while loop to reset entire program
     
return 0;
}
