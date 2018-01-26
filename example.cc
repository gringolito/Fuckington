/**
 * \file
 * \brief Fuckington example
 */

#include "fuckington.h"

class FUCK {
   public:
    FUCK(){};
    virtual ~FUCK(){};

    int Sum(int a, int b)
    {
        return fuckington.MyFuckingSum(a, b);
    }

    void Print(int a)
    {
        fuckington.MyFuckingPrint(a);
    }

   private:
    MyFuckington fuckington;
};

int main()
{
    FUCK fuck;

    fuck.Print(fuck.Sum(2, 2));

    return 0;
}
