#include <com/sun/org/apache/xpath/internal/axes/AxesWalker.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkerFactory.h>
#include <com/sun/org/apache/xpath/internal/axes/WalkingIterator.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ER_SETTING_WALKER_ROOT_TO_NULL
#undef FILTER_ACCEPT
#undef NULL

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $PredicatedNodeTest = ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest;
using $WalkerFactory = ::com::sun::org::apache::xpath::internal::axes::WalkerFactory;
using $WalkingIterator = ::com::sun::org::apache::xpath::internal::axes::WalkingIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _AxesWalker_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AxesWalker, serialVersionUID)},
	{"m_dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PRIVATE, $field(AxesWalker, m_dtm)},
	{"m_root", "I", nullptr, $TRANSIENT, $field(AxesWalker, m_root)},
	{"m_currentNode", "I", nullptr, $PRIVATE | $TRANSIENT, $field(AxesWalker, m_currentNode)},
	{"m_isFresh", "Z", nullptr, $TRANSIENT, $field(AxesWalker, m_isFresh)},
	{"m_nextWalker", "Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PROTECTED, $field(AxesWalker, m_nextWalker)},
	{"m_prevWalker", "Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, 0, $field(AxesWalker, m_prevWalker)},
	{"m_axis", "I", nullptr, $PROTECTED, $field(AxesWalker, m_axis)},
	{"m_traverser", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PROTECTED, $field(AxesWalker, m_traverser)},
	{}
};

$MethodInfo _AxesWalker_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/axes/LocPathIterator;I)V", nullptr, $PUBLIC, $method(AxesWalker, init$, void, $LocPathIterator*, int32_t)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AxesWalker, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"cloneDeep", "(Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;Ljava/util/List;)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", "(Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;>;)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", 0, $virtualMethod(AxesWalker, cloneDeep, AxesWalker*, $WalkingIterator*, $List*), "java.lang.CloneNotSupportedException"},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(AxesWalker, deepEquals, bool, $Expression*)},
	{"detach", "()V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, detach, void)},
	{"findClone", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;Ljava/util/List;)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;Ljava/util/List<Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;>;)Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", $STATIC, $staticMethod(AxesWalker, findClone, AxesWalker*, AxesWalker*, $List*)},
	{"getAnalysisBits", "()I", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getAnalysisBits, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getAxis, int32_t)},
	{"getCurrentNode", "()I", nullptr, $PUBLIC | $FINAL, $method(AxesWalker, getCurrentNode, int32_t)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getDTM, $DTM*, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getExpression, $Expression*)},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getLastPos, int32_t, $XPathContext*)},
	{"getNextNode", "()I", nullptr, $PROTECTED, $virtualMethod(AxesWalker, getNextNode, int32_t)},
	{"getNextWalker", "()Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getNextWalker, AxesWalker*)},
	{"getPrevWalker", "()Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getPrevWalker, AxesWalker*)},
	{"getRoot", "()I", nullptr, $PUBLIC, $virtualMethod(AxesWalker, getRoot, int32_t)},
	{"init", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, init, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC, $virtualMethod(AxesWalker, isDocOrdered, bool)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(AxesWalker, nextNode, int32_t)},
	{"returnNextNode", "(I)I", nullptr, $PRIVATE, $method(AxesWalker, returnNextNode, int32_t, int32_t)},
	{"setDefaultDTM", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, setDefaultDTM, void, $DTM*)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, setExpression, void, $Expression*)},
	{"setNextWalker", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, setNextWalker, void, AxesWalker*)},
	{"setPrevWalker", "(Lcom/sun/org/apache/xpath/internal/axes/AxesWalker;)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, setPrevWalker, void, AxesWalker*)},
	{"setRoot", "(I)V", nullptr, $PUBLIC, $virtualMethod(AxesWalker, setRoot, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wi", "()Lcom/sun/org/apache/xpath/internal/axes/WalkingIterator;", nullptr, $PUBLIC | $FINAL, $method(AxesWalker, wi, $WalkingIterator*)},
	{}
};

$ClassInfo _AxesWalker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.AxesWalker",
	"com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest",
	"java.lang.Cloneable,com.sun.org.apache.xpath.internal.axes.PathComponent,com.sun.org.apache.xpath.internal.ExpressionOwner",
	_AxesWalker_FieldInfo_,
	_AxesWalker_MethodInfo_
};

$Object* allocate$AxesWalker($Class* clazz) {
	return $of($alloc(AxesWalker));
}

int32_t AxesWalker::hashCode() {
	 return this->$PredicatedNodeTest::hashCode();
}

bool AxesWalker::equals(Object$* arg0) {
	 return this->$PredicatedNodeTest::equals(arg0);
}

$String* AxesWalker::toString() {
	 return this->$PredicatedNodeTest::toString();
}

void AxesWalker::finalize() {
	this->$PredicatedNodeTest::finalize();
}

void AxesWalker::init$($LocPathIterator* locPathIterator, int32_t axis) {
	$PredicatedNodeTest::init$(locPathIterator);
	this->m_root = $DTM::NULL;
	this->m_currentNode = $DTM::NULL;
	this->m_axis = -1;
	this->m_axis = axis;
}

$WalkingIterator* AxesWalker::wi() {
	return $cast($WalkingIterator, this->m_lpi);
}

void AxesWalker::init($Compiler* compiler, int32_t opPos, int32_t stepType) {
	initPredicateInfo(compiler, opPos);
}

$Object* AxesWalker::clone() {
	$var(AxesWalker, clone, $cast(AxesWalker, $PredicatedNodeTest::clone()));
	return $of(clone);
}

AxesWalker* AxesWalker::cloneDeep($WalkingIterator* cloneOwner, $List* cloneList) {
	$useLocalCurrentObjectStackCache();
	$var(AxesWalker, clone, findClone(this, cloneList));
	if (nullptr != clone) {
		return clone;
	}
	$assign(clone, $cast(AxesWalker, this->clone()));
	$nc(clone)->setLocPathIterator(cloneOwner);
	if (nullptr != cloneList) {
		cloneList->add(this);
		cloneList->add(clone);
	}
	if ($nc($(wi()))->m_lastUsedWalker == this) {
		$set($nc(cloneOwner), m_lastUsedWalker, clone);
	}
	if (nullptr != this->m_nextWalker) {
		$set(clone, m_nextWalker, $nc(this->m_nextWalker)->cloneDeep(cloneOwner, cloneList));
	}
	if (nullptr != cloneList) {
		if (nullptr != this->m_prevWalker) {
			$set(clone, m_prevWalker, $nc(this->m_prevWalker)->cloneDeep(cloneOwner, cloneList));
		}
	} else if (nullptr != this->m_nextWalker) {
		$set($nc(clone->m_nextWalker), m_prevWalker, clone);
	}
	return clone;
}

AxesWalker* AxesWalker::findClone(AxesWalker* key, $List* cloneList) {
	$init(AxesWalker);
	if (nullptr != cloneList) {
		int32_t n = cloneList->size();
		for (int32_t i = 0; i < n; i += 2) {
			if ($equals(key, cloneList->get(i))) {
				return $cast(AxesWalker, cloneList->get(i + 1));
			}
		}
	}
	return nullptr;
}

void AxesWalker::detach() {
	this->m_currentNode = $DTM::NULL;
	$set(this, m_dtm, nullptr);
	$set(this, m_traverser, nullptr);
	this->m_isFresh = true;
	this->m_root = $DTM::NULL;
}

int32_t AxesWalker::getRoot() {
	return this->m_root;
}

int32_t AxesWalker::getAnalysisBits() {
	int32_t axis = getAxis();
	int32_t bit = $WalkerFactory::getAnalysisBitFromAxes(axis);
	return bit;
}

void AxesWalker::setRoot(int32_t root) {
	$useLocalCurrentObjectStackCache();
	$var($XPathContext, xctxt, $nc($(wi()))->getXPathContext());
	$set(this, m_dtm, $nc(xctxt)->getDTM(root));
	$set(this, m_traverser, $nc(this->m_dtm)->getAxisTraverser(this->m_axis));
	this->m_isFresh = true;
	this->m_foundLast = false;
	this->m_root = root;
	this->m_currentNode = root;
	if ($DTM::NULL == root) {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_SETTING_WALKER_ROOT_TO_NULL, nullptr)));
	}
	resetProximityPositions();
}

