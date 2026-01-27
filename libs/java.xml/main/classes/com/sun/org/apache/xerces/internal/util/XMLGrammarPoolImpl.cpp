#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>

#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <jcpp.h>

#undef DEBUG
#undef TABLE_SIZE

using $XMLGrammarPoolImpl$EntryArray = $Array<::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $XMLGrammarPoolImpl$Entry = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLGrammarPoolImpl_FieldInfo_[] = {
	{"TABLE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XMLGrammarPoolImpl, TABLE_SIZE)},
	{"fGrammars", "[Lcom/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry;", nullptr, $PROTECTED, $field(XMLGrammarPoolImpl, fGrammars)},
	{"fPoolIsLocked", "Z", nullptr, $PROTECTED, $field(XMLGrammarPoolImpl, fPoolIsLocked)},
	{"fGrammarCount", "I", nullptr, $PROTECTED, $field(XMLGrammarPoolImpl, fGrammarCount)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLGrammarPoolImpl, DEBUG)},
	{}
};

$MethodInfo _XMLGrammarPoolImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLGrammarPoolImpl, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(XMLGrammarPoolImpl, init$, void, int32_t)},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, cacheGrammars, void, $String*, $GrammarArray*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, clear, void)},
	{"containsGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, containsGrammar, bool, $XMLGrammarDescription*)},
	{"equals", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, equals, bool, $XMLGrammarDescription*, $XMLGrammarDescription*)},
	{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, getGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"hashCode", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)I", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, hashCode, int32_t, $XMLGrammarDescription*)},
	{"lockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, lockPool, void)},
	{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, putGrammar, void, $Grammar*)},
	{"removeGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, removeGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{"unlockPool", "()V", nullptr, $PUBLIC, $virtualMethod(XMLGrammarPoolImpl, unlockPool, void)},
	{}
};

$InnerClassInfo _XMLGrammarPoolImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry", "com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl", "Entry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLGrammarPoolImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_XMLGrammarPoolImpl_FieldInfo_,
	_XMLGrammarPoolImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLGrammarPoolImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl$Entry"
};

$Object* allocate$XMLGrammarPoolImpl($Class* clazz) {
	return $of($alloc(XMLGrammarPoolImpl));
}

void XMLGrammarPoolImpl::init$() {
	$set(this, fGrammars, nullptr);
	this->fGrammarCount = 0;
	$set(this, fGrammars, $new($XMLGrammarPoolImpl$EntryArray, XMLGrammarPoolImpl::TABLE_SIZE));
	this->fPoolIsLocked = false;
}

void XMLGrammarPoolImpl::init$(int32_t initialCapacity) {
	$set(this, fGrammars, nullptr);
	this->fGrammarCount = 0;
	$set(this, fGrammars, $new($XMLGrammarPoolImpl$EntryArray, initialCapacity));
	this->fPoolIsLocked = false;
}

$GrammarArray* XMLGrammarPoolImpl::retrieveInitialGrammarSet($String* grammarType) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->fGrammars) {
		int32_t grammarSize = $nc(this->fGrammars)->length;
		$var($GrammarArray, tempGrammars, $new($GrammarArray, this->fGrammarCount));
		int32_t pos = 0;
		for (int32_t i = 0; i < grammarSize; ++i) {
			{
				$var($XMLGrammarPoolImpl$Entry, e, $nc(this->fGrammars)->get(i));
				for (; e != nullptr; $assign(e, $nc(e)->next)) {
					if ($nc($($nc(e->desc)->getGrammarType()))->equals(grammarType)) {
						tempGrammars->set(pos++, e->grammar);
					}
				}
			}
		}
		$var($GrammarArray, toReturn, $new($GrammarArray, pos));
		$System::arraycopy(tempGrammars, 0, toReturn, 0, pos);
		return toReturn;
	}
}

void XMLGrammarPoolImpl::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
	if (!this->fPoolIsLocked) {
		for (int32_t i = 0; i < $nc(grammars)->length; ++i) {
			putGrammar(grammars->get(i));
		}
	}
}

