/***************************************************************************************
 *
 *    Codewars question Created By:
 *    Author: dinglemouse
 *    Title: Password Maker
 *    Availability: https://www.codewars.com/kata/password-maker-1/java
 *
 ***************************************************************************************/

import org.junit.Test;

public class PasswordTests {

    @Test
    public void testFlags_x_x_D() {
        boolean u=false,l=false,d=true;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_x_L_x() {
        boolean u=false,l=true,d=false;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_x_L_D() {
        boolean u=false,l=true,d=true;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_U_x_x() {
        boolean u=true,l=false,d=false;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_U_x_D() {
        boolean u=true,l=false,d=true;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_U_L_x() {
        boolean u=true,l=true,d=false;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testFlags_U_L_D() {
        boolean u=true,l=true,d=true;
        String pw = Password.makePassword(5,u,l,d);
        Util.validate(pw,5,u,l,d);
    }

    @Test
    public void testLength() {
        boolean u=true,l=true,d=true;
        String pw;
        pw=Password.makePassword(5,u,l,d); Util.validate(pw,5,u,l,d);
        pw=Password.makePassword(10,u,l,d); Util.validate(pw,10,u,l,d);
        pw=Password.makePassword(15,u,l,d); Util.validate(pw,15,u,l,d);
    }

    @Test
    public void testEdge() {
        int len;
        boolean u,l,d;
        String pw;

        // length 1
        len = 1;
        u=true;l=false;d=false;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=false;l=true;d=false;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=false;l=false;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 2
        len = 2;
        u=true;l=true;d=false;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=true;l=false;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=false;l=true;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=true;l=false;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 3
        len = 3;
        u=true;l=true;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 10
        len = 10;
        u=false;l=false;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 26
        len = 26;
        u=true;l=false;d=false;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=false;l=true;d=false;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 36
        len = 36;
        u=true;l=false;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
        u=false;l=true;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 52
        len = 52;
        u=true;l=true;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);

        // length 62
        len = 62;
        u=true;l=true;d=true;  pw=Password.makePassword(len,u,l,d); Util.validate(pw,len,u,l,d);
    }

    @Test
    public void random() {
        for (int r = 0; r < 100; r++) {
            final boolean uFlag = Math.random() > 0.5;
            final boolean lFlag = Math.random() > 0.5;
            final boolean dFlag = Math.random() > 0.5;

            if (!uFlag && !lFlag && !dFlag) continue;

            int len = 0;
            if (uFlag) len += (int)(Math.random() * 26) + 1;
            if (lFlag) len += (int)(Math.random() * 26) + 1;
            if (dFlag) len += (int)(Math.random() * 10) + 1;

            final String pw = Password.makePassword(len,uFlag,lFlag,dFlag);
            Util.validate(pw,len,uFlag,lFlag,dFlag);
        }
    }

}