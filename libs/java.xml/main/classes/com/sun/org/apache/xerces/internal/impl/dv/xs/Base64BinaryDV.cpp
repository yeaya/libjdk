#include <com/sun/org/apache/xerces/internal/impl/dv/xs/Base64BinaryDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/util/Base64.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/Base64BinaryDV$XBase64.h>
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
using $Base64 = ::com::sun::org::apache::xerces::internal::impl::dv::util::Base64;
using $Base64BinaryDV$XBase64 = ::com::sun::org::apache::xerces::internal::impl::dv::xs::Base64BinaryDV$XBase64;
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

$MethodInfo _Base64BinaryDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Base64BinaryDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Base64BinaryDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(Base64BinaryDV, getAllowedFacets, int16_t)},
	{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Base64BinaryDV, getDataLength, int32_t, Object$*)},
	{}
};

$InnerClassInfo _Base64BinaryDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV$XBase64", "com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV", "XBase64", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Base64BinaryDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	nullptr,
	_Base64BinaryDV_MethodInfo_,
	nullptr,
	nullptr,
	_Base64BinaryDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.Base64BinaryDV$XBase64"
};

$Object* allocate$Base64BinaryDV($Class* clazz) {
	return $of($alloc(Base64BinaryDV));
}

void Base64BinaryDV::init$() {
	$TypeValidator::init$();
}

int16_t Base64BinaryDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* Base64BinaryDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, decoded, $Base64::decode(content));
	if (decoded == nullptr) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("base64Binary"_s)
		}));
	}
	return $of($new($Base64BinaryDV$XBase64, decoded));
}

int32_t Base64BinaryDV::getDataLength(Object$* value) {
	return $nc(($cast($Base64BinaryDV$XBase64, value)))->getLength();
}

Base64BinaryDV::Base64BinaryDV() {
}

$Class* Base64BinaryDV::load$($String* name, bool initialize) {
	$loadClass(Base64BinaryDV, name, initialize, &_Base64BinaryDV_ClassInfo_, allocate$Base64BinaryDV);
	return class$;
}

$Class* Base64BinaryDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com