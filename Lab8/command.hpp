#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command {
	protected:
		Base* root;
	
	public:
		Command() {
			this->root = nullptr;
		}
		double execute() {
			return root->evaluate();
		}
		string stringify() {
			return root->stringify();
		}
		Base* get_root() {
			return root;
		}
};

#endif
