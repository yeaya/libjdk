#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV$XDouble.h>
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
using $DoubleDV$XDouble = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV$XDouble;
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

$MethodInfo _DoubleDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DoubleDV, init$, void)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(DoubleDV, compare, int32_t, Object$*, Object$*)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DoubleDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(DoubleDV, getAllowedFacets, int16_t)},
	{"isIdentical", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DoubleDV, isIdentical, bool, Object$*, Object$*)},
	{"isPossibleFP", "(Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(DoubleDV, isPossibleFP, bool, $String*)},
	{}
};

$InnerClassInfo _DoubleDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV$XDouble", "com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV", "XDouble", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DoubleDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_DoubleDV_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV$XDouble"
};

$Object* allocate$DoubleDV($Class* clazz) {
	return $of($alloc(DoubleDV));
}

void DoubleDV::init$() {
	$TypeValidator::init$();
}

int16_t DoubleDV::getAllowedFacets() {
	return ((int16_t)(((((($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_MAXINCLUSIVE) | $XSSimpleTypeDecl::FACET_MININCLUSIVE) | $XSSimpleTypeDecl::FACET_MAXEXCLUSIVE) | $XSSimpleTypeDecl::FACET_MINEXCLUSIVE));
}

$Object* DoubleDV::getActualValue($String* content, $ValidationContext* context) {
	try {
		return $of($new($DoubleDV$XDouble, content));
	} catch ($NumberFormatException& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("double"_s)
		}));
	}
	$shouldNotReachHere();
}

int32_t DoubleDV::compare(Object$* value1, Object$* value2) {
	return $nc(($cast($DoubleDV$XDouble, value1)))->compareTo($cast($DoubleDV$XDouble, value2));
}

bool DoubleDV::isIdentical(Object$* value1, Object$* value2) {
	if ($instanceOf($DoubleDV$XDouble, value2)) {
		return $nc(($cast($DoubleDV$XDouble, value1)))->isIdentical($cast($DoubleDV$XDouble, value2));
	}
	return false;
}

bool DoubleDV::isPossibleFP($String* val) {
	$init(DoubleDV);
	int32_t length = $nc(val)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = val->charAt(i);
		if (!(c >= u'0' && c <= u'9' || c == u'.' || c == u'-' || c == u'+' || c == u'E' || c == u'e')) {
			return false;
		}
	}
	return true;
}

DoubleDV::DoubleDV() {
}

$Class* DoubleDV::load$($String* name, bool initialize) {
	$loadClass(DoubleDV, name, initialize, &_DoubleDV_ClassInfo_, allocate$DoubleDV);
	return class$;
}

$Class* DoubleDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com