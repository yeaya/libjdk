#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMUniOp.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <jcpp.h>

#undef PARTICLE_ONE_OR_MORE
#undef PARTICLE_ZERO_OR_MORE
#undef PARTICLE_ZERO_OR_ONE

using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSCMUniOp_FieldInfo_[] = {
	{"fChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(XSCMUniOp, fChild)},
	{}
};

$MethodInfo _XSCMUniOp_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PUBLIC, $method(XSCMUniOp, init$, void, int32_t, $CMNode*)},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMUniOp, calcFirstPos, void, $CMStateSet*)},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMUniOp, calcLastPos, void, $CMStateSet*)},
	{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(XSCMUniOp, getChild, $CMNode*)},
	{"isNullable", "()Z", nullptr, $PUBLIC, $virtualMethod(XSCMUniOp, isNullable, bool)},
	{"setUserData", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XSCMUniOp, setUserData, void, Object$*)},
	{}
};

$ClassInfo _XSCMUniOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMUniOp",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_XSCMUniOp_FieldInfo_,
	_XSCMUniOp_MethodInfo_
};

$Object* allocate$XSCMUniOp($Class* clazz) {
	return $of($alloc(XSCMUniOp));
}

void XSCMUniOp::init$(int32_t type, $CMNode* childNode) {
	$CMNode::init$(type);
	bool var$1 = (this->type() != $XSParticleDecl::PARTICLE_ZERO_OR_ONE);
	bool var$0 = var$1 && (this->type() != $XSParticleDecl::PARTICLE_ZERO_OR_MORE);
	if (var$0 && (this->type() != $XSParticleDecl::PARTICLE_ONE_OR_MORE)) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_UST"_s);
	}
	$set(this, fChild, childNode);
}

$CMNode* XSCMUniOp::getChild() {
	return this->fChild;
}

bool XSCMUniOp::isNullable() {
	if (type() == $XSParticleDecl::PARTICLE_ONE_OR_MORE) {
		return $nc(this->fChild)->isNullable();
	} else {
		return true;
	}
}

void XSCMUniOp::calcFirstPos($CMStateSet* toSet) {
	$nc(toSet)->setTo($($nc(this->fChild)->firstPos()));
}

void XSCMUniOp::calcLastPos($CMStateSet* toSet) {
	$nc(toSet)->setTo($($nc(this->fChild)->lastPos()));
}

void XSCMUniOp::setUserData(Object$* userData) {
	$CMNode::setUserData(userData);
	$nc(this->fChild)->setUserData(userData);
}

XSCMUniOp::XSCMUniOp() {
}

$Class* XSCMUniOp::load$($String* name, bool initialize) {
	$loadClass(XSCMUniOp, name, initialize, &_XSCMUniOp_ClassInfo_, allocate$XSCMUniOp);
	return class$;
}

$Class* XSCMUniOp::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com