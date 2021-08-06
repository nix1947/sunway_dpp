
import java.rmi.registry.LocateRegistry; 
import java.rmi.registry.Registry; 

public class Client {
	public static void main(String [] args) {
		try {

			// Locate the remote registry.
		Registry remoteRegistry = LocateRegistry.getRegistry("127.0.0.1", 9400);

		// Do lookup and  reference the remote objects inside the remote RMI registry
		Product laptop = (Product) remoteRegistry.lookup("l");
		Product mobile = (Product) remoteRegistry.lookup("m");
		Product bag = (Product) remoteRegistry.lookup("b");
		Product charger = (Product) remoteRegistry.lookup("c");

		// Call their methods, retrive and store the data in DB or print to the screen.
		// Or display the end user.
		System.out.println("The name of the remote laptop is " + laptop.getName());
		System.out.println("The description of the remote laptop is " + laptop.getDescription());
		System.out.println("The price of the remote laptop is " + laptop.getPrice());

		} catch(Exception e) {
			System.out.println("Client error occoured " + e.toString());
		}


	}
}
