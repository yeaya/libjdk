#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$ParentIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END
#undef NTYPES
#undef NULL
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
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

void SAX2DTM2$ParentIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_nodeType = $DTM::NULL;
}

$DTMAxisIterator* SAX2DTM2$ParentIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		this->_startNode = node;
		if (node != $DTM::NULL) {
			this->_currentNode = this->this$0->_parent2(this->this$0->makeNodeIdentity(node));
		} else {
			this->_currentNode = $DTM::NULL;
		}
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* SAX2DTM2$ParentIterator::setNodeType(int32_t type) {
	this->_nodeType = type;
	return this;
}

int32_t SAX2DTM2$ParentIterator::next() {
	int32_t result = this->_currentNode;
	if (result == $DTMAxisIterator::END) {
		return $DTM::NULL;
	}
	if (this->_nodeType == -1) {
		this->_currentNode = $DTMAxisIterator::END;
		return returnNode(this->this$0->makeNodeHandle(result));
	} else if (this->_nodeType >= $DTM::NTYPES) {
		if (this->_nodeType == this->this$0->_exptype2(result)) {
			this->_currentNode = $DTMAxisIterator::END;
			return returnNode(this->this$0->makeNodeHandle(result));
		}
	} else if (this->_nodeType == this->this$0->_type2(result)) {
		this->_currentNode = $DTMAxisIterator::END;
		return returnNode(this->this$0->makeNodeHandle(result));
	}
	return $DTM::NULL;
}

SAX2DTM2$ParentIterator::SAX2DTM2$ParentIterator() {
}

$Class* SAX2DTM2$ParentIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$ParentIterator, this$0)},
		{"_nodeType", "I", nullptr, $PRIVATE, $field(SAX2DTM2$ParentIterator, _nodeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$ParentIterator, init$, void, $SAX2DTM2*)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ParentIterator, next, int32_t)},
		{"setNodeType", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $method(SAX2DTM2$ParentIterator, setNodeType, $DTMAxisIterator*, int32_t)},
		{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$ParentIterator, setStartNode, $DTMAxisIterator*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "ParentIterator", $PUBLIC | $FINAL},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$ParentIterator",
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
	$loadClass(SAX2DTM2$ParentIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAX2DTM2$ParentIterator);
	});
	return class$;
}

$Class* SAX2DTM2$ParentIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com