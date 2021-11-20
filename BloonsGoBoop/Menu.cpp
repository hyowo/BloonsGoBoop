#include "includes.h"

namespace Menu {
	void Menu::Render() {
		ImGui::Begin("Bloons pop");
		{
			if (ImGui::Button("Press to crash")) {
				auto rt = Il2cppRuntime();
				auto as = rt.il2cpp_assembly_get_image("Assembly-CSharp");
				auto kl = rt.il2cpp_class_from_name(as, "Assets.Scripts.Unity.UI_New.Main.WorldItems", "OpenChest");
				auto ob = rt.il2cpp_object_new(kl);
				auto chest = rt.il2cpp_field_from_token(kl, 0x4005A1A);
				bool ff = rt.GetFieldValue(ob, chest);
				std::cout << ff;
			}
		}
	}
}