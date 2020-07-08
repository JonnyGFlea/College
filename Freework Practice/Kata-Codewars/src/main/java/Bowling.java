import javax.swing.filechooser.FileSystemView;
import java.util.Arrays;

public class Bowling
{
    public String bowlingPins(int[] bowlingPinsHit){
        String bowlingPins = "7 8 9 0\n 4 5 6 \n  2 3  \n   1   ", bowlingPinNumber;
        for (int i = bowlingPinsHit.length-1; i >= 0; i--) {
            bowlingPinNumber = String
                    .valueOf(bowlingPinsHit[i]);
            if(bowlingPinNumber.equals("10")){
                bowlingPinNumber = "0";
            }
            bowlingPins = bowlingPins
                    .replace(bowlingPinNumber, " ");
        }
        bowlingPins = bowlingPins
                .replaceAll("\\d", "I");
        return bowlingPins;
    }
}
