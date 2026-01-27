#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BooleanDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <jcpp.h>

#undef FACET_PATTERN
#undef FACET_WHITESPACE
#undef FALSE
#undef TRUE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $Boolean = ::java::lang::Boolean;
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
								namespace xs {

$FieldInfo _BooleanDV_FieldInfo_[] = {
	{"fValueSpace", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BooleanDV, fValueSpace)},
	{}
};

$MethodInfo _BooleanDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BooleanDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BooleanDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(BooleanDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _BooleanDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BooleanDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	_BooleanDV_FieldInfo_,
	_BooleanDV_MethodInfo_
};

$Object* allocate$BooleanDV($Class* clazz) {
	return $of($alloc(BooleanDV));
}

$StringArray* BooleanDV::fValueSpace = nullptr;

void BooleanDV::init$() {
	$TypeValidator::init$();
}

int16_t BooleanDV::getAllowedFacets() {
	return ((int16_t)($XSSimpleTypeDecl::FACET_PATTERN | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* BooleanDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Boolean, ret, nullptr);
	bool var$0 = $nc(content)->equals($nc(BooleanDV::fValueSpace)->get(0));
	if (var$0 || $nc(content)->equals($nc(BooleanDV::fValueSpace)->get(2))) {
		$init($Boolean);
		$assign(ret, $Boolean::FALSE);
	} else {
		bool var$2 = content->equals($nc(BooleanDV::fValueSpace)->get(1));
		if (var$2 || content->equals($nc(BooleanDV::fValueSpace)->get(3))) {
			$init($Boolean);
			$assign(ret, $Boolean::TRUE);
		} else {
			$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
				$of(content),
				$of("boolean"_s)
			}));
		}
	}
	return $of(ret);
}

void clinit$BooleanDV($Class* class$) {
	$assignStatic(BooleanDV::fValueSpace, $new($StringArray, {
		"false"_s,
		"true"_s,
		"0"_s,
		"1"_s
	}));
}

BooleanDV::BooleanDV() {
}

$Class* BooleanDV::load$($String* name, bool initialize) {
	$loadClass(BooleanDV, name, initialize, &_BooleanDV_ClassInfo_, clinit$BooleanDV, allocate$BooleanDV);
	return class$;
}

$Class* BooleanDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com