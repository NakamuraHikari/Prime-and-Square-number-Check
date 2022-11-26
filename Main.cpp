//Prime check
long check(int n)
{
    bool check= false;
	if(n<2)
	check= false;
	for (int i=2; i*i<=n; i++)
    {
        if(n%i==0)
		{
			check= false;
            	break;
		}
	  else
		check= true;
    }
    return check;
}

//Square check
bool check(int t)
{
    if (sqrt(t)==trunc(sqrt(t)))
        return true;
    return false;
}
