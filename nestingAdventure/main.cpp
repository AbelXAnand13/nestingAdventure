#include <iostream>
#include <string>
#include <stdio.h>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <time.h>
using namespace std;
void attack() {
    int choice1;
    bool quit = false;
    cout << "You and your master decide to attack the rest of the clones" << sleep(3) << "\nYou take a peek outside your tent to see a few clone approaching, they must also be coming to share the message" << sleep(3) << "You move to the corner to sabotage them";
}
void escape() {
    int choice1;
    bool quit = false;
}
void avenge() {
    int choice1;
    bool quit = false;
}
void stick() {
    int choice1;
    bool quit = false;
}
void empire() {
    int choice1;
    bool quit = false;
    cout << "Whats the empire?" << sleep(3) <<"\nHaven't you Heard, it's what's replacing the republic" << sleep(3) << "\nOk, I guess I'll join, how about you master." << sleep(3) << "\nNo, I think I'd rather stay, he says as he tries igniting his lightsaber. Before his blade can reach it's extended form, the clones blast him." << sleep(4); cout <<"\nNO MASTER!";
    cout << sleep(3) << "\nDo you avenge your master(1) or Do you stay with your choice(2)\n";
    cin >> choice1;
    while (!quit) {
    cin >> choice1;
switch (choice1) {
    case 1:
        avenge();
        quit = true;
        break;
    case 2:
        stick();
        quit = true;
        break;
    default:
        cout << "Make a valid decision!\n";
        break;
        }
    }
}
void die() {
    int choice1;
    bool quit = false;
    cout << "You and your master ignite your lightsabers an stand in a defence position" << sleep(3) <<"\nWhat are you doing Commander, says your master." << sleep(3) << "\nFollowing Orders" << sleep(3) << "\nThe clones fire at you, but you block it back easily" << sleep(3) << "\nYou and your master easily dispose of the clones.";
    cout << sleep(3) << "\nSince you are the only Jedi in the camp you are outnumbered and have two choices" << sleep(3) << "\nYou can attack all the clones(1), or escape somehow(2)\n" ;
    cin >> choice1;
    while (!quit) {
    cin >> choice1;
switch (choice1) {
    case 1:
        attack();
        quit = true;
        break;
    case 2:
        escape();
        quit = true;
        break;
    default:
        cout << "Make a valid decision!\n";
        break;
        }
    }
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
