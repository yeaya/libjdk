#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedAncestorIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExtendedType.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$AncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef NTYPES
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $ExtendedType = ::com::sun::org::apache::xml::internal::dtm::ref::ExtendedType;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $SAX2DTM2$AncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2$AncestorIterator;
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
								namespace sax2dtm {

$FieldInfo _SAX2DTM2$TypedAncestorIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$TypedAncestorIterator, this$0)},
	{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(SAX2DTM2$TypedAncestorIterator, _nodeType)},
	{}
};

$MethodInfo _SAX2DTM2$TypedAncestorIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;I)V", nullptr, $PUBLIC, $method(SAX2DTM2$TypedAncestorIterator, init$, void, $SAX2DTM2*, int32_t)},
	{"getLast", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedAncestorIterator, getLast, int32_t)},
	{"getNodeByPosition", "(I)I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedAncestorIterator, getNodeByPosition, int32_t, int32_t)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$TypedAncestorIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$TypedAncestorIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "TypedAncestorIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "AncestorIterator", $PUBLIC},
	{}
};

$ClassInfo _SAX2DTM2$TypedAncestorIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$TypedAncestorIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator",
	nullptr,
	_SAX2DTM2$TypedAncestorIterator_FieldInfo_,
	_SAX2DTM2$TypedAncestorIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$TypedAncestorIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$TypedAncestorIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$TypedAncestorIterator));
}

void SAX2DTM2$TypedAncestorIterator::init$($SAX2DTM2* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$SAX2DTM2$AncestorIterator::init$(this$0);
	this->_nodeType = type;
}

$DTMAxisIterator* SAX2DTM2$TypedAncestorIterator::setStartNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	this->m_realStartNode = node;
	if (this->_isRestartable) {
		int32_t nodeID = this->this$0->makeNodeIdentity(node);
		this->m_size = 0;
		if (nodeID == $DTM::NULL) {
			this->_currentNode = $DTM::NULL;
			this->m_ancestorsPos = 0;
			return this;
		}
		int32_t nodeType = this->_nodeType;
		if (!this->_includeSelf) {
			nodeID = this->this$0->_parent2(nodeID);
			node = this->this$0->makeNodeHandle(nodeID);
		}
		this->_startNode = node;
		if (nodeType >= $DTM::NTYPES) {
			while (nodeID != $DTMAxisIterator::END) {
				int32_t eType = this->this$0->_exptype2(nodeID);
				if (eType == nodeType) {
					if (this->m_size >= $nc(this->m_ancestors)->length) {
						$var($ints, newAncestors, $new($ints, this->m_size * 2));
						$System::arraycopy(this->m_ancestors, 0, newAncestors, 0, $nc(this->m_ancestors)->length);
						$set(this, m_ancestors, newAncestors);
					}
					$nc(this->m_ancestors)->set(this->m_size++, this->this$0->makeNodeHandle(nodeID));
				}
				nodeID = this->this$0->_parent2(nodeID);
			}
		} else {
			while (nodeID != $DTMAxisIterator::END) {
				int32_t eType = this->this$0->_exptype2(nodeID);
				if ((eType < $DTM::NTYPES && eType == nodeType) || (eType >= $DTM::NTYPES && $nc($nc(this->this$0->m_extendedTypes)->get(eType))->getNodeType() == nodeType)) {
					if (this->m_size >= $nc(this->m_ancestors)->length) {
						$var($ints, newAncestors, $new($ints, this->m_size * 2));
						$System::arraycopy(this->m_ancestors, 0, newAncestors, 0, $nc(this->m_ancestors)->length);
						$set(this, m_ancestors, newAncestors);
					}
					$nc(this->m_ancestors)->set(this->m_size++, this->this$0->makeNodeHandle(nodeID));
				}
				nodeID = this->this$0->_parent2(nodeID);
			}
		}
		this->m_ancestorsPos = this->m_size - 1;
		this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->get(this->m_ancestorsPos) : $DTM::NULL;
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$TypedAncestorIterator::getNodeByPosition(int32_t position) {
	if (position > 0 && position <= this->m_size) {
		return $nc(this->m_ancestors)->get(position - 1);
	} else {
		return $DTM::NULL;
	}
}

int32_t SAX2DTM2$TypedAncestorIterator::getLast() {
	return this->m_size;
}

SAX2DTM2$TypedAncestorIterator::SAX2DTM2$TypedAncestorIterator() {
}

$Class* SAX2DTM2$TypedAncestorIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$TypedAncestorIterator, name, initialize, &_SAX2DTM2$TypedAncestorIterator_ClassInfo_, allocate$SAX2DTM2$TypedAncestorIterator);
	return class$;
}

$Class* SAX2DTM2$TypedAncestorIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com