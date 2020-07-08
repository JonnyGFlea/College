/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: smolen
 *    Title: Where is my parent!?(cry)
 *    Availability: https://www.codewars.com/kata/58539230879867a8cd00011c
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Mothers arranged a dance party for the children in school. At that party, there are only mothers and their children. All are having great fun on the dance floor when suddenly all the lights went out. It's a dark night and no one can see each other. But you were flying nearby and you can see in the dark and have ability to teleport people anywhere you want.
 *
 * Legend:
 * -Uppercase letters stands for mothers, lowercase stand for their children, i.e. "A" mother's children are "aaaa".
 * -Function input: String contains only letters, uppercase letters are unique.
 * Task:
 * Place all people in alphabetical order where Mothers are followed by their children, i.e. "aAbaBb" => "AaaBbb".
 *
 ***************************************************************************************/

import java.util.Arrays;

class WhereIsMyParent {
    static String findChildren(final String text) {
        String returnt = "";
        String holder = "";
        int counter = 0;
        String[] children = text.split("([A-Z])");
        String[] parents = text.split("([a-z\\W])");
        holder = Arrays.toString(children);
        holder = holder.replaceAll("[^a-zA-Z]", "");
        char[] childChar = holder.toCharArray();
        holder = Arrays.toString(parents);
        holder = holder.replaceAll("[^a-zA-Z]", "");
        char[] parentChar = holder.toCharArray();
        Arrays.sort(childChar);
        Arrays.sort(parentChar);
        char currentLetter;

        while(parentChar.length >= 1){
            currentLetter = parentChar[0];
            for (int i = 0; i < parentChar.length; i++) {
                if(parentChar[i] == currentLetter){
                    parentChar[i] = '_';
                    counter++;

                }
                while(counter != 0){
                    returnt += String.valueOf(currentLetter);
                    counter--;
                }
            }


            for (int i = 0; i < childChar.length; i++) {
                if(String.valueOf(childChar[i]).equals(String.valueOf(currentLetter).toLowerCase())){
                    childChar[i] = '_';
                    counter++;
                }
                while(counter != 0){
                    returnt += String.valueOf(currentLetter).toLowerCase();
                    counter--;
                }
            }
            holder = Arrays.toString(childChar);
            holder = holder.replaceAll("[^a-zA-Z]", "");
            childChar = holder.toCharArray();
            holder = Arrays.toString(parentChar);
            holder = holder.replaceAll("[^a-zA-Z]", "");
            parentChar = holder.toCharArray();
        }


        return returnt;
    }
}
