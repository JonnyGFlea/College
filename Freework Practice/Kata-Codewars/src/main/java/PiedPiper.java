/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: The Deaf Rats of Hamelin
 *    Availability: https://www.codewars.com/kata/the-deaf-rats-of-hamelin
 *
 ***************************************************************************************/

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

/***************************************************************************************
 *
 * Story
 * The Pied Piper has been enlisted to play his magical tune and coax all the rats out of town.
 *
 * But some of the rats are deaf and are going the wrong way!
 *
 * Kata Task
 * How many deaf rats are there?
 *
 * Legend
 * P = The Pied Piper
 * O~ = Rat going left
 * ~O = Rat going right
 * Example
 * ex1 ~O~O~O~O P has 0 deaf rats
 * ex2 P O~ O~ ~O O~ has 1 deaf rat
 * ex3 ~O~O~O~OP~O~OO~ has 2 deaf rats
 *
 ***************************************************************************************/
public class PiedPiper {
    public static int countDeafRats(final String town) {
        System.out.println("town = " + town);
        char[] townArray = town.replaceAll("\\s+","").toCharArray();
        int Deafcount = 0, locationOfPiper = new String(townArray).indexOf('P');
        String currentLook = "";


        for (int i = 0; i < townArray.length - 1; i++) {
            currentLook = "" + townArray[i] + townArray[i+1];
            if(i == locationOfPiper){
                i++;
            }
            currentLook = "" + townArray[i] + townArray[i+1];
            if (townArray[i] == 'O' && townArray[i + 1] == '~') {
                    if (i + 1 < locationOfPiper) {
                        Deafcount++;
                    }
                }
            else if (townArray[i] == '~' && townArray[i + 1] == 'O') {
                    if (i + 1 > locationOfPiper) {
                        Deafcount++;
                    }
                }
            i++;
        }
        return Deafcount;
    }
}
