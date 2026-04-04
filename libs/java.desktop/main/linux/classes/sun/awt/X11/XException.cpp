#include <sun/awt/X11/XException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace awt {
		namespace X11 {

void XException::init$() {
	$RuntimeException::init$();
}

void XException::init$($String* message) {
	$RuntimeException::init$(message);
}

XException::XException() {
}

XException::XException(const XException& e) : $RuntimeException(e) {
}

void XException::throw$() {
	throw *this;
}

$Class* XException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.XException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XException);
	});
	return class$;
}

$Class* XException::class$ = nullptr;

		} // X11
	} // awt
} // sun