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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InternalRuntimeError, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InternalRuntimeError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.InternalRuntimeError",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InternalRuntimeError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InternalRuntimeError);
	});
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