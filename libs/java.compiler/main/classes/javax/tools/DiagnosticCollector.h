#ifndef _javax_tools_DiagnosticCollector_h_
#define _javax_tools_DiagnosticCollector_h_
//$ class javax.tools.DiagnosticCollector
//$ extends javax.tools.DiagnosticListener

#include <javax/tools/DiagnosticListener.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
	}
}

namespace javax {
	namespace tools {

class $export DiagnosticCollector : public ::javax::tools::DiagnosticListener {
	$class(DiagnosticCollector, $NO_CLASS_INIT, ::javax::tools::DiagnosticListener)
public:
	DiagnosticCollector();
	void init$();
	::java::util::List* getDiagnostics();
	virtual void report(::javax::tools::Diagnostic* diagnostic) override;
	::java::util::List* diagnostics = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_DiagnosticCollector_h_