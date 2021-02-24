#include <iostream>

template <typename T>
void swap(T& first, T& second)
{
	T tmp = first;
	
	first = second;
	second = tmp;
}

template <typename T>
T min(T first, T second)
{
	if (second <= first)
		return second;
	
	return first;
}

template <typename T>
T max(T first, T second)
{
	if (second >= first)
		return second;
	
	return first;
}

int main()
{
	int ia = 888;
	int ib = 777;
	float fa = 888.1;
	float fb = 777.1;
	double da = 888.1;
	double db = 777.1;
	std::string sa = "888s";
	std::string sb = "777s";
	
	std::cout << ia << " " << ib << std::endl;
	std::cout << fa << " " << fb << std::endl;
	std::cout << da << " " << db << std::endl;
	std::cout << sa << " " << sb << std::endl;
	std::cout << std::endl;
	
	swap(ia, ib);
	swap(fa, fb);
	swap(da, db);
	swap(sa, sb);
	
	std::cout << ia << " " << ib << std::endl;
	std::cout << fa << " " << fb << std::endl;
	std::cout << da << " " << db << std::endl;
	std::cout << sa << " " << sb << std::endl;
	std::cout << std::endl;
	
	std::cout << min(ia, ib) << std::endl;
	std::cout << min(fa, fb) << std::endl;
	std::cout << min(da, db) << std::endl;
	std::cout << ::min(sa, sb) << std::endl;
	std::cout << std::endl;
	
	std::cout << max(ia, ib) << std::endl;
	std::cout << max(fa, fb) << std::endl;
	std::cout << max(da, db) << std::endl;
	std::cout << ::max(sa, sb) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	
	//subject main
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}
