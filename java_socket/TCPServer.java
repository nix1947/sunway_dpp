import java.io.*;
import java.net.*;

public class TCPServer {

	public static void main(String [] args) throws Exception {

    // To store the data received from the client
		String clientSentence; 
		
		// To store the processed data by the server, that need to be sent to the client
		String capitalizedSentence; 

		// Create a server socket using Socket class that opens the port 6789
		ServerSocket welcomeSocket = new ServerSocket(6789);

		System.out.println("Server is listening at port: " + 6789);
		// Create a while loop which continiously listen the client requests.
		while(true) {

		// Create a connection socket for every client 
		Socket connectionSocket = welcomeSocket.accept();

		// Retrive the data from the connectionSocket sent by the client using InputStream and save it to the BufferedReader

	BufferedReader fromClient = new BufferedReader(new InputStreamReader(connectionSocket.getInputStream()));

	// Retrive the data from the BufferedReader and store the clientSentence variable. use ReadLine.
	clientSentence = fromClient.readLine(); 

	// Now convert the received client data to uppercase. 
	// This is the processing.
	capitalizedSentence = clientSentence.toUpperCase() + "\n";

	// Now it's time to resend the processed data to the client. 
	// Create the data outputstream and send the data to the client using same connectionSocket variable. 

		DataOutputStream toClient = new DataOutputStream(connectionSocket.getOutputStream());
		
		// Write data to the output stream.
		toClient.writeBytes(capitalizedSentence);

		}

 	}
}
