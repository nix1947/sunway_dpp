import java.io.*;
import java.net.*;

public class TCPClient {
	public static void main(String [] args) throws Exception {
	

	String sentence;
  String serverIPAddress = "127.0.0.1";
	Integer serverPort = 6789;

	/*.............Data Sending Part......................*/

	// To hold the data received from server.
	String modifiedSentence; 

	// Read a stream of data from keyboard using BufferReader and InputStreamReader.
	 BufferedReader inFromUser = new BufferedReader(new InputStreamReader(System.in));

	// Create a client socket to connect with server. 
	Socket clientSocket = new Socket(serverIPAddress, serverPort);
 
	//Prepare the Data Outputstream to send the data through the created clientSocket.
	DataOutputStream outToServer = new DataOutputStream(clientSocket.getOutputStream());

	// Send the data to the server for processing.
		sentence = inFromUser.readLine();
		outToServer.writeBytes(sentence + '\n');	


	 /*..............Data Receiving Part from server.......................*/
	 
	 // Create an Input Stream Reader to read the data from server
	
	 InputStreamReader ins = new InputStreamReader(clientSocket.getInputStream());
	 
	 // Create a buffer memory to hold the data from InputStreamReader. 
   BufferedReader inFromServer = new BufferedReader(ins);

	 // Transfer the data from buffer to the variable modifiedSentence
		modifiedSentence = inFromServer.readLine();

	// Now you have received the data from server you can print or save the data in db. 
	System.out.println("The data received from server is " + modifiedSentence);

	 
 /*..............Close the socket ..................*/
	
		clientSocket.close();

   }
}
