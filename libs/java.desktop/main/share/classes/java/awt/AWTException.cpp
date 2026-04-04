#include <java/awt/AWTException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void AWTException::init$($String* msg) {
	$Exception::init$(msg);
}

AWTException::AWTException() {
}

AWTException::AWTException(const AWTException& e) : $Exception(e) {
}

void AWTException::throw$() {
	throw *this;
}

$Class* AWTException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AWTException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.AWTException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AWTException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTException);
	});
	return class$;
}

$Class* AWTException::class$ = nullptr;

	} // awt
} // java