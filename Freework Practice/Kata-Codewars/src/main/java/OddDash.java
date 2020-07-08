public class OddDash {
    public static String dashatize(int num) {
        String numString = String.valueOf(num), stringToReturn = "";
        String strNew = numString.replace("-", "");
        char[] charArr = strNew.toCharArray();
        for (int i = 0; i < charArr.length; i++) {
            int val = Character.getNumericValue(charArr[i]);
            if(val%2 == 1){
                if(i == 0){
                    if(charArr.length >= 2){
                        stringToReturn += charArr[i] + "-";
                    }
                    else{
                        stringToReturn += charArr[i];
                    }
                }
                else if(i == charArr.length-1){
                    if(stringToReturn.endsWith("-")){
                        stringToReturn += charArr[i];
                    }
                    else{
                        stringToReturn += "-" + charArr[i];
                    }
                }
                else{
                    if(stringToReturn.endsWith("-")){
                        stringToReturn += charArr[i] + "-";
                    }
                    else{
                        stringToReturn += "-" + charArr[i] + "-";
                    }
                }
            }
            else{

                stringToReturn += charArr[i];
            }
        }
        return stringToReturn;
    }
}
