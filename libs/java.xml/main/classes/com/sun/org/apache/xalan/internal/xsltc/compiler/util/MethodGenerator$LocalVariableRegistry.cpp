#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator$LocalVariableRegistry.h>

#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $LocalVariableGenArray = $Array<::com::sun::org::apache::bcel::internal::generic::LocalVariableGen>;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$FieldInfo _MethodGenerator$LocalVariableRegistry_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", nullptr, $FINAL | $SYNTHETIC, $field(MethodGenerator$LocalVariableRegistry, this$0)},
	{"_variables", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PROTECTED, $field(MethodGenerator$LocalVariableRegistry, _variables)},
	{"_nameToLVGMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(MethodGenerator$LocalVariableRegistry, _nameToLVGMap)},
	{}
};

$MethodInfo _MethodGenerator$LocalVariableRegistry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PROTECTED, $method(MethodGenerator$LocalVariableRegistry, init$, void, $MethodGenerator*)},
	{"getLocals", "()[Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PRIVATE, $method(MethodGenerator$LocalVariableRegistry, getLocals, $LocalVariableGenArray*)},
	{"lookUpByName", "(Ljava/lang/String;)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PROTECTED, $virtualMethod(MethodGenerator$LocalVariableRegistry, lookUpByName, $LocalVariableGen*, $String*)},
	{"lookupRegisteredLocalVariable", "(II)Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;", nullptr, $PROTECTED, $virtualMethod(MethodGenerator$LocalVariableRegistry, lookupRegisteredLocalVariable, $LocalVariableGen*, int32_t, int32_t)},
	{"registerByName", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PROTECTED, $virtualMethod(MethodGenerator$LocalVariableRegistry, registerByName, void, $LocalVariableGen*)},
	{"registerLocalVariable", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PROTECTED, $virtualMethod(MethodGenerator$LocalVariableRegistry, registerLocalVariable, void, $LocalVariableGen*)},
	{"removeByNameTracking", "(Lcom/sun/org/apache/bcel/internal/generic/LocalVariableGen;)V", nullptr, $PROTECTED, $virtualMethod(MethodGenerator$LocalVariableRegistry, removeByNameTracking, void, $LocalVariableGen*)},
	{}
};

$InnerClassInfo _MethodGenerator$LocalVariableRegistry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$LocalVariableRegistry", "com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator", "LocalVariableRegistry", $PROTECTED},
	{}
};

$ClassInfo _MethodGenerator$LocalVariableRegistry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator$LocalVariableRegistry",
	"java.lang.Object",
	nullptr,
	_MethodGenerator$LocalVariableRegistry_FieldInfo_,
	_MethodGenerator$LocalVariableRegistry_MethodInfo_,
	nullptr,
	nullptr,
	_MethodGenerator$LocalVariableRegistry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MethodGenerator"
};

$Object* allocate$MethodGenerator$LocalVariableRegistry($Class* clazz) {
	return $of($alloc(MethodGenerator$LocalVariableRegistry));
}

void MethodGenerator$LocalVariableRegistry::init$($MethodGenerator* this$0) {
	$set(this, this$0, this$0);
	$set(this, _variables, $new($ArrayList));
	$set(this, _nameToLVGMap, $new($HashMap));
}

void MethodGenerator$LocalVariableRegistry::registerLocalVariable($LocalVariableGen* lvg) {
	$useLocalCurrentObjectStackCache();
	int32_t slot = $nc(lvg)->getIndex();
	int32_t registrySize = $nc(this->_variables)->size();
	if (slot >= registrySize) {
		for (int32_t i = registrySize; i < slot; ++i) {
			$nc(this->_variables)->add(nullptr);
		}
		$nc(this->_variables)->add(lvg);
	} else {
		$var($Object, localsInSlot, $nc(this->_variables)->get(slot));
		if (localsInSlot != nullptr) {
			if ($instanceOf($LocalVariableGen, localsInSlot)) {
				$var($List, listOfLocalsInSlot, $new($ArrayList));
				listOfLocalsInSlot->add($cast($LocalVariableGen, localsInSlot));
				listOfLocalsInSlot->add(lvg);
				$nc(this->_variables)->set(slot, listOfLocalsInSlot);
			} else {
				$nc(($cast($List, localsInSlot)))->add(lvg);
			}
		} else {
			$nc(this->_variables)->set(slot, lvg);
		}
	}
	registerByName(lvg);
}

