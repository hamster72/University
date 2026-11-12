class Complex
{
	private:
		double real,imag;
		
	public:
		Complex( double x , double y );
		
		void addTo( Complex other );
		void subtractFrom( Complex other );
		void multiplyBy( Complex other );
		void divideBy( Complex other );
		
		void print();
};
