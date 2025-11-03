#ifndef _javax_tools_JavaCompiler$CompilationTask_h_
#define _javax_tools_JavaCompiler$CompilationTask_h_
//$ interface javax.tools.JavaCompiler$CompilationTask
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

class $export JavaCompiler$CompilationTask : public ::java::util::concurrent::Callable {
	$interface(JavaCompiler$CompilationTask, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	virtual void addModules(::java::lang::Iterable* moduleNames) {}
	virtual $Object* call() override {return nullptr;}
	virtual void setLocale(::java::util::Locale* locale) {}
	virtual void setProcessors(::java::lang::Iterable* processors) {}
};

	} // tools
} // javax

#endif // _javax_tools_JavaCompiler$CompilationTask_h_