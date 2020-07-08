public class TimeFormatter {

    public static String formatDuration(int seconds) {
        int sec = 0, min = 0, hour = 0, day = 0, year = 0, holder;
        int minCompare = 60, hourCompare = 3600, dayCompare = 86400, yearCompare = 86400*365;
        String totalTime = "now";

        if(seconds != 0){
            totalTime = "";
            if(seconds >= yearCompare){
                year = seconds/yearCompare;
                seconds -= year*yearCompare;
                totalTime = year + " year";
                if(year > 1){
                    totalTime += "s";
                }
            }
            if(seconds != 0 && year!=0){
                totalTime+=", ";
            }
            if(seconds >= dayCompare){
                day = seconds/dayCompare;
                seconds -= day*dayCompare;
                if(day > 1){
                    totalTime += day + " days";
                }
                else{
                    totalTime += day + " day";
                }
            }
            if(seconds != 0 && day!=0){
                totalTime+=", ";
            }
            if(seconds >= hourCompare){
                hour = seconds/hourCompare;
                seconds -= hour*hourCompare;
                if(hour > 1){
                    totalTime += hour + " hours";
                }
                else{
                    totalTime += hour + " hour";
                }
            }
            if(seconds != 0 && hour!=0){
                totalTime+=", ";
            }
            if(seconds >= minCompare){
                min = seconds/minCompare;
                seconds-= min*minCompare;
                if(min > 1){
                    totalTime += min + " minutes";
                }
                else{
                    totalTime += min + " minute";
                }
            }

            sec = seconds;
            if((year > 0 || day > 0|| hour > 0 || min > 0) && sec != 0){
                totalTime+=", ";
            }

            if(sec > 1){
                totalTime += sec + " seconds";
            }
            else if (sec == 1){
                totalTime += sec + " second";
            }
            if(totalTime.contains(",")){
                totalTime = totalTime.substring(0,totalTime.lastIndexOf(","))
                        + " and"
                        + totalTime.substring(totalTime.lastIndexOf(",")+1, totalTime.length());
            }
        }
        return totalTime;
    }
}