#include <com/sun/org/apache/xerces/internal/dom/AbortException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _AbortException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbortException, serialVersionUID)},
	{}
};

$MethodInfo _AbortException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbortException, init$, void)},
	{}
};

$ClassInfo _AbortException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.AbortException",
	"java.lang.RuntimeException",
	nullptr,
	_AbortException_FieldInfo_,
	_AbortException_MethodInfo_
};

$Object* allocate$AbortException($Class* clazz) {
	return $of($alloc(AbortException));
}

void AbortException::init$() {
	$RuntimeException::init$(nullptr, nullptr, false, false);
}

AbortException::AbortException() {
}

AbortException::AbortException(const AbortException& e) : $RuntimeException(e) {
}

void AbortException::throw$() {
	throw *this;
}

$Class* AbortException::load$($String* name, bool initialize) {
	$loadClass(AbortException, name, initialize, &_AbortException_ClassInfo_, allocate$AbortException);
	return class$;
}

$Class* AbortException::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com