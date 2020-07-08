/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: JKphobic
 *    Title: Take a Ten Minute Walk
 *    Availability: https://www.codewars.com/kata/take-a-ten-minute-walk/java
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * You live in the city of Cartesia where all roads are laid out in a perfect grid.
 * You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk.
 * The city provides its citizens with a Walk Generating App on their phones --
 * everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']).
 * You always walk only a single block in a direction and you know it takes you one minute to traverse one city block,
 * so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will,
 * of course, return you to your starting point. Return false otherwise.
 *
 * Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only).
 * It will never give you an empty array (that's not a walk, that's standing still!).
 *
 ***************************************************************************************/

public class TenMinWalk {
    public static boolean isValid(char[] walk) {
        // Insert brilliant code here
        //The 'walk' cannot be longer or shorter than 10 minutes
        if(walk.length != 10){
            System.out.println("if walk is longer or shorter than 10 we return false");
            return false;
        }
        return method1(walk);
        //return method2(walk);
    }

    public static boolean method1(char[] walk){
        int nCounter = 0;
        int sCounter = 0;
        int wCounter = 0;
        int eCounter = 0;
        for(int i= 0; i < walk.length; i++){
            if(walk[i] == 'n'){nCounter++;}
            if(walk[i] == 's'){sCounter++;}
            if(walk[i] == 'e'){eCounter++;}
            if(walk[i] == 'w'){wCounter++;}
        }
        if(nCounter == sCounter && eCounter == wCounter){return true;}
        return false;
    }

    public static boolean method2(char[] walk){
        int nsCounter = 0;
        int weCounter = 0;
        for(int i= 0; i < walk.length; i++){
            if(walk[i] == 'n'){nsCounter++;}
            if(walk[i] == 's'){nsCounter--;}
            if(walk[i] == 'e'){weCounter--;}
            if(walk[i] == 'w'){weCounter++;}
        }
        if(nsCounter == 0 && weCounter == 0){return true;}
        return false;
    }
}