#ifndef INITIALCOMMAND_HPP
#define INITIALCOMMAND_HPP

class InitialCommand : public Command {
	public:
		InitialCommand(Base* input) {
			root = input;
		}
};

#endif
