
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Main {

	public static void main(String [] args) {

					// Access the objects from the server JVM using nameLookup methods provided by RMI

					  try {
            	Registry registry = LocateRegistry.getRegistry("127.0.0.1");

            	Product laptop = (Product) registry.lookup("Laptop");

            	String response = laptop.getDescription();

            	System.out.println("response: " + response);

        } catch (Exception e) {
            System.err.println("Client exception: " + e.toString());
            e.printStackTrace();
        }


					// We can directly call the getDescription method available in mobile, laptop, mask and Bulbs objects and 
					// get the data from that method easily to our client. 
				
					// We can access all the methods available in 
					// Product interface


			}

	}

