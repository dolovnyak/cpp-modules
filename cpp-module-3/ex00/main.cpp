#include "FragTrap.hpp"

int main()
{
	std::srand(std::time(NULL));
	
	FragTrap* fragTrap = new FragTrap("Jhon");
	delete fragTrap;
	std::cout << std::endl;
	
	fragTrap = new FragTrap("Jhon");
	delete fragTrap;
	std::cout << std::endl;
	
	fragTrap = new FragTrap("Jhon");
	delete fragTrap;
	std::cout << std::endl;
	
	fragTrap = new FragTrap("Kate");
	std::cout << std::endl;
	fragTrap->meleeAttack("evilRobotMaria");
	fragTrap->meleeAttack("evilRobotMaria");
	std::cout << std::endl;
	fragTrap->rangedAttack("evilRobotMaria");
	fragTrap->rangedAttack("evilRobotMaria");
	std::cout << std::endl;
	fragTrap->takeDamage(30);
	fragTrap->takeDamage(30);
	fragTrap->takeDamage(30);
	fragTrap->takeDamage(30);
	fragTrap->takeDamage(30);
	std::cout << std::endl;
	fragTrap->beRepaired(30);
	fragTrap->beRepaired(30);
	fragTrap->beRepaired(30);
	fragTrap->beRepaired(30);
	fragTrap->beRepaired(30);
	std::cout << std::endl;
	fragTrap->vaulthunter_dot_exe("evilRobotDenis");
	fragTrap->vaulthunter_dot_exe("evilRobotDenis");
	fragTrap->vaulthunter_dot_exe("evilRobotDenis");
	fragTrap->vaulthunter_dot_exe("evilRobotDenis");
	fragTrap->vaulthunter_dot_exe("evilRobotDenis");
	std::cout << std::endl;
	delete fragTrap;
	std::cout << std::endl;
	
	return 0;
}
