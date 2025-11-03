#ifndef _javax_tools_DiagnosticListener_h_
#define _javax_tools_DiagnosticListener_h_
//$ interface javax.tools.DiagnosticListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace javax {
	namespace tools {

class $import DiagnosticListener : public ::java::lang::Object {
	$interface(DiagnosticListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void report(::javax::tools::Diagnostic* diagnostic) {}
};

	} // tools
} // javax

#endif // _javax_tools_DiagnosticListener_h_