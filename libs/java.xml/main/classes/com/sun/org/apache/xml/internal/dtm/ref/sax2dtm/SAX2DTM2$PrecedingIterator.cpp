#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$PrecedingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <java/lang/CloneNotSupportedException.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef ER_ITERATOR_CLONE_NOT_SUPPORTED
#undef ROOTNODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
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

$FieldInfo _SAX2DTM2$PrecedingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;", nullptr, $FINAL | $SYNTHETIC, $field(SAX2DTM2$PrecedingIterator, this$0)},
	{"_maxAncestors", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SAX2DTM2$PrecedingIterator, _maxAncestors)},
	{"_stack", "[I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _stack)},
	{"_sp", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _sp)},
	{"_oldsp", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _oldsp)},
	{"_markedsp", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _markedsp)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _markedNode)},
	{"_markedDescendant", "I", nullptr, $PROTECTED, $field(SAX2DTM2$PrecedingIterator, _markedDescendant)},
	{}
};

$MethodInfo _SAX2DTM2$PrecedingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2;)V", nullptr, $PUBLIC, $method(SAX2DTM2$PrecedingIterator, init$, void, $SAX2DTM2*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(SAX2DTM2$PrecedingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _SAX2DTM2$PrecedingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2", "PrecedingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SAX2DTM2$PrecedingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$PrecedingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_SAX2DTM2$PrecedingIterator_FieldInfo_,
	_SAX2DTM2$PrecedingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAX2DTM2$PrecedingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2"
};

$Object* allocate$SAX2DTM2$PrecedingIterator($Class* clazz) {
	return $of($alloc(SAX2DTM2$PrecedingIterator));
}

void SAX2DTM2$PrecedingIterator::init$($SAX2DTM2* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	$set(this, _stack, $new($ints, SAX2DTM2$PrecedingIterator::_maxAncestors));
}

bool SAX2DTM2$PrecedingIterator::isReverse() {
	return true;
}

$DTMAxisIterator* SAX2DTM2$PrecedingIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	this->_isRestartable = false;
	try {
		$var(SAX2DTM2$PrecedingIterator, clone, $cast(SAX2DTM2$PrecedingIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
		$var($ints, stackCopy, $new($ints, $nc(this->_stack)->length));
		$System::arraycopy(this->_stack, 0, stackCopy, 0, $nc(this->_stack)->length);
		$set($nc(clone), _stack, stackCopy);
		return clone;
	} catch ($CloneNotSupportedException& e) {
		$init($XMLErrorResources);
		$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ITERATOR_CLONE_NOT_SUPPORTED, nullptr)));
	}
	$shouldNotReachHere();
}

$DTMAxisIterator* SAX2DTM2$PrecedingIterator::setStartNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		node = this->this$0->makeNodeIdentity(node);
		int32_t parent = 0;
		int32_t index = 0;
		if (this->this$0->_type2(node) == $DTM::ATTRIBUTE_NODE) {
			node = this->this$0->_parent2(node);
		}
		this->_startNode = node;
		$nc(this->_stack)->set(index = 0, node);
		parent = node;
		while ((parent = this->this$0->_parent2(parent)) != -1) {
			if (++index == $nc(this->_stack)->length) {
				$var($ints, stack, $new($ints, index * 2));
				$System::arraycopy(this->_stack, 0, stack, 0, index);
				$set(this, _stack, stack);
			}
			$nc(this->_stack)->set(index, parent);
		}
		if (index > 0) {
			--index;
		}
		this->_currentNode = $nc(this->_stack)->get(index);
		this->_oldsp = (this->_sp = index);
		return resetPosition();
	}
	return this;
}

int32_t SAX2DTM2$PrecedingIterator::next() {
	for (++this->_currentNode; this->_sp >= 0; ++this->_currentNode) {
		if (this->_currentNode < $nc(this->_stack)->get(this->_sp)) {
			int32_t type = this->this$0->_type2(this->_currentNode);
			if (type != (int16_t)2 && type != (int16_t)13) {
				return returnNode(this->this$0->makeNodeHandle(this->_currentNode));
			}
		} else {
			--this->_sp;
		}
	}
	return -1;
}

$DTMAxisIterator* SAX2DTM2$PrecedingIterator::reset() {
	this->_sp = this->_oldsp;
	return resetPosition();
}

void SAX2DTM2$PrecedingIterator::setMark() {
	this->_markedsp = this->_sp;
	this->_markedNode = this->_currentNode;
	this->_markedDescendant = $nc(this->_stack)->get(0);
}

void SAX2DTM2$PrecedingIterator::gotoMark() {
	this->_sp = this->_markedsp;
	this->_currentNode = this->_markedNode;
}

SAX2DTM2$PrecedingIterator::SAX2DTM2$PrecedingIterator() {
}

$Class* SAX2DTM2$PrecedingIterator::load$($String* name, bool initialize) {
	$loadClass(SAX2DTM2$PrecedingIterator, name, initialize, &_SAX2DTM2$PrecedingIterator_ClassInfo_, allocate$SAX2DTM2$PrecedingIterator);
	return class$;
}

$Class* SAX2DTM2$PrecedingIterator::class$ = nullptr;

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com