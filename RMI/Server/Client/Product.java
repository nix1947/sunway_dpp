import java.rmi.*; 


public interface Product extends Remote {
	
	public String getDescription() throws RemoteException; 


}
