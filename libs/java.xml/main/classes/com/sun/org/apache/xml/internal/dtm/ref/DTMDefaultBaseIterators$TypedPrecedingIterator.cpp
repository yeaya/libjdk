#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedPrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef NTYPES

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$PrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$PrecedingIterator;
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

void DTMDefaultBaseIterators$TypedPrecedingIterator::init$($DTMDefaultBaseIterators* this$0, int32_t type) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$PrecedingIterator::init$(this$0);
	this->_nodeType = type;
}

int32_t DTMDefaultBaseIterators$TypedPrecedingIterator::next() {
	int32_t node = this->_currentNode;
	int32_t nodeType = this->_nodeType;
	if (nodeType >= $DTM::NTYPES) {
		while (true) {
			node = node + 1;
			if (this->_sp < 0) {
				node = -1;
				break;
			} else if (node >= $nc(this->_stack)->get(this->_sp)) {
				if (--this->_sp < 0) {
					node = -1;
					break;
				}
			} else if (this->this$0->_exptype(node) == nodeType) {
				break;
			}
		}
	} else {
		int32_t expType = 0;
		while (true) {
			node = node + 1;
			if (this->_sp < 0) {
				node = -1;
				break;
			} else if (node >= $nc(this->_stack)->get(this->_sp)) {
				if (--this->_sp < 0) {
					node = -1;
					break;
				}
			} else {
				expType = this->this$0->_exptype(node);
				if (expType < $DTM::NTYPES) {
					if (expType == nodeType) {
						break;
					}
				} else if ($nc(this->this$0->m_expandedNameTable)->getType(expType) == nodeType) {
					break;
				}
			}
		}
	}
	this->_currentNode = node;
	return (node == -1) ? -1 : returnNode(this->this$0->makeNodeHandle(node));
}

DTMDefaultBaseIterators$TypedPrecedingIterator::DTMDefaultBaseIterators$TypedPrecedingIterator() {
}

$Class* DTMDefaultBaseIterators$TypedPrecedingIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$TypedPrecedingIterator, this$0)},
		{"_nodeType", "I", nullptr, $PRIVATE | $FINAL, $field(DTMDefaultBaseIterators$TypedPrecedingIterator, _nodeType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$TypedPrecedingIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$TypedPrecedingIterator, next, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedPrecedingIterator", $PUBLIC | $FINAL},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingIterator", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator",
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
	$loadClass(DTMDefaultBaseIterators$TypedPrecedingIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTMDefaultBaseIterators$TypedPrecedingIterator);
	});
	return class$;
}

$Class* DTMDefaultBaseIterators$TypedPrecedingIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com