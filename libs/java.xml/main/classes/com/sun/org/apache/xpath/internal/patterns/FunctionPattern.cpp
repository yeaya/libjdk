#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/FunctionPattern$FunctionOwner.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NULL
#undef SCORE_NONE
#undef SCORE_OTHER

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XNumber = ::com::sun::org::apache::xpath::internal::objects::XNumber;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $FunctionPattern$FunctionOwner = ::com::sun::org::apache::xpath::internal::patterns::FunctionPattern$FunctionOwner;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

$FieldInfo _FunctionPattern_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FunctionPattern, serialVersionUID)},
	{"m_functionExpr", "Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(FunctionPattern, m_functionExpr)},
	{}
};

$MethodInfo _FunctionPattern_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/Expression;II)V", nullptr, $PUBLIC, $method(FunctionPattern, init$, void, $Expression*, int32_t, int32_t)},
	{"calcScore", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(FunctionPattern, calcScore, void)},
	{"callSubtreeVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PROTECTED, $virtualMethod(FunctionPattern, callSubtreeVisitors, void, $XPathVisitor*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FunctionPattern, execute, $XObject*, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/dtm/DTM;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FunctionPattern, execute, $XObject*, $XPathContext*, int32_t, $DTM*, int32_t), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FunctionPattern, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(FunctionPattern, fixupVariables, void, $List*, int32_t)},
	{}
};

$InnerClassInfo _FunctionPattern_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner", "com.sun.org.apache.xpath.internal.patterns.FunctionPattern", "FunctionOwner", 0},
	{}
};

$ClassInfo _FunctionPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.FunctionPattern",
	"com.sun.org.apache.xpath.internal.patterns.StepPattern",
	nullptr,
	_FunctionPattern_FieldInfo_,
	_FunctionPattern_MethodInfo_,
	nullptr,
	nullptr,
	_FunctionPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.patterns.FunctionPattern$FunctionOwner"
};

$Object* allocate$FunctionPattern($Class* clazz) {
	return $of($alloc(FunctionPattern));
}

void FunctionPattern::init$($Expression* expr, int32_t axis, int32_t predaxis) {
	$StepPattern::init$(0, nullptr, nullptr, axis, predaxis);
	$set(this, m_functionExpr, expr);
}

void FunctionPattern::calcScore() {
	$init($NodeTest);
	$set(this, m_score, $NodeTest::SCORE_OTHER);
	if (nullptr == this->m_targetString) {
		calcTargetString();
	}
}

void FunctionPattern::fixupVariables($List* vars, int32_t globalsSize) {
	$StepPattern::fixupVariables(vars, globalsSize);
	$nc(this->m_functionExpr)->fixupVariables(vars, globalsSize);
}

$XObject* FunctionPattern::execute($XPathContext* xctxt, int32_t context) {
	$useLocalCurrentObjectStackCache();
	$var($DTMIterator, nl, $nc(this->m_functionExpr)->asIterator(xctxt, context));
	$init($NodeTest);
	$var($XNumber, score, $NodeTest::SCORE_NONE);
	if (nullptr != nl) {
		int32_t n = 0;
		while ($DTM::NULL != (n = nl->nextNode())) {
			$assign(score, (n == context) ? $NodeTest::SCORE_OTHER : $NodeTest::SCORE_NONE);
			if (score == $NodeTest::SCORE_OTHER) {
				context = n;
				break;
			}
		}
	}
	$nc(nl)->detach();
	return score;
}

$XObject* FunctionPattern::execute($XPathContext* xctxt, int32_t context, $DTM* dtm, int32_t expType) {
	$useLocalCurrentObjectStackCache();
	$var($DTMIterator, nl, $nc(this->m_functionExpr)->asIterator(xctxt, context));
	$init($NodeTest);
	$var($XNumber, score, $NodeTest::SCORE_NONE);
	if (nullptr != nl) {
		int32_t n = 0;
		while ($DTM::NULL != (n = nl->nextNode())) {
			$assign(score, (n == context) ? $NodeTest::SCORE_OTHER : $NodeTest::SCORE_NONE);
			if (score == $NodeTest::SCORE_OTHER) {
				context = n;
				break;
			}
		}
		nl->detach();
	}
	return score;
}

$XObject* FunctionPattern::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t context = $nc(xctxt)->getCurrentNode();
	$var($DTMIterator, nl, $nc(this->m_functionExpr)->asIterator(xctxt, context));
	$init($NodeTest);
	$var($XNumber, score, $NodeTest::SCORE_NONE);
	if (nullptr != nl) {
		int32_t n = 0;
		while ($DTM::NULL != (n = nl->nextNode())) {
			$assign(score, (n == context) ? $NodeTest::SCORE_OTHER : $NodeTest::SCORE_NONE);
			if (score == $NodeTest::SCORE_OTHER) {
				context = n;
				break;
			}
		}
		nl->detach();
	}
	return score;
}

void FunctionPattern::callSubtreeVisitors($XPathVisitor* visitor) {
	$nc(this->m_functionExpr)->callVisitors($$new($FunctionPattern$FunctionOwner, this), visitor);
	$StepPattern::callSubtreeVisitors(visitor);
}

FunctionPattern::FunctionPattern() {
}

$Class* FunctionPattern::load$($String* name, bool initialize) {
	$loadClass(FunctionPattern, name, initialize, &_FunctionPattern_ClassInfo_, allocate$FunctionPattern);
	return class$;
}

$Class* FunctionPattern::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com