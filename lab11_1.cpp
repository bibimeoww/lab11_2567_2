#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i =0 ; i < 2; i++) {
        cin.ignore(); 
        cin.get();
    }

    int gradeNum = rand()%9;

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};

    cout << "You will get " << grades[gradeNum] << " in this 261102." << endl;

    return 0;
}// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
