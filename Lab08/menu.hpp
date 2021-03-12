#ifndef MENU_HPP
#define MENU_HPP

class Menu {
	private:
		int history_index; // Index which command was last executed, accounting for undo and redo functions.
		vector<Command*> history; // Holds all the commands that have ben executed until now.
	
	public:
		Menu() {
			// Constructor which initializes the internal members.
			history_index = -1;
		}
		string execute() {
			// Returns the string converted evaluation of the current command.
			return to_string(history.at(history_index)->execute());
		}
		string stringify() {
			// Returns the stringified version of the current command.
			return history.at(history_index)->stringify();
		}
		bool initialized() {
			// Returns if the history has an InitialCommand, which is necessary to start the calculation.
			if (history_index == -1) {
				return false;
			}
			return true;
		}
		void add_command(Command* cmd) {
			// Adds a command to the history (does not execute it), this may require removal of some other commands depending on where history_index is.
			int size = (int) history.size();
			if (history_index <size - 1) {
				history.resize(history_index + 1);
			}
			history.push_back(cmd);
			++history_index;
		}
		Command* get_command() {
			// Returns the command that the history_index is currently referring to.
			if (history_index != -1) {
				return history.at(history_index);
			}
			return nullptr;
		}
		void undo() {
			// Move back one command (does not execute it) if there is a command to undo.
			if (history_index != -1) {
				--history_index;
			}
		}
		void redo() {
			// Moves forward one command (does not execute it) if there is a command to redo.
			int size = (int) history.size();
			if (history_index < size - 1) {
				++history_index;
			}
		}
};

#endif
