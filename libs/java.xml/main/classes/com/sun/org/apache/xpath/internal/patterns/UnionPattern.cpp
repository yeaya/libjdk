#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>

#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <com/sun/org/apache/xpath/internal/patterns/UnionPattern$UnionPathPartOwner.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SCORE_NONE

using $StepPatternArray = $Array<::com::sun::org::apache::xpath::internal::patterns::StepPattern>;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern = ::com::sun::org::apache::xpath::internal::patterns::StepPattern;
using $UnionPattern$UnionPathPartOwner = ::com::sun::org::apache::xpath::internal::patterns::UnionPattern$UnionPathPartOwner;
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

$FieldInfo _UnionPattern_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnionPattern, serialVersionUID)},
	{"m_patterns", "[Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PRIVATE, $field(UnionPattern, m_patterns)},
	{}
};

$MethodInfo _UnionPattern_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnionPattern, init$, void)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(UnionPattern, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(UnionPattern, canTraverseOutsideSubtree, bool)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(UnionPattern, deepEquals, bool, $Expression*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(UnionPattern, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(UnionPattern, fixupVariables, void, $List*, int32_t)},
	{"getPatterns", "()[Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PUBLIC, $virtualMethod(UnionPattern, getPatterns, $StepPatternArray*)},
	{"setPatterns", "([Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;)V", nullptr, $PUBLIC, $virtualMethod(UnionPattern, setPatterns, void, $StepPatternArray*)},
	{}
};

$InnerClassInfo _UnionPattern_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner", "com.sun.org.apache.xpath.internal.patterns.UnionPattern", "UnionPathPartOwner", 0},
	{}
};

$ClassInfo _UnionPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.UnionPattern",
	"com.sun.org.apache.xpath.internal.Expression",
	nullptr,
	_UnionPattern_FieldInfo_,
	_UnionPattern_MethodInfo_,
	nullptr,
	nullptr,
	_UnionPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.patterns.UnionPattern$UnionPathPartOwner"
};

$Object* allocate$UnionPattern($Class* clazz) {
	return $of($alloc(UnionPattern));
}

void UnionPattern::init$() {
	$Expression::init$();
}

void UnionPattern::fixupVariables($List* vars, int32_t globalsSize) {
	for (int32_t i = 0; i < $nc(this->m_patterns)->length; ++i) {
		$nc($nc(this->m_patterns)->get(i))->fixupVariables(vars, globalsSize);
	}
}

bool UnionPattern::canTraverseOutsideSubtree() {
	if (nullptr != this->m_patterns) {
		int32_t n = $nc(this->m_patterns)->length;
		for (int32_t i = 0; i < n; ++i) {
			if ($nc($nc(this->m_patterns)->get(i))->canTraverseOutsideSubtree()) {
				return true;
			}
		}
	}
	return false;
}

void UnionPattern::setPatterns($StepPatternArray* patterns) {
	$set(this, m_patterns, patterns);
	if (nullptr != patterns) {
		for (int32_t i = 0; i < patterns->length; ++i) {
			$nc(patterns->get(i))->exprSetParent(this);
		}
	}
}

$StepPatternArray* UnionPattern::getPatterns() {
	return this->m_patterns;
}

$XObject* UnionPattern::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	$var($XObject, bestScore, nullptr);
	int32_t n = $nc(this->m_patterns)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($XObject, score, $nc($nc(this->m_patterns)->get(i))->execute(xctxt));
		$init($NodeTest);
		if (!$equals(score, $NodeTest::SCORE_NONE)) {
			if (nullptr == bestScore) {
				$assign(bestScore, score);
			} else {
				double var$1 = $nc(score)->num();
				if (var$1 > $nc(bestScore)->num()) {
					$assign(bestScore, score);
				}
			}
		}
	}
	if (nullptr == bestScore) {
		$init($NodeTest);
		$assign(bestScore, $NodeTest::SCORE_NONE);
	}
	return bestScore;
}

void UnionPattern::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	$nc(visitor)->visitUnionPattern(owner, this);
	if (nullptr != this->m_patterns) {
		int32_t n = $nc(this->m_patterns)->length;
		for (int32_t i = 0; i < n; ++i) {
			$nc($nc(this->m_patterns)->get(i))->callVisitors($$new($UnionPattern$UnionPathPartOwner, this, i), visitor);
		}
	}
}

bool UnionPattern::deepEquals($Expression* expr) {
	if (!isSameClass(expr)) {
		return false;
	}
	$var(UnionPattern, up, $cast(UnionPattern, expr));
	if (nullptr != this->m_patterns) {
		int32_t n = $nc(this->m_patterns)->length;
		if ((nullptr == $nc(up)->m_patterns) || ($nc($nc(up)->m_patterns)->length != n)) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			if (!$nc($nc(this->m_patterns)->get(i))->deepEquals($nc($nc(up)->m_patterns)->get(i))) {
				return false;
			}
		}
	} else if ($nc(up)->m_patterns != nullptr) {
		return false;
	}
	return true;
}

UnionPattern::UnionPattern() {
}

$Class* UnionPattern::load$($String* name, bool initialize) {
	$loadClass(UnionPattern, name, initialize, &_UnionPattern_ClassInfo_, allocate$UnionPattern);
	return class$;
}

$Class* UnionPattern::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com