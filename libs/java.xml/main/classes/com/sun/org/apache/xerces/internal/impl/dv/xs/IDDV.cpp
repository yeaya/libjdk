#include <com/sun/org/apache/xerces/internal/impl/dv/xs/IDDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_LENGTH
#undef FACET_MAXLENGTH
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE
#undef IDDV

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
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
								namespace xs {

$MethodInfo _IDDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IDDV, init$, void)},
	{"checkExtraRules", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(IDDV, checkExtraRules, void, Object$*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IDDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(IDDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _IDDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.IDDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_IDDV_MethodInfo_
};

$Object* allocate$IDDV($Class* clazz) {
	return $of($alloc(IDDV));
}

void IDDV::init$() {
	$TypeValidator::init$();
}

int16_t IDDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* IDDV::getActualValue($String* content, $ValidationContext* context) {
	if (!$XMLChar::isValidNCName(content)) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("NCName"_s)
		}));
	}
	return $of(content);
}

void IDDV::checkExtraRules(Object$* value, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($String, content, $cast($String, value));
	if ($nc(context)->isIdDeclared(content)) {
		$throwNew($InvalidDatatypeValueException, "cvc-id.2"_s, $$new($ObjectArray, {$of(content)}));
	}
	$nc(context)->addId(content);
}

IDDV::IDDV() {
}

$Class* IDDV::load$($String* name, bool initialize) {
	$loadClass(IDDV, name, initialize, &_IDDV_ClassInfo_, allocate$IDDV);
	return class$;
}

$Class* IDDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com