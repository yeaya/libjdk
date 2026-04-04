#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$AncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef END
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
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

void SAX2DTM2$AncestorIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	$set(this, m_ancestors, $new($ints, SAX2DTM2$AncestorIterator::m_blocksize));
	this->m_size = 0;
}

int32_t SAX2DTM2$AncestorIterator::getStartNode() {
	return this->m_realStartNode;
}

bool SAX2DTM2$AncestorIterator::isReverse() {
	return true;
}

$DTMAxisIterator* SAX2DTM2$AncestorIterator::cloneIterator() {
	$useLocalObjectStack();
	this->_isRestartable = false;
	try {
		$var(SAX2DTM2$AncestorIterator, clone, $cast(SAX2DTM2$AncestorIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
		$nc(clone)->_startNode = this->_startNode;
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$init($XMLErrorResources);
		$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED, nullptr)));
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* SAX2DTM2$AncestorIterator::setStartNode(int32_t node) {
	$useLocalObjectStack();
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
		if (!this->_includeSelf) {
			nodeID = this->this$0->_parent2(nodeID);
			node = this->this$0->makeNodeHandle(nodeID);
		}
		this->_startNode = node;
		while (nodeID != $DTMAxisIterator::END) {
			if (this->m_size >= $nc(this->m_ancestors)->length) {
				$var($ints, newAncestors, $new($ints, this->m_size * 2));
				$System::arraycopy(this->m_ancestors, 0, newAncestors, 0, this->m_ancestors->length);
				$set(this, m_ancestors, newAncestors);
			}
			this->m_ancestors->set(this->m_size++, node);
			nodeID = this->this$0->_parent2(nodeID);
			node = this->this$0->makeNodeHandle(nodeID);
		}
		this->m_ancestorsPos = this->m_size - 1;
		this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->get(this->m_ancestorsPos) : $DTM::NULL;
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* SAX2DTM2$AncestorIterator::reset() {
	this->m_ancestorsPos = this->m_size - 1;
	this->_currentNode = (this->m_ancestorsPos >= 0) ? $nc(this->m_ancestors)->get(this->m_ancestorsPos) : $DTM::NULL;
	return resetPosition();
}

int32_t SAX2DTM2$AncestorIterator::next() {
	int32_t next = this->_currentNode;
	int32_t pos = --this->m_ancestorsPos;
	this->_currentNode = (pos >= 0) ? $nc(this->m_ancestors)->get(this->m_ancestorsPos) : $DTM::NULL;
	return returnNode(next);
}

void SAX2DTM2$AncestorIterator::setMark() {
	this->m_markedPos = this->m_ancestorsPos;
}

void SAX2DTM2$AncestorIterator::gotoMark() {
	this->m_ancestorsPos = this->m_markedPos;
	this->_currentNode = this->m_ancestorsPos >= 0 ? $nc(this->m_ancestors)->get(this->m_ancestorsPos) : $DTM::NULL;
}

SAX2DTM2$AncestorIterator::SAX2DTM2$AncestorIterator() {
}

$Class* SAX2DTM2$AncestorIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$AncestorIterator, this$0)},
		{"m_blocksize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM2$AncestorIterator, m_blocksize)},
		{"m_ancestors", "[I", nullptr, 0, $field(SAX2DTM2$AncestorIterator, m_ancestors)},
		{"m_size", "I", nullptr, 0, $field(SAX2DTM2$AncestorIterator, m_size)},
		{"m_ancestorsPos", "I", nullptr, 0, $field(SAX2DTM2$AncestorIterator, m_ancestorsPos)},
		{"m_markedPos", "I", nullptr, 0, $field(SAX2DTM2$AncestorIterator, m_markedPos)},
		{"m_realStartNode", "I", nullptr, 0, $field(SAX2DTM2$AncestorIterator, m_realStartNode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$AncestorIterator, init$, void, $SAX2DTM2*)},
		{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, cloneIterator, $DTMAxisIterator*)},
		{"getStartNode", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, getStartNode, int32_t)},
		{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, gotoMark, void)},
		{"isReverse", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SAX2DTM2$AncestorIterator, isReverse, bool)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, next, int32_t)},
		{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, reset, $DTMAxisIterator*)},
		{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, setMark, void)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$AncestorIterator, setStartNode, $DTMAxisIterator*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "AncestorIterator", $PUBLIC},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
	};
	$loadClass(SAX2DTM2$AncestorIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAX2DTM2$AncestorIterator);
	});
	return class$;
}

$Class* SAX2DTM2$AncestorIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com