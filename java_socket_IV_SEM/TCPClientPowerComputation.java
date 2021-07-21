
// for IO library
// InputStreamReader, DataOutputStream
import java.io.*;

// For socket library
// Socket and ServerSocket
import java.net.*; 


public class TCPClientPowerComputation {
	public static void main(String [] args) {


	String host = "127.0.0.1";
	Integer port = 5000;

	// Create a variable to store the user input data from command line.
	Integer userInput; 


	userInput = Integer.parseInt(args[0]);

	// Create a client socket 
	Socket clientSocket = new Socket(host, port);


	// Create DataOutputStream 


	// Send data to the server


	// Create BufferedReader to read the data from the sever


	// Print the computed value in the screen.


	}



}
