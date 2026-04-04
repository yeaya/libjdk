#include <com/sun/tools/javac/platform/PlatformProvider$PlatformNotSupported.h>
#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

void PlatformProvider$PlatformNotSupported::init$() {
	$Exception::init$();
}

PlatformProvider$PlatformNotSupported::PlatformProvider$PlatformNotSupported() {
}

PlatformProvider$PlatformNotSupported::PlatformProvider$PlatformNotSupported(const PlatformProvider$PlatformNotSupported& e) : $Exception(e) {
}

void PlatformProvider$PlatformNotSupported::throw$() {
	throw *this;
}

$Class* PlatformProvider$PlatformNotSupported::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PlatformProvider$PlatformNotSupported, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformProvider$PlatformNotSupported, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported", "com.sun.tools.javac.platform.PlatformProvider", "PlatformNotSupported", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported",
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
		"com.sun.tools.javac.platform.PlatformProvider"
	};
	$loadClass(PlatformProvider$PlatformNotSupported, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformProvider$PlatformNotSupported);
	});
	return class$;
}

$Class* PlatformProvider$PlatformNotSupported::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com