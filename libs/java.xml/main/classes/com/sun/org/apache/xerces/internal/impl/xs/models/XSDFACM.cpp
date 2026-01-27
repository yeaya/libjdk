#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSConstraints.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSWildcardDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMBinOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMRepeatingLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMUniOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSCMValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM$Occurence.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DEBUG
#undef DEBUG_VALIDATE_CONTENT
#undef FIRST_ERROR
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef NSCONSTRAINT_LIST
#undef NSCONSTRAINT_NOT
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE_ELEMENT
#undef PARTICLE_ONE_OR_MORE
#undef PARTICLE_WILDCARD
#undef PARTICLE_ZERO_OR_MORE
#undef PARTICLE_ZERO_OR_ONE
#undef SUBSEQUENT_ERROR
#undef XSDFACM

using $CMStateSetArray = $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet>;
using $XSCMLeafArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf>;
using $XSDFACM$OccurenceArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM$Occurence>;
using $byteArray2 = $Array<int8_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $SubstitutionGroupHandler = ::com::sun::org::apache::xerces::internal::impl::xs::SubstitutionGroupHandler;
using $XMLSchemaException = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaException;
using $XSConstraints = ::com::sun::org::apache::xerces::internal::impl::xs::XSConstraints;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSWildcardDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSWildcardDecl;
using $XSCMBinOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMBinOp;
using $XSCMLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMLeaf;
using $XSCMRepeatingLeaf = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMRepeatingLeaf;
using $XSCMUniOp = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMUniOp;
using $XSCMValidator = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSCMValidator;
using $XSDFACM$Occurence = ::com::sun::org::apache::xerces::internal::impl::xs::models::XSDFACM$Occurence;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace models {

$FieldInfo _XSDFACM_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDFACM, DEBUG)},
	{"DEBUG_VALIDATE_CONTENT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDFACM, DEBUG_VALIDATE_CONTENT)},
	{"fElemMap", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(XSDFACM, fElemMap)},
	{"fElemMapType", "[I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapType)},
	{"fElemMapId", "[I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapId)},
	{"fElemMapSize", "I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapSize)},
	{"fFinalStateFlags", "[Z", nullptr, $PRIVATE, $field(XSDFACM, fFinalStateFlags)},
	{"fFollowList", "[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PRIVATE, $field(XSDFACM, fFollowList)},
	{"fHeadNode", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(XSDFACM, fHeadNode)},
	{"fLeafCount", "I", nullptr, $PRIVATE, $field(XSDFACM, fLeafCount)},
	{"fLeafList", "[Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSCMLeaf;", nullptr, $PRIVATE, $field(XSDFACM, fLeafList)},
	{"fLeafListType", "[I", nullptr, $PRIVATE, $field(XSDFACM, fLeafListType)},
	{"fTransTable", "[[I", nullptr, $PRIVATE, $field(XSDFACM, fTransTable)},
	{"fCountingStates", "[Lcom/sun/org/apache/xerces/internal/impl/xs/models/XSDFACM$Occurence;", nullptr, $PRIVATE, $field(XSDFACM, fCountingStates)},
	{"fTransTableSize", "I", nullptr, $PRIVATE, $field(XSDFACM, fTransTableSize)},
	{"fIsCompactedForUPA", "Z", nullptr, $PRIVATE, $field(XSDFACM, fIsCompactedForUPA)},
	{"fElemMapCounter", "[I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapCounter)},
	{"fElemMapCounterLowerBound", "[I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapCounterLowerBound)},
	{"fElemMapCounterUpperBound", "[I", nullptr, $PRIVATE, $field(XSDFACM, fElemMapCounterUpperBound)},
	{"time", "J", nullptr, $PRIVATE | $STATIC, $staticField(XSDFACM, time)},
	{}
};

$MethodInfo _XSDFACM_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;I)V", nullptr, $PUBLIC, $method(XSDFACM, init$, void, $CMNode*, int32_t)},
	{"buildDFA", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PRIVATE, $method(XSDFACM, buildDFA, void, $CMNode*)},
	{"calcFollowList", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PRIVATE, $method(XSDFACM, calcFollowList, void, $CMNode*)},
	{"checkMinMaxBounds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XSDFACM, checkMinMaxBounds, $List*)},
	{"checkUniqueParticleAttribution", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Z", nullptr, $PUBLIC, $virtualMethod(XSDFACM, checkUniqueParticleAttribution, bool, $SubstitutionGroupHandler*), "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException"},
	{"dumpTree", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;I)V", nullptr, $PRIVATE, $method(XSDFACM, dumpTree, void, $CMNode*, int32_t)},
	{"endContentModel", "([I)Z", nullptr, $PUBLIC, $virtualMethod(XSDFACM, endContentModel, bool, $ints*)},
	{"findMatchingDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XSDFACM, findMatchingDecl, $Object*, $QName*, $SubstitutionGroupHandler*)},
	{"findMatchingDecl", "(Lcom/sun/org/apache/xerces/internal/xni/QName;[ILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;I)Ljava/lang/Object;", nullptr, 0, $virtualMethod(XSDFACM, findMatchingDecl, $Object*, $QName*, $ints*, $SubstitutionGroupHandler*, int32_t)},
	{"getTermName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSDFACM, getTermName, $String*, int32_t)},
	{"isCompactedForUPA", "()Z", nullptr, $PUBLIC, $virtualMethod(XSDFACM, isCompactedForUPA, bool)},
	{"isFinalState", "(I)Z", nullptr, $PUBLIC, $virtualMethod(XSDFACM, isFinalState, bool, int32_t)},
	{"makeDefStateList", "()[I", nullptr, $PRIVATE, $method(XSDFACM, makeDefStateList, $ints*)},
	{"occurenceInfo", "([I)[I", nullptr, $PUBLIC, $virtualMethod(XSDFACM, occurenceInfo, $ints*, $ints*)},
	{"oneTransition", "(Lcom/sun/org/apache/xerces/internal/xni/QName;[ILcom/sun/org/apache/xerces/internal/impl/xs/SubstitutionGroupHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSDFACM, oneTransition, $Object*, $QName*, $ints*, $SubstitutionGroupHandler*)},
	{"postTreeBuildInit", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PRIVATE, $method(XSDFACM, postTreeBuildInit, void, $CMNode*), "java.lang.RuntimeException"},
	{"startContentModel", "()[I", nullptr, $PUBLIC, $virtualMethod(XSDFACM, startContentModel, $ints*)},
	{"whatCanGoHere", "([I)Ljava/util/List;", "([I)Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(XSDFACM, whatCanGoHere, $List*, $ints*)},
	{}
};

$InnerClassInfo _XSDFACM_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM$Occurence", "com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM", "Occurence", $STATIC | $FINAL},
	{}
};

$ClassInfo _XSDFACM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSCMValidator",
	_XSDFACM_FieldInfo_,
	_XSDFACM_MethodInfo_,
	nullptr,
	nullptr,
	_XSDFACM_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.models.XSDFACM$Occurence"
};

$Object* allocate$XSDFACM($Class* clazz) {
	return $of($alloc(XSDFACM));
}

int64_t XSDFACM::time = 0;

void XSDFACM::init$($CMNode* syntaxTree, int32_t leafCount) {
	$set(this, fElemMap, nullptr);
	$set(this, fElemMapType, nullptr);
	$set(this, fElemMapId, nullptr);
	this->fElemMapSize = 0;
	$set(this, fFinalStateFlags, nullptr);
	$set(this, fFollowList, nullptr);
	$set(this, fHeadNode, nullptr);
	this->fLeafCount = 0;
	$set(this, fLeafList, nullptr);
	$set(this, fLeafListType, nullptr);
	$set(this, fTransTable, nullptr);
	$set(this, fCountingStates, nullptr);
	this->fTransTableSize = 0;
	this->fLeafCount = leafCount;
	this->fIsCompactedForUPA = $nc(syntaxTree)->isCompactedForUPA();
	buildDFA(syntaxTree);
}

bool XSDFACM::isFinalState(int32_t state) {
	return (state < 0) ? false : $nc(this->fFinalStateFlags)->get(state);
}

$Object* XSDFACM::oneTransition($QName* curElem, $ints* state, $SubstitutionGroupHandler* subGroupHandler) {
	$useLocalCurrentObjectStackCache();
	int32_t curState = $nc(state)->get(0);
	if (curState == $XSCMValidator::FIRST_ERROR || curState == $XSCMValidator::SUBSEQUENT_ERROR) {
		if (curState == $XSCMValidator::FIRST_ERROR) {
			state->set(0, $XSCMValidator::SUBSEQUENT_ERROR);
		}
		return $of(findMatchingDecl(curElem, subGroupHandler));
	}
	int32_t nextState = 0;
	int32_t elemIndex = 0;
	$var($Object, matchingDecl, nullptr);
	for (; elemIndex < this->fElemMapSize; ++elemIndex) {
		nextState = $nc($nc(this->fTransTable)->get(curState))->get(elemIndex);
		if (nextState == -1) {
			continue;
		}
		int32_t type = $nc(this->fElemMapType)->get(elemIndex);
		if (type == $XSParticleDecl::PARTICLE_ELEMENT) {
			$assign(matchingDecl, $nc(subGroupHandler)->getMatchingElemDecl(curElem, $cast($XSElementDecl, $nc(this->fElemMap)->get(elemIndex))));
			if (matchingDecl != nullptr) {
				if ($nc(this->fElemMapCounter)->get(elemIndex) >= 0) {
					++(*$nc(this->fElemMapCounter))[elemIndex];
				}
				break;
			}
		} else if (type == $XSParticleDecl::PARTICLE_WILDCARD) {
			if ($nc(($cast($XSWildcardDecl, $nc(this->fElemMap)->get(elemIndex))))->allowNamespace($nc(curElem)->uri)) {
				$assign(matchingDecl, $nc(this->fElemMap)->get(elemIndex));
				if ($nc(this->fElemMapCounter)->get(elemIndex) >= 0) {
					++(*$nc(this->fElemMapCounter))[elemIndex];
				}
				break;
			}
		}
	}
	if (elemIndex == this->fElemMapSize) {
		state->set(1, state->get(0));
		state->set(0, $XSCMValidator::FIRST_ERROR);
		return $of(findMatchingDecl(curElem, subGroupHandler));
	}
	if (this->fCountingStates != nullptr) {
		$var($XSDFACM$Occurence, o, $nc(this->fCountingStates)->get(curState));
		if (o != nullptr) {
			if (curState == nextState) {
				if (++(*state)[2] > o->maxOccurs && o->maxOccurs != $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
					return $of(findMatchingDecl(curElem, state, subGroupHandler, elemIndex));
				}
			} else if (state->get(2) < o->minOccurs) {
				state->set(1, state->get(0));
				state->set(0, $XSCMValidator::FIRST_ERROR);
				return $of(findMatchingDecl(curElem, subGroupHandler));
			} else {
				$assign(o, $nc(this->fCountingStates)->get(nextState));
				if (o != nullptr) {
					state->set(2, (elemIndex == o->elemIndex) ? 1 : 0);
				}
			}
		} else {
			$assign(o, $nc(this->fCountingStates)->get(nextState));
			if (o != nullptr) {
				state->set(2, (elemIndex == o->elemIndex) ? 1 : 0);
			}
		}
	}
	state->set(0, nextState);
	return $of(matchingDecl);
}

$Object* XSDFACM::findMatchingDecl($QName* curElem, $SubstitutionGroupHandler* subGroupHandler) {
	$var($Object, matchingDecl, nullptr);
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		int32_t type = $nc(this->fElemMapType)->get(elemIndex);
		if (type == $XSParticleDecl::PARTICLE_ELEMENT) {
			$assign(matchingDecl, $nc(subGroupHandler)->getMatchingElemDecl(curElem, $cast($XSElementDecl, $nc(this->fElemMap)->get(elemIndex))));
			if (matchingDecl != nullptr) {
				return $of(matchingDecl);
			}
		} else if (type == $XSParticleDecl::PARTICLE_WILDCARD) {
			if ($nc(($cast($XSWildcardDecl, $nc(this->fElemMap)->get(elemIndex))))->allowNamespace($nc(curElem)->uri)) {
				return $of($nc(this->fElemMap)->get(elemIndex));
			}
		}
	}
	return $of(nullptr);
}

$Object* XSDFACM::findMatchingDecl($QName* curElem, $ints* state, $SubstitutionGroupHandler* subGroupHandler, int32_t elemIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t curState = $nc(state)->get(0);
	int32_t nextState = 0;
	$var($Object, matchingDecl, nullptr);
	while (++elemIndex < this->fElemMapSize) {
		nextState = $nc($nc(this->fTransTable)->get(curState))->get(elemIndex);
		if (nextState == -1) {
			continue;
		}
		int32_t type = $nc(this->fElemMapType)->get(elemIndex);
		if (type == $XSParticleDecl::PARTICLE_ELEMENT) {
			$assign(matchingDecl, $nc(subGroupHandler)->getMatchingElemDecl(curElem, $cast($XSElementDecl, $nc(this->fElemMap)->get(elemIndex))));
			if (matchingDecl != nullptr) {
				break;
			}
		} else if (type == $XSParticleDecl::PARTICLE_WILDCARD) {
			if ($nc(($cast($XSWildcardDecl, $nc(this->fElemMap)->get(elemIndex))))->allowNamespace($nc(curElem)->uri)) {
				$assign(matchingDecl, $nc(this->fElemMap)->get(elemIndex));
				break;
			}
		}
	}
	if (elemIndex == this->fElemMapSize) {
		state->set(1, state->get(0));
		state->set(0, $XSCMValidator::FIRST_ERROR);
		return $of(findMatchingDecl(curElem, subGroupHandler));
	}
	state->set(0, nextState);
	$var($XSDFACM$Occurence, o, $nc(this->fCountingStates)->get(nextState));
	if (o != nullptr) {
		state->set(2, (elemIndex == o->elemIndex) ? 1 : 0);
	}
	return $of(matchingDecl);
}

$ints* XSDFACM::startContentModel() {
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		if ($nc(this->fElemMapCounter)->get(elemIndex) != -1) {
			$nc(this->fElemMapCounter)->set(elemIndex, 0);
		}
	}
	return $new($ints, 3);
}

bool XSDFACM::endContentModel($ints* state) {
	int32_t curState = $nc(state)->get(0);
	if ($nc(this->fFinalStateFlags)->get(curState)) {
		if (this->fCountingStates != nullptr) {
			$var($XSDFACM$Occurence, o, $nc(this->fCountingStates)->get(curState));
			if (o != nullptr && state->get(2) < o->minOccurs) {
				return false;
			}
		}
		return true;
	}
	return false;
}

void XSDFACM::buildDFA($CMNode* syntaxTree) {
	$useLocalCurrentObjectStackCache();
	int32_t EOCPos = this->fLeafCount;
	$var($XSCMLeaf, nodeEOC, $new($XSCMLeaf, $XSParticleDecl::PARTICLE_ELEMENT, nullptr, -1, this->fLeafCount++));
	$set(this, fHeadNode, $new($XSCMBinOp, $XSModelGroupImpl::MODELGROUP_SEQUENCE, syntaxTree, nodeEOC));
	$set(this, fLeafList, $new($XSCMLeafArray, this->fLeafCount));
	$set(this, fLeafListType, $new($ints, this->fLeafCount));
	postTreeBuildInit(this->fHeadNode);
	$set(this, fFollowList, $new($CMStateSetArray, this->fLeafCount));
	for (int32_t index = 0; index < this->fLeafCount; ++index) {
		$nc(this->fFollowList)->set(index, $$new($CMStateSet, this->fLeafCount));
	}
	calcFollowList(this->fHeadNode);
	$set(this, fElemMap, $new($ObjectArray, this->fLeafCount));
	$set(this, fElemMapType, $new($ints, this->fLeafCount));
	$set(this, fElemMapId, $new($ints, this->fLeafCount));
	$set(this, fElemMapCounter, $new($ints, this->fLeafCount));
	$set(this, fElemMapCounterLowerBound, $new($ints, this->fLeafCount));
	$set(this, fElemMapCounterUpperBound, $new($ints, this->fLeafCount));
	this->fElemMapSize = 0;
	$var($XSDFACM$OccurenceArray, elemOccurenceMap, nullptr);
	for (int32_t outIndex = 0; outIndex < this->fLeafCount; ++outIndex) {
		$nc(this->fElemMap)->set(outIndex, nullptr);
		int32_t inIndex = 0;
		int32_t id = $nc($nc(this->fLeafList)->get(outIndex))->getParticleId();
		for (; inIndex < this->fElemMapSize; ++inIndex) {
			if (id == $nc(this->fElemMapId)->get(inIndex)) {
				break;
			}
		}
		if (inIndex == this->fElemMapSize) {
			$var($XSCMLeaf, leaf, $nc(this->fLeafList)->get(outIndex));
			$nc(this->fElemMap)->set(this->fElemMapSize, $($nc(leaf)->getLeaf()));
			if ($instanceOf($XSCMRepeatingLeaf, leaf)) {
				if (elemOccurenceMap == nullptr) {
					$assign(elemOccurenceMap, $new($XSDFACM$OccurenceArray, this->fLeafCount));
				}
				$nc(elemOccurenceMap)->set(this->fElemMapSize, $$new($XSDFACM$Occurence, $cast($XSCMRepeatingLeaf, leaf), this->fElemMapSize));
			}
			$nc(this->fElemMapType)->set(this->fElemMapSize, $nc(this->fLeafListType)->get(outIndex));
			$nc(this->fElemMapId)->set(this->fElemMapSize, id);
			$var($ints, bounds, $cast($ints, leaf->getUserData()));
			if (bounds != nullptr) {
				$nc(this->fElemMapCounter)->set(this->fElemMapSize, 0);
				$nc(this->fElemMapCounterLowerBound)->set(this->fElemMapSize, bounds->get(0));
				$nc(this->fElemMapCounterUpperBound)->set(this->fElemMapSize, bounds->get(1));
			} else {
				$nc(this->fElemMapCounter)->set(this->fElemMapSize, -1);
				$nc(this->fElemMapCounterLowerBound)->set(this->fElemMapSize, -1);
				$nc(this->fElemMapCounterUpperBound)->set(this->fElemMapSize, -1);
			}
			++this->fElemMapSize;
		}
	}
	--this->fElemMapSize;
	$var($ints, fLeafSorter, $new($ints, this->fLeafCount + this->fElemMapSize));
	int32_t fSortCount = 0;
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		int32_t id = $nc(this->fElemMapId)->get(elemIndex);
		for (int32_t leafIndex = 0; leafIndex < this->fLeafCount; ++leafIndex) {
			if (id == $nc($nc(this->fLeafList)->get(leafIndex))->getParticleId()) {
				fLeafSorter->set(fSortCount++, leafIndex);
			}
		}
		fLeafSorter->set(fSortCount++, -1);
	}
	int32_t curArraySize = this->fLeafCount * 4;
	$var($CMStateSetArray, statesToDo, $new($CMStateSetArray, curArraySize));
	$set(this, fFinalStateFlags, $new($booleans, curArraySize));
	$set(this, fTransTable, $new($intArray2, curArraySize));
	$var($CMStateSet, setT, $nc(this->fHeadNode)->firstPos());
	int32_t unmarkedState = 0;
	int32_t curState = 0;
	$nc(this->fTransTable)->set(curState, $(makeDefStateList()));
	statesToDo->set(curState, setT);
	++curState;
	$var($Map, stateTable, $new($HashMap));
	while (unmarkedState < curState) {
		$assign(setT, $nc(statesToDo)->get(unmarkedState));
		$var($ints, transEntry, $nc(this->fTransTable)->get(unmarkedState));
		$nc(this->fFinalStateFlags)->set(unmarkedState, $nc(setT)->getBit(EOCPos));
		++unmarkedState;
		$var($CMStateSet, newSet, nullptr);
		int32_t sorterIndex = 0;
		for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
			if (newSet == nullptr) {
				$assign(newSet, $new($CMStateSet, this->fLeafCount));
			} else {
				$nc(newSet)->zeroBits();
			}
			int32_t leafIndex = fLeafSorter->get(sorterIndex++);
			while (leafIndex != -1) {
				if (setT->getBit(leafIndex)) {
					$nc(newSet)->union$($nc(this->fFollowList)->get(leafIndex));
				}
				leafIndex = fLeafSorter->get(sorterIndex++);
			}
			if (!$nc(newSet)->isEmpty()) {
				$var($Integer, stateObj, $cast($Integer, stateTable->get(newSet)));
				int32_t stateIndex = (stateObj == nullptr ? curState : $nc(stateObj)->intValue());
				if (stateIndex == curState) {
					statesToDo->set(curState, newSet);
					$nc(this->fTransTable)->set(curState, $(makeDefStateList()));
					stateTable->put(newSet, $($Integer::valueOf(curState)));
					++curState;
					$assign(newSet, nullptr);
				}
				$nc(transEntry)->set(elemIndex, stateIndex);
				if (curState == curArraySize) {
					int32_t newSize = $cast(int32_t, (curArraySize * 1.5));
					$var($CMStateSetArray, newToDo, $new($CMStateSetArray, newSize));
					$var($booleans, newFinalFlags, $new($booleans, newSize));
					$var($intArray2, newTransTable, $new($intArray2, newSize));
					$System::arraycopy(statesToDo, 0, newToDo, 0, curArraySize);
					$System::arraycopy(this->fFinalStateFlags, 0, newFinalFlags, 0, curArraySize);
					$System::arraycopy(this->fTransTable, 0, newTransTable, 0, curArraySize);
					curArraySize = newSize;
					$assign(statesToDo, newToDo);
					$set(this, fFinalStateFlags, newFinalFlags);
					$set(this, fTransTable, newTransTable);
				}
			}
		}
	}
	if (elemOccurenceMap != nullptr) {
		$set(this, fCountingStates, $new($XSDFACM$OccurenceArray, curState));
		for (int32_t i = 0; i < curState; ++i) {
			$var($ints, transitions, $nc(this->fTransTable)->get(i));
			for (int32_t j = 0; j < $nc(transitions)->length; ++j) {
				if (i == transitions->get(j)) {
					$nc(this->fCountingStates)->set(i, elemOccurenceMap->get(j));
					break;
				}
			}
		}
	}
	$set(this, fHeadNode, nullptr);
	$set(this, fLeafList, nullptr);
	$set(this, fFollowList, nullptr);
	$set(this, fLeafListType, nullptr);
	$set(this, fElemMapId, nullptr);
}

void XSDFACM::calcFollowList($CMNode* nodeCur) {
	$useLocalCurrentObjectStackCache();
	if ($nc(nodeCur)->type() == $XSModelGroupImpl::MODELGROUP_CHOICE) {
		calcFollowList($($nc(($cast($XSCMBinOp, nodeCur)))->getLeft()));
		calcFollowList($($nc(($cast($XSCMBinOp, nodeCur)))->getRight()));
	} else if (nodeCur->type() == $XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		calcFollowList($($nc(($cast($XSCMBinOp, nodeCur)))->getLeft()));
		calcFollowList($($nc(($cast($XSCMBinOp, nodeCur)))->getRight()));
		$var($CMStateSet, last, $nc($($nc(($cast($XSCMBinOp, nodeCur)))->getLeft()))->lastPos());
		$var($CMStateSet, first, $nc($(($cast($XSCMBinOp, nodeCur))->getRight()))->firstPos());
		for (int32_t index = 0; index < this->fLeafCount; ++index) {
			if ($nc(last)->getBit(index)) {
				$nc($nc(this->fFollowList)->get(index))->union$(first);
			}
		}
	} else {
		bool var$1 = nodeCur->type() == $XSParticleDecl::PARTICLE_ZERO_OR_MORE;
		if (var$1 || nodeCur->type() == $XSParticleDecl::PARTICLE_ONE_OR_MORE) {
			calcFollowList($($nc(($cast($XSCMUniOp, nodeCur)))->getChild()));
			$var($CMStateSet, first, nodeCur->firstPos());
			$var($CMStateSet, last, nodeCur->lastPos());
			for (int32_t index = 0; index < this->fLeafCount; ++index) {
				if ($nc(last)->getBit(index)) {
					$nc($nc(this->fFollowList)->get(index))->union$(first);
				}
			}
		} else if (nodeCur->type() == $XSParticleDecl::PARTICLE_ZERO_OR_ONE) {
			calcFollowList($($nc(($cast($XSCMUniOp, nodeCur)))->getChild()));
		}
	}
}

void XSDFACM::dumpTree($CMNode* nodeCur, int32_t level) {
	$useLocalCurrentObjectStackCache();
	for (int32_t index = 0; index < level; ++index) {
		$nc($System::out)->print("   "_s);
	}
	int32_t type = $nc(nodeCur)->type();
	switch (type) {
	case $XSModelGroupImpl::MODELGROUP_CHOICE:
		{}
	case $XSModelGroupImpl::MODELGROUP_SEQUENCE:
		{
			{
				if (type == $XSModelGroupImpl::MODELGROUP_CHOICE) {
					$nc($System::out)->print("Choice Node "_s);
				} else {
					$nc($System::out)->print("Seq Node "_s);
				}
				if (nodeCur->isNullable()) {
					$nc($System::out)->print("Nullable "_s);
				}
				$nc($System::out)->print("firstPos="_s);
				$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
				$nc($System::out)->print(" lastPos="_s);
				$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
				dumpTree($($nc(($cast($XSCMBinOp, nodeCur)))->getLeft()), level + 1);
				dumpTree($($nc(($cast($XSCMBinOp, nodeCur)))->getRight()), level + 1);
				break;
			}
		}
	case $XSParticleDecl::PARTICLE_ZERO_OR_MORE:
		{}
	case $XSParticleDecl::PARTICLE_ONE_OR_MORE:
		{}
	case $XSParticleDecl::PARTICLE_ZERO_OR_ONE:
		{
			{
				$nc($System::out)->print("Rep Node "_s);
				if (nodeCur->isNullable()) {
					$nc($System::out)->print("Nullable "_s);
				}
				$nc($System::out)->print("firstPos="_s);
				$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
				$nc($System::out)->print(" lastPos="_s);
				$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
				dumpTree($($nc(($cast($XSCMUniOp, nodeCur)))->getChild()), level + 1);
				break;
			}
		}
	case $XSParticleDecl::PARTICLE_ELEMENT:
		{
			{
				$var($String, var$1, $$str({"Leaf: (pos="_s, $$str($nc(($cast($XSCMLeaf, nodeCur)))->getPosition()), "), (elemIndex="_s}));
				$var($String, var$0, $$concat(var$1, $(($cast($XSCMLeaf, nodeCur))->getLeaf())));
				$nc($System::out)->print($$concat(var$0, ") "_s));
				if (nodeCur->isNullable()) {
					$nc($System::out)->print(" Nullable "_s);
				}
				$nc($System::out)->print("firstPos="_s);
				$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
				$nc($System::out)->print(" lastPos="_s);
				$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
				break;
			}
		}
	case $XSParticleDecl::PARTICLE_WILDCARD:
		{
			$nc($System::out)->print("Any Node: "_s);
			$nc($System::out)->print("firstPos="_s);
			$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
			$nc($System::out)->print(" lastPos="_s);
			$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
			break;
		}
	default:
		{
			{
				$throwNew($RuntimeException, "ImplementationMessages.VAL_NIICM"_s);
			}
		}
	}
}

$ints* XSDFACM::makeDefStateList() {
	$var($ints, retArray, $new($ints, this->fElemMapSize));
	for (int32_t index = 0; index < this->fElemMapSize; ++index) {
		retArray->set(index, -1);
	}
	return retArray;
}

void XSDFACM::postTreeBuildInit($CMNode* nodeCur) {
	$useLocalCurrentObjectStackCache();
	$nc(nodeCur)->setMaxStates(this->fLeafCount);
	$var($XSCMLeaf, leaf, nullptr);
	int32_t pos = 0;
	if (nodeCur->type() == $XSParticleDecl::PARTICLE_WILDCARD) {
		$assign(leaf, $cast($XSCMLeaf, nodeCur));
		pos = leaf->getPosition();
		$nc(this->fLeafList)->set(pos, leaf);
		$nc(this->fLeafListType)->set(pos, $XSParticleDecl::PARTICLE_WILDCARD);
	} else {
		bool var$1 = (nodeCur->type() == $XSModelGroupImpl::MODELGROUP_CHOICE);
		if (var$1 || (nodeCur->type() == $XSModelGroupImpl::MODELGROUP_SEQUENCE)) {
			postTreeBuildInit($($nc(($cast($XSCMBinOp, nodeCur)))->getLeft()));
			postTreeBuildInit($($nc(($cast($XSCMBinOp, nodeCur)))->getRight()));
		} else {
			bool var$5 = nodeCur->type() == $XSParticleDecl::PARTICLE_ZERO_OR_MORE;
			bool var$4 = var$5 || nodeCur->type() == $XSParticleDecl::PARTICLE_ONE_OR_MORE;
			if (var$4 || nodeCur->type() == $XSParticleDecl::PARTICLE_ZERO_OR_ONE) {
				postTreeBuildInit($($nc(($cast($XSCMUniOp, nodeCur)))->getChild()));
			} else if (nodeCur->type() == $XSParticleDecl::PARTICLE_ELEMENT) {
				$assign(leaf, $cast($XSCMLeaf, nodeCur));
				pos = leaf->getPosition();
				$nc(this->fLeafList)->set(pos, leaf);
				$nc(this->fLeafListType)->set(pos, $XSParticleDecl::PARTICLE_ELEMENT);
			} else {
				$throwNew($RuntimeException, "ImplementationMessages.VAL_NIICM"_s);
			}
		}
	}
}

bool XSDFACM::checkUniqueParticleAttribution($SubstitutionGroupHandler* subGroupHandler) {
	$useLocalCurrentObjectStackCache();
	$var($byteArray2, conflictTable, $new($byteArray2, this->fElemMapSize, this->fElemMapSize));
	for (int32_t i = 0; i < $nc(this->fTransTable)->length && $nc(this->fTransTable)->get(i) != nullptr; ++i) {
		for (int32_t j = 0; j < this->fElemMapSize; ++j) {
			for (int32_t k = j + 1; k < this->fElemMapSize; ++k) {
				if ($nc($nc(this->fTransTable)->get(i))->get(j) != -1 && $nc($nc(this->fTransTable)->get(i))->get(k) != -1) {
					if ($nc(conflictTable->get(j))->get(k) == 0) {
						if ($XSConstraints::overlapUPA($nc(this->fElemMap)->get(j), $nc(this->fElemMap)->get(k), subGroupHandler)) {
							if (this->fCountingStates != nullptr) {
								$var($XSDFACM$Occurence, o, $nc(this->fCountingStates)->get(i));
								if (o != nullptr && ($nc($nc(this->fTransTable)->get(i))->get(j) == i) ^ ($nc($nc(this->fTransTable)->get(i))->get(k) == i) && o->minOccurs == o->maxOccurs) {
									$nc(conflictTable->get(j))->set(k, (int8_t)-1);
									continue;
								}
							}
							$nc(conflictTable->get(j))->set(k, (int8_t)1);
						} else {
							$nc(conflictTable->get(j))->set(k, (int8_t)-1);
						}
					}
				}
			}
		}
	}
	for (int32_t i = 0; i < this->fElemMapSize; ++i) {
		for (int32_t j = 0; j < this->fElemMapSize; ++j) {
			if ($nc(conflictTable->get(i))->get(j) == 1) {
				$throwNew($XMLSchemaException, "cos-nonambig"_s, $$new($ObjectArray, {
					$($of($nc($of($nc(this->fElemMap)->get(i)))->toString())),
					$($of($nc($of($nc(this->fElemMap)->get(j)))->toString()))
				}));
			}
		}
	}
	for (int32_t i = 0; i < this->fElemMapSize; ++i) {
		if ($nc(this->fElemMapType)->get(i) == $XSParticleDecl::PARTICLE_WILDCARD) {
			$var($XSWildcardDecl, wildcard, $cast($XSWildcardDecl, $nc(this->fElemMap)->get(i)));
			if ($nc(wildcard)->fType == $XSWildcardDecl::NSCONSTRAINT_LIST || $nc(wildcard)->fType == $XSWildcardDecl::NSCONSTRAINT_NOT) {
				return true;
			}
		}
	}
	return false;
}

$List* XSDFACM::whatCanGoHere($ints* state) {
	$useLocalCurrentObjectStackCache();
	int32_t curState = $nc(state)->get(0);
	if (curState < 0) {
		curState = state->get(1);
	}
	$var($XSDFACM$Occurence, o, (this->fCountingStates != nullptr) ? $nc(this->fCountingStates)->get(curState) : ($XSDFACM$Occurence*)nullptr);
	int32_t count = state->get(2);
	$var($List, ret, $new($ArrayList));
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		int32_t nextState = $nc($nc(this->fTransTable)->get(curState))->get(elemIndex);
		if (nextState != -1) {
			if (o != nullptr) {
				if (curState == nextState) {
					if (count >= o->maxOccurs && o->maxOccurs != $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
						continue;
					}
				} else if (count < o->minOccurs) {
					continue;
				}
			}
			ret->add($nc(this->fElemMap)->get(elemIndex));
		}
	}
	return ret;
}

$List* XSDFACM::checkMinMaxBounds() {
	$useLocalCurrentObjectStackCache();
	$var($List, result, nullptr);
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		int32_t count = $nc(this->fElemMapCounter)->get(elemIndex);
		if (count == -1) {
			continue;
		}
		int32_t minOccurs = $nc(this->fElemMapCounterLowerBound)->get(elemIndex);
		int32_t maxOccurs = $nc(this->fElemMapCounterUpperBound)->get(elemIndex);
		if (count < minOccurs) {
			if (result == nullptr) {
				$assign(result, $new($ArrayList));
			}
			$nc(result)->add("cvc-complex-type.2.4.b"_s);
			result->add($$str({"{"_s, $nc(this->fElemMap)->get(elemIndex), "}"_s}));
		}
		if (maxOccurs != -1 && count > maxOccurs) {
			if (result == nullptr) {
				$assign(result, $new($ArrayList));
			}
			$nc(result)->add("cvc-complex-type.2.4.d.1"_s);
			result->add($$str({"{"_s, $nc(this->fElemMap)->get(elemIndex), "}"_s}));
		}
	}
	return result;
}

$ints* XSDFACM::occurenceInfo($ints* state) {
	$useLocalCurrentObjectStackCache();
	if (this->fCountingStates != nullptr) {
		int32_t curState = $nc(state)->get(0);
		if (curState < 0) {
			curState = state->get(1);
		}
		$var($XSDFACM$Occurence, o, $nc(this->fCountingStates)->get(curState));
		if (o != nullptr) {
			$var($ints, occurenceInfo, $new($ints, 4));
			occurenceInfo->set(0, o->minOccurs);
			occurenceInfo->set(1, o->maxOccurs);
			occurenceInfo->set(2, state->get(2));
			occurenceInfo->set(3, o->elemIndex);
			return occurenceInfo;
		}
	}
	return nullptr;
}

$String* XSDFACM::getTermName(int32_t termId) {
	$var($Object0, term, $nc(this->fElemMap)->get(termId));
	return (term != nullptr) ? $nc($of(term))->toString() : ($String*)nullptr;
}

bool XSDFACM::isCompactedForUPA() {
	return this->fIsCompactedForUPA;
}

void clinit$XSDFACM($Class* class$) {
	XSDFACM::time = 0;
}

XSDFACM::XSDFACM() {
}

$Class* XSDFACM::load$($String* name, bool initialize) {
	$loadClass(XSDFACM, name, initialize, &_XSDFACM_ClassInfo_, clinit$XSDFACM, allocate$XSDFACM);
	return class$;
}

$Class* XSDFACM::class$ = nullptr;

								} // models
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com