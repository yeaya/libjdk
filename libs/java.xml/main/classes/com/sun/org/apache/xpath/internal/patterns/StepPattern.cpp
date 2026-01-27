#include <com/sun/org/apache/xpath/internal/patterns/StepPattern.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/compiler/PsuedoNames.h>
#include <com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/patterns/StepPattern$PredOwner.h>
#include <java/lang/Error.h>
#include <java/lang/StringBuffer.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef CHILD
#undef CLASS_NUMBER
#undef DEBUG_MATCHES
#undef NULL
#undef PRECEDINGSIBLING
#undef PSEUDONAME_ANY
#undef PSEUDONAME_COMMENT
#undef PSEUDONAME_ROOT
#undef PSEUDONAME_TEXT
#undef SCORE_NONE
#undef SCORE_OTHER
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_BYFUNCTION
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_ELEMENT
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT
#undef WILD

using $ExpressionArray = $Array<::com::sun::org::apache::xpath::internal::Expression>;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $ExpressionNode = ::com::sun::org::apache::xpath::internal::ExpressionNode;
using $ExpressionOwner = ::com::sun::org::apache::xpath::internal::ExpressionOwner;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $XPathVisitor = ::com::sun::org::apache::xpath::internal::XPathVisitor;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $PsuedoNames = ::com::sun::org::apache::xpath::internal::compiler::PsuedoNames;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $StepPattern$PredOwner = ::com::sun::org::apache::xpath::internal::patterns::StepPattern$PredOwner;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace patterns {

$FieldInfo _StepPattern_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(StepPattern, serialVersionUID)},
	{"m_axis", "I", nullptr, $PROTECTED, $field(StepPattern, m_axis)},
	{"m_targetString", "Ljava/lang/String;", nullptr, 0, $field(StepPattern, m_targetString)},
	{"m_relativePathPattern", "Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, 0, $field(StepPattern, m_relativePathPattern)},
	{"m_predicates", "[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, 0, $field(StepPattern, m_predicates)},
	{"DEBUG_MATCHES", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StepPattern, DEBUG_MATCHES)},
	{}
};

