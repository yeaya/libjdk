#include <com/sun/org/apache/xpath/internal/axes/OneStepIteratorForward.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <jcpp.h>

#undef NULL
#undef SHOW_ALL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $OpMap = ::com::sun::org::apache::xpath::internal::compiler::OpMap;
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

$FieldInfo _OneStepIteratorForward_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OneStepIteratorForward, serialVersionUID)},
	{"m_axis", "I", nullptr, $PROTECTED, $field(OneStepIteratorForward, m_axis)},
	{}
};

$MethodInfo _OneStepIteratorForward_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(OneStepIteratorForward, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(OneStepIteratorForward, init$, void, int32_t)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(OneStepIteratorForward, deepEquals, bool, $Expression*)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(OneStepIteratorForward, getAxis, int32_t)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(OneStepIteratorForward, getNextNode, int32_t)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(OneStepIteratorForward, setRoot, void, int32_t, Object$*)},
	{}
};

$ClassInfo _OneStepIteratorForward_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.OneStepIteratorForward",
	"com.sun.org.apache.xpath.internal.axes.ChildTestIterator",
	nullptr,
	_OneStepIteratorForward_FieldInfo_,
	_OneStepIteratorForward_MethodInfo_
};

$Object* allocate$OneStepIteratorForward($Class* clazz) {
	return $of($alloc(OneStepIteratorForward));
}

void OneStepIteratorForward::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$ChildTestIterator::init$(compiler, opPos, analysis);
	this->m_axis = -1;
	int32_t firstStepPos = $OpMap::getFirstChildPos(opPos);
	this->m_axis = $WalkerFactory::getAxisFromStep(compiler, firstStepPos);
}

void OneStepIteratorForward::init$(int32_t axis) {
	$ChildTestIterator::init$(nullptr);
	this->m_axis = -1;
	this->m_axis = axis;
	int32_t whatToShow = $DTMFilter::SHOW_ALL;
	initNodeTest(whatToShow);
}

void OneStepIteratorForward::setRoot(int32_t context, Object$* environment) {
	$ChildTestIterator::setRoot(context, environment);
	$set(this, m_traverser, $nc(this->m_cdtm)->getAxisTraverser(this->m_axis));
}

int32_t OneStepIteratorForward::getNextNode() {
	this->m_lastFetched = ($DTM::NULL == this->m_lastFetched) ? $nc(this->m_traverser)->first(this->m_context) : $nc(this->m_traverser)->next(this->m_context, this->m_lastFetched);
	return this->m_lastFetched;
}

int32_t OneStepIteratorForward::getAxis() {
	return this->m_axis;
}

bool OneStepIteratorForward::deepEquals($Expression* expr) {
	if (!$ChildTestIterator::deepEquals(expr)) {
		return false;
	}
	if (this->m_axis != $nc(($cast(OneStepIteratorForward, expr)))->m_axis) {
		return false;
	}
	return true;
}

OneStepIteratorForward::OneStepIteratorForward() {
}

$Class* OneStepIteratorForward::load$($String* name, bool initialize) {
	$loadClass(OneStepIteratorForward, name, initialize, &_OneStepIteratorForward_ClassInfo_, allocate$OneStepIteratorForward);
	return class$;
}

$Class* OneStepIteratorForward::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com