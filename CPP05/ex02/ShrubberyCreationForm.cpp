/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:55:41 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/29 12:19:25 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
	if(this != &src)
		this->target = src.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string asciiTree = 
	"                                   .         ;\n"
	"      .              .              ;%     ;;\n"
	"        ,           ,                :;%  %;\n"
	"         :         ;                   :;%;'     .,\n"
	",.        %;     %;            ;        %;'    ,;\n"
	"  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	"    ;%;      %;        ;%;        % ;%;  ,%;'\n"
	"     `%;.     ;%;     %;'         `;%%;.%;'\n"
	"      `:;%.    ;%%. %@;        %; ;@%;%'\n"
	"         `:%;.  :;bd%;          %;@%;'\n"
	"           `@%:.  :;%.         ;@@%;'\n"
	"             `@%.  `;@%.      ;@@%;\n"
	"               `@%%. `@%%    ;@@%;\n"
	"                 ;@%. :@%%  %@@%;\n"
	"                   %@bd%%%bd%%:;\n"
	"                     #@%%%%%:;;\n"
	"                     %@@%%%::;\n"
	"                     %@@@%(o);  . '\n"
	"                     %@@@o%;:(.,'\n"
	"                 `.. %@@@o%::;\n"
	"                    `)@@@o%::;\n"
	"                     %@@(o)::;\n"
	"                    .%@@@@%::;\n"
	"                    ;%@@@@%::;.\n"
	"                   ;%@@@@%%:;;;.\n"
	"               ...;%@@@@@%%:;;;;,..\n";
	if (!this->getSigned())
		throw Form::NotSignedException();
	if (this->getGradeExecute() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::string fileName = (this->target + "_shrubbery");
	std::ofstream file;
	file.open(fileName.c_str());
	file << asciiTree;
	file.close();
	std::cout << "File is created" << std::endl;
	return true;
}
