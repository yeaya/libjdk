#include <sun/tools/jar/Main.h>
#include <jdk.jartool.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::jdk$jartool::init, []($StringArray* args)->void {
		::sun::tools::jar::Main::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::jdk$jartool::init, []($StringArray* args)->void {
		::sun::tools::jar::Main::main(args);
	});
}
#endif