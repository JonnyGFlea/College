/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: iamstone
 *    Title: Your order, please
 *    Availability: https://www.codewars.com/kata/55c45be3b2079eccff00010f
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Your task is to sort a given string. Each word in the string will contain a single number. This number is the position the word should have in the result.
 *
 * Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).
 *
 * If the input string is empty, return an empty string. The words in the input String will only contain valid consecutive numbers.
 *
 * Examples
 * "is2 Thi1s T4est 3a"  -->  "Thi1s is2 3a T4est"
 * "4of Fo1r pe6ople g3ood th5e the2"  -->  "Fo1r the2 g3ood 4of th5e pe6ople"
 * ""  -->  ""
 *
 ***************************************************************************************/

public class Order {
    public static String order(String sentence) {
        int count = 1;
        String[] wordsOutOfOrder = sentence.split("\\s+");
        String[] wordsInOrder = new String[wordsOutOfOrder.length];
        String returnThis = "";

        if(sentence.length() == 0){
            return "";
        }

        for(int i = 0; i < wordsOutOfOrder.length; i++){
            if(wordsOutOfOrder[i].contains(count+"")){
                wordsInOrder[count-1] = wordsOutOfOrder[i];
                i = -1;
                count++;
            }
        }
        for (int i = 0; i < wordsInOrder.length; i++) {
            returnThis += wordsInOrder[i];
            if(i != wordsInOrder.length-1){
                returnThis += " ";
            }
        }
        return returnThis;
    }
}