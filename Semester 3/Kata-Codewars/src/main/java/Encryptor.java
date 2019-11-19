/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: suic
 *    Title: Encrypt this!
 *    Availability: https://www.codewars.com/kata/5848565e273af816fb000449
 *
 ***************************************************************************************/
/***************************************************************************************
 *
 * Acknowledgments:
 * I thank yvonne-liu for the idea and for the example tests :)
 *
 * Description:
 * Encrypt this!
 *
 * You want to create secret messages which can be deciphered by the Decipher this! kata. Here are the conditions:
 *
 * Your message is a string containing space separated words.
 * You need to encrypt each word in the message using the following rules:
 * The first letter needs to be converted to its ASCII code.
 * The second letter needs to be switched with the last letter
 * Keepin' it simple: There are no special characters in input.
 * Examples:
 * Kata.encryptThis("Hello") => "72olle"
 * Kata.encryptThis("good") => "103doo"
 * Kata.encryptThis("hello world") => "104olle 119drlo"
 *
 ***************************************************************************************/

public class Encryptor {
    public static String encryptThis(String text) {
        if(text.length() < 1){
            return "";
        }
        String[] encryptMe = text.split("\\s");
        String textToReturn = "";
        String stringHolderMiddleWord;
        int ASCIIValue;
        char charHolder, charHolderLastChar, charHolderSecondChar;
        for (int i = 0; i < encryptMe.length; i++) {
            charHolder = encryptMe[i].charAt(0);
            ASCIIValue = charHolder;
            if(encryptMe[i].length() < 2){
                encryptMe[i] = ASCIIValue + "";
            }
            else if (encryptMe[i].length() > 1 && encryptMe[i].length() < 3){
                encryptMe[i] = ASCIIValue + encryptMe[i].substring(1);
            }
            else{
                charHolderSecondChar = encryptMe[i].charAt(1);
                charHolderLastChar = encryptMe[i].charAt(encryptMe[i].length()-1);
                stringHolderMiddleWord = encryptMe[i].substring(2,encryptMe[i].length()-1);
                encryptMe[i] = ASCIIValue + "" + charHolderLastChar + stringHolderMiddleWord + charHolderSecondChar;
            }
            if(i == encryptMe.length-1){
                textToReturn += encryptMe[i];
            }
            else{
                textToReturn += encryptMe[i] + " ";
            }
            ASCIIValue = 0;
        }
        return textToReturn;
    }
}
