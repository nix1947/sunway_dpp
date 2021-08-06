// package Server;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject; 

public class Server {
	public static void main(String [] args) {
		try {

			System.out.println("Server is booting....");
			System.setProperty("java.rmi.server.hostname","127.0.0.1"); 

			// We create objects from productImpl.java class and share them using

		ProductImpl p1 = new ProductImpl("Laptop", "Lenovo laptop", 800000.0);
		ProductImpl p2 = new ProductImpl("Mobile", "MI 9 mobile", 24000.0);
		ProductImpl p3 = new ProductImpl("Bag", "Branded bag", 800.0);
		ProductImpl p4 = new ProductImpl("Charger", "MI Charger", 230.0);

		// Export all p1, p2, p3 and p4 object before registered in Registry. 
		Product stub1 = (Product) UnicastRemoteObject.exportObject(p1, 0);
		Product stub2 = (Product) UnicastRemoteObject.exportObject(p2, 0);
		Product stub3 = (Product) UnicastRemoteObject.exportObject(p3, 0);
		Product stub4 = (Product) UnicastRemoteObject.exportObject(p4, 0);


		// Get the RMI registry.
		Registry registry = LocateRegistry.getRegistry("127.0.0.1", 9000);

		// Registered the exported object in rmi registry so that client can
		// lookup in this registry and call the object methods.
		registry.bind("laptop", stub1);
		registry.bind("ram", stub2);
		registry.bind("bag", stub3);
		registry.bind("charger", stub4);

		} catch (Exception e) {
			System.out.println("Server error" + e);

		}

	}
}