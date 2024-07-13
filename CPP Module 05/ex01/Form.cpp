#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("donpha"), _singingStatus(false)  , _gradeRequired(1), _gradeExecute(1)
{
}

Form::Form(std::string name, const int gradeRequired, const int gradeExecute) : _name(name),   _gradeRequired(gradeRequired) , _gradeExecute(gradeExecute)
{
	if (gradeRequired > 150 || gradeExecute > 150)
		throw GradeTooLowException();
	if (gradeRequired < 1 || gradeExecute < 1)
		throw GradeTooHighException();
}

Form::Form( const Form & src ) : _name(src._name) , _gradeRequired(src._gradeRequired), _gradeExecute(src._gradeExecute)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		// this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << " bureaucrat grade " << i.getGradeExecute() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (!this->_singingStatus)
	{
		if (bureaucrat.getGrade() <= getGradeRequired())
			this->_singingStatus = true;
		else
			throw GradeTooLowException();
	}

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string Form::getName() const
{
	return _name;
}
int Form::getGradeRequired() const
{
	return _gradeRequired;
}
int Form::getGradeExecute() const
{
	return _gradeExecute;
}
bool Form::GetSingingStatus() const
{
	return _singingStatus;
}

/* ************************************************************************** */
