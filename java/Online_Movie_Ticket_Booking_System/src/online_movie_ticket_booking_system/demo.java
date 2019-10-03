/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package online_movie_ticket_booking_system;

import java.text.SimpleDateFormat;  
import java.util.Date;  
public class demo {  
public static void main(String[] args) {  
    SimpleDateFormat formatter = new SimpleDateFormat("dd");
    SimpleDateFormat formatter2 = new SimpleDateFormat("YY");
    Date date = new Date();  
    System.out.println(formatter.format(date));  
    System.out.println(formatter2.format(date));  
}  
}