#pragma once

#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include <stdio.h>
#include <iostream>
#include "kiero/kiero.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "Menu.h"
#include "IL2CPP-Api/il2cpp.h"
#include "IL2CPP-Api/types.h"
#include "BloonsTowerDefense6.h"

using namespace std;

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;