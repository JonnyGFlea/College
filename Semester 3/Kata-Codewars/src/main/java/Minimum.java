/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: MrZizoScream
 *    Title: Form The Minimum
 *    Availability: https://www.codewars.com/kata/5ac6932b2f317b96980000ca
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Task
 * Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates).
 *
 * Notes:
 * Only positive integers will be passed to the function (> 0 ), no negatives or zeros.
 * Input >> Output Examples
 * minValue ({1, 3, 1})  ==> return (13)
 * Explanation:
 * (13) is the minimum number could be formed from {1, 3, 1} , Without duplications
 *
 * minValue({5, 7, 5, 9, 7})  ==> return (579)
 * Explanation:
 * (579) is the minimum number could be formed from {5, 7, 5, 9, 7} , Without duplications
 *
 * minValue({1, 9, 3, 1, 7, 4, 6, 6, 7}) return  ==> (134679)
 * Explanation:
 * (134679) is the minimum number could be formed from {1, 9, 3, 1, 7, 4, 6, 6, 7} , Without duplications
 *
 ***************************************************************************************/

public class Minimum {

    public static int minValue(int[] values) {
        String returnSmallestCombinationOfIntegers = "";
        int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
        for (int i = 0; i < values.length; i++) {
            switch (values[i]) {
                case 0:
                    zero++;
                    break;
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 4:
                    four++;
                    break;
                case 5:
                    five++;
                    break;
                case 6:
                    six++;
                    break;
                case 7:
                    seven++;
                    break;
                case 8:
                    eight++;
                    break;
                case 9:
                    nine++;
                    break;
            }
        }

        if (zero > 0) {
            returnSmallestCombinationOfIntegers += "0";
        }
        if (one > 0) {
            returnSmallestCombinationOfIntegers += "1";
        }
        if (two > 0) {
            returnSmallestCombinationOfIntegers += "2";
        }
        if (three > 0) {
            returnSmallestCombinationOfIntegers += "3";
        }
        if (four > 0) {
            returnSmallestCombinationOfIntegers += "4";
        }
        if (five > 0) {
            returnSmallestCombinationOfIntegers += "5";
        }
        if (six > 0) {
            returnSmallestCombinationOfIntegers += "6";
        }
        if (seven > 0) {
            returnSmallestCombinationOfIntegers += "7";
        }
        if (eight > 0) {
            returnSmallestCombinationOfIntegers += "8";
        }
        if (nine > 0) {
            returnSmallestCombinationOfIntegers += "9";
        }


        return Integer.parseInt(returnSmallestCombinationOfIntegers);
    }

}