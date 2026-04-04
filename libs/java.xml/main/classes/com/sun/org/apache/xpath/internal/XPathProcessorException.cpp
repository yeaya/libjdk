#include <com/sun/org/apache/xpath/internal/XPathProcessorException.h>
#include <com/sun/org/apache/xpath/internal/XPathException.h>
#include <jcpp.h>

using $XPathException = ::com::sun::org::apache::xpath::internal::XPathException;
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

void XPathProcessorException::init$($String* message) {
	$XPathException::init$(message);
}

void XPathProcessorException::init$($String* message, $Exception* e) {
	$XPathException::init$(message, e);
}

XPathProcessorException::XPathProcessorException() {
}

XPathProcessorException::XPathProcessorException(const XPathProcessorException& e) : $XPathException(e) {
}

void XPathProcessorException::throw$() {
	throw *this;
}

$Class* XPathProcessorException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XPathProcessorException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XPathProcessorException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XPathProcessorException, init$, void, $String*, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.XPathProcessorException",
		"com.sun.org.apache.xpath.internal.XPathException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathProcessorException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathProcessorException);
	});
	return class$;
}

$Class* XPathProcessorException::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com