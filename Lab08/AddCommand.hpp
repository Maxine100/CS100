#ifndef ADDCOMMAND_HPP
#define ADDCOMMAND_HPP

class AddCommand : public Command {
	public:
		AddCommand(Command* left, Base* right) {
			root = new Add(left->get_root(), right);
		}
};

#endif
