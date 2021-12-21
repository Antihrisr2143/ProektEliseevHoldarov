int main()
{
	double* p;
	
	int n;
	cin>>n;
	
	p = new double[n];
	
	*p = 12.3;
	p[0] = 12.3;
	
	double* p1 = p+1;
	*p1 = 45.34;
	p[1] = 45.34;
	
	*(p+2) = 76.4;
	p[2] = 76.4;
	
	for (int i=0; i<n; i++)
	{
		p[i] = 2*i;
		*(p+i) = 2*i;
	}
	
	delete[] p;
}