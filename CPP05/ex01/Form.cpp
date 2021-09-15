/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:10:43 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/09 16:48:44 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): gradeSign(0), gradeExecute(0), name("")
{
}

Form::Form(std::string name, int sign, int execute): name(name), gradeSign(sign), gradeExecute(execute), isSigned(false)
{
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(Form const &src): name(src.name), gradeSign(src.gradeSign), gradeExecute(src.gradeExecute)
{
	std::cout << "Form Copy constructor called" << std::endl;
	if (src.gradeSign < 1 || src.gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (src.gradeSign > 150 || src.gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator=(Form const &rhs)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		if (rhs.gradeSign < 1 || rhs.gradeSign < 1)
			throw Form::GradeTooHighException();
		if (rhs.gradeSign > 150 || rhs.gradeExecute > 150)
			throw Form::GradeTooLowException();
		this->isSigned = rhs.isSigned;
	}
	return *this;
}

Form::~Form()
{
}

std::string const Form::getName() const
{
	return (this->name);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExecute() const
{
	return (this->gradeExecute);
}

bool Form::getSigned() const
{
	return (this->isSigned);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade too Low");
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->gradeSign >= bureaucrat.getGrade())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
	o << "<" << "Form " + form.getName() << ">, sign grade : "
		<< form.getGradeSign() << ", execute grade : " << form.getGradeExecute()
		<< ", signed : " << form.getSigned();
	return o;
}
