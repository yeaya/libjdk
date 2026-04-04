#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

void TransletException::init$() {
	$SAXException::init$("Translet error"_s);
}

void TransletException::init$($Exception* e) {
	$SAXException::init$($($nc(e)->toString()));
	initCause(e);
}

void TransletException::init$($String* message) {
	$SAXException::init$(message);
}

TransletException::TransletException() {
}

TransletException::TransletException(const TransletException& e) : $SAXException(e) {
}

void TransletException::throw$() {
	throw *this;
}

$Class* TransletException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(TransletException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TransletException, init$, void)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(TransletException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TransletException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.TransletException",
		"org.xml.sax.SAXException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TransletException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransletException);
	});
	return class$;
}

$Class* TransletException::class$ = nullptr;

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com