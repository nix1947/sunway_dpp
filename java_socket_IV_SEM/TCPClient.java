import java.net.*; 
import java.io.*; 

public class TCPClient {
	public static void main(String [] args) throws Exception {

	String serverAddress = "127.0.0.1";
	Integer serverPort = 6789;

	// Hold the user input data read from the keyboard.
	String sentence; 

	// To hold the received data from server
	String modifiedSentence; 

	// Read the data from keyboard continously. 
	BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));
  sentence = inFromUser.readLine();

	// Create a client socket 
	Socket clientSocket = new Socket(serverAddress, serverPort);


	// Using the client Send the data to the server. 
	// To send the data to the server we need to create the output stream. 
	DataOutputStream outToServer = new DataOutputStream(clientSocket.getOutputStream());
	outToServer.writeBytes(sentence + "\n");

	
	// Receive the data from the Server Socket. 
	// To receive the data from the server, similarly we need to create the inputStream
	InputStreamReader inputStream = new InputStreamReader(clientSocket.getInputStream());
	
	BufferedReader fromServer = new BufferedReader(inputStream);

	 // Now save the received data from the server which is in BufferedReader to 
	// modified sentence variable. 
  modifiedSentence =  fromServer.readLine();
	
	// Store the data received in modifiedsentence variable to dB or print it in 
	// the screen. 
	System.out.println("The data received from the server is " + modifiedSentence);

	// Now finally close the socket as our work is completed. 
	clientSocket.close();

	}
}
