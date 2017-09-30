#ifndef Move_H
#define Move_H

#include "../CommandBase.h"

class Move : public CommandBase {
public:
	Move();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Move_H
