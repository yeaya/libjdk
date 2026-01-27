#include <com/sun/org/apache/xml/internal/dtm/ref/DTMNodeIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMDOMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/lang/CloneNotSupportedException.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <jcpp.h>

#undef INVALID_STATE_ERR
#undef NOT_SUPPORTED_ERR
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDOMException = ::com::sun::org::apache::xml::internal::dtm::DTMDOMException;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMException = ::org::w3c::dom::DOMException;
using $Node = ::org::w3c::dom::Node;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMNodeIterator_FieldInfo_[] = {
	{"dtm_iter", "Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PRIVATE, $field(DTMNodeIterator, dtm_iter)},
	{"valid", "Z", nullptr, $PRIVATE, $field(DTMNodeIterator, valid)},
	{}
};

$MethodInfo _DTMNodeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC, $method(DTMNodeIterator, init$, void, $DTMIterator*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, detach, void)},
	{"getDTMIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, getDTMIterator, $DTMIterator*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, getExpandEntityReferences, bool)},
	{"getFilter", "()Lorg/w3c/dom/traversal/NodeFilter;", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, getFilter, $NodeFilter*)},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, getRoot, $Node*)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, getWhatToShow, int32_t)},
	{"nextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, nextNode, $Node*), "org.w3c.dom.DOMException"},
	{"previousNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DTMNodeIterator, previousNode, $Node*)},
	{}
};

$ClassInfo _DTMNodeIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMNodeIterator",
	"java.lang.Object",
	"org.w3c.dom.traversal.NodeIterator",
	_DTMNodeIterator_FieldInfo_,
	_DTMNodeIterator_MethodInfo_
};

$Object* allocate$DTMNodeIterator($Class* clazz) {
	return $of($alloc(DTMNodeIterator));
}

void DTMNodeIterator::init$($DTMIterator* dtmIterator) {
	this->valid = true;
	try {
		$set(this, dtm_iter, $cast($DTMIterator, $nc(dtmIterator)->clone()));
	} catch ($CloneNotSupportedException& cnse) {
		$throwNew($WrappedRuntimeException, cnse);
	}
}

$DTMIterator* DTMNodeIterator::getDTMIterator() {
	return this->dtm_iter;
}

void DTMNodeIterator::detach() {
	this->valid = false;
}

bool DTMNodeIterator::getExpandEntityReferences() {
	return false;
}

$NodeFilter* DTMNodeIterator::getFilter() {
	$throwNew($DTMDOMException, $DOMException::NOT_SUPPORTED_ERR);
	$shouldNotReachHere();
}

$Node* DTMNodeIterator::getRoot() {
	int32_t handle = $nc(this->dtm_iter)->getRoot();
	return $nc($($nc(this->dtm_iter)->getDTM(handle)))->getNode(handle);
}

int32_t DTMNodeIterator::getWhatToShow() {
	return $nc(this->dtm_iter)->getWhatToShow();
}

$Node* DTMNodeIterator::nextNode() {
	if (!this->valid) {
		$throwNew($DTMDOMException, $DOMException::INVALID_STATE_ERR);
	}
	int32_t handle = $nc(this->dtm_iter)->nextNode();
	if (handle == $DTM::NULL) {
		return nullptr;
	}
	return $nc($($nc(this->dtm_iter)->getDTM(handle)))->getNode(handle);
}

$Node* DTMNodeIterator::previousNode() {
	if (!this->valid) {
		$throwNew($DTMDOMException, $DOMException::INVALID_STATE_ERR);
	}
	int32_t handle = $nc(this->dtm_iter)->previousNode();
	if (handle == $DTM::NULL) {
		return nullptr;
	}
	return $nc($($nc(this->dtm_iter)->getDTM(handle)))->getNode(handle);
}

DTMNodeIterator::DTMNodeIterator() {
}

$Class* DTMNodeIterator::load$($String* name, bool initialize) {
	$loadClass(DTMNodeIterator, name, initialize, &_DTMNodeIterator_ClassInfo_, allocate$DTMNodeIterator);
	return class$;
}

$Class* DTMNodeIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com