#include <com/sun/tools/script/shell/Main.h>
#include <java.scripting.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin("-$", ::java$scripting::init, []($StringArray* args)->void {
		::com::sun::tools::script::shell::Main::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::java$scripting::init, []($StringArray* args)->void {
		::com::sun::tools::script::shell::Main::main(args);
	});
}
#endif