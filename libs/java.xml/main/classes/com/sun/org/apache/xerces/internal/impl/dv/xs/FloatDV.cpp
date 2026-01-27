#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV$XFloat.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_MAXEXCLUSIVE
#undef FACET_MAXINCLUSIVE
#undef FACET_MINEXCLUSIVE
#undef FACET_MININCLUSIVE
#undef FACET_PATTERN
#undef FACET_WHITESPACE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $FloatDV$XFloat = ::com::sun::org::apache::xerces::internal::impl::dv::xs::FloatDV$XFloat;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$MethodInfo _FloatDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FloatDV, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(FloatDV, compare, int32_t, Object$*, Object$*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FloatDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(FloatDV, getAllowedFacets, int16_t)},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FloatDV, isIdentical, bool, Object$*, Object$*)},
	{}
};

$InnerClassInfo _FloatDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV$XFloat", "com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV", "XFloat", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FloatDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_FloatDV_MethodInfo_,
	nullptr,
	nullptr,
	_FloatDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV$XFloat"
};

$Object* allocate$FloatDV($Class* clazz) {
	return $of($alloc(FloatDV));
}

void FloatDV::init$() {
	$TypeValidator::init$();
}

int16_t FloatDV::getAllowedFacets() {
	return ((int16_t)(((((($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_MAXINCLUSIVE) | $XSSimpleTypeDecl::FACET_MININCLUSIVE) | $XSSimpleTypeDecl::FACET_MAXEXCLUSIVE) | $XSSimpleTypeDecl::FACET_MINEXCLUSIVE));
}

$Object* FloatDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of($new($FloatDV$XFloat, content));
	} catch ($NumberFormatException& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("float"_s)
		}));
	}
	$shouldNotReachHere();
}

int32_t FloatDV::compare(Object$* value1, Object$* value2) {
	return $nc(($cast($FloatDV$XFloat, value1)))->compareTo($cast($FloatDV$XFloat, value2));
}

bool FloatDV::isIdentical(Object$* value1, Object$* value2) {
	if ($instanceOf($FloatDV$XFloat, value2)) {
		return $nc(($cast($FloatDV$XFloat, value1)))->isIdentical($cast($FloatDV$XFloat, value2));
	}
	return false;
}

FloatDV::FloatDV() {
}

$Class* FloatDV::load$($String* name, bool initialize) {
	$loadClass(FloatDV, name, initialize, &_FloatDV_ClassInfo_, allocate$FloatDV);
	return class$;
}

$Class* FloatDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com