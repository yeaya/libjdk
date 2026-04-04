#include <com/sun/org/apache/xml/internal/utils/StopParseException.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

void StopParseException::init$() {
	$SAXException::init$("Stylesheet PIs found, stop the parse"_s);
}

StopParseException::StopParseException() {
}

StopParseException::StopParseException(const StopParseException& e) : $SAXException(e) {
}

void StopParseException::throw$() {
	throw *this;
}

$Class* StopParseException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StopParseException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StopParseException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.StopParseException",
		"org.xml.sax.SAXException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StopParseException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StopParseException);
	});
	return class$;
}

$Class* StopParseException::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com