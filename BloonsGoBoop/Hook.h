#pragma once

#include "includes.h"

void Hook(void* src, void* dst, unsigned int len);
BYTE* TrampHook(void* src, void* dst, unsigned int len);