#ifndef MULTCOMMAND_HPP
#define MULTCOMMAND_HPP

class MultCommand : public Command {
	public:
		MultCommand(Command* left, Base* right) {
			root = new Mult(left->get_root(), right);
		}
};

#endif
