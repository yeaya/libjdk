#ifndef _javax_tools_DocumentationTool$DocumentationTask_h_
#define _javax_tools_DocumentationTool$DocumentationTask_h_
//$ interface javax.tools.DocumentationTool$DocumentationTask
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace javax {
	namespace tools {

class $export DocumentationTool$DocumentationTask : public ::java::util::concurrent::Callable {
	$interface(DocumentationTool$DocumentationTask, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	virtual void addModules(::java::lang::Iterable* moduleNames) {}
	virtual $Object* call() override {return nullptr;}
	virtual void setLocale(::java::util::Locale* locale) {}
};

	} // tools
} // javax

#endif // _javax_tools_DocumentationTool$DocumentationTask_h_