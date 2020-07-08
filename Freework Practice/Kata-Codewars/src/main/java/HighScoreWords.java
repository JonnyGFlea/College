public class HighScoreWords {
    public static String high(String s) {
        String Alphabet = "abcdefghijklmnopqrstuvwxyz";
        int scoreOne = 0, scoreTwo = 0, index = 0;
        String[] stringArray = s.split("\\s+");

        for (int i = 0; i < stringArray.length; i++) {
            char[] wordArray = stringArray[i].toCharArray();
            for (int j = 0; j < wordArray.length; j++) {
                scoreTwo += Alphabet.indexOf(wordArray[j])+1;
            }
            if(scoreTwo > scoreOne){
                index = i;
                scoreOne = scoreTwo;
            }
            scoreTwo = 0;
        }
        return stringArray[index];
    }
}
