/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: wthit56
 *    Title: Word a10n (abbreviation)
 *    Availability: https://www.codewars.com/kata/word-a10n-abbreviation
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * The word i18n is a common abbreviation of internationalization in the developer community, used instead of typing the whole word and trying to spell it correctly. Similarly, a11y is an abbreviation of accessibility.
 *
 * Write a function that takes a string and turns any and all "words" (see below) within that string of length 4 or greater into an abbreviation, following these rules:
 *
 * A "word" is a sequence of alphabetical characters. By this definition, any other character like a space or hyphen (eg. "elephant-ride") will split up a series of letters into two words (eg. "elephant" and "ride").
 * The abbreviated version of the word should have the first letter, then the number of removed characters, then the last letter (eg. "elephant ride" => "e6t r2e").
 * Example
 * abbreviate("elephant-rides are really fun!")
 * //          ^^^^^^^^*^^^^^*^^^*^^^^^^*^^^*
 * // words (^):   "elephant" "rides" "are" "really" "fun"
 * //                123456     123     1     1234     1
 * // ignore short words:               X              X
 *
 * // abbreviate:    "e6t"     "r3s"  "are"  "r4y"   "fun"
 * // all non-word characters (*) remain in place
 * //                     "-"      " "    " "     " "     "!"
 * === "e6t-r3s are r4y fun!"
 *
 ***************************************************************************************/

public class Abbreviator {

    public String abbreviate(String string) {
        String[] words = string.split("\\s+");
        String returnt = "";

        for (int i = 0; i < words.length; i++) {
            if(words[i].length() < 3){returnt += words[i];}
            else if (!words[i].matches("[A-Za-z]+")){
                returnt += doAbbreviateOnDash(words[i]);
            }
            else{
               returnt += getString(words[i]);
            }

            //adds spaces back into the sentence
            if (i != words.length - 1) {returnt += " ";}
        }
        return returnt;
    }

    private String getString(String word) {
        String returnt = "";
        if(word.length() <= 3){
            returnt += word;
        }
        else if (word.length() > 3) {
            returnt += word.substring(0, 1) + (word.length() - 2) + word.substring(word.length() - 1);
        }
        return returnt;
    }

    public String doAbbreviateOnDash(String word) {
        String returnt = "";
        String thing = "";
        String[] words = word.split("(?=[^a-zA-Z]+)");
        for (int i = 0; i < words.length; i++) {

            if(words[i].length() > 3 && words[i].matches("[\\W0-9_]+[\\w]*")){
                returnt += words[i].substring(0,1) + getString(words[i].substring(1));

            }

            else{
                returnt += getString(words[i]);
            }
        }
        return returnt;

    }

}
