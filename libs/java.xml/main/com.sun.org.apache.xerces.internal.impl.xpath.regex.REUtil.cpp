#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <java.xml.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchw(::java$xml::init, []($StringArray* args)->void {
		::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, ::java$xml::init, []($StringArray* args)->void {
		::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil::main(args);
	});
}
#endif