#ifndef _javax_tools_ToolProvider_h_
#define _javax_tools_ToolProvider_h_
//$ class javax.tools.ToolProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Boolean;
		class ClassLoader;
	}
}
namespace javax {
	namespace tools {
		class DocumentationTool;
		class JavaCompiler;
	}
}

namespace javax {
	namespace tools {

class $export ToolProvider : public ::java::lang::Object {
	$class(ToolProvider, 0, ::java::lang::Object)
public:
	ToolProvider();
	void init$();
	static ::javax::tools::DocumentationTool* getSystemDocumentationTool();
	static ::javax::tools::JavaCompiler* getSystemJavaCompiler();
	static $Object* getSystemTool($Class* clazz, $String* moduleName, $String* className);
	static ::java::lang::ClassLoader* getSystemToolClassLoader();
	static ::java::lang::Boolean* lambda$matches$0(Object$* tool, $String* moduleName);
	static bool matches(Object$* tool, $String* moduleName);
	static $String* systemJavaCompilerModule;
	static $String* systemJavaCompilerName;
	static $String* systemDocumentationToolModule;
	static $String* systemDocumentationToolName;
};

	} // tools
} // javax

#endif // _javax_tools_ToolProvider_h_