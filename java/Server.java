import java.io.*;
import java.net.*;
public class Server{
 
   public static void main (String args[]){
         
        try{

               ServerSocket ss = new   ServerSocket(5000);
              
               System.out.println("server is connected to client responsie");
               
               Socket  s = ss.accept();
 
               System.out.println("client connected");
          
              BufferedReader in = new BufferedReader(new InputStreamReader(s.getInputStream()));
           
              PrintWriter out = new PrintWriter(s.getOutputStream(), true);

              String message;
            while ((message = in.readLine()) != null) {
                System.out.println("Received: " + message);
                out.println("Echo: " + message);
            }

            s.close();
            ss.close();
        } catch (IOException e) {
            e.printStackTrace();
        }

           }
   
   
    

}