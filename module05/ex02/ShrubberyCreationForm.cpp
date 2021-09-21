/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:02:30 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 16:05:27 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//------CONSTRUCTORS------//

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("ShrubberyCreationForm", "default target", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
	AForm("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy)
{
}


//------OPERATOR OVERLOADS------//

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;

	return (*this);
}


//------CLASS METHODS------//

void ShrubberyCreationForm::action() const
{
	std::string const tree =
		"          _{\\ _{\\{\\/}/}/}__\n"\
		"        {/{/\\}{/{/\\}(\\}{/\\} _\n"\
		"     {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"\
		"  {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"\
		"   {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"\
		"   _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"\
		"{/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"\
		" _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"\
		" {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"\
		"  {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"\
		"  {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"\
		"  {/{\\{\\/}{/){\{\\{\\/}/}{\{\\(/}/}\\}/}\n"\
		"   {/{\\{\\/}(_){\\{\{\\(/}/}{\\(_)/}/}\\}\n"\
		"    {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"\
		"     (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"\
		"      {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"\
		"         {/{\\{\\{\\/}/}{\\{\\}/}\n"\
		"           {){/ {\\/}{\\/} \\}\\}\n"\
		"            (_)  \\.-'.-/\n"\
		"        __...--- |'-.-'| --...\n"\
		" _...--          |     |       \n"\
		"     ' .  . '    |.'-._| '  . .  '   \n"\
		"  '-  '    .--'  | '-.'|    .  '  . '\n"\
		"        ' ..     |'-_.-|\n"\
		".  '  .       _.-|-._ -|-._  .  '  .\n"\
		"            .'   |'- .-|   '.\n"\
		"..-'   ' .  '.   `-._.-´   .'  '  - .\n"\
		" .-' '        '-._______.-'     '  .";
	
	std::ofstream shrubberyFile(this->getTarget() + "_shrubbery");
    
	if (!shrubberyFile)
    {
        throw std::runtime_error("The file could not be opened.");
    }
    shrubberyFile << tree;
    if (shrubberyFile.fail() || shrubberyFile.bad())
    {
        throw std::runtime_error("Could not write to the file");
    }
}


//------DESTRUCTORS------//

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
