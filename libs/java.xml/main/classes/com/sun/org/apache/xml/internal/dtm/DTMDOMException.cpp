#include <com/sun/org/apache/xml/internal/dtm/DTMDOMException.h>
#include <org/w3c/dom/DOMException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

void DTMDOMException::init$(int16_t code, $String* message) {
	$DOMException::init$(code, message);
}

void DTMDOMException::init$(int16_t code) {
	$DOMException::init$(code, ""_s);
}

DTMDOMException::DTMDOMException() {
}

DTMDOMException::DTMDOMException(const DTMDOMException& e) : $DOMException(e) {
}

void DTMDOMException::throw$() {
	throw *this;
}

$Class* DTMDOMException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DTMDOMException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(DTMDOMException, init$, void, int16_t, $String*)},
		{"<init>", "(S)V", nullptr, $PUBLIC, $method(DTMDOMException, init$, void, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.DTMDOMException",
		"org.w3c.dom.DOMException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DTMDOMException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDOMException);
	});
	return class$;
}

$Class* DTMDOMException::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com