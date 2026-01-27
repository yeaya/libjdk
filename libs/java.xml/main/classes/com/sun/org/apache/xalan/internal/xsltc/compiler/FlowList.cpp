#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _FlowList_FieldInfo_[] = {
	{"_elements", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;>;", $PRIVATE, $field(FlowList, _elements)},
	{}
};

$MethodInfo _FlowList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FlowList, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(FlowList, init$, void, $InstructionHandle*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;)V", nullptr, $PUBLIC, $method(FlowList, init$, void, FlowList*)},
	{"add", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $method(FlowList, add, FlowList*, $InstructionHandle*)},
	{"append", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $method(FlowList, append, FlowList*, FlowList*)},
	{"backPatch", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)V", nullptr, $PUBLIC, $method(FlowList, backPatch, void, $InstructionHandle*)},
	{"copyAndRedirect", "(Lcom/sun/org/apache/bcel/internal/generic/InstructionList;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $method(FlowList, copyAndRedirect, FlowList*, $InstructionList*, $InstructionList*)},
	{}
};

$ClassInfo _FlowList_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.FlowList",
	"java.lang.Object",
	nullptr,
	_FlowList_FieldInfo_,
	_FlowList_MethodInfo_
};

$Object* allocate$FlowList($Class* clazz) {
	return $of($alloc(FlowList));
}

void FlowList::init$() {
	$set(this, _elements, nullptr);
}

void FlowList::init$($InstructionHandle* bh) {
	$set(this, _elements, $new($ArrayList));
	$nc(this->_elements)->add(bh);
}

void FlowList::init$(FlowList* list) {
	$set(this, _elements, $nc(list)->_elements);
}

FlowList* FlowList::add($InstructionHandle* bh) {
	if (this->_elements == nullptr) {
		$set(this, _elements, $new($ArrayList));
	}
	$nc(this->_elements)->add(bh);
	return this;
}

FlowList* FlowList::append(FlowList* right) {
	$useLocalCurrentObjectStackCache();
	if (this->_elements == nullptr) {
		$set(this, _elements, $nc(right)->_elements);
	} else {
		$var($List, temp, $nc(right)->_elements);
		if (temp != nullptr) {
			int32_t n = temp->size();
			for (int32_t i = 0; i < n; ++i) {
				$nc(this->_elements)->add($cast($InstructionHandle, $(temp->get(i))));
			}
		}
	}
	return this;
}

void FlowList::backPatch($InstructionHandle* target) {
	$useLocalCurrentObjectStackCache();
	if (this->_elements != nullptr) {
		int32_t n = $nc(this->_elements)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($BranchHandle, bh, $cast($BranchHandle, $nc(this->_elements)->get(i)));
			$nc(bh)->setTarget(target);
		}
		$nc(this->_elements)->clear();
	}
}

FlowList* FlowList::copyAndRedirect($InstructionList* oldList, $InstructionList* newList) {
	$useLocalCurrentObjectStackCache();
	$var(FlowList, result, $new(FlowList));
	if (this->_elements == nullptr) {
		return result;
	}
	int32_t n = $nc(this->_elements)->size();
	$var($Iterator, oldIter, $nc(oldList)->iterator());
	$var($Iterator, newIter, $nc(newList)->iterator());
	while ($nc(oldIter)->hasNext()) {
		$var($InstructionHandle, oldIh, $cast($InstructionHandle, oldIter->next()));
		$var($InstructionHandle, newIh, $cast($InstructionHandle, $nc(newIter)->next()));
		for (int32_t i = 0; i < n; ++i) {
			if ($equals($nc(this->_elements)->get(i), oldIh)) {
				result->add(newIh);
			}
		}
	}
	return result;
}

FlowList::FlowList() {
}

$Class* FlowList::load$($String* name, bool initialize) {
	$loadClass(FlowList, name, initialize, &_FlowList_ClassInfo_, allocate$FlowList);
	return class$;
}

$Class* FlowList::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com