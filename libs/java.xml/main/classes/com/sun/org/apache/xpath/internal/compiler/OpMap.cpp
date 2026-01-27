#include <com/sun/org/apache/xpath/internal/compiler/OpMap.h>

#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/ObjectVector.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpMapVector.h>
#include <com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef AXES_END_TYPES
#undef AXES_START_TYPES
#undef BLOCKTOKENQUEUESIZE
#undef ELEMWILDCARD
#undef EMPTY
#undef ENDOP
#undef ER_UNKNOWN_OPCODE
#undef ER_UNKNOWN_STEP
#undef FIRST_NODESET_OP
#undef LAST_NODESET_OP
#undef MAPINDEX_LENGTH
#undef MAXTOKENQUEUESIZE
#undef OP_PREDICATE
#undef WILD

using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $ObjectVector = ::com::sun::org::apache::xml::internal::utils::ObjectVector;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $OpMapVector = ::com::sun::org::apache::xpath::internal::compiler::OpMapVector;
using $NodeTest = ::com::sun::org::apache::xpath::internal::patterns::NodeTest;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _OpMap_FieldInfo_[] = {
	{"m_currentPattern", "Ljava/lang/String;", nullptr, $PROTECTED, $field(OpMap, m_currentPattern)},
	{"MAXTOKENQUEUESIZE", "I", nullptr, $STATIC | $FINAL, $constField(OpMap, MAXTOKENQUEUESIZE)},
	{"BLOCKTOKENQUEUESIZE", "I", nullptr, $STATIC | $FINAL, $constField(OpMap, BLOCKTOKENQUEUESIZE)},
	{"m_tokenQueue", "Lcom/sun/org/apache/xml/internal/utils/ObjectVector;", nullptr, 0, $field(OpMap, m_tokenQueue)},
	{"m_opMap", "Lcom/sun/org/apache/xpath/internal/compiler/OpMapVector;", nullptr, 0, $field(OpMap, m_opMap)},
	{"MAPINDEX_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(OpMap, MAPINDEX_LENGTH)},
	{}
};

$MethodInfo _OpMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OpMap, init$, void)},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(OpMap, error, void, $String*, $ObjectArray*), "javax.xml.transform.TransformerException"},
	{"getArgLength", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getArgLength, int32_t, int32_t)},
	{"getArgLengthOfStep", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getArgLengthOfStep, int32_t, int32_t)},
	{"getFirstChildPos", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(OpMap, getFirstChildPos, int32_t, int32_t)},
	{"getFirstChildPosOfStep", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(OpMap, getFirstChildPosOfStep, int32_t, int32_t)},
	{"getFirstPredicateOpPos", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getFirstPredicateOpPos, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"getNextOpPos", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getNextOpPos, int32_t, int32_t)},
	{"getNextOpPos", "([II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(OpMap, getNextOpPos, int32_t, $ints*, int32_t)},
	{"getNextStepPos", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getNextStepPos, int32_t, int32_t)},
	{"getOp", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getOp, int32_t, int32_t)},
	{"getOpMap", "()Lcom/sun/org/apache/xpath/internal/compiler/OpMapVector;", nullptr, $PUBLIC, $virtualMethod(OpMap, getOpMap, $OpMapVector*)},
	{"getPatternString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpMap, getPatternString, $String*)},
	{"getStepLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpMap, getStepLocalName, $String*, int32_t)},
	{"getStepNS", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpMap, getStepNS, $String*, int32_t)},
	{"getStepTestType", "(I)I", nullptr, $PUBLIC, $virtualMethod(OpMap, getStepTestType, int32_t, int32_t)},
	{"getToken", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OpMap, getToken, $Object*, int32_t)},
	{"getTokenQueue", "()Lcom/sun/org/apache/xml/internal/utils/ObjectVector;", nullptr, $PUBLIC, $virtualMethod(OpMap, getTokenQueue, $ObjectVector*)},
	{"getTokenQueueSize", "()I", nullptr, $PUBLIC, $virtualMethod(OpMap, getTokenQueueSize, int32_t)},
	{"setOp", "(II)V", nullptr, $PUBLIC, $virtualMethod(OpMap, setOp, void, int32_t, int32_t)},
	{"shrink", "()V", nullptr, 0, $virtualMethod(OpMap, shrink, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpMap, toString, $String*)},
	{}
};

