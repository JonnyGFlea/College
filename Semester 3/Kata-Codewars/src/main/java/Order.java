public class Order {
    public static String order(String sentence) {
        int count = 1;
        String[] wordsOutOfOrder = sentence.split("\\s+");
        String[] wordsInOrder = new String[wordsOutOfOrder.length];
        String returnThis = "";

        if(sentence.length() == 0){
            return "";
        }

        for(int i = 0; i < wordsOutOfOrder.length; i++){
            if(wordsOutOfOrder[i].contains(count+"")){
                wordsInOrder[count-1] = wordsOutOfOrder[i];
                i = -1;
                count++;
            }
        }
        for (int i = 0; i < wordsInOrder.length; i++) {
            returnThis += wordsInOrder[i];
            if(i != wordsInOrder.length-1){
                returnThis += " ";
            }
        }
        return returnThis;
    }
}