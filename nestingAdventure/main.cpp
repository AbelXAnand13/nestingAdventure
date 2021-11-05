#include <iostream>
#include <string>
#include <iostream>
#include <thread>
using namespace std;
void empire() {
    cout << "Whats the empire\nHaven't you Heard, it's what's replacing the republic\nOk, I guess I'll join, how about you master.\nNo, I think I'd rather stay, he says as he tries igniting his lightsaber. Before his blade can reach it's extended form, the clones blast him.";
    
}
void die() {
    cout << "You and your master ignite your lightsabers an stand in a defence position\nWhat are you doing Commander, says your master.\nFollowing Orders\nThe clones fire at you, but you block it back easily\nYou and your master easily dispose of the clones. ";
}
int main() {
    int choice1;
    bool quit;
    cout << "It is the year 19 BBY, your master and you along with your clones, have defeated the droid army in Christophsis\nYou are celebrating your victory when suddenly two clones come into your tent with their guns.\nThey say,\"Join the empire(1), or die(2)\"\nWhat do you do...\n";
    cin >> choice1;
    switch (choice1) {
        case 1:
            empire();
            break;
        case 2:
            die();
            break;
        default:
            break;
    }
    
}
