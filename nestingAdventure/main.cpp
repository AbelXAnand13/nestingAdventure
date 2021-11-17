//Nesting Adventure
//Abel Anand

#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
#include <unistd.h>
using namespace std;

void death() {
    cout << "\nWASTED";
    cout << "\nYou Died";
}

void attack() {
    int choice1;
    bool quit = false;
    cout << "You and your master decide to attack the rest of the clones" << sleep(3) << "\nYou take a peek outside your tent to see a few clone approaching, they must also be coming to share the message" << sleep(3) << "\nShould you Go outside and Kill them(1), Sabotage them when they come inside(2), or hide(3)\n";

    while (!quit) {
       cin >> choice1;
   switch (choice1) {
       case 1:
           cout << "You run outside with your Lightsaber to kill the clones, you are greeted by a barrage of blaster fire. \nWithin a few moments, you are overwhelmed, your saber drops as you feel the immense pain of the blasts.";
           death();
           quit = true;
           break;
       case 2:
           cout << "You and your master hide near the opening of the tent, when the clones come inside, you easily sill them." << sleep(3) << "\nYou go outside and pick off each clone one by one, then you go to the main cruiser, mostly empty, you and your master take control of it without much effort.";
           cout << sleep(4) << "\nYou disable the tracker, you are a ghost from now on, you can trust no one but your master.\nYour story doesn't end here though, you have your whole life to live...";
           quit = true;
           break;
       case 3:
           cout << "You and your master hide, the clones come into your tent, but using your mind-tricks, they don't see you, after a thorough investigation, they leave\nYou leave the tent and run away from the main city.\nYou have one objective now, never be found\n...";
           quit = true;
           break;
       default:
           cout << "Make a valid decision!\n";
           break;
           
            }
       }
}

void escape() {
    int choice1;
    bool quit = false;
    cout << "You and your master decide to escape, you cut a hole in the back of the net and escape through there." << sleep(3) << "You have to leave the camp, luckily, you see two vehicles outside, a Ship(1) and a Speeder bike(2)" << sleep(3) << "Which one do you take\n";
    
    while (!quit) {
       cin >> choice1;
   switch (choice1) {
       case 1:
           cout << "You decide to to use the ship to escaoe, after all, it has turrents.\nYou don't get too far off the ait before you remember the anti-aircraft cannon positioned near the main cruiser\n*shhhsh  shhhsh*";
           death();
           quit = true;
           break;
       case 2:
           cout << "You decide to take the more discreet vehicle\nThe clones don't hear or see you\nYou have to get out of the city somehow...";
           quit = true;
           break;
       default:
           cout << "Make a valid decision!\n";
           break;
           }
       }
}

void avenge() {
    int choice1;
    bool quit = false;
    cout << "NO MASTER!" <<"\nAn instant reflex kicks in, you slice the clones and go over to your master." << sleep(3) << "\nGo, your master says. Be safe, May the force be wi- ";
    cout << sleep(3) << "\nYou could've prevented it" << sleep(2) << "\nYou are filled with rage." << sleep(2) << "Should you use that rage to kill all the clones outside(1), or should you contain that rage and think about what you are going to do next(2)";
    
    while (!quit) {
       cin >> choice1;
   switch (choice1) {
       case 1:
           cout << "You exit your tent to see a few clones with their blaster pointed towards you, with the force, you push them to the ground.\n*tsh*";
           death();
           quit = true;
           break;
       case 2:
           cout << "What would your master have wanted you to do\nYou calm down at that thooght. You exit the tent with your lightsaber up, a few clones shoot at you, you deflect the shots and hit them.";
           cout << "\nYou need to escape the planet with your ship, but there is is anti-aircraft cannon, you go and disable it.\nWith nothing stopping your departure, you leave.\nYou need to find out what is going on...";
           quit = true;
           break;
       default:
           cout << "Make a valid decision!\n";
           break;
           }
       }
}
void stick() {
    int choice1;
    bool quit = false;
    cout << "Master, why!, you've always said the republic is good, now you can't turn away from that because of a change in the name." << sleep(3) << "\nGet him help, you say to the clones. You leave and go to the cruiser you were meant to leave the planet on." << sleep(3);
    cout << "\nThere you see a group of clones huddled aroung a hologram of Admiral Tarkin, as you approach them, they raise their blasters at you."<< sleep(3) << "\nAdmiral Tarkin addresses you, I've heard from the clone that you decided to join the Empire" << sleep(3) << "\nYes";
    cout << "The Empire does not want Jedi, we need Inquisitors(1) or Spies(2)." << sleep (2) << "\nWhich one would you like to be?\n";
    cin >> choice1;
    
    while (!quit) {
       cin >> choice1;
   switch (choice1) {
       case 1:
           cout << "\nI'll be an Inquisitor, whatever it is." << sleep(3);
           cout << "\n5 YEARS LATER\n";
           cout << "\nThe Jedi are dead, join us or die...";
           quit = true;
           break;
       case 2:
           cout << "\nWho am I spying on?";
           quit = true;
           break;
       default:
           cout << "\nMake a valid decision!\n";
           break;
           }
       }
}

void empire() {
    int choice1;
    bool quit = false;
    cout << "Whats the empire?" << sleep(3) <<"\nHaven't you Heard, it's what's replacing the republic" << sleep(3) << "\nOk, I guess I'll join, how about you master." << sleep(3) << "\nNo, I think I'd rather not, he says as he tries igniting his lightsaber. Before his blade can reach it's extended form, the clones blast him.";
    cout << sleep(3) << "\nDo you help your master(1) or Do you stay with your choice(2)\n";
    
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

/* for choice
 
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
 
 
 
 chart:
 
                         Empire                                         Die
                 Stick             Avenge                 Escape                  Attack
       Inquisitor - Spy        Rage -  Contain       Speeder - Ship       Kill - Sabotage - Hide
 
 Results in 9 different endings
 */
