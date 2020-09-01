#ifndef SUBCOMMAND_HPP
#define SUBCOMMAND_HPP

class SubCommand : public Command {
	public:
		SubCommand(Command* left, Base* right) {
			root = new Sub(left->get_root(), right);
		}
};

#endif
