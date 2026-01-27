#include <com/sun/org/apache/xerces/internal/impl/dv/xs/HexBinaryDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/HexBin.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/HexBinaryDV$XHex.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <jcpp.h>

#undef FACET_ENUMERATION
#undef FACET_LENGTH
#undef FACET_MAXLENGTH
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $HexBin = ::com::sun::org::apache::xerces::internal::impl::dv::util::HexBin;
using $HexBinaryDV$XHex = ::com::sun::org::apache::xerces::internal::impl::dv::xs::HexBinaryDV$XHex;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$MethodInfo _HexBinaryDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HexBinaryDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HexBinaryDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(HexBinaryDV, getAllowedFacets, int16_t)},
	{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(HexBinaryDV, getDataLength, int32_t, Object$*)},
	{}
};

$InnerClassInfo _HexBinaryDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV$XHex", "com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV", "XHex", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _HexBinaryDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_HexBinaryDV_MethodInfo_,
	nullptr,
	nullptr,
	_HexBinaryDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.HexBinaryDV$XHex"
};

$Object* allocate$HexBinaryDV($Class* clazz) {
	return $of($alloc(HexBinaryDV));
}

void HexBinaryDV::init$() {
	$TypeValidator::init$();
}

int16_t HexBinaryDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* HexBinaryDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, decoded, $HexBin::decode(content));
	if (decoded == nullptr) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("hexBinary"_s)
		}));
	}
	return $of($new($HexBinaryDV$XHex, decoded));
}

int32_t HexBinaryDV::getDataLength(Object$* value) {
	return $nc(($cast($HexBinaryDV$XHex, value)))->getLength();
}

HexBinaryDV::HexBinaryDV() {
}

$Class* HexBinaryDV::load$($String* name, bool initialize) {
	$loadClass(HexBinaryDV, name, initialize, &_HexBinaryDV_ClassInfo_, allocate$HexBinaryDV);
	return class$;
}

$Class* HexBinaryDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com