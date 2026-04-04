#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace org {
	namespace xml {
		namespace sax {

void SAXNotSupportedException::init$() {
	$SAXException::init$();
}

void SAXNotSupportedException::init$($String* message) {
	$SAXException::init$(message);
}

SAXNotSupportedException::SAXNotSupportedException() {
}

SAXNotSupportedException::SAXNotSupportedException(const SAXNotSupportedException& e) : $SAXException(e) {
}

void SAXNotSupportedException::throw$() {
	throw *this;
}

$Class* SAXNotSupportedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SAXNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SAXNotSupportedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SAXNotSupportedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.SAXNotSupportedException",
		"org.xml.sax.SAXException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAXNotSupportedException);
	});
	return class$;
}

$Class* SAXNotSupportedException::class$ = nullptr;

		} // sax
	} // xml
} // org