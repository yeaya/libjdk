#include <com/sun/org/apache/xerces/internal/impl/dv/xs/EntityDV.h>

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

$MethodInfo _EntityDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EntityDV, init$, void)},
	{"checkExtraRules", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(EntityDV, checkExtraRules, void, Object$*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EntityDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(EntityDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _EntityDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.EntityDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_EntityDV_MethodInfo_
};

$Object* allocate$EntityDV($Class* clazz) {
	return $of($alloc(EntityDV));
}

void EntityDV::init$() {
	$TypeValidator::init$();
}

int16_t EntityDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* EntityDV::getActualValue($String* content, $ValidationContext* context) {
	if (!$XMLChar::isValidNCName(content)) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("NCName"_s)
		}));
	}
	return $of(content);
}

void EntityDV::checkExtraRules(Object$* value, $ValidationContext* context) {
	if (!$nc(context)->isEntityUnparsed($cast($String, value))) {
		$throwNew($InvalidDatatypeValueException, "UndeclaredEntity"_s, $$new($ObjectArray, {value}));
	}
}

EntityDV::EntityDV() {
}

$Class* EntityDV::load$($String* name, bool initialize) {
	$loadClass(EntityDV, name, initialize, &_EntityDV_ClassInfo_, allocate$EntityDV);
	return class$;
}

$Class* EntityDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com