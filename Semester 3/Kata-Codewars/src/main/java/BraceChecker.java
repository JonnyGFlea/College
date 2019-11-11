/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: xDranik
 *    Title: Valid Braces
 *    Availability: https://www.codewars.com/kata/5277c8a221e209d3f6000b56
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