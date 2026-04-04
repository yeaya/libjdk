#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMRepeatingLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>
#include <jcpp.h>

using $XSCMLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf;
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
							namespace xs {
								namespace models {

void XSCMRepeatingLeaf::init$(int32_t type, Object$* leaf, int32_t minOccurs, int32_t maxOccurs, int32_t id, int32_t position) {
	$XSCMLeaf::init$(type, leaf, id, position);
	this->fMinOccurs = minOccurs;
	this->fMaxOccurs = maxOccurs;
}

int32_t XSCMRepeatingLeaf::getMinOccurs() {
	return this->fMinOccurs;
}

int32_t XSCMRepeatingLeaf::getMaxOccurs() {
	return this->fMaxOccurs;
}

XSCMRepeatingLeaf::XSCMRepeatingLeaf() {
}

$Class* XSCMRepeatingLeaf::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fMinOccurs", "I", nullptr, $PRIVATE | $FINAL, $field(XSCMRepeatingLeaf, fMinOccurs)},
		{"fMaxOccurs", "I", nullptr, $PRIVATE | $FINAL, $field(XSCMRepeatingLeaf, fMaxOccurs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;IIII)V", nullptr, $PUBLIC, $method(XSCMRepeatingLeaf, init$, void, int32_t, Object$*, int32_t, int32_t, int32_t, int32_t)},
		{"getMaxOccurs", "()I", nullptr, $FINAL, $method(XSCMRepeatingLeaf, getMaxOccurs, int32_t)},
		{"getMinOccurs", "()I", nullptr, $FINAL, $method(XSCMRepeatingLeaf, getMinOccurs, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMRepeatingLeaf",
		"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMLeaf",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSCMRepeatingLeaf, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSCMRepeatingLeaf);
	});
	return class$;
}

$Class* XSCMRepeatingLeaf::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com