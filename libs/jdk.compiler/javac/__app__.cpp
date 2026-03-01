#include <jdk.compiler.javac.h>

#include <Javac.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchw(::jdk$compiler$javac::init, []($StringArray* args)->void {
		::Javac::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, ::jdk$compiler$javac::init, []($StringArray* args)->void {
		::Javac::main(args);
	});
}
#endif