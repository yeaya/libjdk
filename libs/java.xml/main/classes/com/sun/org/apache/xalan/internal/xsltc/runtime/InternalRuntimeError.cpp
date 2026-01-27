#include <com/sun/org/apache/xalan/internal/xsltc/runtime/InternalRuntimeError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _InternalRuntimeError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InternalRuntimeError, serialVersionUID)},
	{}
};

$MethodInfo _InternalRuntimeError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InternalRuntimeError, init$, void, $String*)},
	{}
};

$ClassInfo _InternalRuntimeError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.InternalRuntimeError",
	"java.lang.Error",
	nullptr,
	_InternalRuntimeError_FieldInfo_,
	_InternalRuntimeError_MethodInfo_
};

$Object* allocate$InternalRuntimeError($Class* clazz) {
	return $of($alloc(InternalRuntimeError));
}

void InternalRuntimeError::init$($String* message) {
	$Error::init$(message);
}

InternalRuntimeError::InternalRuntimeError() {
}

InternalRuntimeError::InternalRuntimeError(const InternalRuntimeError& e) : $Error(e) {
}

void InternalRuntimeError::throw$() {
	throw *this;
}

$Class* InternalRuntimeError::load$($String* name, bool initialize) {
	$loadClass(InternalRuntimeError, name, initialize, &_InternalRuntimeError_ClassInfo_, allocate$InternalRuntimeError);
	return class$;
}

$Class* InternalRuntimeError::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com