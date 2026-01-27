#include <com/sun/org/apache/xerces/internal/impl/dtd/models/DFAContentModel.h>

#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMAny.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMBinOp.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMNode.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet.h>
#include <com/sun/org/apache/xerces/internal/impl/dtd/models/CMUniOp.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CONTENTSPECNODE_ANY
#undef CONTENTSPECNODE_ANY_LOCAL
#undef CONTENTSPECNODE_ANY_OTHER
#undef CONTENTSPECNODE_CHOICE
#undef CONTENTSPECNODE_LEAF
#undef CONTENTSPECNODE_ONE_OR_MORE
#undef CONTENTSPECNODE_SEQ
#undef CONTENTSPECNODE_ZERO_OR_MORE
#undef CONTENTSPECNODE_ZERO_OR_ONE
#undef DEBUG_VALIDATE_CONTENT

using $CMLeafArray = $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf>;
using $CMStateSetArray = $Array<::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet>;
using $QNameArray = $Array<::com::sun::org::apache::xerces::internal::xni::QName>;
using $intArray2 = $Array<int32_t, 2>;
using $XMLContentSpec = ::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec;
using $CMAny = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMAny;
using $CMBinOp = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMBinOp;
using $CMLeaf = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMLeaf;
using $CMNode = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMNode;
using $CMStateSet = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMStateSet;
using $CMUniOp = ::com::sun::org::apache::xerces::internal::impl::dtd::models::CMUniOp;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								namespace models {

$FieldInfo _DFAContentModel_FieldInfo_[] = {
	{"fEpsilonString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(DFAContentModel, fEpsilonString)},
	{"fEOCString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(DFAContentModel, fEOCString)},
	{"DEBUG_VALIDATE_CONTENT", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DFAContentModel, DEBUG_VALIDATE_CONTENT)},
	{"fElemMap", "[Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE, $field(DFAContentModel, fElemMap)},
	{"fElemMapType", "[I", nullptr, $PRIVATE, $field(DFAContentModel, fElemMapType)},
	{"fElemMapSize", "I", nullptr, $PRIVATE, $field(DFAContentModel, fElemMapSize)},
	{"fMixed", "Z", nullptr, $PRIVATE, $field(DFAContentModel, fMixed)},
	{"fEOCPos", "I", nullptr, $PRIVATE, $field(DFAContentModel, fEOCPos)},
	{"fFinalStateFlags", "[Z", nullptr, $PRIVATE, $field(DFAContentModel, fFinalStateFlags)},
	{"fFollowList", "[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMStateSet;", nullptr, $PRIVATE, $field(DFAContentModel, fFollowList)},
	{"fHeadNode", "Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;", nullptr, $PRIVATE, $field(DFAContentModel, fHeadNode)},
	{"fLeafCount", "I", nullptr, $PRIVATE, $field(DFAContentModel, fLeafCount)},
	{"fLeafList", "[Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMLeaf;", nullptr, $PRIVATE, $field(DFAContentModel, fLeafList)},
	{"fLeafListType", "[I", nullptr, $PRIVATE, $field(DFAContentModel, fLeafListType)},
	{"fTransTable", "[[I", nullptr, $PRIVATE, $field(DFAContentModel, fTransTable)},
	{"fTransTableSize", "I", nullptr, $PRIVATE, $field(DFAContentModel, fTransTableSize)},
	{"fEmptyContentIsValid", "Z", nullptr, $PRIVATE, $field(DFAContentModel, fEmptyContentIsValid)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PRIVATE | $FINAL, $field(DFAContentModel, fQName)},
	{}
};

$MethodInfo _DFAContentModel_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;IZ)V", nullptr, $PUBLIC, $method(DFAContentModel, init$, void, $CMNode*, int32_t, bool)},
	{"buildDFA", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PRIVATE, $method(DFAContentModel, buildDFA, void, $CMNode*)},
	{"calcFollowList", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;)V", nullptr, $PRIVATE, $method(DFAContentModel, calcFollowList, void, $CMNode*)},
	{"dumpTree", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;I)V", nullptr, $PRIVATE, $method(DFAContentModel, dumpTree, void, $CMNode*, int32_t)},
	{"makeDefStateList", "()[I", nullptr, $PRIVATE, $method(DFAContentModel, makeDefStateList, $ints*)},
	{"postTreeBuildInit", "(Lcom/sun/org/apache/xerces/internal/impl/dtd/models/CMNode;I)I", nullptr, $PRIVATE, $method(DFAContentModel, postTreeBuildInit, int32_t, $CMNode*, int32_t)},
	{"validate", "([Lcom/sun/org/apache/xerces/internal/xni/QName;II)I", nullptr, $PUBLIC, $virtualMethod(DFAContentModel, validate, int32_t, $QNameArray*, int32_t, int32_t)},
	{}
};

$ClassInfo _DFAContentModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dtd.models.DFAContentModel",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dtd.models.ContentModelValidator",
	_DFAContentModel_FieldInfo_,
	_DFAContentModel_MethodInfo_
};

