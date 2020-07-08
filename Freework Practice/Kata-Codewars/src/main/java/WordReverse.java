public class WordReverse {

    public String spinWords(String sentence) {
        //TODO: Code stuff here
        String concatenatedString = "";
        StringBuilder wordToReverse = new StringBuilder();
        String[] sentenceStringArray = sentence.split("\\s+");
        for (int i = 0; i < sentenceStringArray.length; i++) {
            if(sentenceStringArray[i].length() > 4){
                wordToReverse.replace(0,wordToReverse.length(), sentenceStringArray[i]);
                wordToReverse.reverse();
                concatenatedString = concatenatedString + wordToReverse.toString();
            }
            else{
                concatenatedString = concatenatedString + sentenceStringArray[i];
            }
            if (sentenceStringArray.length > 1 && i != sentenceStringArray.length - 1){
                concatenatedString = concatenatedString + " ";
            }
        }
        return concatenatedString;
    }
}