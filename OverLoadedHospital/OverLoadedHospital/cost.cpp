double cost(double days, double rate, double serv, double med, double charges)
{
	charges = (rate * days) + serv + med;
	return charges;
}

double cost(double serv, double med, double charges)
{

	return charges = serv + med;
}