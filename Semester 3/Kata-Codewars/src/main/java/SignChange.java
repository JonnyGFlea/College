/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: kdmatrosov
 *    Title: Plus - minus - plus - plus - ... - Count
 *    Availability: https://www.codewars.com/kata/5bbb8887484fcd36fb0020ca
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Count how often sign changes in array.
 *
 * result
 * number from 0 to ... . Empty array returns 0
 *
 * example
 * const arr = [1, -3, -4, 0, 5]
 *
 * | elem | count |
 * |------|-------|
 * |  1   |  0    |
 * | -3   |  1    |
 * | -4   |  1    |
 * |  0   |  2    |
 * |  5   |  2    |
 *
 * return 2;
 *
 ***************************************************************************************/

public class SignChange {

    public static int signChange(int[] arr) {
        int count = 0;
        if(arr.length <= 0){return 0;}
        for(int i = 1; i < arr.length; i++){
            if(arr[i-1] >= 0 && arr[i] < 0)
                count++;
            if(arr[i-1] < 0 && arr[i] >= 0)
                count++;
        }
        return count;
    }

}