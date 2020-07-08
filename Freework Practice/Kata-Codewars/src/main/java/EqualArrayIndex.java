/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: Shivo
 *    Title: Equal Sides Of An Array
 *    Availability: https://www.codewars.com/kata/5679aa472b8f57fb8c000047
 *
 ***************************************************************************************/

import java.util.stream.IntStream;

public class EqualArrayIndex {
    public static int findEvenIndex(int[] arr) {
        int sum = 0;
        int sumArr = 0;
        int counter = arr.length-1;
        int index = 0;

        if(arr.length < 1){return 0;}

        for (int i = 0; i < arr.length; i++) {
            if(counter < 0){return -1;}
            int[] arrHolder = new int[counter];
            for (int j = 0; j < counter; j++) {
                arrHolder[j] = arr[index+1];
                index++;
            }
            sumArr = IntStream.of(arrHolder).sum();
            if(sum == sumArr){
                return i;
            }
            sum+= arr[i];
            counter--;
            index = i+1;
        }
        return -1;
    }
}
