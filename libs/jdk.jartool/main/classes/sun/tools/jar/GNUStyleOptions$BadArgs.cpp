#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

void GNUStyleOptions$BadArgs::init$($String* key, $String* arg) {
	$Exception::init$($($Main::formatMsg(key, arg)));
}

void GNUStyleOptions$BadArgs::init$($String* key) {
	$Exception::init$($($Main::getMsg(key)));
}

GNUStyleOptions$BadArgs* GNUStyleOptions$BadArgs::showUsage(bool b) {
	this->showUsage$ = b;
	return this;
}

GNUStyleOptions$BadArgs::GNUStyleOptions$BadArgs() {
}

GNUStyleOptions$BadArgs::GNUStyleOptions$BadArgs(const GNUStyleOptions$BadArgs& e) : $Exception(e) {
}

void GNUStyleOptions$BadArgs::throw$() {
	throw *this;
}

$Class* GNUStyleOptions$BadArgs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(GNUStyleOptions$BadArgs, serialVersionUID)},
		{"showUsage", "Z", nullptr, 0, $field(GNUStyleOptions$BadArgs, showUsage$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(GNUStyleOptions$BadArgs, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(GNUStyleOptions$BadArgs, init$, void, $String*)},
		{"showUsage", "(Z)Lsun/tools/jar/GNUStyleOptions$BadArgs;", nullptr, 0, $virtualMethod(GNUStyleOptions$BadArgs, showUsage, GNUStyleOptions$BadArgs*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.GNUStyleOptions$BadArgs", "sun.tools.jar.GNUStyleOptions", "BadArgs", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.tools.jar.GNUStyleOptions$BadArgs",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.GNUStyleOptions"
	};
	$loadClass(GNUStyleOptions$BadArgs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GNUStyleOptions$BadArgs);
	});
	return class$;
}

$Class* GNUStyleOptions$BadArgs::class$ = nullptr;

		} // jar
	} // tools
} // sun