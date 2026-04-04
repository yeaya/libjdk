#include <java/awt/AWTError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void AWTError::init$($String* msg) {
	$Error::init$(msg);
}

AWTError::AWTError() {
}

AWTError::AWTError(const AWTError& e) : $Error(e) {
}

void AWTError::throw$() {
	throw *this;
}

$Class* AWTError::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AWTError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.AWTError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AWTError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTError);
	});
	return class$;
}

$Class* AWTError::class$ = nullptr;

	} // awt
} // java