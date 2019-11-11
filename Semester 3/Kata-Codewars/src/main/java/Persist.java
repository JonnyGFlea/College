/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: joh_pot
 *    Title: Persistent Bugger.
 *    Availability: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.
 *
 * For example:
 *
 *  persistence(39) == 3 // because 3*9 = 27, 2*7 = 14, 1*4=4
 *                       // and 4 has only one digit
 *
 *  persistence(999) == 4 // because 9*9*9 = 729, 7*2*9 = 126,
 *                        // 1*2*6 = 12, and finally 1*2 = 2
 *
 *  persistence(4) == 0 // because 4 is already a one-digit number
 *
 ***************************************************************************************/

import java.util.Arrays;

public class Persist {

    public static int persistence(long n) {
        // your code
        int count = 0, iterator = 0, total = 1;
        String longToString = "" + n;
        char[] longStringToCharArray = longToString.toCharArray(), tempArr = longStringToCharArray;

        while (longToString.length() != 1) {
            while (iterator != longStringToCharArray.length) {
                total *= Integer.parseInt(longStringToCharArray[iterator] + "");
                iterator++;
            }
            System.out.println("total = " + total);
            longToString = String.valueOf(total);
            tempArr = Arrays.copyOf(tempArr, longToString.length());
            for (int k = 0; k < tempArr.length; k++) {
                tempArr[k] = (longToString.charAt(k));
            }
            longStringToCharArray = tempArr;
            total = 1;
            iterator = 0;
            count++;
        }

        return count;
    }
}
