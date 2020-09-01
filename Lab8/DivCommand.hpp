#ifndef DIVCOMMAND_HPP
#define DIVCOMMAND_HPP

class DivCommand : public Command {
	public:
		DivCommand(Command* left, Base* right) {
			root = new Div(left->get_root(), right);
		}
};

#endif
