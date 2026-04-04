#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
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

void DTMDefaultBaseIterators$InternalAxisIteratorBase::init$($DTMDefaultBaseIterators* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisIteratorBase::init$();
}

void DTMDefaultBaseIterators$InternalAxisIteratorBase::setMark() {
	this->_markedNode = this->_currentNode;
}

void DTMDefaultBaseIterators$InternalAxisIteratorBase::gotoMark() {
	this->_currentNode = this->_markedNode;
}

DTMDefaultBaseIterators$InternalAxisIteratorBase::DTMDefaultBaseIterators$InternalAxisIteratorBase() {
}

$Class* DTMDefaultBaseIterators$InternalAxisIteratorBase::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$InternalAxisIteratorBase, this$0)},
		{"_currentNode", "I", nullptr, $PROTECTED, $field(DTMDefaultBaseIterators$InternalAxisIteratorBase, _currentNode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$InternalAxisIteratorBase, init$, void, $DTMDefaultBaseIterators*)},
		{"gotoMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$InternalAxisIteratorBase, gotoMark, void)},
		{"setMark", "()V", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$InternalAxisIteratorBase, setMark, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase",
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
	$loadClass(DTMDefaultBaseIterators$InternalAxisIteratorBase, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseIterators$InternalAxisIteratorBase);
	});
	return class$;
}

$Class* DTMDefaultBaseIterators$InternalAxisIteratorBase::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com