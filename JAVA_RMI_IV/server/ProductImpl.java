import java.rmi.*;
import java.rmi.server.*;


public class ProductImpl  implements Product {
    // Define attributes and implement all the methods defined in product interface.

    // Define attributes.
    public String name;
    public String description;
    public double price;

    // Parametrized constructor.
    public ProductImpl(String newName, String newDescription, double newPrice) throws RemoteException {
        
        this.name  = newName;
        this.description = newDescription;
        this.price = newPrice;

    }

    public String getName() throws RemoteException {
        return this.name;


    }
    public String getDescription() throws RemoteException {
        return this.description;

    }

    public double getPrice() throws RemoteException {
        return this.price;

    }
}