$ClassInfo _OpMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.OpMap",
	"java.lang.Object",
	nullptr,
	_OpMap_FieldInfo_,
	_OpMap_MethodInfo_
};

$Object* allocate$OpMap($Class* clazz) {
	return $of($alloc(OpMap));
}

void OpMap::init$() {
	$set(this, m_tokenQueue, $new($ObjectVector, OpMap::MAXTOKENQUEUESIZE, OpMap::BLOCKTOKENQUEUESIZE));
	$set(this, m_opMap, nullptr);
}

$String* OpMap::toString() {
	return this->m_currentPattern;
}

$String* OpMap::getPatternString() {
	return this->m_currentPattern;
}

$ObjectVector* OpMap::getTokenQueue() {
	return this->m_tokenQueue;
}

$Object* OpMap::getToken(int32_t pos) {
	return $of($nc(this->m_tokenQueue)->elementAt(pos));
}

int32_t OpMap::getTokenQueueSize() {
	return $nc(this->m_tokenQueue)->size();
}

$OpMapVector* OpMap::getOpMap() {
	return this->m_opMap;
}

void OpMap::shrink() {
	int32_t n = $nc(this->m_opMap)->elementAt(OpMap::MAPINDEX_LENGTH);
	$nc(this->m_opMap)->setToSize(n + 4);
	$nc(this->m_opMap)->setElementAt(0, n);
	$nc(this->m_opMap)->setElementAt(0, n + 1);
	$nc(this->m_opMap)->setElementAt(0, n + 2);
	n = $nc(this->m_tokenQueue)->size();
	$nc(this->m_tokenQueue)->setToSize(n + 4);
	$nc(this->m_tokenQueue)->setElementAt(nullptr, n);
	$nc(this->m_tokenQueue)->setElementAt(nullptr, n + 1);
	$nc(this->m_tokenQueue)->setElementAt(nullptr, n + 2);
}

int32_t OpMap::getOp(int32_t opPos) {
	return $nc(this->m_opMap)->elementAt(opPos);
}

void OpMap::setOp(int32_t opPos, int32_t value) {
	$nc(this->m_opMap)->setElementAt(value, opPos);
}

int32_t OpMap::getNextOpPos(int32_t opPos) {
	return opPos + $nc(this->m_opMap)->elementAt(opPos + 1);
}

int32_t OpMap::getNextStepPos(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = getOp(opPos);
	if ((stepType >= $OpCodes::AXES_START_TYPES) && (stepType <= $OpCodes::AXES_END_TYPES)) {
		return getNextOpPos(opPos);
	} else if ((stepType >= $OpCodes::FIRST_NODESET_OP) && (stepType <= $OpCodes::LAST_NODESET_OP)) {
		int32_t newOpPos = getNextOpPos(opPos);
		while ($OpCodes::OP_PREDICATE == getOp(newOpPos)) {
			newOpPos = getNextOpPos(newOpPos);
		}
		stepType = getOp(newOpPos);
		if (!((stepType >= $OpCodes::AXES_START_TYPES) && (stepType <= $OpCodes::AXES_END_TYPES))) {
			return $OpCodes::ENDOP;
		}
		return newOpPos;
	} else {
		$init($XPATHErrorResources);
		$throwNew($RuntimeException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_UNKNOWN_STEP, $$new($ObjectArray, {$($of($String::valueOf(stepType)))}))));
	}
}

