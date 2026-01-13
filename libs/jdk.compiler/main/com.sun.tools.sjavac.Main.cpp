#include <com/sun/tools/sjavac/Main.h>
#include <jdk.compiler.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin("-$", ::jdk$compiler::init, []($StringArray* args)->void {
		::com::sun::tools::sjavac::Main::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::jdk$compiler::init, []($StringArray* args)->void {
		::com::sun::tools::sjavac::Main::main(args);
	});
}
#endif