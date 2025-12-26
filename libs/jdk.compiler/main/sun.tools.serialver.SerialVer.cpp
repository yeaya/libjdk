#include <sun/tools/serialver/SerialVer.h>
#include <jdk.compiler.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::jdk$compiler::init, []($StringArray* args)->void {
		::sun::tools::serialver::SerialVer::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::jdk$compiler::init, []($StringArray* args)->void {
		::sun::tools::serialver::SerialVer::main(args);
	});
}
#endif