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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ToolProvider$$Lambda$lambda$matches$0>());
	}
	$Object* tool = nullptr;
	$String* moduleName = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ToolProvider$$Lambda$lambda$matches$0::fieldInfos[3] = {
	{"tool", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$matches$0, tool)},
	{"moduleName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ToolProvider$$Lambda$lambda$matches$0, moduleName)},
	{}
};
$MethodInfo ToolProvider$$Lambda$lambda$matches$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ToolProvider$$Lambda$lambda$matches$0::*)(Object$*,$String*)>(&ToolProvider$$Lambda$lambda$matches$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ToolProvider$$Lambda$lambda$matches$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.tools.ToolProvider$$Lambda$lambda$matches$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* ToolProvider$$Lambda$lambda$matches$0::load$($String* name, bool initialize) {
	$loadClass(ToolProvider$$Lambda$lambda$matches$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ToolProvider$$Lambda$lambda$matches$0::class$ = nullptr;

$NamedAttribute ToolProvider_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _ToolProvider_MethodAnnotations_getSystemToolClassLoader4[] = {
	{"Ljava/lang/Deprecated;", ToolProvider_Attribute_var$0},
	{}
};

$FieldInfo _ToolProvider_FieldInfo_[] = {
	{"systemJavaCompilerModule", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemJavaCompilerModule)},
	{"systemJavaCompilerName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemJavaCompilerName)},
	{"systemDocumentationToolModule", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemDocumentationToolModule)},
	{"systemDocumentationToolName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToolProvider, systemDocumentationToolName)},
	{}
};

$MethodInfo _ToolProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ToolProvider::*)()>(&ToolProvider::init$))},
	{"getSystemDocumentationTool", "()Ljavax/tools/DocumentationTool;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DocumentationTool*(*)()>(&ToolProvider::getSystemDocumentationTool))},
	{"getSystemJavaCompiler", "()Ljavax/tools/JavaCompiler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JavaCompiler*(*)()>(&ToolProvider::getSystemJavaCompiler))},
	{"getSystemTool", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/String;Ljava/lang/String;)TT;", $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Class*,$String*,$String*)>(&ToolProvider::getSystemTool))},
	{"getSystemToolClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$ClassLoader*(*)()>(&ToolProvider::getSystemToolClassLoader)), nullptr, nullptr, _ToolProvider_MethodAnnotations_getSystemToolClassLoader4},
	{"lambda$matches$0", "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)(Object$*,$String*)>(&ToolProvider::lambda$matches$0))},
	{"matches", "(Ljava/lang/Object;Ljava/lang/String;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/String;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,$String*)>(&ToolProvider::matches))},
	{}
};

$ClassInfo _ToolProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.tools.ToolProvider",
	"java.lang.Object",
	nullptr,
	_ToolProvider_FieldInfo_,
	_ToolProvider_MethodInfo_
};

$Object* allocate$ToolProvider($Class* clazz) {
	return $of($alloc(ToolProvider));
}

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
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ServiceLoader, sl, $ServiceLoader::load(clazz, $($ClassLoader::getSystemClassLoader())));
		{
			$var($Iterator, i$, $nc(sl)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, tool, i$->next());
				{
					if (matches(tool, moduleName)) {
						return $of(tool);
					}
				}
			}
		}
	} catch ($ServiceConfigurationError& e) {
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	return $of(nullptr);
}

bool ToolProvider::matches(Object$* tool, $String* moduleName) {
	$init(ToolProvider);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(ToolProvider$$Lambda$lambda$matches$0, tool, moduleName)));
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(pa)))))->booleanValue();
}

$Boolean* ToolProvider::lambda$matches$0(Object$* tool, $String* moduleName) {
	$init(ToolProvider);
	$useLocalCurrentObjectStackCache();
	$var($Module, toolModule, $nc($of(tool))->getClass()->getModule());
	$var($String, toolModuleName, $nc(toolModule)->getName());
	return $Boolean::valueOf($Objects::equals(toolModuleName, moduleName));
}

ToolProvider::ToolProvider() {
}

void clinit$ToolProvider($Class* class$) {
	$assignStatic(ToolProvider::systemJavaCompilerModule, "jdk.compiler"_s);
	$assignStatic(ToolProvider::systemJavaCompilerName, "com.sun.tools.javac.api.JavacTool"_s);
	$assignStatic(ToolProvider::systemDocumentationToolModule, "jdk.javadoc"_s);
	$assignStatic(ToolProvider::systemDocumentationToolName, "jdk.javadoc.internal.api.JavadocTool"_s);
}

$Class* ToolProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ToolProvider$$Lambda$lambda$matches$0::classInfo$.name)) {
			return ToolProvider$$Lambda$lambda$matches$0::load$(name, initialize);
		}
	}
	$loadClass(ToolProvider, name, initialize, &_ToolProvider_ClassInfo_, clinit$ToolProvider, allocate$ToolProvider);
	return class$;
}

$Class* ToolProvider::class$ = nullptr;

	} // tools
} // javax