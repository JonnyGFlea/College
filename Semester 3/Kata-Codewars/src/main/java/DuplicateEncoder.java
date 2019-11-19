/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: obnounce
 *    Title: Duplicate Encoder
 *    Availability: https://www.codewars.com/kata/duplicate-encoder/java
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.
 *
 * Examples
 * "din"      =>  "((("
 * "recede"   =>  "()()()"
 * "Success"  =>  ")())())"
 * "(( @"     =>  "))(("
 *
 ***************************************************************************************/

import java.util.HashMap;

public class DuplicateEncoder {
    static String encode(String word){
        HashMap<Character, Integer> hashMap = new HashMap<>();
        char[] wordArr = word.toLowerCase().toCharArray();
        String stringToReturn = "";
        for (char c : wordArr) {
            if (hashMap.containsKey(c)) {
                hashMap.put(c, hashMap.get(c) + 1);
            }
            else {
                hashMap.put(c, 1);
            }
        }
        for (int i = 0; i < wordArr.length; i++) {
            if(hashMap.get(wordArr[i]) > 1){
                stringToReturn+=")";
            }
            else{
                stringToReturn+="(";
            }

        }

        return stringToReturn;
    }
}
