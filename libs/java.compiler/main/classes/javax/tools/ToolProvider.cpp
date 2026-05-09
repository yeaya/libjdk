#include <javax/tools/ToolProvider.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <javax/tools/DocumentationTool.h>
#include <javax/tools/JavaCompiler.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $DocumentationTool = ::javax::tools::DocumentationTool;
using $JavaCompiler = ::javax::tools::JavaCompiler;

namespace javax {
	namespace tools {

class ToolProvider$$Lambda$lambda$matches$0 : public $PrivilegedAction {
	$class(ToolProvider$$Lambda$lambda$matches$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(Object$* tool, $String* moduleName) {
		$set(this, tool, tool);
		$set(this, moduleName, moduleName);
	}
	virtual $Object* run() override {
		return $of(ToolProvider::lambda$matches$0(tool, moduleName));
	}
	$Object* tool = nullptr;
	$String* moduleName = nullptr;
};
$Class* ToolProvider$$Lambda$lambda$matches$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tool", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$matches$0, tool)},
		{"moduleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$matches$0, moduleName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ToolProvider$$Lambda$lambda$matches$0, init$, void, Object$*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ToolProvider$$Lambda$lambda$matches$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.tools.ToolProvider$$Lambda$lambda$matches$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ToolProvider$$Lambda$lambda$matches$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolProvider$$Lambda$lambda$matches$0);
	});
	return class$;
}
$Class* ToolProvider$$Lambda$lambda$matches$0::class$ = nullptr;

$String* ToolProvider::systemJavaCompilerModule = nullptr;
$String* ToolProvider::systemJavaCompilerName = nullptr;
$String* ToolProvider::systemDocumentationToolModule = nullptr;
$String* ToolProvider::systemDocumentationToolName = nullptr;

void ToolProvider::init$() {
}

$JavaCompiler* ToolProvider::getSystemJavaCompiler() {
	$init(ToolProvider);
	$load($JavaCompiler);
	return $cast($JavaCompiler, getSystemTool($JavaCompiler::class$, ToolProvider::systemJavaCompilerModule, ToolProvider::systemJavaCompilerName));
}

$DocumentationTool* ToolProvider::getSystemDocumentationTool() {
	$init(ToolProvider);
	$load($DocumentationTool);
	return $cast($DocumentationTool, getSystemTool($DocumentationTool::class$, ToolProvider::systemDocumentationToolModule, ToolProvider::systemDocumentationToolName));
}

$ClassLoader* ToolProvider::getSystemToolClassLoader() {
	$init(ToolProvider);
	return nullptr;
}

$Object* ToolProvider::getSystemTool($Class* clazz, $String* moduleName, $String* className) {
	$init(ToolProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ServiceLoader, sl, $ServiceLoader::load(clazz, $($ClassLoader::getSystemClassLoader())));
		{
			$var($Iterator, i$, $nc(sl)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, tool, i$->next());
				if (matches(tool, moduleName)) {
					return tool;
				}
			}
		}
	} catch ($ServiceConfigurationError& e) {
		$throwNew($Error, e);
	}
	return nullptr;
}

bool ToolProvider::matches(Object$* tool, $String* moduleName) {
	$init(ToolProvider);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(ToolProvider$$Lambda$lambda$matches$0, tool, moduleName));
	return $$sure($Boolean, $AccessController::doPrivileged(pa))->booleanValue();
}

$Boolean* ToolProvider::lambda$matches$0(Object$* tool, $String* moduleName) {
	$init(ToolProvider);
	$useLocalObjectStack();
	$var($Module, toolModule, $nc($of(tool))->getClass()->getModule());
	$var($String, toolModuleName, $nc(toolModule)->getName());
	return $Boolean::valueOf($Objects::equals(toolModuleName, moduleName));
}

ToolProvider::ToolProvider() {
}

void ToolProvider::clinit$($Class* clazz) {
	$assignStatic(ToolProvider::systemJavaCompilerModule, "jdk.compiler"_s);
	$assignStatic(ToolProvider::systemJavaCompilerName, "com.sun.tools.javac.api.JavacTool"_s);
	$assignStatic(ToolProvider::systemDocumentationToolModule, "jdk.javadoc"_s);
	$assignStatic(ToolProvider::systemDocumentationToolName, "jdk.javadoc.internal.api.JavadocTool"_s);
}

$Class* ToolProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.tools.ToolProvider$$Lambda$lambda$matches$0")) {
			return ToolProvider$$Lambda$lambda$matches$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"systemJavaCompilerModule", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemJavaCompilerModule)},
		{"systemJavaCompilerName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemJavaCompilerName)},
		{"systemDocumentationToolModule", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemDocumentationToolModule)},
		{"systemDocumentationToolName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemDocumentationToolName)},
		{}
	};
	$NamedAttribute getSystemToolClassLoadermethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute getSystemToolClassLoadermethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getSystemToolClassLoadermethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ToolProvider, init$, void)},
		{"getSystemDocumentationTool", "()Ljavax/tools/DocumentationTool;", nullptr, $PUBLIC | $STATIC, $staticMethod(ToolProvider, getSystemDocumentationTool, $DocumentationTool*)},
		{"getSystemJavaCompiler", "()Ljavax/tools/JavaCompiler;", nullptr, $PUBLIC | $STATIC, $staticMethod(ToolProvider, getSystemJavaCompiler, $JavaCompiler*)},
		{"getSystemTool", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/String;)TT;", $PRIVATE | $STATIC, $staticMethod(ToolProvider, getSystemTool, $Object*, $Class*, $String*, $String*)},
		{"getSystemToolClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(ToolProvider, getSystemToolClassLoader, $ClassLoader*), nullptr, nullptr, getSystemToolClassLoadermethodAnnotations$$},
		{"lambda$matches$0", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ToolProvider, lambda$matches$0, $Boolean*, Object$*, $String*)},
		{"matches", "(Ljava/lang/Object;Ljava/lang/String;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $staticMethod(ToolProvider, matches, bool, Object$*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.tools.ToolProvider",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ToolProvider, name, initialize, &classInfo$$, ToolProvider::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ToolProvider);
	});
	return class$;
}

$Class* ToolProvider::class$ = nullptr;

	} // tools
} // javax