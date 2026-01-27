#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/ENTITYDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace dtd {

$MethodInfo _ENTITYDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ENTITYDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(ENTITYDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _ENTITYDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.ENTITYDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_ENTITYDatatypeValidator_MethodInfo_
};

$Object* allocate$ENTITYDatatypeValidator($Class* clazz) {
	return $of($alloc(ENTITYDatatypeValidator));
}

void ENTITYDatatypeValidator::init$() {
}

void ENTITYDatatypeValidator::validate($String* content, $ValidationContext* context) {
	if (!$nc(context)->isEntityUnparsed(content)) {
		$throwNew($InvalidDatatypeValueException, "ENTITYNotUnparsed"_s, $$new($ObjectArray, {$of(content)}));
	}
}

ENTITYDatatypeValidator::ENTITYDatatypeValidator() {
}

$Class* ENTITYDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(ENTITYDatatypeValidator, name, initialize, &_ENTITYDatatypeValidator_ClassInfo_, allocate$ENTITYDatatypeValidator);
	return class$;
}

$Class* ENTITYDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com