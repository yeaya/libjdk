#include <com/sun/org/apache/xerces/internal/impl/dtd/models/ContentModelValidator.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <jcpp.h>

using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$MethodInfo _ContentModelValidator_MethodInfo_[] = {
	{"validate", "([Lcom/sun/org/apache/xerces/internal/xni/QName;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentModelValidator, validate, int32_t, $QNameArray*, int32_t, int32_t)},
	{}
};

$ClassInfo _ContentModelValidator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator",
	nullptr,
	nullptr,
	nullptr,
	_ContentModelValidator_MethodInfo_
};

$Object* allocate$ContentModelValidator($Class* clazz) {
	return $of($alloc(ContentModelValidator));
}

$Class* ContentModelValidator::load$($String* name, bool initialize) {
	$loadClass(ContentModelValidator, name, initialize, &_ContentModelValidator_ClassInfo_, allocate$ContentModelValidator);
	return class$;
}

$Class* ContentModelValidator::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com