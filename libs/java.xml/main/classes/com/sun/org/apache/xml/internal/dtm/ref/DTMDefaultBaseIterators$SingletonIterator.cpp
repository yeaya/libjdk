#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$SingletonIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef END
#undef MIN_VALUE
#undef ROOTNODE

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDefaultBaseIterators$SingletonIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$SingletonIterator, this$0)},
	{"_isConstant", "Z", nullptr, $PRIVATE, $field(DTMDefaultBaseIterators$SingletonIterator, _isConstant)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$SingletonIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$SingletonIterator, init$, void, $DTMDefaultBaseIterators*)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$SingletonIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;IZ)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$SingletonIterator, init$, void, $DTMDefaultBaseIterators*, int32_t, bool)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$SingletonIterator, next, int32_t)},
	{"reset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$SingletonIterator, reset, $DTMAxisIterator*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$SingletonIterator, setStartNode, $DTMAxisIterator*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$SingletonIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "SingletonIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$SingletonIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
	nullptr,
	_DTMDefaultBaseIterators$SingletonIterator_FieldInfo_,
	_DTMDefaultBaseIterators$SingletonIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$SingletonIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$SingletonIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$SingletonIterator));
}

void DTMDefaultBaseIterators$SingletonIterator::init$($DTMDefaultBaseIterators* this$0) {
	DTMDefaultBaseIterators$SingletonIterator::init$(this$0, $Integer::MIN_VALUE, false);
}

void DTMDefaultBaseIterators$SingletonIterator::init$($DTMDefaultBaseIterators* this$0, int32_t node) {
	DTMDefaultBaseIterators$SingletonIterator::init$(this$0, node, false);
}

void DTMDefaultBaseIterators$SingletonIterator::init$($DTMDefaultBaseIterators* this$0, int32_t node, bool constant) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$InternalAxisIteratorBase::init$(this$0);
	this->_currentNode = (this->_startNode = node);
	this->_isConstant = constant;
}

$DTMAxisIterator* DTMDefaultBaseIterators$SingletonIterator::setStartNode(int32_t node) {
	if (node == $DTMDefaultBase::ROOTNODE) {
		node = this->this$0->getDocument();
	}
	if (this->_isConstant) {
		this->_currentNode = this->_startNode;
		return resetPosition();
	} else if (this->_isRestartable) {
		this->_currentNode = (this->_startNode = node);
		return resetPosition();
	}
	return this;
}

$DTMAxisIterator* DTMDefaultBaseIterators$SingletonIterator::reset() {
	if (this->_isConstant) {
		this->_currentNode = this->_startNode;
		return resetPosition();
	} else {
		bool temp = this->_isRestartable;
		this->_isRestartable = true;
		setStartNode(this->_startNode);
		this->_isRestartable = temp;
	}
	return this;
}

int32_t DTMDefaultBaseIterators$SingletonIterator::next() {
	int32_t result = this->_currentNode;
	this->_currentNode = $DTMAxisIterator::END;
	return returnNode(result);
}

DTMDefaultBaseIterators$SingletonIterator::DTMDefaultBaseIterators$SingletonIterator() {
}

$Class* DTMDefaultBaseIterators$SingletonIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$SingletonIterator, name, initialize, &_DTMDefaultBaseIterators$SingletonIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$SingletonIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$SingletonIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com