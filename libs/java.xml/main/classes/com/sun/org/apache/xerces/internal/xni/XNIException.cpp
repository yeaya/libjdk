#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

void XNIException::init$($String* message) {
	$RuntimeException::init$(message);
}

void XNIException::init$($Exception* exception) {
	$RuntimeException::init$($($nc(exception)->getMessage()));
	$set(this, fException, exception);
}

void XNIException::init$($String* message, $Exception* exception) {
	$RuntimeException::init$(message);
	$set(this, fException, exception);
}

$Exception* XNIException::getException() {
	return this->fException;
}

$Throwable* XNIException::getCause() {
	return this->fException;
}

XNIException::XNIException() {
}

XNIException::XNIException(const XNIException& e) : $RuntimeException(e) {
}

void XNIException::throw$() {
	throw *this;
}

$Class* XNIException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XNIException, serialVersionUID)},
		{"fException", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(XNIException, fException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XNIException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XNIException, init$, void, $Exception*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(XNIException, init$, void, $String*, $Exception*)},
		{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XNIException, getCause, $Throwable*)},
		{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC, $virtualMethod(XNIException, getException, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xni.XNIException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XNIException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XNIException);
	});
	return class$;
}

$Class* XNIException::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com