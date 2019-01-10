#include <iostream>
#include <math.h>  

int Isprime(int n)
{
    int i = 3;
    
    int max = sqrt(n);
    
    if(n % 2 ==0){
        return 0;
    }
    
    while (i <=  max + 1){
        if(n % i ==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int get_next_prime(int current_prime)
{
	int next_prime = current_prime + 1;
	while(1)
	{
		if(Isprime(next_prime) == 1)
		{
			return next_prime;
		}
		else
		{
			next_prime++;
		}
	}
}

int main()
{
	int current_prime = 2;
	char userdecision;
	while (1)
	{
		std::cout << "would you like to know the next prime ?" << std::endl << "Y/N" <<  std::endl ;
		std::cin >> userdecision;
		if (userdecision == 'Y'|| userdecision == 'y')
		{
			std::cout << current_prime << std::endl;
			current_prime  = get_next_prime(current_prime);
		}
		else
		{
		    if(userdecision == 'N' ||userdecision ==  'n')
		    {
			    break;
		    }
		    else
		    {   
		        std::cout << "that isn't an option." << std::endl;
		    }
		}
	}
	return 0;
}	
