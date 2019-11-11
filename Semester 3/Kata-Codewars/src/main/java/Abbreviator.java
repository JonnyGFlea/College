import java.util.HashMap;

public class Abbreviator {

    public String abbreviate(String string) {
        String[] words = string.split("\\s+");
        String returnt = "";
        for (int i = 0; i < words.length; i++) {
            if(words[i].length() < 3){
                words[i] = words[i];
            }
            else if (words[i].length() > 3) {
                words[i] = words[i].substring(0, 1) + (words[i].length() - 2) + words[i].substring(words[i].length() - 1);
            }
            if (words[i].contains("-")) {
                doAbbreviateOnDash(words[i]);
            }
            if (i != words.length - 1) {
                returnt += " ";
            }
            returnt += words[i];
        }
        return returnt;
    }

    public static String doAbbreviateOnDash(String hyphenWords) {
        String concat = "";
        String[] words = hyphenWords.split("-+");
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() > 3) {
                words[i] = words[i].substring(0, 1) + (words[i].length() - 2) + words[i].substring(words[i].length() - 1);
            }
            if (i == words.length - 1) {
                concat += words[i];
            } else
                concat += words[i] + "-";
        }
        return concat;
    }

    public static String doAbbreviateOnWordsWithNumbers(String wordWithCharacters){
        String concat = "";
        String[] words = wordWithCharacters.split("[!a-z]");
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() > 3) {
                words[i] = words[i].substring(0, 1) + (words[i].length() - 2) + words[i].substring(words[i].length() - 1);
            }
            System.out.println("words " + words);
        }
        return concat;
    }

}
