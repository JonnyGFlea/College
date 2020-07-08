/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: g964
 *    Title: Rainfall
 *    Availability: https://www.codewars.com/kata/56a32dd6e4f4748cc3000006
 *
 ***************************************************************************************/

/***************************************************************************************
 * data and data1 are two strings with rainfall records of a few cities for months from January to December. The records of towns are separated by \n. The name of each town is followed by :.
 *
 * data and towns can be seen in "Your Test Cases:".
 *
 * Task:
 * function: mean(town, strng) should return the average of rainfall for the city town and the strng data or data1 (In R and Julia this function is called avg).
 * function: variance(town, strng) should return the variance of rainfall for the city town and the strng data or data1.
 * Examples:
 * mean("London", data), 51.19(9999999999996)
 * variance("London", data), 57.42(833333333374)
 * Notes:
 * if functions mean or variance have as parameter town a city which has no records return -1 or -1.0 (depending on the language)
 * Don't truncate or round: the tests will pass if abs(your_result - test_result) <= 1e-2 or abs((your_result - test_result) / test_result) <= 1e-6 depending on the language.
 * Shell tests only variance
 * A ref: http://www.mathsisfun.com/data/standard-deviation.html
 * data and data1 (can be named d0 and d1 depending on the language; see "Sample Tests:") are adapted from: http://www.worldclimate.com
 *
 ***************************************************************************************/

import java.util.stream.*;

public class Rainfall {
    public static double mean(String town, String strng) {
        if (strng.contains(town + ":") == false) {
            return -1.0;
        }
        return (DoubleStream.of(makeArr(town, strng)).sum()) / 12.0;
    }

    public static double variance(String town, String strng) {
        if (strng.contains(town + ":") == false) {
            return -1.0;
        }
        double[] doubValArr = makeArr(town, strng), dataPoints = new double[12];
        double mean = (DoubleStream.of(doubValArr).sum()) / 12.0;
        for (int i = 0; i < 12; i++) {
            dataPoints[i] = doubValArr[i] - mean;
            dataPoints[i] = dataPoints[i] * dataPoints[i];
        }
        return (DoubleStream.of(dataPoints).sum()) / 12.0;
    }

    public static double[] makeArr(String town, String strng) {
        double[] doubleArr = new double[12];
        int i = 0;
        strng = strng.substring(strng.indexOf(town));
        if (strng.contains("\n")) {
            strng = strng.substring(0, strng.indexOf("\n"));
        }
        while (i != 11) {
            doubleArr[i] = Double.parseDouble(strng.substring(strng.indexOf(" ") + 1, strng.indexOf(",")));
            strng = strng.substring(strng.indexOf(",") + 1);
            i++;
        }
        doubleArr[i++] = Double.parseDouble(strng.substring(4));
        return doubleArr;
    }
}