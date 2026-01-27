#include <com/sun/org/apache/xerces/internal/xs/XSParticle.h>

#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <jcpp.h>

using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSParticle_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSParticle, getAnnotations, $XSObjectList*)},
	{"getMaxOccurs", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSParticle, getMaxOccurs, int32_t)},
	{"getMaxOccursUnbounded", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSParticle, getMaxOccursUnbounded, bool)},
	{"getMinOccurs", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSParticle, getMinOccurs, int32_t)},
	{"getTerm", "()Lcom/sun/org/apache/xerces/internal/xs/XSTerm;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSParticle, getTerm, $XSTerm*)},
	{}
};

$ClassInfo _XSParticle_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSParticle",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSObject",
	nullptr,
	_XSParticle_MethodInfo_
};

$Object* allocate$XSParticle($Class* clazz) {
	return $of($alloc(XSParticle));
}

$Class* XSParticle::load$($String* name, bool initialize) {
	$loadClass(XSParticle, name, initialize, &_XSParticle_ClassInfo_, allocate$XSParticle);
	return class$;
}

$Class* XSParticle::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com