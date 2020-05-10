unsigned int my_strlen(const char * ptr)
{
	int zaehler = 0;
	for (int i = 0; i >= 0 && i < 20 && ptr != nullptr; i++)
	{
		if ((ptr[i] >= 'a' && ptr[i] <= 'z') || (ptr[i] >= 'A' && ptr[i] <= 'Z') || ptr[i] == ' ' || (ptr[i] >= '0' && ptr[i] <= '9'))
		{
			zaehler++;
		}
		else if (ptr = nullptr)
		{

		}
	}
	return zaehler;

}
int zeichenkette_suchen(const char* text,const char* zkette)
{
	if (my_strlen(text) == 0 || my_strlen(zkette) == 0)
	{
		return -1;
	}
	else
	{
		for (int i = 0, k = 0; i >= 0 && i < my_strlen(text); i++)
		{
			for (k = 0; k >= 0 && k < my_strlen(zkette); k++)
			{
				if(text[i+k] != zkette[k])
				{
					break;
				}
			}
			if (k == my_strlen(zkette))
			{
				return i;
			}
		}
		return -1;
	}
}