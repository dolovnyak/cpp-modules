#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("shrubbery creation", target, 145, 137)
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	Form::execute(executor);
	
	std::string shrubbery = "                   .o00o\n"
							"                   o000000oo\n"
							"                  00000000000o\n"
							"                 00000000000000\n"
							"              oooooo  00000000  o88o\n"
							"           ooOOOOOOOoo  ```''  888888\n"
							"         OOOOOOOOOOOO'.qQQQQq. `8888'\n"
							"        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
							"        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
							"         OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
							"           OOOOOOOOO `QQQQQQ/ /QQ'\n"
							"             OO:F_P:O `QQQ/  /Q'\n"
							"                \\\\. \\ |  // |\n"
							"                d\\ \\\\\\|_////\n"
							"                qP| \\\\ _' `|Ob\n"
							"                   \\  / \\  \\Op\n"
							"                   |  | O| |\n"
							"           _       /\\. \\_/ /\\\n"
							"            `---__/|_\\\\   //|  __\n"
							"                  `-'  `-'`-'-'";
	
	std::ofstream file(getTarget() + "_shrubbery");
	file << shrubbery << std::endl;
	file.close();
}

Form* ShrubberyCreationForm::createNewInstance(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}