$Grammar* XMLGrammarPoolImpl::retrieveGrammar($XMLGrammarDescription* desc) {
	return getGrammar(desc);
}

void XMLGrammarPoolImpl::putGrammar($Grammar* grammar) {
	$useLocalCurrentObjectStackCache();
	if (!this->fPoolIsLocked) {
		$synchronized(this->fGrammars) {
			$var($XMLGrammarDescription, desc, $nc(grammar)->getGrammarDescription());
			int32_t hash = hashCode(desc);
			int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
			{
				$var($XMLGrammarPoolImpl$Entry, entry, $nc(this->fGrammars)->get(index));
				for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
					if (entry->hash == hash && equals(entry->desc, desc)) {
						$set(entry, grammar, grammar);
						return;
					}
				}
			}
			$var($XMLGrammarPoolImpl$Entry, entry, $new($XMLGrammarPoolImpl$Entry, hash, desc, grammar, $nc(this->fGrammars)->get(index)));
			$nc(this->fGrammars)->set(index, entry);
			++this->fGrammarCount;
		}
	}
}

$Grammar* XMLGrammarPoolImpl::getGrammar($XMLGrammarDescription* desc) {
	$synchronized(this->fGrammars) {
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($XMLGrammarPoolImpl$Entry, entry, $nc(this->fGrammars)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				if ((entry->hash == hash) && equals(entry->desc, desc)) {
					return entry->grammar;
				}
			}
		}
		return nullptr;
	}
}

$Grammar* XMLGrammarPoolImpl::removeGrammar($XMLGrammarDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->fGrammars) {
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($XMLGrammarPoolImpl$Entry, entry, $nc(this->fGrammars)->get(index));
			$var($XMLGrammarPoolImpl$Entry, prev, nullptr);
			for (; entry != nullptr; $assign(prev, entry), $assign(entry, $nc(entry)->next)) {
				if ((entry->hash == hash) && equals(entry->desc, desc)) {
					if (prev != nullptr) {
						$set(prev, next, entry->next);
					} else {
						$nc(this->fGrammars)->set(index, entry->next);
					}
					$var($Grammar, tempGrammar, entry->grammar);
					$set(entry, grammar, nullptr);
					--this->fGrammarCount;
					return tempGrammar;
				}
			}
		}
		return nullptr;
	}
}

bool XMLGrammarPoolImpl::containsGrammar($XMLGrammarDescription* desc) {
	$synchronized(this->fGrammars) {
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($XMLGrammarPoolImpl$Entry, entry, $nc(this->fGrammars)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				if ((entry->hash == hash) && equals(entry->desc, desc)) {
					return true;
				}
			}
		}
		return false;
	}
}

void XMLGrammarPoolImpl::lockPool() {
	this->fPoolIsLocked = true;
}

void XMLGrammarPoolImpl::unlockPool() {
	this->fPoolIsLocked = false;
}

void XMLGrammarPoolImpl::clear() {
	for (int32_t i = 0; i < $nc(this->fGrammars)->length; ++i) {
		if ($nc(this->fGrammars)->get(i) != nullptr) {
			$nc($nc(this->fGrammars)->get(i))->clear();
			$nc(this->fGrammars)->set(i, nullptr);
		}
	}
	this->fGrammarCount = 0;
}

bool XMLGrammarPoolImpl::equals($XMLGrammarDescription* desc1, $XMLGrammarDescription* desc2) {
	return $nc($of(desc1))->equals(desc2);
}

int32_t XMLGrammarPoolImpl::hashCode($XMLGrammarDescription* desc) {
	return $nc($of(desc))->hashCode();
}

XMLGrammarPoolImpl::XMLGrammarPoolImpl() {
}

$Class* XMLGrammarPoolImpl::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarPoolImpl, name, initialize, &_XMLGrammarPoolImpl_ClassInfo_, allocate$XMLGrammarPoolImpl);
	return class$;
}

$Class* XMLGrammarPoolImpl::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com