#ifndef _javax_tools_JavaCompiler_h_
#define _javax_tools_JavaCompiler_h_
//$ interface javax.tools.JavaCompiler
//$ extends javax.tools.Tool,javax.tools.OptionChecker

#include <javax/tools/OptionChecker.h>
#include <javax/tools/Tool.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace tools {
		class DiagnosticListener;
		class JavaCompiler$CompilationTask;
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace javax {
	namespace tools {

class $export JavaCompiler : public ::javax::tools::Tool, public ::javax::tools::OptionChecker {
	$interface(JavaCompiler, $NO_CLASS_INIT, ::javax::tools::Tool, ::javax::tools::OptionChecker)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::tools::StandardJavaFileManager* getStandardFileManager(::javax::tools::DiagnosticListener* diagnosticListener, ::java::util::Locale* locale, ::java::nio::charset::Charset* charset) {return nullptr;}
	virtual ::javax::tools::JavaCompiler$CompilationTask* getTask(::java::io::Writer* out, ::javax::tools::JavaFileManager* fileManager, ::javax::tools::DiagnosticListener* diagnosticListener, ::java::lang::Iterable* options, ::java::lang::Iterable* classes, ::java::lang::Iterable* compilationUnits) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

	} // tools
} // javax

#endif // _javax_tools_JavaCompiler_h_