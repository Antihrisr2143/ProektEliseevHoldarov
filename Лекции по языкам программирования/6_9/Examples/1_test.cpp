void Proc(double** p)
{
	*p= new double;
	**p=4;
}

double* Func()
{
	double* p=new double;
	*p=4;
	return p;
	
}

int main()
{
	double* p = NULL;
	
	Proc(&p);
	cout<<p;
	delete p;
	p = NULL;
	
	p = Func();	
	cout<<p;
	delete p;
	p = NULL;
}