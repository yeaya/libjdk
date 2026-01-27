#include <com/sun/org/apache/xpath/internal/patterns/ContextMatchStepPattern.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef ATTRIBUTE_NODE
#undef ELEMENT_NODE
#undef NAMESPACE
#undef NULL
#undef PRECEDING
#undef PRECEDINGANDANCESTOR
#undef SCORE_NONE
#undef SHOW_ALL

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

$FieldInfo _ContextMatchStepPattern_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ContextMatchStepPattern, serialVersionUID)},
	{}
};

$MethodInfo _ContextMatchStepPattern_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(ContextMatchStepPattern, init$, void, int32_t, int32_t)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(ContextMatchStepPattern, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"executeRelativePathPattern", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(ContextMatchStepPattern, executeRelativePathPattern, $XObject*, $XPathContext*, $StepPattern*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _ContextMatchStepPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.ContextMatchStepPattern",
	"com.sun.org.apache.xpath.internal.patterns.StepPattern",
	nullptr,
	_ContextMatchStepPattern_FieldInfo_,
	_ContextMatchStepPattern_MethodInfo_
};

$Object* allocate$ContextMatchStepPattern($Class* clazz) {
	return $of($alloc(ContextMatchStepPattern));
}

void ContextMatchStepPattern::init$(int32_t axis, int32_t paxis) {
	$StepPattern::init$($DTMFilter::SHOW_ALL, axis, paxis);
}

$XObject* ContextMatchStepPattern::execute($XPathContext* xctxt) {
	int32_t var$0 = $nc(xctxt)->getIteratorRoot();
	if (var$0 == xctxt->getCurrentNode()) {
		return getStaticScore();
	} else {
		$init($NodeTest);
		return $NodeTest::SCORE_NONE;
	}
}

$XObject* ContextMatchStepPattern::executeRelativePathPattern($XPathContext* xctxt, $StepPattern* prevStep) {
	$useLocalCurrentObjectStackCache();
	$init($NodeTest);
	$var($XObject, score, $NodeTest::SCORE_NONE);
	int32_t context = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(context));
	if (nullptr != dtm) {
		int32_t predContext = xctxt->getCurrentNode();
		$var($DTMAxisTraverser, traverser, nullptr);
		int32_t axis = this->m_axis;
		bool needToTraverseAttrs = $WalkerFactory::isDownwardAxisOfMany(axis);
		bool iterRootIsAttr = (dtm->getNodeType(xctxt->getIteratorRoot()) == $DTM::ATTRIBUTE_NODE);
		if (($Axis::PRECEDING == axis) && iterRootIsAttr) {
			axis = $Axis::PRECEDINGANDANCESTOR;
		}
		$assign(traverser, dtm->getAxisTraverser(axis));
		for (int32_t relative = $nc(traverser)->first(context); $DTM::NULL != relative; relative = traverser->next(context, relative)) {
			{
				$var($Throwable, var$0, nullptr);
				$var($XObject, var$2, nullptr);
				bool return$1 = false;
				try {
					xctxt->pushCurrentNode(relative);
					$assign(score, execute(xctxt));
					if (!$equals(score, $NodeTest::SCORE_NONE)) {
						if (executePredicates(xctxt, dtm, context)) {
							$assign(var$2, score);
							return$1 = true;
							goto $finally;
						}
						$assign(score, $NodeTest::SCORE_NONE);
					}
					if (needToTraverseAttrs && iterRootIsAttr && ($DTM::ELEMENT_NODE == dtm->getNodeType(relative))) {
						int32_t xaxis = $Axis::ATTRIBUTE;
						for (int32_t i = 0; i < 2; ++i) {
							$var($DTMAxisTraverser, atraverser, dtm->getAxisTraverser(xaxis));
							for (int32_t arelative = $nc(atraverser)->first(relative); $DTM::NULL != arelative; arelative = atraverser->next(relative, arelative)) {
								{
									$var($Throwable, var$3, nullptr);
									$var($XObject, var$5, nullptr);
									bool return$4 = false;
									try {
										xctxt->pushCurrentNode(arelative);
										$assign(score, execute(xctxt));
										if (!$equals(score, $NodeTest::SCORE_NONE)) {
											if (!$equals(score, $NodeTest::SCORE_NONE)) {
												$assign(var$5, score);
												return$4 = true;
												goto $finally1;
											}
										}
									} catch ($Throwable& var$6) {
										$assign(var$3, var$6);
									} $finally1: {
										xctxt->popCurrentNode();
									}
									if (var$3 != nullptr) {
										$throw(var$3);
									}
									if (return$4) {
										$assign(var$2, var$5);
										return$1 = true;
										goto $finally;
									}
								}
							}
							xaxis = $Axis::NAMESPACE;
						}
					}
				} catch ($Throwable& var$7) {
					$assign(var$0, var$7);
				} $finally: {
					xctxt->popCurrentNode();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	}
	return score;
}

ContextMatchStepPattern::ContextMatchStepPattern() {
}

$Class* ContextMatchStepPattern::load$($String* name, bool initialize) {
	$loadClass(ContextMatchStepPattern, name, initialize, &_ContextMatchStepPattern_ClassInfo_, allocate$ContextMatchStepPattern);
	return class$;
}

$Class* ContextMatchStepPattern::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com