/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: hhelwich
 *    Title: Sum of odd numbers
 *    Availability: https://www.codewars.com/kata/55fd2d567d94ac3bc9000064
 *
 ***************************************************************************************/

/***************************************************************************************
 *Given the triangle of consecutive odd numbers:
 *
 *              1
 *           3     5
 *        7     9    11
 *    13    15    17    19
 * 21    23    25    27    29
 * ...
 * Calculate the row sums of this triangle from the row index (starting at index 1) e.g.:
 *
 * rowSumOddNumbers(1); // 1
 * rowSumOddNumbers(2); // 3 + 5 = 8
 *
 ***************************************************************************************/

class RowSumOddNumbers {
    public static int rowSumOddNumbers(int n) {
        if (n == 1) {
            return 1;
        }
        int starting = (n * (n - 1)) + 1, sum = starting;
        for (int i = 1; i < n; i++) {
            sum += (starting + 2);
            starting += 2;
        }
        return sum;
    }
}