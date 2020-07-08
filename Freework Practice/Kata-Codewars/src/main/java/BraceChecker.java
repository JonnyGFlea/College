/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: xDranik
 *    Title: Valid Braces
 *    Availability: https://www.codewars.com/kata/5277c8a221e209d3f6000b56
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Write a function that takes a string of braces, and determines if the order of the braces is valid. It should return true if the string is valid, and false if it's invalid.
 *
 * This Kata is similar to the Valid Parentheses Kata, but introduces new characters: brackets [], and curly braces {}. Thanks to @arnedag for the idea!
 *
 * All input strings will be nonempty, and will only consist of parentheses, brackets and curly braces: ()[]{}.
 *
 * What is considered Valid?
 * A string of braces is considered valid if all braces are matched with the correct brace.
 *
 * Examples
 * "(){}[]"   =>  True
 * "([{}])"   =>  True
 * "(}"       =>  False
 * "[(])"     =>  False
 * "[({})](]" =>  False
 *
 ***************************************************************************************/

public class BraceChecker {

    public boolean isValid(String braces) {
        braces = braces.replaceAll("\\(", "a")
                .replaceAll("\\)", "b")
                .replaceAll("\\{", "c")
                .replaceAll("\\}", "d")
                .replaceAll("\\[", "e")
                .replaceAll("\\]", "f");
        while (braces.contains("ab") || braces.contains("cd") || braces.contains("ef")) {
            braces = braces.replaceAll("ab", "")
                    .replaceAll("cd", "")
                    .replaceAll("ef", "");
        }
        if (braces.length() == 0) {
            return true;
        }
        return false;
    }

}