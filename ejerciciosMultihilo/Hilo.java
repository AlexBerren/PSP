package ejerciciosMultihilo;

public class Hilo implements Runnable {

	private int parONo;

	public Hilo(int parONo) {
		this.parONo = parONo;
	}

	public void impar() {
		for (int i = 1; i <= 100; i++) {
			if (i % 2 != 0) {
				System.out.println(i);
			}
		}
	}

	public void par() {
		for (int i = 0; i <= 100; i++) {
			if (i % 2 == 0) {
				System.out.println(i);
			}
		}
	}

	@Override
	public void run() {
		 if (parONo==1) impar();
	        else if (parONo==2) par();

	}

}
