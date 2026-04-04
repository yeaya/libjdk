#include <com/sun/tools/javac/resources/CompilerProperties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void CompilerProperties::init$() {
}

CompilerProperties::CompilerProperties() {
}

$Class* CompilerProperties::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CompilerProperties, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.resources.CompilerProperties$Fragments", "com.sun.tools.javac.resources.CompilerProperties", "Fragments", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.resources.CompilerProperties$Notes", "com.sun.tools.javac.resources.CompilerProperties", "Notes", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.resources.CompilerProperties$Warnings", "com.sun.tools.javac.resources.CompilerProperties", "Warnings", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.resources.CompilerProperties$Errors", "com.sun.tools.javac.resources.CompilerProperties", "Errors", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.resources.CompilerProperties",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.resources.CompilerProperties$Fragments,com.sun.tools.javac.resources.CompilerProperties$Notes,com.sun.tools.javac.resources.CompilerProperties$Warnings,com.sun.tools.javac.resources.CompilerProperties$Errors"
	};
	$loadClass(CompilerProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CompilerProperties);
	});
	return class$;
}

$Class* CompilerProperties::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com