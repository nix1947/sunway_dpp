
public class ProductImpl  
implements Product {

 String name; 

 public ProductImpl(String n)  {
	this.name = n; 
} 

	public String getDescription()  {
				return "The name of the product is " + this.name; 

    }


}
