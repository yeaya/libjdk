#include <com/sun/org/apache/xpath/internal/functions/WrongNumberArgsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

void WrongNumberArgsException::init$($String* argsExpected) {
	$Exception::init$(argsExpected);
}

WrongNumberArgsException::WrongNumberArgsException() {
}

WrongNumberArgsException::WrongNumberArgsException(const WrongNumberArgsException& e) : $Exception(e) {
}

void WrongNumberArgsException::throw$() {
	throw *this;
}

$Class* WrongNumberArgsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrongNumberArgsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WrongNumberArgsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.functions.WrongNumberArgsException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WrongNumberArgsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongNumberArgsException);
	});
	return class$;
}

$Class* WrongNumberArgsException::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com