/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: Password Maker
 *    Availability: https://www.codewars.com/kata/password-maker-1/java
 *
 ***************************************************************************************/

/***************************************************************************************
 *
 * Background
 * Different sites have different password requirements.
 *
 * You have grown tired of having to think up new passwords to meet all the different rules, so you write a small piece of code to do all the thinking for you.
 *
 * Kata Task
 * Return any valid password which matches the requirements.
 *
 * Input:
 *
 * len = password must be this length
 * flagUpper = must (or must not) contain UPPERCASE alpha
 * flagLower = must (or must not) contain lowercase alpha
 * flagDigit = must (or must not) contain digit
 * Notes
 * Only alpha-numeric characters are permitted
 * The same character cannot occur more than once in the password!
 * All test cases guarantee that a valid password is possible
 *
 ***************************************************************************************/

public class Password {

    public static String makePassword(int len, boolean flagUpper, boolean flagLower, boolean flagDigit) {
        String password = "";
        String requirements = checkReq(flagUpper, flagLower, flagDigit);
        int tripleCounter = 0;
        int tripleRandomCounter = 0;
        int doubleCounter = 0;

        //Fill number array
        char[] num = new char[10];
        int numCounter = 0;
        num = fillArrayNum(num);

        //fill uppercase char array
        char[] uppercase = new char[26];
        int uppercaseCounter = 0;
        uppercase = fillArrayUp(uppercase);

        //fill lowercase char array
        char[] lowercase = new char[26];
        int lowercaseCounter = 0;
        lowercase = fillArrayLow(lowercase);


        if(requirements.equals("ULD")){
            for(int i = 0; i < len; i++){
                if(tripleCounter == 0 && uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                }
                else if(tripleCounter == 1 && lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                }
                else if(tripleCounter == 2 && numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                }
                else if(uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                    System.out.println("uppercaseCounter = " + uppercaseCounter);
                }
                else if(lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                    System.out.println("lowercaseCounter = " + lowercaseCounter);
                }
                else if(numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                    System.out.println("numCounter = " + numCounter);
                }

                if(tripleCounter < 3)
                    tripleCounter++;
                else{
                    tripleCounter = (int)(Math.random() * ((3 - 0) + 0));
                }
            }
        }
        else if(requirements.equals("UL")){
            for(int i = 0; i < len; i++){
                if(doubleCounter%2 == 0 && uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                }
                else if(doubleCounter%2 == 1 && lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                }
                else if(uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                }
                else if(lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                }
                doubleCounter++;
            }
        }
        else if(requirements.equals("UD")){
            for(int i = 0; i < len; i++){
                System.out.println("length =" + len);
                if(doubleCounter%2 == 0 && numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                }
                else if(doubleCounter%2 == 1 && uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                }
                else if(numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                }
                else if(uppercaseCounter < uppercase.length){
                    password += uppercase[uppercaseCounter];
                    uppercaseCounter++;
                }
                doubleCounter++;
            }
        }
        else if(requirements.equals("LD")){
            for(int i = 0; i < len; i++){
                if(doubleCounter%2 == 0 && numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                }
                else if(doubleCounter%2 == 1 && lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                }
                else if(numCounter < num.length){
                    password += num[numCounter];
                    numCounter++;
                }
                else if(lowercaseCounter < lowercase.length){
                    password += lowercase[lowercaseCounter];
                    lowercaseCounter++;
                }
                doubleCounter++;
            }
        }
        else if(requirements.equals("U")){
            for(int i = 0; i < len; i++){
                password += uppercase[i];
            }

        }
        else if(requirements.equals("L")){
            for(int i = 0; i < len; i++){
                password += lowercase[i];
            }
        }
        else if(requirements.equals("D")){
            for(int i = 0; i < len; i++){
                password += num[i];
            }
        }

        System.out.println("password is: " + password);

        return password;
    }

    public static String checkReq(boolean U, boolean L, boolean D){

        if(U && L && D)
            return "ULD";
        else if(U && L && !D)
            return "UL";
        else if(U && !L && D)
            return "UD";
        else if(!U && L && D)
            return "LD";
        else if(U && !L && !D)
            return "U";
        else if(!U && L && !D)
            return "L";
        else if(!U && !L && D)
            return "D";

        return null;
    }

    public static char[] fillArrayNum(char[] num){
        int numberCounter = 0;
        for(int i = 0; i < num.length; i++){
            String holder = ""+i;
            num[i] = holder.charAt(0);
        }
        return num;
    }


    public static char[] fillArrayUp(char[] upper){
        int uppercaseCounter = 0;
        int uppercase = 65;
        for(int i = 0; i < upper.length; i++){
            upper[i] = (char)uppercase;
            uppercase++;
        }
        return upper;
    }
    public static char[] fillArrayLow(char[] lower){
        int lowercaseCounter = 0;
        int lowercase = 97;
        for(int i = 0; i < lower.length; i++){
            lower[i] = (char)lowercase;
            lowercase++;
        }
        return lower;
    }

}