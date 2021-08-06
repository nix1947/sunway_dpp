
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Client {
   public static void main(String[] args) {
      try {

         Registry registry = LocateRegistry.getRegistry("127.0.0.1", 9000);
         // lookup the laptop object and assign in laptop variable
         Product laptop = (Product) registry.lookup("laptop");
         String laptopName = laptop.getName();
         String laptopDescription = laptop.getDescription();
         double price = laptop.getPrice();
         System.out.println("Name:" + laptopName);
         System.out.println("Description: " + laptopDescription);
         System.out.println("Price: " + price);
      } catch (Exception e) {
         System.out.println("Exception in client side" + e);
      }
   }
}
