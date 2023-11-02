#include <iostream>
using namespace std;

string spellDigit(size_t d) {
    string numstr = "";
    switch (d) {
        case 0:
            numstr = "zero";
            break;
        case 1:
            numstr = "one";
            break;
        case 2:
            numstr =  "two";
            break;
        case 3:
            numstr = "three";
            break;
        case 4:
            numstr = "four";
            break;
        case 5:
            numstr = "five";
            break;
        case 6:
            numstr = "six";
            break;
        case 7:
            numstr = "seven";
            break;
        case 8:
            numstr = "eight";
            break;
        case 9:
            numstr = "nine";
            break;

    }
    return numstr;
}

string spellTenth(size_t d2, size_t d1) {
    string numstr = "";
    switch (d2) {
        case 0:
            numstr = spellDigit(d1);
            break;
        case 1:
            switch (d1) {
                case 0:
                    numstr = "ten";
                    break;
                case 1:
                    numstr = "eleven";
                    break;
                case 2:
                    numstr =  "twelve";
                    break;
                case 3:
                    numstr = "thirteen";
                    break;
                case 4:
                    numstr = "fourteen";
                    break;
                case 5:
                    numstr = "fifteen";
                    break;
                case 6:
                    numstr = "sixteen";
                    break;
                case 7:
                    numstr = "seventeen";
                    break;
                case 8:
                    numstr = "eighteen";
                    break;
                case 9:
                    numstr = "nineteen";
                    break;
                default:
                    numstr = "invalid digit";
            }

            break;
        case 2:
            numstr =  "twenty";
            if (d1 > 0) {
                numstr = "twenty";
                numstr = numstr + " " + spellDigit(d1);
            }

            break;
        case 3:
            numstr = "thirty";
            if (d1 > 0) {
                numstr = "thirty";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 4:
            numstr = "forty";
            if (d1 > 0) {
                numstr = "forty";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 5:
            numstr = "fifty";
            if (d1 > 0) {
                numstr = "fifty";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 6:
            numstr = "sixty";
            if (d1 > 0) {
                numstr = "sixty";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 7:
            numstr = "seventy";
            if (d1 > 0) {
                numstr = "seventy";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 8:
            numstr = "eighty";
            if (d1 > 0) {
                numstr = "eighty";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        case 9:
            numstr = "ninety";
            if (d1 > 0) {
                numstr = "ninety";
                numstr = numstr + " " + spellDigit(d1);
            }
            break;
        default:
            numstr = "invalid digit";
    }
    return numstr;
}
int main() {
    std::cout << "Enter a number:" << std::endl;
    size_t num;
    cin >> num;

    // 1980
    // one thousand nine hundred eighty
    // 1 thousand
    // nine hundred
    // eighty
    // 11999
    // 1,112,223,334
    size_t count = 0;
    string numstr = "";
    size_t d0;
    while (num > 0) {
        size_t digit = num % 10;
        cout << digit << endl;
        if (count == 0) {
            numstr = spellDigit(digit);
        }
        else if (count == 1){
            numstr = spellTenth(digit, d0);
        }
        else if (count == 2) {
            if (digit > 0) {
                numstr = spellDigit(digit ) + " hundred " + numstr;
            }

        }
        cout << numstr << " " << count << endl;
        count++;
        d0 = digit;
        num = num / 10;  // get rid of one digit

    }
    return 0;
}
