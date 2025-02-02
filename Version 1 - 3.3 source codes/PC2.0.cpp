#include <iostream>
#include <cmath>

using namespace std;

    int main() {

    char reset;
    do {
        cout << "Pythagorean Theorem Calculator v2.0\n\n"; // Project title
            
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
                        
                        cout << "Side A value: " << sideA;
    
                        break;
                    case 2:
    
                        // B side inputs and output
                        cout << "Side A value: ";
                        cin >> sideB;
                        
                        cout << "Side C value: ";
                        cin >> sideC;
    
                        sideB = pow(sideA, 2);
                        sideC = pow(sideC, 2);
                        sideA = sqrt(sideC - sideA);
                        
                        cout << "Side B value: " << sideB;
    
                        break;
                    case 3:
                        
                        // C side inputs and output
                        cout << "Side A value: ";
                        cin >> sideA;
                        
                        cout << "Side B value: ";
                        cin >> sideB;
                        
                        cout << "Side C value: " << hypot(sideA ,sideB);
        
                        break;
                    }

                // reset function
                cout << "\n\n";    
                cout << "reset the calculator? (y/n): ";
                cin >> reset;
                while(reset == 'n'){
                    cout << "\n\n";    
                    cout << "reset the calculator? (y/n): ";
                    cin >> reset; 
                }
                cout << "_____________________________________________________________________________________________________________________________________";
                 

        } while(reset == 'y');
    return 0;
}
        