$MethodInfo _StepPattern_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(StepPattern, init$, void, int32_t, $String*, $String*, int32_t, int32_t)},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(StepPattern, init$, void, int32_t, int32_t, int32_t)},
	{"calcScore", "()V", nullptr, $PUBLIC, $virtualMethod(StepPattern, calcScore, void)},
	{"calcTargetString", "()V", nullptr, $PUBLIC, $virtualMethod(StepPattern, calcTargetString, void)},
	{"callSubtreeVisitors", "(Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PROTECTED, $virtualMethod(StepPattern, callSubtreeVisitors, void, $XPathVisitor*)},
	{"callVisitors", "(Lcom/sun/org/apache/xpath/internal/ExpressionOwner;Lcom/sun/org/apache/xpath/internal/XPathVisitor;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, callVisitors, void, $ExpressionOwner*, $XPathVisitor*)},
	{"canTraverseOutsideSubtree", "()Z", nullptr, $PUBLIC, $virtualMethod(StepPattern, canTraverseOutsideSubtree, bool)},
	{"checkProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/dtm/DTM;II)Z", nullptr, $PRIVATE | $FINAL, $method(StepPattern, checkProximityPosition, bool, $XPathContext*, int32_t, $DTM*, int32_t, int32_t)},
	{"deepEquals", "(Lcom/sun/org/apache/xpath/internal/Expression;)Z", nullptr, $PUBLIC, $virtualMethod(StepPattern, deepEquals, bool, $Expression*)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(StepPattern, execute, $XObject*, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(StepPattern, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILcom/sun/org/apache/xml/internal/dtm/DTM;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(StepPattern, execute, $XObject*, $XPathContext*, int32_t, $DTM*, int32_t), "javax.xml.transform.TransformerException"},
	{"executePredicates", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xml/internal/dtm/DTM;I)Z", nullptr, $PROTECTED | $FINAL, $method(StepPattern, executePredicates, bool, $XPathContext*, $DTM*, int32_t), "javax.xml.transform.TransformerException"},
	{"executeRelativePathPattern", "(Lcom/sun/org/apache/xpath/internal/XPathContext;Lcom/sun/org/apache/xml/internal/dtm/DTM;I)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PROTECTED | $FINAL, $method(StepPattern, executeRelativePathPattern, $XObject*, $XPathContext*, $DTM*, int32_t), "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC, $virtualMethod(StepPattern, fixupVariables, void, $List*, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(StepPattern, getAxis, int32_t)},
	{"getExpression", "()Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getExpression, $Expression*)},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(StepPattern, getLastPos, int32_t, $XPathContext*)},
	{"getMatchScore", "(Lcom/sun/org/apache/xpath/internal/XPathContext;I)D", nullptr, $PUBLIC, $virtualMethod(StepPattern, getMatchScore, double, $XPathContext*, int32_t), "javax.xml.transform.TransformerException"},
	{"getPredicate", "(I)Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getPredicate, $Expression*, int32_t)},
	{"getPredicateCount", "()I", nullptr, $PUBLIC | $FINAL, $method(StepPattern, getPredicateCount, int32_t)},
	{"getPredicates", "()[Lcom/sun/org/apache/xpath/internal/Expression;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getPredicates, $ExpressionArray*)},
	{"getProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;IZ)I", nullptr, $PRIVATE | $FINAL, $method(StepPattern, getProximityPosition, int32_t, $XPathContext*, int32_t, bool)},
	{"getProximityPosition", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(StepPattern, getProximityPosition, int32_t, $XPathContext*)},
	{"getRelativePathPattern", "()Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getRelativePathPattern, StepPattern*)},
	{"getTargetString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getTargetString, $String*)},
	{"setAxis", "(I)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setAxis, void, int32_t)},
	{"setExpression", "(Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setExpression, void, $Expression*)},
	{"setPredicates", "([Lcom/sun/org/apache/xpath/internal/Expression;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setPredicates, void, $ExpressionArray*)},
	{"setRelativePathPattern", "(Lcom/sun/org/apache/xpath/internal/patterns/StepPattern;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setRelativePathPattern, void, StepPattern*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StepPattern, toString, $String*)},
	{}
};

$InnerClassInfo _StepPattern_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.patterns.StepPattern$PredOwner", "com.sun.org.apache.xpath.internal.patterns.StepPattern", "PredOwner", 0},
	{}
};

$ClassInfo _StepPattern_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.patterns.StepPattern",
	"com.sun.org.apache.xpath.internal.patterns.NodeTest",
	"com.sun.org.apache.xpath.internal.axes.SubContextList,com.sun.org.apache.xpath.internal.ExpressionOwner",
	_StepPattern_FieldInfo_,
	_StepPattern_MethodInfo_,
	nullptr,
	nullptr,
	_StepPattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.patterns.StepPattern$PredOwner"
};

$Object* allocate$StepPattern($Class* clazz) {
	return $of($alloc(StepPattern));
}

int32_t StepPattern::hashCode() {
	 return this->$NodeTest::hashCode();
}

bool StepPattern::equals(Object$* arg0) {
	 return this->$NodeTest::equals(arg0);
}

$Object* StepPattern::clone() {
	 return this->$NodeTest::clone();
}

void StepPattern::finalize() {
	this->$NodeTest::finalize();
}

void StepPattern::init$(int32_t whatToShow, $String* namespace$, $String* name, int32_t axis, int32_t axisForPredicate) {
	$NodeTest::init$(whatToShow, namespace$, name);
	this->m_axis = axis;
}

void StepPattern::init$(int32_t whatToShow, int32_t axis, int32_t axisForPredicate) {
	$NodeTest::init$(whatToShow);
	this->m_axis = axis;
}

void StepPattern::calcTargetString() {
	int32_t whatToShow = getWhatToShow();
	do {
		if (whatToShow == $DTMFilter::SHOW_COMMENT) {
			goto case$0;
		}
		if (whatToShow == $DTMFilter::SHOW_TEXT) {
			goto case$1;
		}
		if (whatToShow == $DTMFilter::SHOW_CDATA_SECTION) {
			goto case$2;
		}
		if (whatToShow == ($DTMFilter::SHOW_TEXT | $DTMFilter::SHOW_CDATA_SECTION)) {
			goto case$3;
		}
		if (whatToShow == $DTMFilter::SHOW_ALL) {
			goto case$4;
		}
		if (whatToShow == $DTMFilter::SHOW_DOCUMENT) {
			goto case$5;
		}
		if (whatToShow == ($DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT)) {
			goto case$6;
		}
		if (whatToShow == $DTMFilter::SHOW_ELEMENT) {
			goto case$7;
		}
		goto case$8;
case$0:
		// DTMFilter.SHOW_COMMENT
		{
			$init($PsuedoNames);
			$set(this, m_targetString, $PsuedoNames::PSEUDONAME_COMMENT);
			break;
		}
case$1:
		// DTMFilter.SHOW_TEXT
		{
		}
case$2:
		// DTMFilter.SHOW_CDATA_SECTION
		{
		}
case$3:
		// (DTMFilter.SHOW_TEXT | DTMFilter.SHOW_CDATA_SECTION)
		{
			$init($PsuedoNames);
			$set(this, m_targetString, $PsuedoNames::PSEUDONAME_TEXT);
			break;
		}
case$4:
		// DTMFilter.SHOW_ALL
		{
			$init($PsuedoNames);
			$set(this, m_targetString, $PsuedoNames::PSEUDONAME_ANY);
			break;
		}
case$5:
		// DTMFilter.SHOW_DOCUMENT
		{
		}
case$6:
		// DTMFilter.SHOW_DOCUMENT | DTMFilter.SHOW_DOCUMENT_FRAGMENT
		{
			$init($PsuedoNames);
			$set(this, m_targetString, $PsuedoNames::PSEUDONAME_ROOT);
			break;
		}
case$7:
		// DTMFilter.SHOW_ELEMENT
		{
			$init($NodeTest);
			if ($nc($NodeTest::WILD)->equals(this->m_name)) {
				$init($PsuedoNames);
				$set(this, m_targetString, $PsuedoNames::PSEUDONAME_ANY);
			} else {
				$set(this, m_targetString, this->m_name);
			}
			break;
		}
case$8:
		// default
		{
			$init($PsuedoNames);
			$set(this, m_targetString, $PsuedoNames::PSEUDONAME_ANY);
			break;
		}
	} while (false);
}

$String* StepPattern::getTargetString() {
	return this->m_targetString;
}

void StepPattern::fixupVariables($List* vars, int32_t globalsSize) {
	$NodeTest::fixupVariables(vars, globalsSize);
	if (nullptr != this->m_predicates) {
		for (int32_t i = 0; i < $nc(this->m_predicates)->length; ++i) {
			$nc($nc(this->m_predicates)->get(i))->fixupVariables(vars, globalsSize);
		}
	}
	if (nullptr != this->m_relativePathPattern) {
		$nc(this->m_relativePathPattern)->fixupVariables(vars, globalsSize);
	}
}

void StepPattern::setRelativePathPattern(StepPattern* expr) {
	$set(this, m_relativePathPattern, expr);
	$nc(expr)->exprSetParent(this);
	calcScore();
}

StepPattern* StepPattern::getRelativePathPattern() {
	return this->m_relativePathPattern;
}

$ExpressionArray* StepPattern::getPredicates() {
	return this->m_predicates;
}

bool StepPattern::canTraverseOutsideSubtree() {
	$useLocalCurrentObjectStackCache();
	int32_t n = getPredicateCount();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc($(getPredicate(i)))->canTraverseOutsideSubtree()) {
			return true;
		}
	}
	return false;
}

$Expression* StepPattern::getPredicate(int32_t i) {
	return $nc(this->m_predicates)->get(i);
}

int32_t StepPattern::getPredicateCount() {
	return (nullptr == this->m_predicates) ? 0 : $nc(this->m_predicates)->length;
}

void StepPattern::setPredicates($ExpressionArray* predicates) {
	$set(this, m_predicates, predicates);
	if (nullptr != predicates) {
		for (int32_t i = 0; i < predicates->length; ++i) {
			$nc(predicates->get(i))->exprSetParent(this);
		}
	}
	calcScore();
}

void StepPattern::calcScore() {
	if ((getPredicateCount() > 0) || (nullptr != this->m_relativePathPattern)) {
		$init($NodeTest);
		$set(this, m_score, $NodeTest::SCORE_OTHER);
	} else {
		$NodeTest::calcScore();
	}
	if (nullptr == this->m_targetString) {
		calcTargetString();
	}
}

$XObject* StepPattern::execute($XPathContext* xctxt, int32_t currentNode) {
	$var($DTM, dtm, $nc(xctxt)->getDTM(currentNode));
	if (dtm != nullptr) {
		int32_t expType = dtm->getExpandedTypeID(currentNode);
		return execute(xctxt, currentNode, dtm, expType);
	}
	$init($NodeTest);
	return $NodeTest::SCORE_NONE;
}

$XObject* StepPattern::execute($XPathContext* xctxt) {
	return execute(xctxt, $nc(xctxt)->getCurrentNode());
}

$XObject* StepPattern::execute($XPathContext* xctxt, int32_t currentNode, $DTM* dtm, int32_t expType) {
	if (this->m_whatToShow == $NodeTest::SHOW_BYFUNCTION) {
		if (nullptr != this->m_relativePathPattern) {
			return $nc(this->m_relativePathPattern)->execute(xctxt);
		} else {
			$init($NodeTest);
			return $NodeTest::SCORE_NONE;
		}
	}
	$var($XObject, score, nullptr);
	$assign(score, $NodeTest::execute(xctxt, currentNode, dtm, expType));
	if ($equals(score, $NodeTest::SCORE_NONE)) {
		return $NodeTest::SCORE_NONE;
	}
	if (getPredicateCount() != 0) {
		if (!executePredicates(xctxt, dtm, currentNode)) {
			return $NodeTest::SCORE_NONE;
		}
	}
	if (nullptr != this->m_relativePathPattern) {
		return $nc(this->m_relativePathPattern)->executeRelativePathPattern(xctxt, dtm, currentNode);
	}
	return score;
}

bool StepPattern::checkProximityPosition($XPathContext* xctxt, int32_t predPos, $DTM* dtm, int32_t context, int32_t pos) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DTMAxisTraverser, traverser, $nc(dtm)->getAxisTraverser($Axis::PRECEDINGSIBLING));
		for (int32_t child = $nc(traverser)->first(context); $DTM::NULL != child; child = traverser->next(context, child)) {
			{
				$var($Throwable, var$0, nullptr);
				bool var$2 = false;
				bool return$1 = false;
				try {
					$nc(xctxt)->pushCurrentNode(child);
					$init($NodeTest);
					if (!$equals($NodeTest::SCORE_NONE, $NodeTest::execute(xctxt, child))) {
						bool pass = true;
						{
							$var($Throwable, var$3, nullptr);
							try {
								xctxt->pushSubContextList(this);
								for (int32_t i = 0; i < predPos; ++i) {
									xctxt->pushPredicatePos(i);
									{
										$var($Throwable, var$4, nullptr);
										bool break$5 = false;
										try {
											$var($XObject, pred, $nc($nc(this->m_predicates)->get(i))->execute(xctxt));
											{
												$var($Throwable, var$6, nullptr);
												bool break$7 = false;
												try {
													if ($XObject::CLASS_NUMBER == $nc(pred)->getType()) {
														$throwNew($Error, "Why: Should never have been called"_s);
													} else if (!pred->boolWithSideEffects()) {
														pass = false;
														// break;
														break$7 = true;
														goto $finally3;
													}
												} catch ($Throwable& var$8) {
													$assign(var$6, var$8);
												} $finally3: {
													$nc(pred)->detach();
												}
												if (var$6 != nullptr) {
													$throw(var$6);
												}
												if (break$7) {
													break;
												}
											}
										} catch ($Throwable& var$9) {
											$assign(var$4, var$9);
										} /*finally*/ {
											xctxt->popPredicatePos();
										}
										if (var$4 != nullptr) {
											$throw(var$4);
										}
										if (break$5) {
											break;
										}
									}
								}
							} catch ($Throwable& var$10) {
								$assign(var$3, var$10);
							} /*finally*/ {
								xctxt->popSubContextList();
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
						}
						if (pass) {
							--pos;
						}
						if (pos < 1) {
							var$2 = false;
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& var$11) {
					$assign(var$0, var$11);
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
		}
	} catch ($TransformerException& se) {
		$throwNew($RuntimeException, $(se->getMessage()));
	}
	return (pos == 1);
}

int32_t StepPattern::getProximityPosition($XPathContext* xctxt, int32_t predPos, bool findLast) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = 0;
	int32_t context = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(context));
	int32_t parent = $nc(dtm)->getParent(context);
	try {
		$var($DTMAxisTraverser, traverser, dtm->getAxisTraverser($Axis::CHILD));
		for (int32_t child = $nc(traverser)->first(parent); $DTM::NULL != child; child = traverser->next(parent, child)) {
			{
				$var($Throwable, var$0, nullptr);
				int32_t var$2 = 0;
				bool return$1 = false;
				try {
					xctxt->pushCurrentNode(child);
					$init($NodeTest);
					if (!$equals($NodeTest::SCORE_NONE, $NodeTest::execute(xctxt, child))) {
						bool pass = true;
						{
							$var($Throwable, var$3, nullptr);
							try {
								xctxt->pushSubContextList(this);
								for (int32_t i = 0; i < predPos; ++i) {
									xctxt->pushPredicatePos(i);
									{
										$var($Throwable, var$4, nullptr);
										bool break$5 = false;
										bool break$6 = false;
										try {
											$var($XObject, pred, $nc($nc(this->m_predicates)->get(i))->execute(xctxt));
											{
												$var($Throwable, var$7, nullptr);
												bool break$8 = false;
												bool break$9 = false;
												try {
													if ($XObject::CLASS_NUMBER == $nc(pred)->getType()) {
														if ((pos + 1) != $cast(int32_t, pred->numWithSideEffects())) {
															pass = false;
															// break;
															break$8 = true;
															goto $finally3;
														}
													} else if (!pred->boolWithSideEffects()) {
														pass = false;
														// break;
														break$9 = true;
														goto $finally3;
													}
												} catch ($Throwable& var$10) {
													$assign(var$7, var$10);
												} $finally3: {
													$nc(pred)->detach();
												}
												if (var$7 != nullptr) {
													$throw(var$7);
												}
												if (break$8) {
													break;
												}
												if (break$9) {
													break;
												}
											}
										} catch ($Throwable& var$11) {
											$assign(var$4, var$11);
										} /*finally*/ {
											xctxt->popPredicatePos();
										}
										if (var$4 != nullptr) {
											$throw(var$4);
										}
										if (break$5) {
											break;
										}
										if (break$6) {
											break;
										}
									}
								}
							} catch ($Throwable& var$12) {
								$assign(var$3, var$12);
							} /*finally*/ {
								xctxt->popSubContextList();
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
						}
						if (pass) {
							++pos;
						}
						if (!findLast && child == context) {
							var$2 = pos;
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& var$13) {
					$assign(var$0, var$13);
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
	} catch ($TransformerException& se) {
		$throwNew($RuntimeException, $(se->getMessage()));
	}
	return pos;
}

int32_t StepPattern::getProximityPosition($XPathContext* xctxt) {
	return getProximityPosition(xctxt, $nc(xctxt)->getPredicatePos(), false);
}

int32_t StepPattern::getLastPos($XPathContext* xctxt) {
	return getProximityPosition(xctxt, $nc(xctxt)->getPredicatePos(), true);
}

$XObject* StepPattern::executeRelativePathPattern($XPathContext* xctxt, $DTM* dtm, int32_t currentNode) {
	$useLocalCurrentObjectStackCache();
	$init($NodeTest);
	$var($XObject, score, $NodeTest::SCORE_NONE);
	int32_t context = currentNode;
	$var($DTMAxisTraverser, traverser, nullptr);
	$assign(traverser, $nc(dtm)->getAxisTraverser(this->m_axis));
	for (int32_t relative = $nc(traverser)->first(context); $DTM::NULL != relative; relative = traverser->next(context, relative)) {
		{
			$var($Throwable, var$0, nullptr);
			bool break$1 = false;
			try {
				$nc(xctxt)->pushCurrentNode(relative);
				$assign(score, execute(xctxt));
				if (!$equals(score, $NodeTest::SCORE_NONE)) {
					// break;
					break$1 = true;
					goto $finally;
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				$nc(xctxt)->popCurrentNode();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (break$1) {
				break;
			}
		}
	}
	return score;
}

bool StepPattern::executePredicates($XPathContext* xctxt, $DTM* dtm, int32_t currentNode) {
	$useLocalCurrentObjectStackCache();
	bool result = true;
	bool positionAlreadySeen = false;
	int32_t n = getPredicateCount();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(xctxt)->pushSubContextList(this);
			for (int32_t i = 0; i < n; ++i) {
				xctxt->pushPredicatePos(i);
				{
					$var($Throwable, var$1, nullptr);
					bool break$2 = false;
					bool break$3 = false;
					bool break$4 = false;
					try {
						$var($XObject, pred, $nc($nc(this->m_predicates)->get(i))->execute(xctxt));
						{
							$var($Throwable, var$5, nullptr);
							bool break$6 = false;
							bool break$7 = false;
							bool break$8 = false;
							try {
								if ($XObject::CLASS_NUMBER == $nc(pred)->getType()) {
									int32_t pos = $cast(int32_t, pred->num());
									if (positionAlreadySeen) {
										result = (pos == 1);
										// break;
										break$6 = true;
										goto $finally2;
									} else {
										positionAlreadySeen = true;
										if (!checkProximityPosition(xctxt, i, dtm, currentNode, pos)) {
											result = false;
											// break;
											break$7 = true;
											goto $finally2;
										}
									}
								} else if (!pred->boolWithSideEffects()) {
									result = false;
									// break;
									break$8 = true;
									goto $finally2;
								}
							} catch ($Throwable& var$9) {
								$assign(var$5, var$9);
							} $finally2: {
								$nc(pred)->detach();
							}
							if (var$5 != nullptr) {
								$throw(var$5);
							}
							if (break$6) {
								break;
							}
							if (break$7) {
								break;
							}
							if (break$8) {
								break;
							}
						}
					} catch ($Throwable& var$10) {
						$assign(var$1, var$10);
					} /*finally*/ {
						xctxt->popPredicatePos();
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
					if (break$2) {
						break;
					}
					if (break$3) {
						break;
					}
					if (break$4) {
						break;
					}
				}
			}
		} catch ($Throwable& var$11) {
			$assign(var$0, var$11);
		} /*finally*/ {
			$nc(xctxt)->popSubContextList();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return result;
}

$String* StepPattern::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer));
	{
		$var(StepPattern, pat, this);
		for (; pat != nullptr; $assign(pat, pat->m_relativePathPattern)) {
			if (pat != this) {
				buf->append("/"_s);
			}
			buf->append($($Axis::getNames($nc(pat)->m_axis)));
			buf->append("::"_s);
			if (20480 == $nc(pat)->m_whatToShow) {
				buf->append("doc()"_s);
			} else if ($DTMFilter::SHOW_BYFUNCTION == pat->m_whatToShow) {
				buf->append("function()"_s);
			} else if ($DTMFilter::SHOW_ALL == pat->m_whatToShow) {
				buf->append("node()"_s);
			} else if ($DTMFilter::SHOW_TEXT == pat->m_whatToShow) {
				buf->append("text()"_s);
			} else if ($DTMFilter::SHOW_PROCESSING_INSTRUCTION == pat->m_whatToShow) {
				buf->append("processing-instruction("_s);
				if (nullptr != pat->m_name) {
					buf->append(pat->m_name);
				}
				buf->append(")"_s);
			} else if ($DTMFilter::SHOW_COMMENT == pat->m_whatToShow) {
				buf->append("comment()"_s);
			} else if (nullptr != pat->m_name) {
				if ($DTMFilter::SHOW_ATTRIBUTE == pat->m_whatToShow) {
					buf->append("@"_s);
				}
				if (nullptr != pat->m_namespace) {
					buf->append("{"_s);
					buf->append(pat->m_namespace);
					buf->append("}"_s);
				}
				buf->append(pat->m_name);
			} else if ($DTMFilter::SHOW_ATTRIBUTE == pat->m_whatToShow) {
				buf->append("@"_s);
			} else if (($DTMFilter::SHOW_DOCUMENT | $DTMFilter::SHOW_DOCUMENT_FRAGMENT) == pat->m_whatToShow) {
				buf->append("doc-root()"_s);
			} else {
				buf->append(u'?')->append($($Integer::toHexString(pat->m_whatToShow)));
			}
			if (nullptr != $nc(pat)->m_predicates) {
				for (int32_t i = 0; i < $nc(pat->m_predicates)->length; ++i) {
					buf->append("["_s);
					buf->append($of($nc(pat->m_predicates)->get(i)));
					buf->append("]"_s);
				}
			}
		}
	}
	return buf->toString();
}

double StepPattern::getMatchScore($XPathContext* xctxt, int32_t context) {
	$useLocalCurrentObjectStackCache();
	$nc(xctxt)->pushCurrentNode(context);
	xctxt->pushCurrentExpressionNode(context);
	{
		$var($Throwable, var$0, nullptr);
		double var$2 = 0.0;
		bool return$1 = false;
		try {
			$var($XObject, score, execute(xctxt));
			var$2 = $nc(score)->num();
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			xctxt->popCurrentNode();
			xctxt->popCurrentExpressionNode();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void StepPattern::setAxis(int32_t axis) {
	this->m_axis = axis;
}

int32_t StepPattern::getAxis() {
	return this->m_axis;
}

void StepPattern::callVisitors($ExpressionOwner* owner, $XPathVisitor* visitor) {
	if ($nc(visitor)->visitMatchPattern(owner, this)) {
		callSubtreeVisitors(visitor);
	}
}

void StepPattern::callSubtreeVisitors($XPathVisitor* visitor) {
	$useLocalCurrentObjectStackCache();
	if (nullptr != this->m_predicates) {
		int32_t n = $nc(this->m_predicates)->length;
		for (int32_t i = 0; i < n; ++i) {
			$var($ExpressionOwner, predOwner, $new($StepPattern$PredOwner, this, i));
			if ($nc(visitor)->visitPredicate(predOwner, $nc(this->m_predicates)->get(i))) {
				$nc($nc(this->m_predicates)->get(i))->callVisitors(predOwner, visitor);
			}
		}
	}
	if (nullptr != this->m_relativePathPattern) {
		$nc(this->m_relativePathPattern)->callVisitors(this, visitor);
	}
}

$Expression* StepPattern::getExpression() {
	return this->m_relativePathPattern;
}

void StepPattern::setExpression($Expression* exp) {
	$nc(exp)->exprSetParent(this);
	$set(this, m_relativePathPattern, $cast(StepPattern, exp));
}

bool StepPattern::deepEquals($Expression* expr) {
	if (!$NodeTest::deepEquals(expr)) {
		return false;
	}
	$var(StepPattern, sp, $cast(StepPattern, expr));
	if (nullptr != this->m_predicates) {
		int32_t n = $nc(this->m_predicates)->length;
		if ((nullptr == $nc(sp)->m_predicates) || ($nc($nc(sp)->m_predicates)->length != n)) {
			return false;
		}
		for (int32_t i = 0; i < n; ++i) {
			if (!$nc($nc(this->m_predicates)->get(i))->deepEquals($nc($nc(sp)->m_predicates)->get(i))) {
				return false;
			}
		}
	} else if (nullptr != $nc(sp)->m_predicates) {
		return false;
	}
	if (nullptr != this->m_relativePathPattern) {
		if (!$nc(this->m_relativePathPattern)->deepEquals($nc(sp)->m_relativePathPattern)) {
			return false;
		}
	} else if ($nc(sp)->m_relativePathPattern != nullptr) {
		return false;
	}
	return true;
}

StepPattern::StepPattern() {
}

$Class* StepPattern::load$($String* name, bool initialize) {
	$loadClass(StepPattern, name, initialize, &_StepPattern_ClassInfo_, allocate$StepPattern);
	return class$;
}

$Class* StepPattern::class$ = nullptr;

						} // patterns
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com