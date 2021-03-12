#ifndef POWCOMMAND_HPP
#define POWCOMMAND_HPP

class PowCommand : public Command {
	public:
		PowCommand(Command* left, Base* right) {
			root = new Pow(left->get_root(), right);
		}
};

#endif
