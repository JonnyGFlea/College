/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: g964
 *    Title: Maximum Length Difference
 *    Availability: https://www.codewars.com/kata/maximum-length-difference/java
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * You are given two arrays a1 and a2 of strings. Each string is composed with letters from a to z. Let x be any string in the first array and y be any string in the second array.
 *
 * Find max(abs(length(x) − length(y)))
 *
 * If a1 and/or a2 are empty return -1 in each language except in Haskell (F#) where you will return Nothing (None).
 *
 * #Example:
 *
 * a1 = ["hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"]
 * a2 = ["cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"]
 * mxdiflg(a1, a2) --> 13
 * Bash note:
 * input : 2 strings with substrings separated by ,
 * output: number as a string
 *
 ***************************************************************************************/

class MaxDiffLength {

    public static int mxdiflg(String[] a1, String[] a2) {
        //checks if empty
        if (a1.length == 0 || a2.length == 0) {
            return -1;
        }
        //instantiation
        int minX = a1[0].length(), maxX = a1[0].length();
        int minY = a2[0].length(), maxY = a2[0].length();

        for (int i = 1; i < a1.length; i++) {
            if (minX > a1[i].length()) {
                minX = a1[i].length();
            }
            if (maxX < a1[i].length()) {
                maxX = a1[i].length();
            }
        }

        for (int i = 1; i < a2.length; i++) {
            if (minY > a2[i].length()) {
                minY = a2[i].length();
            }
            if (maxY < a2[i].length()) {
                maxY = a2[i].length();
            }
        }

        return Math.abs(minX - maxY) > Math.abs(maxX - minY)
                ? Math.abs(minX - maxY)
                : Math.abs(maxX - minY);

    }
}