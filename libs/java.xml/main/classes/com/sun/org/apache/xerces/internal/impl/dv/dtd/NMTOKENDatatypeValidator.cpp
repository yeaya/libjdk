#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NMTOKENDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
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

$MethodInfo _NMTOKENDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NMTOKENDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(NMTOKENDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _NMTOKENDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.NMTOKENDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_NMTOKENDatatypeValidator_MethodInfo_
};

$Object* allocate$NMTOKENDatatypeValidator($Class* clazz) {
	return $of($alloc(NMTOKENDatatypeValidator));
}

void NMTOKENDatatypeValidator::init$() {
}

void NMTOKENDatatypeValidator::validate($String* content, $ValidationContext* context) {
	if (!$XMLChar::isValidNmtoken(content)) {
		$throwNew($InvalidDatatypeValueException, "NMTOKENInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
}

NMTOKENDatatypeValidator::NMTOKENDatatypeValidator() {
}

$Class* NMTOKENDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(NMTOKENDatatypeValidator, name, initialize, &_NMTOKENDatatypeValidator_ClassInfo_, allocate$NMTOKENDatatypeValidator);
	return class$;
}

$Class* NMTOKENDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com