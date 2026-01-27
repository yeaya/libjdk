#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSCMLeaf_FieldInfo_[] = {
	{"fLeaf", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSCMLeaf, fLeaf)},
	{"fParticleId", "I", nullptr, $PRIVATE, $field(XSCMLeaf, fParticleId)},
	{"fPosition", "I", nullptr, $PRIVATE, $field(XSCMLeaf, fPosition)},
	{}
};

$MethodInfo _XSCMLeaf_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;II)V", nullptr, $PUBLIC, $method(XSCMLeaf, init$, void, int32_t, Object$*, int32_t, int32_t)},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMLeaf, calcFirstPos, void, $CMStateSet*)},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMLeaf, calcLastPos, void, $CMStateSet*)},
	{"getLeaf", "()Ljava/lang/Object;", nullptr, $FINAL, $method(XSCMLeaf, getLeaf, $Object*)},
	{"getParticleId", "()I", nullptr, $FINAL, $method(XSCMLeaf, getParticleId, int32_t)},
	{"getPosition", "()I", nullptr, $FINAL, $method(XSCMLeaf, getPosition, int32_t)},
	{"isNullable", "()Z", nullptr, $PUBLIC, $virtualMethod(XSCMLeaf, isNullable, bool)},
	{"setPosition", "(I)V", nullptr, $FINAL, $method(XSCMLeaf, setPosition, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSCMLeaf, toString, $String*)},
	{}
};

$ClassInfo _XSCMLeaf_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMLeaf",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_XSCMLeaf_FieldInfo_,
	_XSCMLeaf_MethodInfo_
};

$Object* allocate$XSCMLeaf($Class* clazz) {
	return $of($alloc(XSCMLeaf));
}

void XSCMLeaf::init$(int32_t type, Object$* leaf, int32_t id, int32_t position) {
	$CMNode::init$(type);
	$set(this, fLeaf, nullptr);
	this->fParticleId = -1;
	this->fPosition = -1;
	$set(this, fLeaf, leaf);
	this->fParticleId = id;
	this->fPosition = position;
}

$Object* XSCMLeaf::getLeaf() {
	return $of(this->fLeaf);
}

int32_t XSCMLeaf::getParticleId() {
	return this->fParticleId;
}

int32_t XSCMLeaf::getPosition() {
	return this->fPosition;
}

void XSCMLeaf::setPosition(int32_t newPosition) {
	this->fPosition = newPosition;
}

bool XSCMLeaf::isNullable() {
	return (this->fPosition == -1);
}

$String* XSCMLeaf::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, strRet, $new($StringBuffer, $($nc($of(this->fLeaf))->toString())));
	if (this->fPosition >= 0) {
		strRet->append($$str({" (Pos:"_s, $($Integer::toString(this->fPosition)), ")"_s}));
	}
	return strRet->toString();
}

void XSCMLeaf::calcFirstPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

void XSCMLeaf::calcLastPos($CMStateSet* toSet) {
	if (this->fPosition == -1) {
		$nc(toSet)->zeroBits();
	} else {
		$nc(toSet)->setBit(this->fPosition);
	}
}

XSCMLeaf::XSCMLeaf() {
}

$Class* XSCMLeaf::load$($String* name, bool initialize) {
	$loadClass(XSCMLeaf, name, initialize, &_XSCMLeaf_ClassInfo_, allocate$XSCMLeaf);
	return class$;
}

$Class* XSCMLeaf::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com