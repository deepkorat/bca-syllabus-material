/* Declare an abstract class Vehicle with an abstract method named numWheels(
).provide subclasses Car and Truck that each implements this method. Create 
instance of these subclasses and demonstrate the use of this method
*/

abstract class Vehicle{
	abstract void numWheels();
}

class car extends Vehicle{
	void numWheels()
	{
		System.out.println("\n Car class with four wheel");
	}
}

class truck extends Vehicle{
	void numWheels()
	{
		System.out.println("\n Truck class with six wheel");
	}
}

class Pro7{
	public static void main(String [] args)
    {
    	car c1 = new car();
    	c1.numWheels();
    	truck t1 = new truck();
    	t1.numWheels();
    		
    }
    
}