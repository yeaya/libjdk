#include <com/sun/org/apache/xpath/internal/axes/UnionChildIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef FILTER_SKIP
#undef SCORE_NONE

using $PredicatedNodeTestArray = $Array<::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest>;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _UnionChildIterator_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnionChildIterator, serialVersionUID)},
	{"m_nodeTests", "[Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;", nullptr, $PRIVATE, $field(UnionChildIterator, m_nodeTests)},
	{}
};

$MethodInfo _UnionChildIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnionChildIterator, init$, void)},
	{"acceptNode", "(I)S", nullptr, $PUBLIC, $virtualMethod(UnionChildIterator, acceptNode, int16_t, int32_t)},
	{"addNodeTest", "(Lcom/sun/org/apache/xpath/internal/axes/PredicatedNodeTest;)V", nullptr, $PUBLIC, $virtualMethod(UnionChildIterator, addNodeTest, void, $PredicatedNodeTest*)},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(UnionChildIterator, fixupVariables, void, $List*, int32_t)},
	{}
};

$ClassInfo _UnionChildIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.UnionChildIterator",
	"com.sun.org.apache.xpath.internal.axes.ChildTestIterator",
	nullptr,
	_UnionChildIterator_FieldInfo_,
	_UnionChildIterator_MethodInfo_
};

$Object* allocate$UnionChildIterator($Class* clazz) {
	return $of($alloc(UnionChildIterator));
}

void UnionChildIterator::init$() {
	$ChildTestIterator::init$(nullptr);
	$set(this, m_nodeTests, nullptr);
}

void UnionChildIterator::addNodeTest($PredicatedNodeTest* test) {
	if (nullptr == this->m_nodeTests) {
		$set(this, m_nodeTests, $new($PredicatedNodeTestArray, 1));
		$nc(this->m_nodeTests)->set(0, test);
	} else {
		$var($PredicatedNodeTestArray, tests, this->m_nodeTests);
		int32_t len = $nc(this->m_nodeTests)->length;
		$set(this, m_nodeTests, $new($PredicatedNodeTestArray, len + 1));
		$System::arraycopy(tests, 0, this->m_nodeTests, 0, len);
		$nc(this->m_nodeTests)->set(len, test);
	}
	$nc(test)->exprSetParent(this);
}

void UnionChildIterator::fixupVariables($List* vars, int32_t globalsSize) {
	$ChildTestIterator::fixupVariables(vars, globalsSize);
	if (this->m_nodeTests != nullptr) {
		for (int32_t i = 0; i < $nc(this->m_nodeTests)->length; ++i) {
			$nc($nc(this->m_nodeTests)->get(i))->fixupVariables(vars, globalsSize);
		}
	}
}

int16_t UnionChildIterator::acceptNode(int32_t n) {
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, getXPathContext());
	{
		$var($Throwable, var$0, nullptr);
		int16_t var$2 = 0;
		bool return$1 = false;
		try {
			try {
				$nc(xctxt)->pushCurrentNode(n);
				for (int32_t i = 0; i < $nc(this->m_nodeTests)->length; ++i) {
					$var($PredicatedNodeTest, pnt, $nc(this->m_nodeTests)->get(i));
					$var($XObject, score, $nc(pnt)->execute(xctxt, n));
					$init($NodeTest);
					if (!$equals(score, $NodeTest::SCORE_NONE)) {
						if (pnt->getPredicateCount() > 0) {
							if (pnt->executePredicates(n, xctxt)) {
								var$2 = $DTMIterator::FILTER_ACCEPT;
								return$1 = true;
								goto $finally;
							}
						} else {
							var$2 = $DTMIterator::FILTER_ACCEPT;
							return$1 = true;
							goto $finally;
						}
					}
				}
			} catch ($TransformerException& se) {
				$throwNew($RuntimeException, $(se->getMessage()));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc(xctxt)->popCurrentNode();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return $DTMIterator::FILTER_SKIP;
}

UnionChildIterator::UnionChildIterator() {
}

$Class* UnionChildIterator::load$($String* name, bool initialize) {
	$loadClass(UnionChildIterator, name, initialize, &_UnionChildIterator_ClassInfo_, allocate$UnionChildIterator);
	return class$;
}

$Class* UnionChildIterator::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com