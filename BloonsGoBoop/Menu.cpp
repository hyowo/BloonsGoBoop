#include "Menu.h"
#include "kiero/minhook/include/MinHook.h"

namespace Menu {
	// Variables
	uintptr_t moduleBase = (uintptr_t)GetModuleHandleW(L"GameAssembly.dll");



	// Define function types
	typedef bool(__fastcall* tIsChestReady)(void* openChest);
	tIsChestReady oIsChestReady = tIsChestReady(moduleBase + OpenChest::IsChestReady);
	LPVOID TrampIsChestReady;



	// Define Functions
	bool __fastcall hIsChestReady(void* openChest)
	{
		return true;
	}



	// Bools for trigger
	bool AlwaysChestAvailable = false;
	bool UnlockAllHeroes = false;



	// Render Menu
	void Menu::Render() {
		ImGui::BeginMainMenuBar();
		{

			if (ImGui::BeginMenu("Aimbot"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Triggerbot"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Misc"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Visuals"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Rage"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Players"))
			{
				ImGui::EndMenu();
			}



			if (ImGui::BeginMenu("Config"))
			{
				ImGui::EndMenu();
			}



			ImGui::EndMainMenuBar();

		}
	}
}