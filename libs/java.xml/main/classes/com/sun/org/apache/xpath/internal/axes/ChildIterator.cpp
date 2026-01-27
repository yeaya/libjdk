#include <com/sun/org/apache/xpath/internal/axes/ChildIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

#undef CHILD
#undef NULL
#undef SHOW_ALL

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
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

$FieldInfo _ChildIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ChildIterator, serialVersionUID)},
	{}
};

$MethodInfo _ChildIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(ChildIterator, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"asNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(ChildIterator, asNode, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(ChildIterator, getAxis, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(ChildIterator, nextNode, int32_t)},
	{}
};

$ClassInfo _ChildIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.ChildIterator",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_ChildIterator_FieldInfo_,
	_ChildIterator_MethodInfo_
};

$Object* allocate$ChildIterator($Class* clazz) {
	return $of($alloc(ChildIterator));
}

void ChildIterator::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$LocPathIterator::init$(compiler, opPos, analysis, false);
	initNodeTest($DTMFilter::SHOW_ALL);
}

int32_t ChildIterator::asNode($XPathContext* xctxt) {
	int32_t current = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(current));
	return $nc(dtm)->getFirstChild(current);
}

int32_t ChildIterator::nextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t next = 0;
	this->m_lastFetched = (next = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_cdtm)->getFirstChild(this->m_context) : $nc(this->m_cdtm)->getNextSibling(this->m_lastFetched));
	if ($DTM::NULL != next) {
		++this->m_pos;
		return next;
	} else {
		this->m_foundLast = true;
		return $DTM::NULL;
	}
}

int32_t ChildIterator::getAxis() {
	return $Axis::CHILD;
}

ChildIterator::ChildIterator() {
}

$Class* ChildIterator::load$($String* name, bool initialize) {
	$loadClass(ChildIterator, name, initialize, &_ChildIterator_ClassInfo_, allocate$ChildIterator);
	return class$;
}

$Class* ChildIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com