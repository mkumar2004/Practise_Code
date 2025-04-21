import java.io.*;
import java.net.*;

public class Client {
    public static void main(String[] args) {
        try {
            Socket socket = new Socket("localhost", 5000);
            BufferedReader userInput = new BufferedReader(new InputStreamReader(System.in));
            PrintWriter out = new PrintWriter(socket.getOutputStream(), true);
            BufferedReader in = new BufferedReader(new InputStreamReader(socket.getInputStream()));

            System.out.println("Connected to server. Type messages:");

            String message;
            while ((message = userInput.readLine()) != null) {
                out.println(message);
                System.out.println(in.readLine());
            }

            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
