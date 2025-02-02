#include <iostream>
#include <cmath>

using namespace std;

    int main() {

    char reset;
    do {

        int menuOptions;
        
        cout << "Pythagorean Theorem Calculator v3.3\n\n"; // Project title and current version

            // Main menu
        cout << "Patch notes - input '1' to open\n"
                "Calculator - input '2' to open\n"
                "Close program - input '3' \n\n";
        cout << "input: ";
            // input validation in main menu, program goes crazy if char data  type is used as input, dont know why, ask Ma'am why
        if(!(cin >> menuOptions)){
            cin.clear();
            cin.ignore(123, '\n');
                }
        else reset ='y';
            // checks for invalid main menu inputs 
        if(menuOptions != 1 && menuOptions != 2 && menuOptions != 3){
            cout << "invalid input, please select correct input ";
            reset = 'y';
                }
            
        cout << '\n';
            
            switch(menuOptions){
                case 1: // Patch notes
                    cout << "v1.0 - Full functionality with 3 modes based on which side user is looking for.\n\n"
                            "v2.0 - Added reset function so user doesnt need to rerun the code everytime.\n\n"
                            "v3.0 - Fixed bug in Mode 2 (side B) due to incorrect formula, added patch notes for documentation purposes,\n\n"
                            "       and also added force reset in the reset function.\n\n"
                            "v3.1 - Improved reset function, removed force reset, added terminate program function in both after calculator usage \n\n"
                            "       and the main menu, and also added more output based on user input.\n\n"
                            "v3.2 - Added input validation for main menu, and improved functions that check for invalid inputs, \n\n"
                            "       added minor changes to make console interface look better and added more comments for ease of use and refactoring. \n\n";
                    cout << "v3.3 - Added input validation for mode selection. \n\n";
                    
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
                            "a² + b² = c²" << '\n' << // C side or hypotenuse formula
                            "c² - b² = a²" << '\n' << // A side formula
                            "c² - a² = b² \n\n"; // B side formula    
            
          int modeOptions;
    
            // Mode selection
            cout << "Which side of a triangle are you looking for? \n\n" <<
                "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse (1-3 only)" << '\n';
            cout << "Type number here: ";
                    // input validation in mode selection
            if(!(cin >> modeOptions)){
            cin.clear();
            cin.ignore(123, '\n');
                }

                // Checks for invalid mode inputs
                while(modeOptions>3 || modeOptions<1){

                    cout << "\n\n";
                    cout << "invalid mode, please try again \n\n";
                    cout << "_____________________________________________________________________________________________________________________________________\n\n";
                    cout << "Which side of a triangle are you looking for? \n\n" <<
                            "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse (1-3 only)" << '\n';
                    cout << "Type number here: ";
                    cin >> modeOptions;
                }
    
                cout << "\n\n";
            
                double sideA;
                double sideB;
                double sideC;
            
                switch(modeOptions){
                    case 1:
                
                        // A side inputs and output
                        cout << "Side B value: ";
                        cin >> sideB;
                        
                        cout << "Side C value: ";
                        cin >> sideC;
    
                        sideB = pow(sideB, 2);
                        sideC = pow(sideC, 2);
                        sideA = sqrt(sideC - sideB);
                        cout << '\n';
                        cout << "Side A value: " << sideA << "\n\n"; // Side A answer
    
                    break;
                    case 2:
    
                        // B side inputs and output
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side C value: ";
                        cin >> sideC;
                        
                        sideA = pow(sideA, 2);
                        sideC = pow(sideC, 2);
                        sideB = sqrt(sideC - sideA);
                        cout << '\n';
                        cout << "Side B value: " << sideB << "\n\n"; // Side B answer
    
                    break;
                    case 3:
                        
                        // C side inputs and output
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side B value: ";
                        cin >> sideB;
                        cout << '\n';
                        cout << "Side C value: " << hypot(sideA ,sideB) << "\n\n"; // Side C answer
                    break;
                    
                    }
                    // pop-up after using calculator
                cout << "type 'y' to go back to main menu or 'c' to close program ";
                    cin >> reset;

                    cout << '\n';

                    // terminates program after usage
                if(reset == 'c'){
                        exit(0); 
                                    //checks for invalid inputs
                        } else while(reset != 'y' && reset != 'c'){ 
                                cout << "invalid input, type 'y' to go back to main menu or 'c' to close program ";
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
