#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	FragTrap c("Walle");
	ScavTrap scav("Pilov");
	ScavTrap pal;
	ScavTrap lk("Arthas the Lich King");
	
	c.rangeAttack("");
	c.meleeAttack("");
	c.meleeAttack("MY neighbours");
	c.rangeAttack("Gandi");
	c.vaulthunter_dot_exe("Arnold Schwarzenegger");
	c.takeDamage(1);
	c.takeDamage(3);
	c.takeDamage(10);
	c.takeDamage(2148);
	c.beRepaired(3);
	c.beRepaired(50);
	c.beRepaired(4000);

	scav.challengeNewcomer();
	scav.rangeAttack("");
	scav.meleeAttack("");
	scav.meleeAttack("MY neighbours");
	scav.rangeAttack("Gandi");
	scav.takeDamage(1);
	scav.takeDamage(3);
	scav.takeDamage(10);
	scav.takeDamage(2148);
	scav.beRepaired(3);
	scav.beRepaired(50);
	scav.beRepaired(4000);

	pal = lk;
	pal.challengeNewcomer();
	pal.rangeAttack("");
	pal.meleeAttack("");
	pal.meleeAttack("MY neighbours");
	pal.rangeAttack("Gandi");
	pal.takeDamage(1);
	pal.takeDamage(3);
	pal.takeDamage(10);
	pal.takeDamage(2148);
	pal.beRepaired(3);
	pal.beRepaired(50);
	pal.beRepaired(4000);

	ClapTrap clap;
	NinjaTrap ninja("Ninja");
	ninja.ninjaShoebox(c);
	ninja.ninjaShoebox(pal);
	ninja.ninjaShoebox(clap);
	ninja.ninjaShoebox(ninja);
	ninja.rangeAttack("");
	ninja.meleeAttack("");
	ninja.meleeAttack("MY neighbours");
	ninja.rangeAttack("Gandi");
	ninja.takeDamage(1);
	ninja.takeDamage(3);
	ninja.takeDamage(10);
	ninja.takeDamage(2148);
	ninja.beRepaired(3);
	ninja.beRepaired(50);
	ninja.beRepaired(4000);

	return (0);
}