import java.rmi.RemoteException; 

public class ProductImpl implements Product {

    private String name; 
    private String description; 
    private double price;


    // Create parameterized constructor
    public ProductImpl(String newName, String newDescription, double newPrice) {
        this.name = newName; 
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

