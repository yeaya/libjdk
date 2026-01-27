#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
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

$FieldInfo _DTMDefaultBaseIterators$PrecedingIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$PrecedingIterator, this$0)},
	{"_maxAncestors", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DTMDefaultBaseIterators$PrecedingIterator, _maxAncestors)},
	{"_stack", "[I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _stack)},
	{"_sp", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _sp)},
	{"_oldsp", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _oldsp)},
	{"_markedsp", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _markedsp)},
	{"_markedNode", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _markedNode)},
	{"_markedDescendant", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$PrecedingIterator, _markedDescendant)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$PrecedingIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$PrecedingIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"cloneIterator", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, cloneIterator, $DTMAxisIterator*)},
	{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, gotoMark, void)},
	{"isReverse", "()Z", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, isReverse, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, reset, $DTMAxisIterator*)},
	{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, setMark, void)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$PrecedingIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$PrecedingIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$PrecedingIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$PrecedingIterator_FieldInfo_,
	_DTMDefaultBaseIterators$PrecedingIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$PrecedingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$PrecedingIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$PrecedingIterator));
}

void DTMDefaultBaseIterators$PrecedingIterator::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	$set(this, _stack, $new($ints, DTMDefaultBaseIterators$PrecedingIterator::_maxAncestors));
}

bool DTMDefaultBaseIterators$PrecedingIterator::isReverse() {
	return true;
}

$DTMAxisIterator* DTMDefaultBaseIterators$PrecedingIterator::cloneIterator() {
	$useLocalCurrentObjectStackCache();
	this->_isRestartable = false;
	try {
		$var(DTMDefaultBaseIterators$PrecedingIterator, clone, $cast(DTMDefaultBaseIterators$PrecedingIterator, $DTMDefaultBaseIterators$InternalAxisIteratorBase::clone()));
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

$DTMAxisIterator* DTMDefaultBaseIterators$PrecedingIterator::setStartNode(int32_t node) {
	$useLocalCurrentObjectStackCache();
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isRestartable) {
		node = this->this$0->makeNodeIdentity(node);
		int32_t parent = 0;
		int32_t index = 0;
		if (this->this$0->_type(node) == $DTM::ATTRIBUTE_NODE) {
			node = this->this$0->_parent(node);
		}
		this->_startNode = node;
		$nc(this->_stack)->set(index = 0, node);
		parent = node;
		while ((parent = this->this$0->_parent(parent)) != -1) {
			if (++index == $nc(this->_stack)->length) {
				$var($ints, stack, $new($ints, index + 4));
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

int32_t DTMDefaultBaseIterators$PrecedingIterator::next() {
	for (++this->_currentNode; this->_sp >= 0; ++this->_currentNode) {
		if (this->_currentNode < $nc(this->_stack)->get(this->_sp)) {
			bool var$0 = this->this$0->_type(this->_currentNode) != (int16_t)2;
			if (var$0 && this->this$0->_type(this->_currentNode) != (int16_t)13) {
				return returnNode(this->this$0->makeNodeHandle(this->_currentNode));
			}
		} else {
			--this->_sp;
		}
	}
	return -1;
}

$DTMAxisIterator* DTMDefaultBaseIterators$PrecedingIterator::reset() {
	this->_sp = this->_oldsp;
	return resetPosition();
}

void DTMDefaultBaseIterators$PrecedingIterator::setMark() {
	this->_markedsp = this->_sp;
	this->_markedNode = this->_currentNode;
	this->_markedDescendant = $nc(this->_stack)->get(0);
}

void DTMDefaultBaseIterators$PrecedingIterator::gotoMark() {
	this->_sp = this->_markedsp;
	this->_currentNode = this->_markedNode;
}

DTMDefaultBaseIterators$PrecedingIterator::DTMDefaultBaseIterators$PrecedingIterator() {
}

$Class* DTMDefaultBaseIterators$PrecedingIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$PrecedingIterator, name, initialize, &_DTMDefaultBaseIterators$PrecedingIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$PrecedingIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$PrecedingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com