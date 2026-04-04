#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
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
						namespace dtm {

void DTMException::init$($String* message) {
	$RuntimeException::init$(message);
}

void DTMException::init$($Throwable* e) {
	$RuntimeException::init$(e);
}

void DTMException::init$($String* message, $Throwable* e) {
	$RuntimeException::init$(message, e);
}

DTMException::DTMException() {
}

DTMException::DTMException(const DTMException& e) : $RuntimeException(e) {
}

void DTMException::throw$() {
	throw *this;
}

$Class* DTMException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DTMException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $Throwable*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DTMException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.DTMException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DTMException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMException);
	});
	return class$;
}

$Class* DTMException::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com