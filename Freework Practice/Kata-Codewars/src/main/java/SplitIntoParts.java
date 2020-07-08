public class SplitIntoParts {
    public static String splitInParts(String s, int partLength) {
        System.out.print(s + " and " + partLength);
        if(s.length() <= partLength){
            return s;
        }

        // Creating array of string length
        char[] ch = new char[s.length()];

        // Copy character by character into array
        for (int i = 0; i < s.length(); i++) {
            ch[i] = s.charAt(i);
        }
        int counter = 0;
        String returnMe = "";

        for (int i = 0; i < ch.length; i++) {
            if(counter%partLength == 0 && counter != 0){
                returnMe += " ";
            }
            returnMe += ch[i];
            counter++;
        }

        return returnMe;

    }
}