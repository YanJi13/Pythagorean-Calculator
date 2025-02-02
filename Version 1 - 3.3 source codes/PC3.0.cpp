#include <iostream>
#include <cmath>

using namespace std;

    int main() {

    char reset;
    do {

        int menuOptions;
        
        cout << "Pythagorean Theorem Calculator v3.0\n\n"; // Project title and current version

            // Main menu
        cout << "Patch notes - input 1 to open\n"
                "Calculator - input 2 to open\n\n";
        cout << "input: ";
        cin >> menuOptions;

        cout << '\n';
            
            switch(menuOptions){
                case 1: // Patch notes
                    cout << "v1.0 - full functionality with 3 modes based on which side user is looking for." << '\n' <<
                            "v2.0 - added reset function so user doesnt need to rerun the code everytime." << '\n' <<
                            "v3.0 - fixed bug in Mode 2 (side B) due to incorrect formula. Also added patch notes for documentation purposes. Also added force reset in the reset function.\n";
                    break;
                case 2:
                
        cout << "Formula: \n\n" << 
                            "a² + b² = c²" << '\n' << // C side or hypotenuse formula
                            "c² - b² = a²" << '\n' << // A side formula
                            "c² - a² = b² \n\n"; // B side formula    
            
          int modeOptions;
    
            // Mode selection
            cout << "Which side of a triangle are you looking for? \n\n" <<
                "Type 1 for A side, 2 for B side, or 3 for C side or the hypotenuse (1-3 only)" << '\n';
            cout << "Type number here: ";
            cin >> modeOptions;

                // Checks for invalid mode inputs
                if(modeOptions>3, modeOptions<1){

                    cout << "\n\n";
                    cout << "invalid mode\n\n";
                    while(reset == 'n'){
                    cout << "reset the calculator? (y/n): ";
                    cin >> reset; 
                }
                    
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
                        
                        cout << "Side A value: " << sideA; // Side A answer
    
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
                        
                        cout << "Side B value: " << sideB; // Side B answer
    
                        break;
                    case 3:
                        
                        // C side inputs and output
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side B value: ";
                        cin >> sideB;
                        
                        cout << "Side C value: " << hypot(sideA ,sideB); // Side C answer
        
                        break;
                    }
                }  
                // reset pop-up
                cout << "\n\n";    
                cout << "reset the calculator? (y/n): ";
                cin >> reset;
        
                // while loop to force user to reset
                while(reset == 'n'){
                    cout << "\n\n";    
                    cout << "reset the calculator? (y/n): \n\n";
                    cin >> reset; 
                }
        
                // force reset when invalid input is detected in the reset pop-up
            if(reset != 'y'|| reset != 'n'){
                cout << "invalid input, forcing reset...\n"; 
                reset = 'y';
            }
                // end border to show where a session ends and for visual clarity
                cout << "_____________________________________________________________________________________________________________________________________\n\n"; 
        
        } while(reset == 'y'); // do while loop to reset entire program
        
    return 0;
}
