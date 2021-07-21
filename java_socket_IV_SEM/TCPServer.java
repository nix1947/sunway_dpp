import java.io.*; 
import java.net.*;

public class TCPServer {
	public static void main(String [] args) throws Exception {
	
	// To store the data sent from the client
	String clientSentence;

	// To store the data after converting into uppercase by the server.
	String capitalizedSentence; 

	// Create  a server socket
	ServerSocket welcomeSocket = new ServerSocket(6789);

	
	// Server need to continiously listen the client request so use while loop 
	while(true) {
		
		// Accept the client request 
		Socket connectionSocket = welcomeSocket.accept(); 

		// Read the stream of data send by the client and store in the memory. 
		BufferedReader fromClient = new BufferedReader(new InputStreamReader(connectionSocket.getInputStream()));

		// Finally access the client data from buffered memory and process it.
		clientSentence = fromClient.readLine();
		
		// Process the client sentence i.e convert to uppercase 
	  capitalizedSentence = clientSentence.toUpperCase() + '\n';
	
		// After processing the data, resend the data to the client. 
		// To send the data from server to the client we need to create an OutPutDataStream 
		DataOutputStream toClient = new DataOutputStream(connectionSocket.getOutputStream());
		
		// Send the processed data to client.
		toClient.writeBytes(capitalizedSentence + "\n");

	}
	}
}
