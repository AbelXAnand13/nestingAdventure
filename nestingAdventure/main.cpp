#include <iostream>
#include <string>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <time.h>

using namespace std;
void empire() {
    int choice1;
    cout << "Whats the empire?" << sleep(3) <<"\nHaven't you Heard, it's what's replacing the republic" << sleep(3) << "\nOk, I guess I'll join, how about you master." << sleep(3) << "\nNo, I think I'd rather stay, he says as he tries igniting his lightsaber. Before his blade can reach it's extended form, the clones blast him." << sleep(4); cout <<"\nNO MASTER!";
    cout << sleep(3) << "\nDo you avenge your master(1) or Do you stay with your choice(2)\n";
    cin >> choice1;
}


void die() {
    cout << "You and your master ignite your lightsabers an stand in a defence position" << sleep(3) <<"\nWhat are you doing Commander, says your master." << sleep(3) << "\nFollowing Orders" << sleep(3) << "\nThe clones fire at you, but you block it back easily" << sleep(3) << "\nYou and your master easily dispose of the clones. ";
}


int main() {
    int choice1;
    bool quit = false;
        cout << "It is the year 19 BBY, your master and you along with your clones, have defeated the droid army in Christophsis" << sleep(3) << "\nYou are celebrating your victory when suddenly two clones come into your tent with their guns." << sleep(3);
        cout << "\nThey say,\"Join the empire(1), or die(2)\"" << sleep(3) << "\nWhat do you do...\n";
        while (!quit) {
        cin >> choice1;
    switch (choice1) {
        case 1:
            empire();
            quit = true;
            break;
        case 2:
            die();
            quit = true;
            break;
        default:
            cout << "Make a valid decision!\n";
            break;
            }
        }
    }
//   sleep(3);  to sleep
