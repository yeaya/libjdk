#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnyAtomicDV.h>

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

$MethodInfo _AnyAtomicDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(AnyAtomicDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnyAtomicDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(AnyAtomicDV, getAllowedFacets, int16_t)},
	{}
};

$ClassInfo _AnyAtomicDV_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.AnyAtomicDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_AnyAtomicDV_MethodInfo_
};

$Object* allocate$AnyAtomicDV($Class* clazz) {
	return $of($alloc(AnyAtomicDV));
}

void AnyAtomicDV::init$() {
	$TypeValidator::init$();
}

int16_t AnyAtomicDV::getAllowedFacets() {
	return (int16_t)0;
}

$Object* AnyAtomicDV::getActualValue($String* content, $ValidationContext* context) {
	return $of(content);
}

AnyAtomicDV::AnyAtomicDV() {
}

$Class* AnyAtomicDV::load$($String* name, bool initialize) {
	$loadClass(AnyAtomicDV, name, initialize, &_AnyAtomicDV_ClassInfo_, allocate$AnyAtomicDV);
	return class$;
}

$Class* AnyAtomicDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com