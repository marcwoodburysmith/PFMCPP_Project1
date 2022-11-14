#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:    dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog whimpers
dog.whimper();
//  action 3:    the dog  runs
dog.run();
//  2)
//  Noun:    engine
//  action 1:    engine accelerates
engine.accelerate();
//  action 2:    engine decelerates
engine.decelerate();
//  action 3:    engine idles
engine.idle();
//  3)
//  Noun:    turntable
//  action 1:     turntable spin at 45
turntable.spinAtFortyFive();
//  action 2:    turntable spin at 33
turntable.spinAtThirtyThree();
//  action 3:    turntable spin at 78
turntable.spinAtSeventyEight();
//  4)
//  Noun:    eyes
//  action 1:    eyes look left
eyes.lookLeft();
//  action 2:    eyes look right
eyes.lookRight();
//  action 3:  eyes roll  
eyes.roll();
//  5)
//  Noun:    tongue
//  action 1: tongues protrudes
tongue.protrude();
//  action 2:    tongue licks lips
tongue.lickLips();
//  action 3:    tongue touches roof of mouth
tongue.touchRoofOfMouth();
//  6)
//  Noun:    thermostat
//  action 1:    thermostat switches on
thermostat.switchOn();
//  action 2:    thermostat switches off
thermostat.switchOff();
//  action 3:    thermostat resets
thermostat.reset();
//  7)
//  Noun:    hair
//  action 1: hair grows
hair.grow();
//  action 2: hair greys
hair.changeToGrey();
//  action 3:    hair curls
hair.curl();
//  8)
//  Noun:    cat
//  action 1:    cat leaps
cat.leaps();
//  action 2:    cat purrs
cat.purr();
//  action 3:    cat blinks    
cat.blink();
//  9)
//  Noun:    kettle
//  action 1:    kettle consumes electricity
kettle.consumeElectricity();
//  action 2:    kettle heats water
kettle.heatWater();
//  action 3:    kettle switch illuminates
kettle.switchIlluminate();
//  10)
//  Noun:    tapeDeck
//  action 1:    tapeDeck fastforward
tapeDeck.spoolFastforward();
//  action 2:    tapeDeck rewind
tapeDeck.spoolRewind();
//  action 3:    tapeDeck plays
tapeDeck.spoolPlay();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
