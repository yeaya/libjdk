#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeException.h>
#include <jcpp.h>

using $DatatypeException = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

void InvalidDatatypeValueException::init$($String* key, $ObjectArray* args) {
	$DatatypeException::init$(key, args);
}

InvalidDatatypeValueException::InvalidDatatypeValueException() {
}

InvalidDatatypeValueException::InvalidDatatypeValueException(const InvalidDatatypeValueException& e) : $DatatypeException(e) {
}

void InvalidDatatypeValueException::throw$() {
	throw *this;
}

$Class* InvalidDatatypeValueException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(InvalidDatatypeValueException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InvalidDatatypeValueException, init$, void, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException",
		"com.sun.org.apache.xerces.internal.impl.dv.DatatypeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidDatatypeValueException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidDatatypeValueException);
	});
	return class$;
}

$Class* InvalidDatatypeValueException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com