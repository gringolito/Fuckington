/**
 * \file
 * \brief Fuckington Design Pattern
 *
 * The Fuckington desing pattern defines a class where the ONLY way to use it
 * is by implementing a class named FUCK (yes, the uppercase word 'fuck') in
 * your code and the FUCK class MUST instantiate your class.
 *
 * In a Fuckington all class methods and/or members are private (including all
 * the constructors and destructors), your Fuckington MUST have a friend class
 * called FUCK, and the Fuckington itself has to be a final class, no
 * inheritance is allowed for the Fuckington, so the only way to use or access
 * your class implementation is by implementing the friend class FUCK that will
 * will have an instance of the Fuckington.
 *
 * In the FUCK class the user can expose the private methods and/or members
 * whatever he wants. The FUCK class can combine how many Fuckingtons you want.
 */

#ifndef FUCKINGTON_FUCKINGTON_H_
#define FUCKINGTON_FUCKINGTON_H_

#include <iostream>

class FUCK;

class MyFuckington final {
    // You must implement the class FUCK to use MyFuckington
    friend class FUCK;

   private:
    MyFuckington() = default;
    ~MyFuckington() = default;

    int MyFuckingSum(int a, int b)
    {
        return a + b;
    }

    void MyFuckingPrint(int a)
    {
        std::cout << "This fucking number is: " << a << std::endl;
    }
};

#endif  // FUCKINGTON_FUCKINGTON_H_
