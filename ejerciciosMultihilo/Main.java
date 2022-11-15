package ejerciciosMultihilo;



public class Main {

	public static void main(String[] args) {
		
			Hilo h1 = new Hilo(1);
			Hilo h2 = new Hilo(2);
			Thread h11 = new Thread(h1);
			Thread h22 = new Thread(h2);

			
			h11.start();
			h22.start();

	}

}
