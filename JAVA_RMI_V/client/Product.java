import java.rmi.RemoteException;    
import java.rmi.Remote;

public interface Product extends Remote {
    public String getName() throws RemoteException;
    public String getDescription() throws RemoteException;  
    public double getPrice() throws RemoteException; 
}