$LocalVariableGen* MethodGenerator$LocalVariableRegistry::lookupRegisteredLocalVariable(int32_t slot, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	$var($Object, localsInSlot, (this->_variables != nullptr) ? $nc(this->_variables)->get(slot) : ($Object*)nullptr);
	if (localsInSlot != nullptr) {
		if ($instanceOf($LocalVariableGen, localsInSlot)) {
			$var($LocalVariableGen, lvg, $cast($LocalVariableGen, localsInSlot));
			if (this->this$0->offsetInLocalVariableGenRange(lvg, offset)) {
				return lvg;
			}
		} else {
			$var($List, listOfLocalsInSlot, $cast($List, localsInSlot));
			{
				$var($Iterator, i$, listOfLocalsInSlot->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($LocalVariableGen, lvg, $cast($LocalVariableGen, i$->next()));
					{
						if (this->this$0->offsetInLocalVariableGenRange(lvg, offset)) {
							return lvg;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

void MethodGenerator$LocalVariableRegistry::registerByName($LocalVariableGen* lvg) {
	$useLocalCurrentObjectStackCache();
	$var($Object, duplicateNameEntry, $nc(this->_nameToLVGMap)->get($($nc(lvg)->getName())));
	if (duplicateNameEntry == nullptr) {
		$nc(this->_nameToLVGMap)->put($($nc(lvg)->getName()), lvg);
	} else {
		$var($List, sameNameList, nullptr);
		if ($instanceOf($ArrayList, duplicateNameEntry)) {
			$assign(sameNameList, $cast($List, duplicateNameEntry));
			$nc(sameNameList)->add(lvg);
		} else {
			$assign(sameNameList, $new($ArrayList));
			sameNameList->add($cast($LocalVariableGen, duplicateNameEntry));
			sameNameList->add(lvg);
		}
		$nc(this->_nameToLVGMap)->put($($nc(lvg)->getName()), sameNameList);
	}
}

void MethodGenerator$LocalVariableRegistry::removeByNameTracking($LocalVariableGen* lvg) {
	$useLocalCurrentObjectStackCache();
	$var($Object, duplicateNameEntry, $nc(this->_nameToLVGMap)->get($($nc(lvg)->getName())));
	if ($instanceOf($ArrayList, duplicateNameEntry)) {
		$var($List, sameNameList, $cast($List, duplicateNameEntry));
		for (int32_t i = 0; i < $nc(sameNameList)->size(); ++i) {
			if ($equals(sameNameList->get(i), lvg)) {
				sameNameList->remove(i);
				break;
			}
		}
	} else {
		$nc(this->_nameToLVGMap)->remove($($nc(lvg)->getName()));
	}
}

$LocalVariableGen* MethodGenerator$LocalVariableRegistry::lookUpByName($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGen, lvg, nullptr);
	$var($Object, duplicateNameEntry, $nc(this->_nameToLVGMap)->get(name));
	if ($instanceOf($ArrayList, duplicateNameEntry)) {
		$var($List, sameNameList, $cast($List, duplicateNameEntry));
		for (int32_t i = 0; i < $nc(sameNameList)->size(); ++i) {
			$assign(lvg, $cast($LocalVariableGen, sameNameList->get(i)));
			if ($nc(lvg)->getName() == nullptr ? name == nullptr : $nc($($nc(lvg)->getName()))->equals(name)) {
				break;
			}
		}
	} else {
		$assign(lvg, $cast($LocalVariableGen, duplicateNameEntry));
	}
	return lvg;
}

$LocalVariableGenArray* MethodGenerator$LocalVariableRegistry::getLocals() {
	$useLocalCurrentObjectStackCache();
	$var($LocalVariableGenArray, locals, nullptr);
	$var($List, allVarsEverDeclared, $new($ArrayList));
	{
		$var($Iterator, i$, $nc($($nc(this->_nameToLVGMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, nameVarsPair, $cast($Map$Entry, i$->next()));
			{
				$var($Object, vars, $nc(nameVarsPair)->getValue());
				if (vars != nullptr) {
					if ($instanceOf($ArrayList, vars)) {
						$var($List, varsList, $cast($List, vars));
						for (int32_t i = 0; i < varsList->size(); ++i) {
							allVarsEverDeclared->add($cast($LocalVariableGen, $(varsList->get(i))));
						}
					} else {
						allVarsEverDeclared->add($cast($LocalVariableGen, vars));
					}
				}
			}
		}
	}
	$assign(locals, $new($LocalVariableGenArray, allVarsEverDeclared->size()));
	allVarsEverDeclared->toArray(locals);
	return locals;
}

MethodGenerator$LocalVariableRegistry::MethodGenerator$LocalVariableRegistry() {
}

$Class* MethodGenerator$LocalVariableRegistry::load$($String* name, bool initialize) {
	$loadClass(MethodGenerator$LocalVariableRegistry, name, initialize, &_MethodGenerator$LocalVariableRegistry_ClassInfo_, allocate$MethodGenerator$LocalVariableRegistry);
	return class$;
}

$Class* MethodGenerator$LocalVariableRegistry::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com