int32_t AxesWalker::getCurrentNode() {
	return this->m_currentNode;
}

void AxesWalker::setNextWalker(AxesWalker* walker) {
	$set(this, m_nextWalker, walker);
}

AxesWalker* AxesWalker::getNextWalker() {
	return this->m_nextWalker;
}

void AxesWalker::setPrevWalker(AxesWalker* walker) {
	$set(this, m_prevWalker, walker);
}

AxesWalker* AxesWalker::getPrevWalker() {
	return this->m_prevWalker;
}

int32_t AxesWalker::returnNextNode(int32_t n) {
	return n;
}

int32_t AxesWalker::getNextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	if (this->m_isFresh) {
		this->m_currentNode = $nc(this->m_traverser)->first(this->m_root);
		this->m_isFresh = false;
	} else if ($DTM::NULL != this->m_currentNode) {
		this->m_currentNode = $nc(this->m_traverser)->next(this->m_root, this->m_currentNode);
	}
	if ($DTM::NULL == this->m_currentNode) {
		this->m_foundLast = true;
	}
	return this->m_currentNode;
}

int32_t AxesWalker::nextNode() {
	$useLocalCurrentObjectStackCache();
	int32_t nextNode = $DTM::NULL;
	$var(AxesWalker, walker, $nc($(wi()))->getLastUsedWalker());
	while (true) {
		if (nullptr == walker) {
			break;
		}
		nextNode = $nc(walker)->getNextNode();
		if ($DTM::NULL == nextNode) {
			$assign(walker, walker->m_prevWalker);
		} else {
			if (walker->acceptNode(nextNode) != $DTMIterator::FILTER_ACCEPT) {
				continue;
			}
			if (nullptr == walker->m_nextWalker) {
				$nc($(wi()))->setLastUsedWalker(walker);
				break;
			} else {
				$var(AxesWalker, prev, walker);
				$assign(walker, walker->m_nextWalker);
				$nc(walker)->setRoot(nextNode);
				$set(walker, m_prevWalker, prev);
				continue;
			}
		}
	}
	return nextNode;
}

