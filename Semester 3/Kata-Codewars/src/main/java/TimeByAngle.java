/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: Clocky Mc Clock-Face
 *    Availability: https://www.codewars.com/kata/clocky-mc-clock-face/
 *
 ***************************************************************************************/
/***************************************************************************************
 *
 * Story
 * Due to lack of maintenance the minute-hand has fallen off Town Hall clock face.
 *
 * And because the local council has lost most of our tax money to a Nigerian email scam there are no funds to fix the clock properly.
 *
 * Instead, they are asking for volunteer programmers to write some code that tell the time by only looking at the remaining hour-hand!
 *
 * What a bunch of cheapskates!
 *
 * Can you do it?
 *
 * Kata
 * Given the angle (in degrees) of the hour-hand, return the time in HH:MM format. Round down to the nearest minute.
 *
 * Examples
 * 12:00 = 0 degrees
 * 03:00 = 90 degrees
 * 06:00 = 180 degrees
 * 09:00 = 270 degrees
 * 12:00 = 360 degrees
 *
 ***************************************************************************************/

import java.math.BigDecimal;
import static java.math.RoundingMode.DOWN;
import static java.math.RoundingMode.UP;

public class TimeByAngle {
    public static String whatTimeIsIt(final double angle) {
        String returnTime = "";
        double angleHolder = angle;
        BigDecimal bigDecimalMinHolder = new BigDecimal(0.0);
        BigDecimal bigDecimalHourHolder = new BigDecimal(0.0);
        if(angle == 0 || angle == 360){
            bigDecimalHourHolder = bigDecimalHourHolder.add(BigDecimal.valueOf(12.0));
            returnTime = ConvertToReturnFormat(bigDecimalHourHolder);
            return  returnTime;
        }
        while(angleHolder != 0){
            angleHolder -= 0.5;
            bigDecimalMinHolder = bigDecimalMinHolder.add(BigDecimal.valueOf(0.01));
            if(bigDecimalMinHolder.compareTo(BigDecimal.valueOf(0.60)) == 0){
                bigDecimalHourHolder = bigDecimalHourHolder.add(BigDecimal.valueOf(1.00));
                bigDecimalMinHolder = BigDecimal.valueOf(0);
            }
        }

        if(angle < 30){
            bigDecimalHourHolder = bigDecimalHourHolder.add(BigDecimal.valueOf(12.0));
        }

        bigDecimalHourHolder = bigDecimalHourHolder.add(bigDecimalMinHolder);

        returnTime = ConvertToReturnFormat(bigDecimalHourHolder);
        return  returnTime;
    }

    private static String ConvertToReturnFormat(BigDecimal bigDecimalHourHolder) {
        String returnTime;
        if(bigDecimalHourHolder.intValue() < 10){
            returnTime = "0" + String.valueOf(bigDecimalHourHolder) + "0";
        }
        else{
            returnTime = String.valueOf(bigDecimalHourHolder) + "0";
        }

        returnTime = returnTime.substring(0,2) + ":" + returnTime.substring(returnTime.indexOf('.')+1, returnTime.indexOf('.')+3);
        return returnTime;
    }
}
