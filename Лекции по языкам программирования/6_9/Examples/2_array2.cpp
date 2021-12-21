int main()
{
	int *a, *b, *c, n=3;
	a = new int[n];
	b = new int[n];
	c = new int[n];
	
	for (int i=0; i<n; i++)
	{
		a[i]=i+2;
		b[i]=2*i+2;
		c[i]=a[i]+b[i];
		cout<<c[i]<<" ";
	}
	delete[] a;
	delete[] b;
	delete[] c;
}