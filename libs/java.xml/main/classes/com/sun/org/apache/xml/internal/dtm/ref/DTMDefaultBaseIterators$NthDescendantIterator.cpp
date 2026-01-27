#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NthDescendantIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <jcpp.h>

#undef END

using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator;
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

$FieldInfo _DTMDefaultBaseIterators$NthDescendantIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseIterators$NthDescendantIterator, this$0)},
	{"_pos", "I", nullptr, 0, $field(DTMDefaultBaseIterators$NthDescendantIterator, _pos)},
	{}
};

$MethodInfo _DTMDefaultBaseIterators$NthDescendantIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators;I)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators$NthDescendantIterator, init$, void, $DTMDefaultBaseIterators*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators$NthDescendantIterator, next, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators$NthDescendantIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NthDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NthDescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "DescendantIterator", $PUBLIC},
	{}
};

$ClassInfo _DTMDefaultBaseIterators$NthDescendantIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NthDescendantIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator",
	nullptr,
	_DTMDefaultBaseIterators$NthDescendantIterator_FieldInfo_,
	_DTMDefaultBaseIterators$NthDescendantIterator_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators$NthDescendantIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators"
};

$Object* allocate$DTMDefaultBaseIterators$NthDescendantIterator($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators$NthDescendantIterator));
}

void DTMDefaultBaseIterators$NthDescendantIterator::init$($DTMDefaultBaseIterators* this$0, int32_t pos) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$DescendantIterator::init$(this$0);
	this->_pos = pos;
}

int32_t DTMDefaultBaseIterators$NthDescendantIterator::next() {
	int32_t node = 0;
	while ((node = $DTMDefaultBaseIterators$DescendantIterator::next()) != $DTMAxisIterator::END) {
		node = this->this$0->makeNodeIdentity(node);
		int32_t parent = this->this$0->_parent(node);
		int32_t child = this->this$0->_firstch(parent);
		int32_t pos = 0;
		do {
			int32_t type = this->this$0->_type(child);
			if ((int16_t)1 == type) {
				++pos;
			}
		} while ((pos < this->_pos) && (child = this->this$0->_nextsib(child)) != $DTMAxisIterator::END);
		if (node == child) {
			return node;
		}
	}
	return ($DTMAxisIterator::END);
}

DTMDefaultBaseIterators$NthDescendantIterator::DTMDefaultBaseIterators$NthDescendantIterator() {
}

$Class* DTMDefaultBaseIterators$NthDescendantIterator::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators$NthDescendantIterator, name, initialize, &_DTMDefaultBaseIterators$NthDescendantIterator_ClassInfo_, allocate$DTMDefaultBaseIterators$NthDescendantIterator);
	return class$;
}

$Class* DTMDefaultBaseIterators$NthDescendantIterator::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com