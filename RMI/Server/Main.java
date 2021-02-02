



// Basic imports
import java.rmi.registry.Registry;
import java.rmi.registry.LocateRegistry;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class Main {
	public static void main(String[] args) {
	// 1. Create an object and wrap inside RMI security Manager. 
	// 2. Register the object to RMI registry
	// 3.  Start the Rmi Server  
  // 4. Listen to the particular port for client request. 

	try {
		
		System.out.println("Server is booting now");
		System.out.println("Create product object");

		// Now create an product object which will be 
		// ultimately access by client.

		ProductImpl p1 = new ProductImpl("Laptop");


	// Export

	 Product stub = (Product) UnicastRemoteObject.exportObject(p1, 0);

  // Bind the remote object's stub in the registry
  Registry registry = LocateRegistry.getRegistry();

  registry.bind("Laptop", stub);

  System.err.println("Server ready");

	} catch(Exception m) {
			System.out.println("Some server error occoured" + m); 
		}
}
}




