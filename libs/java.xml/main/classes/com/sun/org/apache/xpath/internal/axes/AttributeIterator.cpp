#include <com/sun/org/apache/xpath/internal/axes/AttributeIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef NULL

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _AttributeIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AttributeIterator, serialVersionUID)},
	{}
};

$MethodInfo _AttributeIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(AttributeIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(AttributeIterator, getAxis, int32_t)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(AttributeIterator, getNextNode, int32_t)},
	{}
};

$ClassInfo _AttributeIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.AttributeIterator",
	"com.sun.org.apache.xpath.internal.axes.ChildTestIterator",
	nullptr,
	_AttributeIterator_FieldInfo_,
	_AttributeIterator_MethodInfo_
};

$Object* allocate$AttributeIterator($Class* clazz) {
	return $of($alloc(AttributeIterator));
}

void AttributeIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$ChildTestIterator::init$(compiler, opPos, analysis);
}

int32_t AttributeIterator::getNextNode() {
	this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_cdtm)->getFirstAttribute(this->m_context) : $nc(this->m_cdtm)->getNextAttribute(this->m_lastFetched);
	return this->m_lastFetched;
}

int32_t AttributeIterator::getAxis() {
	return $Axis::ATTRIBUTE;
}

AttributeIterator::AttributeIterator() {
}

$Class* AttributeIterator::load$($String* name, bool initialize) {
	$loadClass(AttributeIterator, name, initialize, &_AttributeIterator_ClassInfo_, allocate$AttributeIterator);
	return class$;
}

$Class* AttributeIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com