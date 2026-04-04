#include <com/sun/org/apache/xml/internal/utils/WrongParserException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

void WrongParserException::init$($String* message) {
	$RuntimeException::init$(message);
}

WrongParserException::WrongParserException() {
}

WrongParserException::WrongParserException(const WrongParserException& e) : $RuntimeException(e) {
}

void WrongParserException::throw$() {
	throw *this;
}

$Class* WrongParserException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(WrongParserException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WrongParserException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.WrongParserException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WrongParserException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongParserException);
	});
	return class$;
}

$Class* WrongParserException::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com