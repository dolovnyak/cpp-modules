#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	
	///////////////////////////////
	std::cout << std::endl;
	///////////////////////////////
	
	ScavTrap* scavTrap = new ScavTrap("Adam");
	delete scavTrap;
	std::cout << std::endl;

	scavTrap = new ScavTrap("Adam");
	delete scavTrap;
	std::cout << std::endl;

	scavTrap = new ScavTrap("Adam");
	delete scavTrap;
	std::cout << std::endl;

	scavTrap = new ScavTrap("Michael");
	std::cout << std::endl;
	scavTrap->meleeAttack("evilRobotMaria");
	scavTrap->meleeAttack("evilRobotMaria");
	std::cout << std::endl;
	scavTrap->rangedAttack("evilRobotMaria");
	scavTrap->rangedAttack("evilRobotMaria");
	std::cout << std::endl;
	scavTrap->takeDamage(30);
	scavTrap->takeDamage(30);
	scavTrap->takeDamage(30);
	scavTrap->takeDamage(30);
	scavTrap->takeDamage(30);
	std::cout << std::endl;
	scavTrap->beRepaired(30);
	scavTrap->beRepaired(30);
	scavTrap->beRepaired(30);
	scavTrap->beRepaired(30);
	scavTrap->beRepaired(30);
	std::cout << std::endl;
	scavTrap->challengeNewcomer();
	scavTrap->challengeNewcomer();
	scavTrap->challengeNewcomer();
	scavTrap->challengeNewcomer();
	scavTrap->challengeNewcomer();
	std::cout << std::endl;
	delete scavTrap;
	std::cout << std::endl;
	
	///////////////////////////////
	std::cout << std::endl;
	///////////////////////////////
	
	NinjaTrap* ninjaTrap = new NinjaTrap("Adam");
	delete ninjaTrap;
	std::cout << std::endl;
	
	ninjaTrap = new NinjaTrap("Adam");
	delete ninjaTrap;
	std::cout << std::endl;
	
	ninjaTrap = new NinjaTrap("Adam");
	delete ninjaTrap;
	std::cout << std::endl;
	
	ninjaTrap = new NinjaTrap("Michael");
	std::cout << std::endl;
	ninjaTrap->meleeAttack("evilRobotMaria");
	ninjaTrap->meleeAttack("evilRobotMaria");
	std::cout << std::endl;
	ninjaTrap->rangedAttack("evilRobotMaria");
	ninjaTrap->rangedAttack("evilRobotMaria");
	std::cout << std::endl;
	ninjaTrap->takeDamage(30);
	ninjaTrap->takeDamage(30);
	ninjaTrap->takeDamage(30);
	ninjaTrap->takeDamage(30);
	ninjaTrap->takeDamage(30);
	std::cout << std::endl;
	ninjaTrap->beRepaired(30);
	ninjaTrap->beRepaired(30);
	ninjaTrap->beRepaired(30);
	ninjaTrap->beRepaired(30);
	ninjaTrap->beRepaired(30);
	std::cout << std::endl;
	
	NinjaTrap ninjaTrapTest("Kapr");
	FragTrap fragTrapTest("Korat");
	ScavTrap scavTrapTest("Kotah");
	ninjaTrap->ninjaShoebox(ninjaTrapTest);
	ninjaTrap->ninjaShoebox(ninjaTrapTest);
	ninjaTrap->ninjaShoebox(fragTrapTest);
	ninjaTrap->ninjaShoebox(fragTrapTest);
	ninjaTrap->ninjaShoebox(scavTrapTest);
	ninjaTrap->ninjaShoebox(scavTrapTest);
	std::cout << std::endl;
	delete ninjaTrap;
	std::cout << std::endl;
	
	return 0;
}
