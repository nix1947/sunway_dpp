
import java.rmi.server.UnicastRemoteObject; 
import java.rmi.registry.LocateRegistry; 
import java.rmi.registry.Registry;


public class Server {
	public static void main(String [] args) {

		try {


		// Explicitly set the hostname property for the server. 
		System.setProperty("java.rmi.server.hostname", "127.0.0.1");

		System.out.println("Server is booting up..");
		// Create an objects from ProductImpl class 

		ProductImpl p1 = new ProductImpl("Laptop", "new leveovo laptop", 240000.01);
		ProductImpl p2 = new ProductImpl("Mobile", "New MI redmi mobile", 14000.01);
		ProductImpl p3 = new ProductImpl("Bag", "New bag", 212.01);
		ProductImpl p4 = new ProductImpl("Charger", "New laptop charger", 24.01);

		// Export those created Objects using UnicastRemoteObject class 
		//  Exported objects are called stub 

		Product stub1 = (Product) UnicastRemoteObject.exportObject(p1, 0);
		Product stub2 = (Product) UnicastRemoteObject.exportObject(p2, 0);
		Product stub3 = (Product) UnicastRemoteObject.exportObject(p3, 0);
		Product stub4 = (Product) UnicastRemoteObject.exportObject(p4, 0);

		// Locate the registry that is running on 127.0.0.1 // 192.168.1.1 and on specific port
		// We will run our RMIREGISTRY on port 9300
		// So locate the registry from 127.0.0.1 using port 9300
		Registry registry = LocateRegistry.getRegistry("127.0.0.1", 9400);

		// Register all the exported class in the Rmiregistery so that client can 
		// Using registry.bind method to register all the objects to RMIRegistry.
		registry.bind("l", stub1);
		registry.bind("m", stub1);
		registry.bind("b", stub1);
		registry.bind("c", stub1);


		// lookup in the rmiregistry and call the remote objects method. 
		// Which complete JAVA RMI. 


		} catch(Exception e) {
			System.out.println("Some server error " + e.toString());
		}
	

	}

}
