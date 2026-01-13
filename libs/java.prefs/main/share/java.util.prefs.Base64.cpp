#include <java/util/prefs/Base64.h>
#include <java.prefs.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin("-$", ::java$prefs::init, []($StringArray* args)->void {
		::java::util::prefs::Base64::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::java$prefs::init, []($StringArray* args)->void {
		::java::util::prefs::Base64::main(args);
	});
}
#endif