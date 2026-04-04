#include <com/sun/org/apache/xerces/internal/impl/xs/XSGrammarBucket.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

void XSGrammarBucket::init$() {
	$set(this, fGrammarRegistry, $new($HashMap));
	$set(this, fNoNSGrammar, nullptr);
}

$SchemaGrammar* XSGrammarBucket::getGrammar($String* namespace$) {
	if (namespace$ == nullptr) {
		return this->fNoNSGrammar;
	}
	return $cast($SchemaGrammar, $nc(this->fGrammarRegistry)->get(namespace$));
}

void XSGrammarBucket::putGrammar($SchemaGrammar* grammar) {
	if ($nc(grammar)->getTargetNamespace() == nullptr) {
		$set(this, fNoNSGrammar, grammar);
	} else {
		$nc(this->fGrammarRegistry)->put($(grammar->getTargetNamespace()), grammar);
	}
}

bool XSGrammarBucket::putGrammar($SchemaGrammar* grammar, bool deep) {
	$useLocalObjectStack();
	$var($SchemaGrammar, sg, getGrammar($nc(grammar)->fTargetNamespace));
	if (sg != nullptr) {
		return sg == grammar;
	}
	if (!deep) {
		putGrammar(grammar);
		return true;
	}
	$var($ArrayList, currGrammars, $cast($ArrayList, grammar->getImportedGrammars()));
	if (currGrammars == nullptr) {
		putGrammar(grammar);
		return true;
	}
	$var($List, grammars, $cast($ArrayList, $nc(currGrammars)->clone()));
	$var($SchemaGrammar, sg1, nullptr);
	$var($SchemaGrammar, sg2, nullptr);
	$var($List, gs, nullptr);
	for (int32_t i = 0; i < $nc(grammars)->size(); ++i) {
		$assign(sg1, $cast($SchemaGrammar, grammars->get(i)));
		$assign(sg2, getGrammar($nc(sg1)->fTargetNamespace));
		if (sg2 == nullptr) {
			$assign(gs, sg1->getImportedGrammars());
			if (gs == nullptr) {
				continue;
			}
			for (int32_t j = $nc(gs)->size() - 1; j >= 0; --j) {
				$assign(sg2, $cast($SchemaGrammar, gs->get(j)));
				if (!grammars->contains(sg2)) {
					grammars->add(sg2);
				}
			}
		} else if (sg2 != sg1) {
			return false;
		}
	}
	putGrammar(grammar);
	for (int32_t i = grammars->size() - 1; i >= 0; --i) {
		putGrammar($$cast($SchemaGrammar, grammars->get(i)));
	}
	return true;
}

bool XSGrammarBucket::putGrammar($SchemaGrammar* grammar, bool deep, bool ignoreConflict) {
	$useLocalObjectStack();
	if (!ignoreConflict) {
		return putGrammar(grammar, deep);
	}
	$var($SchemaGrammar, sg, getGrammar($nc(grammar)->fTargetNamespace));
	if (sg == nullptr) {
		putGrammar(grammar);
	}
	if (!deep) {
		return true;
	}
	$var($ArrayList, currGrammars, $cast($ArrayList, grammar->getImportedGrammars()));
	if (currGrammars == nullptr) {
		return true;
	}
	$var($List, grammars, $cast($ArrayList, $nc(currGrammars)->clone()));
	$var($SchemaGrammar, sg1, nullptr);
	$var($SchemaGrammar, sg2, nullptr);
	$var($List, gs, nullptr);
	for (int32_t i = 0; i < $nc(grammars)->size(); ++i) {
		$assign(sg1, $cast($SchemaGrammar, grammars->get(i)));
		$assign(sg2, getGrammar($nc(sg1)->fTargetNamespace));
		if (sg2 == nullptr) {
			$assign(gs, sg1->getImportedGrammars());
			if (gs == nullptr) {
				continue;
			}
			for (int32_t j = $nc(gs)->size() - 1; j >= 0; --j) {
				$assign(sg2, $cast($SchemaGrammar, gs->get(j)));
				if (!grammars->contains(sg2)) {
					grammars->add(sg2);
				}
			}
		} else {
			grammars->remove(sg1);
		}
	}
	for (int32_t i = grammars->size() - 1; i >= 0; --i) {
		putGrammar($$cast($SchemaGrammar, grammars->get(i)));
	}
	return true;
}

$SchemaGrammarArray* XSGrammarBucket::getGrammars() {
	$useLocalObjectStack();
	int32_t count = $nc(this->fGrammarRegistry)->size() + (this->fNoNSGrammar == nullptr ? 0 : 1);
	$var($SchemaGrammarArray, grammars, $new($SchemaGrammarArray, count));
	int32_t i = 0;
	{
		$var($Iterator, i$, $$nc(this->fGrammarRegistry->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				grammars->set(i++, $$cast($SchemaGrammar, $nc(entry)->getValue()));
			}
		}
	}
	if (this->fNoNSGrammar != nullptr) {
		grammars->set(count - 1, this->fNoNSGrammar);
	}
	return grammars;
}

void XSGrammarBucket::reset() {
	$set(this, fNoNSGrammar, nullptr);
	$nc(this->fGrammarRegistry)->clear();
}

XSGrammarBucket::XSGrammarBucket() {
}

$Class* XSGrammarBucket::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fGrammarRegistry", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;>;", 0, $field(XSGrammarBucket, fGrammarRegistry)},
		{"fNoNSGrammar", "Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, 0, $field(XSGrammarBucket, fNoNSGrammar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XSGrammarBucket, init$, void)},
		{"getGrammar", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, getGrammar, $SchemaGrammar*, $String*)},
		{"getGrammars", "()[Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, getGrammars, $SchemaGrammarArray*)},
		{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, putGrammar, void, $SchemaGrammar*)},
		{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Z)Z", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, putGrammar, bool, $SchemaGrammar*, bool)},
		{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;ZZ)Z", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, putGrammar, bool, $SchemaGrammar*, bool, bool)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSGrammarBucket, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.XSGrammarBucket",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSGrammarBucket, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSGrammarBucket);
	});
	return class$;
}

$Class* XSGrammarBucket::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com