int32_t AxesWalker::getLastPos($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = getProximityPosition();
	$var(AxesWalker, walker, nullptr);
	try {
		$assign(walker, $cast(AxesWalker, clone()));
	} catch ($CloneNotSupportedException& cnse) {
		return -1;
	}
	$nc(walker)->setPredicateCount(this->m_predicateIndex);
	walker->setNextWalker(nullptr);
	walker->setPrevWalker(nullptr);
	$var($WalkingIterator, lpi, wi());
	$var(AxesWalker, savedWalker, $nc(lpi)->getLastUsedWalker());
	{
		$var($Throwable, var$0, nullptr);
		try {
			lpi->setLastUsedWalker(walker);
			int32_t next = 0;
			while ($DTM::NULL != (next = walker->nextNode())) {
				++pos;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			lpi->setLastUsedWalker(savedWalker);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return pos;
}

void AxesWalker::setDefaultDTM($DTM* dtm) {
	$set(this, m_dtm, dtm);
}

$DTM* AxesWalker::getDTM(int32_t node) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(wi()))->getXPathContext()))->getDTM(node);
}

bool AxesWalker::isDocOrdered() {
	return true;
}

int32_t AxesWalker::getAxis() {
	return this->m_axis;
}

void AxesWalker::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitStep(owner, this)) {
		callPredicateVisitors(visitor);
		if (nullptr != this->m_nextWalker) {
			$nc(this->m_nextWalker)->callVisitors(this, visitor);
		}
	}
}

$Expression* AxesWalker::getExpression() {
	return this->m_nextWalker;
}

void AxesWalker::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_nextWalker, $cast(AxesWalker, exp));
}

bool AxesWalker::deepEquals($Expression* expr) {
	if (!$PredicatedNodeTest::deepEquals(expr)) {
		return false;
	}
	$var(AxesWalker, walker, $cast(AxesWalker, expr));
	if (this->m_axis != $nc(walker)->m_axis) {
		return false;
	}
	return true;
}

AxesWalker::AxesWalker() {
}

$Class* AxesWalker::load$($String* name, bool initialize) {
	$loadClass(AxesWalker, name, initialize, &_AxesWalker_ClassInfo_, allocate$AxesWalker);
	return class$;
}

$Class* AxesWalker::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com