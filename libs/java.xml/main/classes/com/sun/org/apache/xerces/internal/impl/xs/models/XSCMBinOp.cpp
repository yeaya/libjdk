#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMBinOp.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <jcpp.h>

#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE

using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
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

$FieldInfo _XSCMBinOp_FieldInfo_[] = {
	{"fLeftChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(XSCMBinOp, fLeftChild)},
	{"fRightChild", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(XSCMBinOp, fRightChild)},
	{}
};

$MethodInfo _XSCMBinOp_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PUBLIC, $method(XSCMBinOp, init$, void, int32_t, $CMNode*, $CMNode*)},
	{"calcFirstPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMBinOp, calcFirstPos, void, $CMStateSet*)},
	{"calcLastPos", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;)V", nullptr, $PROTECTED, $virtualMethod(XSCMBinOp, calcLastPos, void, $CMStateSet*)},
	{"getLeft", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(XSCMBinOp, getLeft, $CMNode*)},
	{"getRight", "()Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $FINAL, $method(XSCMBinOp, getRight, $CMNode*)},
	{"isNullable", "()Z", nullptr, $PUBLIC, $virtualMethod(XSCMBinOp, isNullable, bool)},
	{}
};

$ClassInfo _XSCMBinOp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMBinOp",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.CMNode",
	nullptr,
	_XSCMBinOp_FieldInfo_,
	_XSCMBinOp_MethodInfo_
};

$Object* allocate$XSCMBinOp($Class* clazz) {
	return $of($alloc(XSCMBinOp));
}

void XSCMBinOp::init$(int32_t type, $CMNode* leftNode, $CMNode* rightNode) {
	$CMNode::init$(type);
	bool var$0 = (this->type() != $XSModelGroupImpl::MODELGROUP_CHOICE);
	if (var$0 && (this->type() != $XSModelGroupImpl::MODELGROUP_SEQUENCE)) {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
	$set(this, fLeftChild, leftNode);
	$set(this, fRightChild, rightNode);
}

$CMNode* XSCMBinOp::getLeft() {
	return this->fLeftChild;
}

$CMNode* XSCMBinOp::getRight() {
	return this->fRightChild;
}

bool XSCMBinOp::isNullable() {
	if (type() == $XSModelGroupImpl::MODELGROUP_CHOICE) {
		bool var$0 = $nc(this->fLeftChild)->isNullable();
		return (var$0 || $nc(this->fRightChild)->isNullable());
	} else if (type() == $XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		bool var$1 = $nc(this->fLeftChild)->isNullable();
		return (var$1 && $nc(this->fRightChild)->isNullable());
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

void XSCMBinOp::calcFirstPos($CMStateSet* toSet) {
	$useLocalCurrentObjectStackCache();
	if (type() == $XSModelGroupImpl::MODELGROUP_CHOICE) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->firstPos()));
		toSet->union$($($nc(this->fRightChild)->firstPos()));
	} else if (type() == $XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->firstPos()));
		if ($nc(this->fLeftChild)->isNullable()) {
			toSet->union$($($nc(this->fRightChild)->firstPos()));
		}
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

void XSCMBinOp::calcLastPos($CMStateSet* toSet) {
	$useLocalCurrentObjectStackCache();
	if (type() == $XSModelGroupImpl::MODELGROUP_CHOICE) {
		$nc(toSet)->setTo($($nc(this->fLeftChild)->lastPos()));
		toSet->union$($($nc(this->fRightChild)->lastPos()));
	} else if (type() == $XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		$nc(toSet)->setTo($($nc(this->fRightChild)->lastPos()));
		if ($nc(this->fRightChild)->isNullable()) {
			toSet->union$($($nc(this->fLeftChild)->lastPos()));
		}
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_BST"_s);
	}
}

XSCMBinOp::XSCMBinOp() {
}

$Class* XSCMBinOp::load$($String* name, bool initialize) {
	$loadClass(XSCMBinOp, name, initialize, &_XSCMBinOp_ClassInfo_, allocate$XSCMBinOp);
	return class$;
}

$Class* XSCMBinOp::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com