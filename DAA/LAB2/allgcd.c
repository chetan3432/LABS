//Middle School
unsigned int midgcd(int m, int n) {
	printf("Calculating the GCD of the numbers using middle school method...\n");

	int opcount = 0;
	unsigned int gcd = 1;

	int i=2;
	while(m != 1 && n != 1) {
		int x = m%i;
		int y = n%i;

		if(x == 0) {
			m /= i;
		}
		if(y == 0) {
			n /= i;
		}

		if(x == 0 && y == 0) {
			gcd *= i;
		}
		else if(x != 0 && y != 0) {
			i++;
		}
		opcount++;
	}

	printf("Operation Count: %d\n", opcount);

	return gcd;
}

//Euclid
unsigned int eucgcd(unsigned int m, unsigned int n) {
	printf("Calculating the GCD of the numbers using Euclid's algorithm...\n");

	unsigned int r;
	int opcount = 0;

	while(n != 0) {
		r = m % n;
		m = n;
		n = r;
		opcount++;
	}

	printf("Operation Count: %d\n", opcount);

	return m;
}

// Consecutive Integer
unsigned int consgcd(unsigned int m, unsigned int n) {
	printf("Calculating the GCD of the numbers using consecutive integer checking method...\n");

	unsigned int t = m < n ? m : n;
	int opcount = 0;

	while(t > 1) {
		if(m%t == 0 && n%t == 0) {
			break;
		}

		t--;
		opcount++;
	}

	printf("Operation Count: %d\n", opcount);

	return t;
}