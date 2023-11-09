#include <iostream>
using namespace std;

int main()
{
    setlocale (0, "");

    cout << "* point 1 *" << endl << endl;

    cout << "Size of different types: " << endl;
    cout << "int: " << sizeof (int) << " Bytes" << endl;
    cout << "short int: " << sizeof (short int) << " Bytes" << endl;
    cout << "long int: " << sizeof (long int) << " Bytes" << endl;
    cout << "float: " << sizeof (float) << " Bytes" << endl;
    cout << "double: " << sizeof (double) << " Bytes" << endl;
    cout << "long double: " << sizeof (long double) << " Bytes" << endl;
    cout << "char: " << sizeof (char) << " Byte" << endl;
    cout << "bool: " << sizeof (bool) << " Byte" << endl << endl;

    cout << "* point 2 *" << endl << endl;

    const int value = -4;
    const short unsigned order = 32;
    unsigned mask = 1 << (order - 1);
    cout << "Binary representation of int " << value << " is:" << endl;
    for (short i = 1; i <= order ; i++)
    {
        putchar (value & mask ? '1' : '0');
        if (i % 8 == 0 || i % order == 1)
            cout << ' ';
        mask >>= 1;
    }
    cout << endl;
    cout << "- ----------------------------------" << endl;
    cout << "sign       significant digits" << endl;
    cout << endl << endl;

    cout << "* point 3 *" << endl << endl;

    union
    {
        int tool;
        float floatValue = -1.2345e-2;
    };
    const short unsigned floatOrder = 32;
    unsigned floatMask = 1 << (floatOrder - 1);
    cout << "Binary representation of float " << floatValue << " is:" << endl;
    for (short i = 1; i <= floatOrder ; i++)
    {
        putchar (tool & floatMask ? '1' : '0');
        if (i % floatOrder == 1 || i % floatOrder == 24 || i % floatOrder == 25)
            cout << ' ';
        floatMask >>= 1;
    }
    cout << endl;
    cout << "- ----------------------- - -------" << endl;
    cout << "sign      mantissa      sign exponent" << endl;
    cout << " of                      of" << endl;
    cout << "mantissa              exponent";
    cout << endl << endl;

cout << "* point 4 *" << endl << endl;

    union
    {
        int toolDouble [2];
        double doubleValue = 8.78248736e-40;
    };
    const short unsigned doubleOrder = 64;
    unsigned doubleMask = 1 << (doubleOrder / 2 - 1);
    cout << "Binary representation of double " << doubleValue << " is:" << endl;
    for (short i = 1; i <= doubleOrder / 2 ; i++)
    {
        putchar (toolDouble [1] & doubleMask ? '1' : '0');
        if (i % doubleOrder == 1)
            cout << ' ';
        doubleMask >>= 1;
    }
    doubleMask = 1 << (doubleOrder / 2 - 1);
    for (short i = doubleOrder / 2 + 1; i <= doubleOrder; i++)
    {
        putchar (toolDouble [2] & doubleMask ? '1' : '0');
        if (i % doubleOrder == 53 || i % doubleOrder == 54)
            cout << ' ';
        doubleMask >>= 1;
    }
    cout << endl;
    cout << "- ---------------------------------------------------- - ----------" << endl;
    cout << "sign                     mantissa                    sign exponent" << endl;
    cout << " of                                                   of" << endl;
    cout << "mantissa                                           exponent";
    cout << endl << endl;

    system ("Pause");
    return 0;
}
