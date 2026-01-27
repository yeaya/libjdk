#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnySimpleDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <jcpp.h>

using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
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

$MethodInfo _AnySimpleDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AnySimpleDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnySimpleDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(AnySimpleDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _AnySimpleDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AnySimpleDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_AnySimpleDV_MethodInfo_
};

$Object* allocate$AnySimpleDV($Class* clazz) {
	return $of($alloc(AnySimpleDV));
}

void AnySimpleDV::init$() {
	$TypeValidator::init$();
}

int16_t AnySimpleDV::getAllowedFacets() {
	return (int16_t)0;
}

$Object* AnySimpleDV::getActualValue($String* content, $ValidationContext* context) {
	return $of(content);
}

AnySimpleDV::AnySimpleDV() {
}

$Class* AnySimpleDV::load$($String* name, bool initialize) {
	$loadClass(AnySimpleDV, name, initialize, &_AnySimpleDV_ClassInfo_, allocate$AnySimpleDV);
	return class$;
}

$Class* AnySimpleDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com