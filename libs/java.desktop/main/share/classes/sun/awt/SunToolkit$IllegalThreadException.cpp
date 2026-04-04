#include <sun/awt/SunToolkit$IllegalThreadException.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace awt {

void SunToolkit$IllegalThreadException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

void SunToolkit$IllegalThreadException::init$() {
	$RuntimeException::init$();
}

SunToolkit$IllegalThreadException::SunToolkit$IllegalThreadException() {
}

SunToolkit$IllegalThreadException::SunToolkit$IllegalThreadException(const SunToolkit$IllegalThreadException& e) : $RuntimeException(e) {
}

void SunToolkit$IllegalThreadException::throw$() {
	throw *this;
}

$Class* SunToolkit$IllegalThreadException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SunToolkit$IllegalThreadException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunToolkit$IllegalThreadException, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunToolkit$IllegalThreadException", "sun.awt.SunToolkit", "IllegalThreadException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.SunToolkit$IllegalThreadException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunToolkit"
	};
	$loadClass(SunToolkit$IllegalThreadException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunToolkit$IllegalThreadException);
	});
	return class$;
}

$Class* SunToolkit$IllegalThreadException::class$ = nullptr;

	} // awt
} // sun