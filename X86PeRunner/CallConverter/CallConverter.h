#pragma once
#include"Emulator\Emulator.h"
#include"Hook\Hook.h"


class CallConverter
{
public:
	virtual void Call(Emulator* emulator, ImportHookData* data) = 0;
};