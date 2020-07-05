#include <iostream>
#include <string>

using namespace std;

// Creates story game using user input taken.
int main() {
    int adventurers, killed;
    const int GOLD_PIECES = 900;
    string leader;

    cout << "Welcome to Lost Treasure. Please follow input the answers below.\n";
    cout << "Please enter your first number.  " << endl;
    cin >> adventurers;
    cout << "Please enter a number smaller than your first number.  " << endl;
    cin >> killed;
    cout << "What is your name?   " << endl;
    cin >> leader;
    int survivors = adventurers - killed;

    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, ";
    cout << "leaving just " << survivors << " in the group.\n";

    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces. ";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";


    return 0;
}
