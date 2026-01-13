#include <sun/security/krb5/internal/tools/Klist.h>
#include <java.security.jgss.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin("-$", ::java$security$jgss::init, []($StringArray* args)->void {
		::sun::security::krb5::internal::tools::Klist::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::java$security$jgss::init, []($StringArray* args)->void {
		::sun::security::krb5::internal::tools::Klist::main(args);
	});
}
#endif