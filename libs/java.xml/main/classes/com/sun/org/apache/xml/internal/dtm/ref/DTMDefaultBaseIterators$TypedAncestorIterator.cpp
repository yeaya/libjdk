#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedAncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$AncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <jcpp.h>

#undef END
#undef NTYPES
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$AncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$AncestorIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

void DTMDefaultBaseIterators$TypedAncestorIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$AncestorIterator::init$(this$0);
	this->_nodeType = type;
}

$DTMAxisIterator* DTMDefaultBaseIterators$TypedAncestorIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	this->m_realStartNode = node;
	if (this->_isRestartable) {
		int32_t nodeID = this->this$0->makeNodeIdentity(node);
		int32_t nodeType = this->_nodeType;
		if (!this->_includeSelf && node != $DTM::NULL) {
			nodeID = this->this$0->_parent(nodeID);
		}
		this->_startNode = node;
		if (nodeType >= $DTM::NTYPES) {
			while (nodeID != $DTMAxisIterator::END) {
				int32_t eType = this->this$0->_exptype(nodeID);
				if (eType == nodeType) {
					$nc(this->m_ancestors)->addElement(this->this$0->makeNodeHandle(nodeID));
				}
				nodeID = this->this$0->_parent(nodeID);
			}
		} else {
			while (nodeID != $DTMAxisIterator::END) {
				int32_t eType = this->this$0->_exptype(nodeID);
				if ((eType >= $DTM::NTYPES && $nc(this->this$0->m_expandedNameTable)->getType(eType) == nodeType) || (eType < $DTM::NTYPES && eType == nodeType)) {
					$nc(this->m_ancestors)->addElement(this->this$0->makeNodeHandle(nodeID));
				}
				nodeID = this->this$0->_parent(nodeID);
			}
		}
		this->m_ancestorsPos = $nc(this->m_ancestors)->size() - 1;
		this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->elementAt(this->m_ancestorsPos) : $DTM::NULL;
		return resetPosition();
	}
	return this;
}

DTMDefaultBaseIterators$TypedAncestorIterator::DTMDefaultBaseIterators$TypedAncestorIterator() {
}

$Class* DTMDefaultBaseIterators$TypedAncestorIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedAncestorIterator, this$0)},
		{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedAncestorIterator, _nodeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedAncestorIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedAncestorIterator, setStartNode, $DTMAxisIterator*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedAncestorIterator", $PUBLIC | $FINAL},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "AncestorIterator", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAncestorIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
	};
	$loadClass(DTMDefaultBaseIterators$TypedAncestorIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseIterators$TypedAncestorIterator);
	});
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedAncestorIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com