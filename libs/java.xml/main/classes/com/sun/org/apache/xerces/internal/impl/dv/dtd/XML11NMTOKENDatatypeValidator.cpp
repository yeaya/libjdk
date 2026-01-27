#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11NMTOKENDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NMTOKENDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $NMTOKENDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::NMTOKENDatatypeValidator;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
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

$MethodInfo _XML11NMTOKENDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11NMTOKENDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XML11NMTOKENDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XML11NMTOKENDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11NMTOKENDatatypeValidator",
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.NMTOKENDatatypeValidator",
	nullptr,
	nullptr,
	_XML11NMTOKENDatatypeValidator_MethodInfo_
};

$Object* allocate$XML11NMTOKENDatatypeValidator($Class* clazz) {
	return $of($alloc(XML11NMTOKENDatatypeValidator));
}

void XML11NMTOKENDatatypeValidator::init$() {
	$NMTOKENDatatypeValidator::init$();
}

void XML11NMTOKENDatatypeValidator::validate($String* content, $ValidationContext* context) {
	if (!$XML11Char::isXML11ValidNmtoken(content)) {
		$throwNew($InvalidDatatypeValueException, "NMTOKENInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
}

XML11NMTOKENDatatypeValidator::XML11NMTOKENDatatypeValidator() {
}

$Class* XML11NMTOKENDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(XML11NMTOKENDatatypeValidator, name, initialize, &_XML11NMTOKENDatatypeValidator_ClassInfo_, allocate$XML11NMTOKENDatatypeValidator);
	return class$;
}

$Class* XML11NMTOKENDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com