$Object* allocate$DFAContentModel($Class* clazz) {
	return $of($alloc(DFAContentModel));
}

$String* DFAContentModel::fEpsilonString = nullptr;
$String* DFAContentModel::fEOCString = nullptr;

void DFAContentModel::init$($CMNode* syntaxTree, int32_t leafCount, bool mixed) {
	$set(this, fElemMap, nullptr);
	$set(this, fElemMapType, nullptr);
	this->fElemMapSize = 0;
	this->fEOCPos = 0;
	$set(this, fFinalStateFlags, nullptr);
	$set(this, fFollowList, nullptr);
	$set(this, fHeadNode, nullptr);
	this->fLeafCount = 0;
	$set(this, fLeafList, nullptr);
	$set(this, fLeafListType, nullptr);
	$set(this, fTransTable, nullptr);
	this->fTransTableSize = 0;
	this->fEmptyContentIsValid = false;
	$set(this, fQName, $new($QName));
	this->fLeafCount = leafCount;
	this->fMixed = mixed;
	buildDFA(syntaxTree);
}

int32_t DFAContentModel::validate($QNameArray* children, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (length == 0) {
		return this->fEmptyContentIsValid ? -1 : 0;
	}
	int32_t curState = 0;
	for (int32_t childIndex = 0; childIndex < length; ++childIndex) {
		$var($QName, curElem, $nc(children)->get(offset + childIndex));
		if (this->fMixed && $nc(curElem)->localpart == nullptr) {
			continue;
		}
		int32_t elemIndex = 0;
		for (; elemIndex < this->fElemMapSize; ++elemIndex) {
			int32_t type = (int32_t)($nc(this->fElemMapType)->get(elemIndex) & (uint32_t)15);
			if (type == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
				if ($nc($nc(this->fElemMap)->get(elemIndex))->rawname == $nc(curElem)->rawname) {
					break;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY) {
				$var($String, uri, $nc($nc(this->fElemMap)->get(elemIndex))->uri);
				if (uri == nullptr || uri == $nc(curElem)->uri) {
					break;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL) {
				if ($nc(curElem)->uri == nullptr) {
					break;
				}
			} else if (type == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
				if ($nc($nc(this->fElemMap)->get(elemIndex))->uri != $nc(curElem)->uri) {
					break;
				}
			}
		}
		if (elemIndex == this->fElemMapSize) {
			return childIndex;
		}
		curState = $nc($nc(this->fTransTable)->get(curState))->get(elemIndex);
		if (curState == -1) {
			return childIndex;
		}
	}
	if (!$nc(this->fFinalStateFlags)->get(curState)) {
		return length;
	}
	return -1;
}

void DFAContentModel::buildDFA($CMNode* syntaxTree) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fQName)->setValues(nullptr, DFAContentModel::fEOCString, DFAContentModel::fEOCString, nullptr);
	$var($CMLeaf, nodeEOC, $new($CMLeaf, this->fQName));
	$set(this, fHeadNode, $new($CMBinOp, $XMLContentSpec::CONTENTSPECNODE_SEQ, syntaxTree, nodeEOC));
	this->fEOCPos = this->fLeafCount;
	nodeEOC->setPosition(this->fLeafCount++);
	$set(this, fLeafList, $new($CMLeafArray, this->fLeafCount));
	$set(this, fLeafListType, $new($ints, this->fLeafCount));
	postTreeBuildInit(this->fHeadNode, 0);
	$set(this, fFollowList, $new($CMStateSetArray, this->fLeafCount));
	for (int32_t index = 0; index < this->fLeafCount; ++index) {
		$nc(this->fFollowList)->set(index, $$new($CMStateSet, this->fLeafCount));
	}
	calcFollowList(this->fHeadNode);
	$set(this, fElemMap, $new($QNameArray, this->fLeafCount));
	$set(this, fElemMapType, $new($ints, this->fLeafCount));
	this->fElemMapSize = 0;
	for (int32_t outIndex = 0; outIndex < this->fLeafCount; ++outIndex) {
		$nc(this->fElemMap)->set(outIndex, $$new($QName));
		$var($QName, element, $nc($nc(this->fLeafList)->get(outIndex))->getElement());
		int32_t inIndex = 0;
		for (; inIndex < this->fElemMapSize; ++inIndex) {
			if ($nc($nc(this->fElemMap)->get(inIndex))->rawname == $nc(element)->rawname) {
				break;
			}
		}
		if (inIndex == this->fElemMapSize) {
			$nc($nc(this->fElemMap)->get(this->fElemMapSize))->setValues(element);
			$nc(this->fElemMapType)->set(this->fElemMapSize, $nc(this->fLeafListType)->get(outIndex));
			++this->fElemMapSize;
		}
	}
	$var($ints, fLeafSorter, $new($ints, this->fLeafCount + this->fElemMapSize));
	int32_t fSortCount = 0;
	for (int32_t elemIndex = 0; elemIndex < this->fElemMapSize; ++elemIndex) {
		for (int32_t leafIndex = 0; leafIndex < this->fLeafCount; ++leafIndex) {
			$var($QName, leaf, $nc($nc(this->fLeafList)->get(leafIndex))->getElement());
			$var($QName, element, $nc(this->fElemMap)->get(elemIndex));
			if ($nc(leaf)->rawname == $nc(element)->rawname) {
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
		$nc(this->fFinalStateFlags)->set(unmarkedState, $nc(setT)->getBit(this->fEOCPos));
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
	this->fEmptyContentIsValid = $nc($($nc(($cast($CMBinOp, this->fHeadNode)))->getLeft()))->isNullable();
	$set(this, fHeadNode, nullptr);
	$set(this, fLeafList, nullptr);
	$set(this, fFollowList, nullptr);
}

void DFAContentModel::calcFollowList($CMNode* nodeCur) {
	$useLocalCurrentObjectStackCache();
	if ($nc(nodeCur)->type() == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
		calcFollowList($($nc(($cast($CMBinOp, nodeCur)))->getLeft()));
		calcFollowList($($nc(($cast($CMBinOp, nodeCur)))->getRight()));
	} else if (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_SEQ) {
		calcFollowList($($nc(($cast($CMBinOp, nodeCur)))->getLeft()));
		calcFollowList($($nc(($cast($CMBinOp, nodeCur)))->getRight()));
		$var($CMStateSet, last, $nc($($nc(($cast($CMBinOp, nodeCur)))->getLeft()))->lastPos());
		$var($CMStateSet, first, $nc($(($cast($CMBinOp, nodeCur))->getRight()))->firstPos());
		for (int32_t index = 0; index < this->fLeafCount; ++index) {
			if ($nc(last)->getBit(index)) {
				$nc($nc(this->fFollowList)->get(index))->union$(first);
			}
		}
	} else {
		bool var$1 = nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE;
		if (var$1 || nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE) {
			calcFollowList($($nc(($cast($CMUniOp, nodeCur)))->getChild()));
			$var($CMStateSet, first, nodeCur->firstPos());
			$var($CMStateSet, last, nodeCur->lastPos());
			for (int32_t index = 0; index < this->fLeafCount; ++index) {
				if ($nc(last)->getBit(index)) {
					$nc($nc(this->fFollowList)->get(index))->union$(first);
				}
			}
		} else if (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
			calcFollowList($($nc(($cast($CMUniOp, nodeCur)))->getChild()));
		}
	}
}

void DFAContentModel::dumpTree($CMNode* nodeCur, int32_t level) {
	$useLocalCurrentObjectStackCache();
	for (int32_t index = 0; index < level; ++index) {
		$nc($System::out)->print("   "_s);
	}
	int32_t type = $nc(nodeCur)->type();
	if ((type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) || (type == $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
		if (type == $XMLContentSpec::CONTENTSPECNODE_CHOICE) {
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
		dumpTree($($nc(($cast($CMBinOp, nodeCur)))->getLeft()), level + 1);
		dumpTree($($nc(($cast($CMBinOp, nodeCur)))->getRight()), level + 1);
	} else if (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE) {
		$nc($System::out)->print("Rep Node "_s);
		if (nodeCur->isNullable()) {
			$nc($System::out)->print("Nullable "_s);
		}
		$nc($System::out)->print("firstPos="_s);
		$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
		$nc($System::out)->print(" lastPos="_s);
		$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
		dumpTree($($nc(($cast($CMUniOp, nodeCur)))->getChild()), level + 1);
	} else if (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
		$var($String, var$3, $$str({"Leaf: (pos="_s, $$str($nc(($cast($CMLeaf, nodeCur)))->getPosition()), "), "_s}));
		$var($String, var$2, $$concat(var$3, $(($cast($CMLeaf, nodeCur))->getElement())));
		$var($String, var$1, $$concat(var$2, "(elemIndex="_s));
		$var($String, var$0, $$concat(var$1, $(($cast($CMLeaf, nodeCur))->getElement())));
		$nc($System::out)->print($$concat(var$0, ") "_s));
		if (nodeCur->isNullable()) {
			$nc($System::out)->print(" Nullable "_s);
		}
		$nc($System::out)->print("firstPos="_s);
		$nc($System::out)->print($($nc($(nodeCur->firstPos()))->toString()));
		$nc($System::out)->print(" lastPos="_s);
		$nc($System::out)->println($($nc($(nodeCur->lastPos()))->toString()));
	} else {
		$throwNew($RuntimeException, "ImplementationMessages.VAL_NIICM"_s);
	}
}

$ints* DFAContentModel::makeDefStateList() {
	$var($ints, retArray, $new($ints, this->fElemMapSize));
	for (int32_t index = 0; index < this->fElemMapSize; ++index) {
		retArray->set(index, -1);
	}
	return retArray;
}

int32_t DFAContentModel::postTreeBuildInit($CMNode* nodeCur, int32_t curIndex) {
	$useLocalCurrentObjectStackCache();
	$nc(nodeCur)->setMaxStates(this->fLeafCount);
	bool var$1 = ((int32_t)(nodeCur->type() & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY;
	bool var$0 = var$1 || ((int32_t)(nodeCur->type() & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_LOCAL;
	if (var$0 || ((int32_t)(nodeCur->type() & (uint32_t)15)) == $XMLContentSpec::CONTENTSPECNODE_ANY_OTHER) {
		$var($QName, qname, $new($QName, nullptr, nullptr, nullptr, $($nc(($cast($CMAny, nodeCur)))->getURI())));
		$nc(this->fLeafList)->set(curIndex, $$new($CMLeaf, qname, $nc(($cast($CMAny, nodeCur)))->getPosition()));
		$nc(this->fLeafListType)->set(curIndex, nodeCur->type());
		++curIndex;
	} else {
		bool var$3 = (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_CHOICE);
		if (var$3 || (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_SEQ)) {
			curIndex = postTreeBuildInit($($nc(($cast($CMBinOp, nodeCur)))->getLeft()), curIndex);
			curIndex = postTreeBuildInit($($nc(($cast($CMBinOp, nodeCur)))->getRight()), curIndex);
		} else {
			bool var$7 = nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_MORE;
			bool var$6 = var$7 || nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ONE_OR_MORE;
			if (var$6 || nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_ZERO_OR_ONE) {
				curIndex = postTreeBuildInit($($nc(($cast($CMUniOp, nodeCur)))->getChild()), curIndex);
			} else if (nodeCur->type() == $XMLContentSpec::CONTENTSPECNODE_LEAF) {
				$var($QName, node, $nc(($cast($CMLeaf, nodeCur)))->getElement());
				if ($nc(node)->localpart != DFAContentModel::fEpsilonString) {
					$nc(this->fLeafList)->set(curIndex, $cast($CMLeaf, nodeCur));
					$nc(this->fLeafListType)->set(curIndex, $XMLContentSpec::CONTENTSPECNODE_LEAF);
					++curIndex;
				}
			} else {
				$throwNew($RuntimeException, $$str({"ImplementationMessages.VAL_NIICM: type="_s, $$str(nodeCur->type())}));
			}
		}
	}
	return curIndex;
}

void clinit$DFAContentModel($Class* class$) {
	$assignStatic(DFAContentModel::fEpsilonString, "<<CMNODE_EPSILON>>"_s);
	$assignStatic(DFAContentModel::fEOCString, "<<CMNODE_EOC>>"_s);
	{
		$assignStatic(DFAContentModel::fEpsilonString, $nc(DFAContentModel::fEpsilonString)->intern());
		$assignStatic(DFAContentModel::fEOCString, $nc(DFAContentModel::fEOCString)->intern());
	}
}

DFAContentModel::DFAContentModel() {
}

$Class* DFAContentModel::load$($String* name, bool initialize) {
	$loadClass(DFAContentModel, name, initialize, &_DFAContentModel_ClassInfo_, clinit$DFAContentModel, allocate$DFAContentModel);
	return class$;
}

$Class* DFAContentModel::class$ = nullptr;

								} // models
							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com