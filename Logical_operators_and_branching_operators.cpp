#include <iostream>

using namespace std;
    //1
    //void drawLine(char symbol, int length, bool vertical, int speed) {
    //    for (int i = 0; i < length; i++) {
    //        if (vertical) {
    //            cout << symbol << endl;
    //        }
    //        else {
    //            cout << symbol;
    //        }

    //        for (int j = 0; j < speed * 100000; j++); 
    //    }
    //    if (!vertical) {
    //        cout << endl; 
    //    }
    //}

    int main() {
    //    char symbol;
    //    int length, speed, direction;

    //    cout << "Enter a symbol for the line: ";
    //    cin >> symbol;

    //    cout << "Enter the length of the line: ";
    //    cin >> length;

    //    cout << "Choose direction:\n1. Horizontal\n2. Vertical\nYour choice: ";
    //    cin >> direction;

    //    cout << "Choose speed:\n1. Fast\n2. Normal\n3. Slow\nYour choice: ";
    //    int speedChoice;
    //    cin >> speedChoice;

    //    switch (speedChoice) {
    //    case 1: speed = 1; break;   
    //    case 2: speed = 5; break;   
    //    case 3: speed = 10; break;  
    //    default: speed = 5;          
    //    }

    //    bool vertical = (direction == 2);

    //    drawLine(symbol, length, vertical, speed);

        //1
  /*      const int SIZE = 10; 
        int arr[SIZE];

        
        for (int i = 0; i < SIZE; i++) {
            arr[i] = i * 10 + (rand() % 10); 
        }

        cout << "Array elements: ";
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int minElement = arr[0];
        int maxElement = arr[0];

        for (int i = 1; i < SIZE; i++) {
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }

        cout << "Minimum element: " << minElement << endl;
        cout << "Maximum element: " << maxElement << endl;*/

        //2
  /*      const int MONTHS = 12;
        double profits[MONTHS];

        cout << "Enter the profits for each month (12 months):" << endl;
        for (int i = 0; i < MONTHS; i++) {
            cout << "Month " << (i + 1) << ": ";
            cin >> profits[i];
        }

        int startMonth, endMonth;
        cout << "Enter the start month (1-12): ";
        cin >> startMonth;
        cout << "Enter the end month (1-12): ";
        cin >> endMonth;

        startMonth--;
        endMonth--;

        if (startMonth < 0 || endMonth >= MONTHS || startMonth > endMonth) {
            cout << "Invalid month range." << endl;
            return 1;
        }

        double minProfit = profits[startMonth];
        double maxProfit = profits[startMonth];
        int minMonth = startMonth;
        int maxMonth = startMonth;

        for (int i = startMonth; i <= endMonth; i++) {
            if (profits[i] < minProfit) {
                minProfit = profits[i];
                minMonth = i;
            }
            if (profits[i] > maxProfit) {
                maxProfit = profits[i];
                maxMonth = i;
            }
        }

        cout << "Maximum profit was in month: " << (maxMonth + 1) << " with profit: " << maxProfit << endl;
        cout << "Minimum profit was in month: " << (minMonth + 1) << " with profit: " << minProfit << endl;*/
    }