int32_t OpMap::getNextOpPos($ints* opMap, int32_t opPos) {
	return opPos + $nc(opMap)->get(opPos + 1);
}

int32_t OpMap::getFirstPredicateOpPos(int32_t opPos) {
	$useLocalCurrentObjectStackCache();
	int32_t stepType = $nc(this->m_opMap)->elementAt(opPos);
	if ((stepType >= $OpCodes::AXES_START_TYPES) && (stepType <= $OpCodes::AXES_END_TYPES)) {
		return opPos + $nc(this->m_opMap)->elementAt(opPos + 2);
	} else if ((stepType >= $OpCodes::FIRST_NODESET_OP) && (stepType <= $OpCodes::LAST_NODESET_OP)) {
		return opPos + $nc(this->m_opMap)->elementAt(opPos + 1);
	} else if (-2 == stepType) {
		return -2;
	} else {
		$init($XPATHErrorResources);
		error($XPATHErrorResources::ER_UNKNOWN_OPCODE, $$new($ObjectArray, {$($of($String::valueOf(stepType)))}));
		return -1;
	}
}

void OpMap::error($String* msg, $ObjectArray* args) {
	$var($String, fmsg, $XSLMessages::createXPATHMessage(msg, args));
	$throwNew($TransformerException, fmsg);
}

int32_t OpMap::getFirstChildPos(int32_t opPos) {
	return opPos + 2;
}

int32_t OpMap::getArgLength(int32_t opPos) {
	return $nc(this->m_opMap)->elementAt(opPos + OpMap::MAPINDEX_LENGTH);
}

int32_t OpMap::getArgLengthOfStep(int32_t opPos) {
	return $nc(this->m_opMap)->elementAt(opPos + OpMap::MAPINDEX_LENGTH + 1) - 3;
}

int32_t OpMap::getFirstChildPosOfStep(int32_t opPos) {
	return opPos + 3;
}

int32_t OpMap::getStepTestType(int32_t opPosOfStep) {
	return $nc(this->m_opMap)->elementAt(opPosOfStep + 3);
}

$String* OpMap::getStepNS(int32_t opPosOfStep) {
	int32_t argLenOfStep = getArgLengthOfStep(opPosOfStep);
	if (argLenOfStep == 3) {
		int32_t index = $nc(this->m_opMap)->elementAt(opPosOfStep + 4);
		if (index >= 0) {
			return $cast($String, $nc(this->m_tokenQueue)->elementAt(index));
		} else if ($OpCodes::ELEMWILDCARD == index) {
			$init($NodeTest);
			return $NodeTest::WILD;
		} else {
			return nullptr;
		}
	} else {
		return nullptr;
	}
}

$String* OpMap::getStepLocalName(int32_t opPosOfStep) {
	int32_t argLenOfStep = getArgLengthOfStep(opPosOfStep);
	int32_t index = 0;
	switch (argLenOfStep) {
	case 0:
		{
			index = $OpCodes::EMPTY;
			break;
		}
	case 1:
		{
			index = $OpCodes::ELEMWILDCARD;
			break;
		}
	case 2:
		{
			index = $nc(this->m_opMap)->elementAt(opPosOfStep + 4);
			break;
		}
	case 3:
		{
			index = $nc(this->m_opMap)->elementAt(opPosOfStep + 5);
			break;
		}
	default:
		{
			index = $OpCodes::EMPTY;
			break;
		}
	}
	if (index >= 0) {
		return $nc($of($($nc(this->m_tokenQueue)->elementAt(index))))->toString();
	} else if ($OpCodes::ELEMWILDCARD == index) {
		$init($NodeTest);
		return $NodeTest::WILD;
	} else {
		return nullptr;
	}
}

OpMap::OpMap() {
}

$Class* OpMap::load$($String* name, bool initialize) {
	$loadClass(OpMap, name, initialize, &_OpMap_ClassInfo_, allocate$OpMap);
	return class$;
}

$Class* OpMap::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com