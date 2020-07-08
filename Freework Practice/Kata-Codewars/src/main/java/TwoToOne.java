/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: g964
 *    Title: Two to One
 *    Availability: https://www.codewars.com/kata/5656b6906de340bd1b0000ac
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Take 2 strings s1 and s2 including only letters from ato z. Return a new sorted string, the longest possible, containing distinct letters,
 *
 * each taken only once - coming from s1 or s2.
 * Examples:
 * a = "xyaabbbccccdefww"
 * b = "xxxxyyyyabklmopq"
 * longest(a, b) -> "abcdefklmopqwxy"
 *
 * a = "abcdefghijklmnopqrstuvwxyz"
 * longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
 *
 ***************************************************************************************/

import java.util.Arrays;

public class TwoToOne {

    public static String longest(String s1, String s2) {
        String concatenate = s1.concat(s2);
        char tempArray[] = concatenate.toCharArray();
        Arrays.sort(tempArray);
        String sortedConcatenate = "";
        for (int i = 0; i < tempArray.length; i++) {
            if (sortedConcatenate.indexOf(tempArray[i]) == -1)
                sortedConcatenate = sortedConcatenate + tempArray[i];
        }
        return sortedConcatenate;
    }
}