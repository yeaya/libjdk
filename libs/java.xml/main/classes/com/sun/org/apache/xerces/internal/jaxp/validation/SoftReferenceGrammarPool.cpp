#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$SoftGrammarReference.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

#undef TABLE_SIZE
#undef ZERO_LENGTH_GRAMMAR_ARRAY

using $SoftReferenceGrammarPool$EntryArray = $Array<::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry>;
using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $SoftReferenceGrammarPool$Entry = ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$Entry;
using $SoftReferenceGrammarPool$SoftGrammarReference = ::com::sun::org::apache::xerces::internal::jaxp::validation::SoftReferenceGrammarPool$SoftGrammarReference;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XMLSchemaDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLSchemaDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$FieldInfo _SoftReferenceGrammarPool_FieldInfo_[] = {
	{"TABLE_SIZE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SoftReferenceGrammarPool, TABLE_SIZE)},
	{"ZERO_LENGTH_GRAMMAR_ARRAY", "[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(SoftReferenceGrammarPool, ZERO_LENGTH_GRAMMAR_ARRAY)},
	{"fGrammars", "[Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;", nullptr, $PROTECTED, $field(SoftReferenceGrammarPool, fGrammars)},
	{"fPoolIsLocked", "Z", nullptr, $PROTECTED, $field(SoftReferenceGrammarPool, fPoolIsLocked)},
	{"fGrammarCount", "I", nullptr, $PROTECTED, $field(SoftReferenceGrammarPool, fGrammarCount)},
	{"fReferenceQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;>;", $PROTECTED | $FINAL, $field(SoftReferenceGrammarPool, fReferenceQueue)},
	{}
};

$MethodInfo _SoftReferenceGrammarPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, init$, void, int32_t)},
	{"cacheGrammars", "(Ljava/lang/String;[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, cacheGrammars, void, $String*, $GrammarArray*)},
	{"clean", "()V", nullptr, $PRIVATE, $method(SoftReferenceGrammarPool, clean, void)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, clear, void)},
	{"containsGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, containsGrammar, bool, $XMLGrammarDescription*)},
	{"equals", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, equals, bool, $XMLGrammarDescription*, $XMLGrammarDescription*)},
	{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, getGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"hashCode", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)I", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, hashCode, int32_t, $XMLGrammarDescription*)},
	{"lockPool", "()V", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, lockPool, void)},
	{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, putGrammar, void, $Grammar*)},
	{"removeEntry", "(Lcom/sun/org/apache/xerces/internal/jaxp/validation/SoftReferenceGrammarPool$Entry;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PRIVATE, $method(SoftReferenceGrammarPool, removeEntry, $Grammar*, $SoftReferenceGrammarPool$Entry*)},
	{"removeGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $method(SoftReferenceGrammarPool, removeGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{"unlockPool", "()V", nullptr, $PUBLIC, $virtualMethod(SoftReferenceGrammarPool, unlockPool, void)},
	{}
};

$InnerClassInfo _SoftReferenceGrammarPool_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$SoftGrammarReference", "com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool", "SoftGrammarReference", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$Entry", "com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool", "Entry", $STATIC | $FINAL},
	{}
};

$ClassInfo _SoftReferenceGrammarPool_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarPool",
	_SoftReferenceGrammarPool_FieldInfo_,
	_SoftReferenceGrammarPool_MethodInfo_,
	nullptr,
	nullptr,
	_SoftReferenceGrammarPool_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$SoftGrammarReference,com.sun.org.apache.xerces.internal.jaxp.validation.SoftReferenceGrammarPool$Entry"
};

$Object* allocate$SoftReferenceGrammarPool($Class* clazz) {
	return $of($alloc(SoftReferenceGrammarPool));
}

$GrammarArray* SoftReferenceGrammarPool::ZERO_LENGTH_GRAMMAR_ARRAY = nullptr;

void SoftReferenceGrammarPool::init$() {
	$set(this, fGrammars, nullptr);
	this->fGrammarCount = 0;
	$set(this, fReferenceQueue, $new($ReferenceQueue));
	$set(this, fGrammars, $new($SoftReferenceGrammarPool$EntryArray, SoftReferenceGrammarPool::TABLE_SIZE));
	this->fPoolIsLocked = false;
}

void SoftReferenceGrammarPool::init$(int32_t initialCapacity) {
	$set(this, fGrammars, nullptr);
	this->fGrammarCount = 0;
	$set(this, fReferenceQueue, $new($ReferenceQueue));
	$set(this, fGrammars, $new($SoftReferenceGrammarPool$EntryArray, initialCapacity));
	this->fPoolIsLocked = false;
}

$GrammarArray* SoftReferenceGrammarPool::retrieveInitialGrammarSet($String* grammarType) {
	$synchronized(this->fGrammars) {
		clean();
		return SoftReferenceGrammarPool::ZERO_LENGTH_GRAMMAR_ARRAY;
	}
}

void SoftReferenceGrammarPool::cacheGrammars($String* grammarType, $GrammarArray* grammars) {
	if (!this->fPoolIsLocked) {
		for (int32_t i = 0; i < $nc(grammars)->length; ++i) {
			putGrammar(grammars->get(i));
		}
	}
}

$Grammar* SoftReferenceGrammarPool::retrieveGrammar($XMLGrammarDescription* desc) {
	return getGrammar(desc);
}

void SoftReferenceGrammarPool::putGrammar($Grammar* grammar) {
	$useLocalCurrentObjectStackCache();
	if (!this->fPoolIsLocked) {
		$synchronized(this->fGrammars) {
			clean();
			$var($XMLGrammarDescription, desc, $nc(grammar)->getGrammarDescription());
			int32_t hash = hashCode(desc);
			int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
			{
				$var($SoftReferenceGrammarPool$Entry, entry, $nc(this->fGrammars)->get(index));
				for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
					if (entry->hash == hash && equals(entry->desc, desc)) {
						if (!$equals($nc(entry->grammar)->get(), grammar)) {
							$set(entry, grammar, $new($SoftReferenceGrammarPool$SoftGrammarReference, entry, grammar, this->fReferenceQueue));
						}
						return;
					}
				}
			}
			$var($SoftReferenceGrammarPool$Entry, entry, $new($SoftReferenceGrammarPool$Entry, hash, index, desc, grammar, $nc(this->fGrammars)->get(index), this->fReferenceQueue));
			$nc(this->fGrammars)->set(index, entry);
			++this->fGrammarCount;
		}
	}
}

$Grammar* SoftReferenceGrammarPool::getGrammar($XMLGrammarDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->fGrammars) {
		clean();
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($SoftReferenceGrammarPool$Entry, entry, $nc(this->fGrammars)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				$var($Grammar, tempGrammar, $cast($Grammar, $nc(entry->grammar)->get()));
				if (tempGrammar == nullptr) {
					removeEntry(entry);
				} else if ((entry->hash == hash) && equals(entry->desc, desc)) {
					return tempGrammar;
				}
			}
		}
		return nullptr;
	}
}

$Grammar* SoftReferenceGrammarPool::removeGrammar($XMLGrammarDescription* desc) {
	$synchronized(this->fGrammars) {
		clean();
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($SoftReferenceGrammarPool$Entry, entry, $nc(this->fGrammars)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				if ((entry->hash == hash) && equals(entry->desc, desc)) {
					return removeEntry(entry);
				}
			}
		}
		return nullptr;
	}
}

bool SoftReferenceGrammarPool::containsGrammar($XMLGrammarDescription* desc) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->fGrammars) {
		clean();
		int32_t hash = hashCode(desc);
		int32_t index = $mod(((int32_t)(hash & (uint32_t)0x7FFFFFFF)), $nc(this->fGrammars)->length);
		{
			$var($SoftReferenceGrammarPool$Entry, entry, $nc(this->fGrammars)->get(index));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				$var($Grammar, tempGrammar, $cast($Grammar, $nc(entry->grammar)->get()));
				if (tempGrammar == nullptr) {
					removeEntry(entry);
				} else if ((entry->hash == hash) && equals(entry->desc, desc)) {
					return true;
				}
			}
		}
		return false;
	}
}

void SoftReferenceGrammarPool::lockPool() {
	this->fPoolIsLocked = true;
}

void SoftReferenceGrammarPool::unlockPool() {
	this->fPoolIsLocked = false;
}

void SoftReferenceGrammarPool::clear() {
	for (int32_t i = 0; i < $nc(this->fGrammars)->length; ++i) {
		if ($nc(this->fGrammars)->get(i) != nullptr) {
			$nc($nc(this->fGrammars)->get(i))->clear();
			$nc(this->fGrammars)->set(i, nullptr);
		}
	}
	this->fGrammarCount = 0;
}

bool SoftReferenceGrammarPool::equals($XMLGrammarDescription* desc1, $XMLGrammarDescription* desc2) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XMLSchemaDescription, desc1)) {
		if (!($instanceOf($XMLSchemaDescription, desc2))) {
			return false;
		}
		$var($XMLSchemaDescription, sd1, $cast($XMLSchemaDescription, desc1));
		$var($XMLSchemaDescription, sd2, $cast($XMLSchemaDescription, desc2));
		$var($String, targetNamespace, $nc(sd1)->getTargetNamespace());
		if (targetNamespace != nullptr) {
			if (!targetNamespace->equals($($nc(sd2)->getTargetNamespace()))) {
				return false;
			}
		} else if ($nc(sd2)->getTargetNamespace() != nullptr) {
			return false;
		}
		$var($String, expandedSystemId, sd1->getExpandedSystemId());
		if (expandedSystemId != nullptr) {
			if (!expandedSystemId->equals($($nc(sd2)->getExpandedSystemId()))) {
				return false;
			}
		} else if ($nc(sd2)->getExpandedSystemId() != nullptr) {
			return false;
		}
		return true;
	}
	return $nc($of(desc1))->equals(desc2);
}

int32_t SoftReferenceGrammarPool::hashCode($XMLGrammarDescription* desc) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($XMLSchemaDescription, desc)) {
		$var($XMLSchemaDescription, sd, $cast($XMLSchemaDescription, desc));
		$var($String, targetNamespace, $nc(sd)->getTargetNamespace());
		$var($String, expandedSystemId, sd->getExpandedSystemId());
		int32_t hash = (targetNamespace != nullptr) ? $nc(targetNamespace)->hashCode() : 0;
		hash ^= (expandedSystemId != nullptr) ? $nc(expandedSystemId)->hashCode() : 0;
		return hash;
	}
	return $nc($of(desc))->hashCode();
}

$Grammar* SoftReferenceGrammarPool::removeEntry($SoftReferenceGrammarPool$Entry* entry) {
	if ($nc(entry)->prev != nullptr) {
		$set($nc(entry->prev), next, entry->next);
	} else {
		$nc(this->fGrammars)->set(entry->bucket, entry->next);
	}
	if ($nc(entry)->next != nullptr) {
		$set($nc(entry->next), prev, entry->prev);
	}
	--this->fGrammarCount;
	$set($nc($nc(entry)->grammar), entry, nullptr);
	return $cast($Grammar, $nc(entry->grammar)->get());
}

void SoftReferenceGrammarPool::clean() {
	$useLocalCurrentObjectStackCache();
	$var($Reference, ref, $nc(this->fReferenceQueue)->poll());
	while (ref != nullptr) {
		$var($SoftReferenceGrammarPool$Entry, entry, $nc(($cast($SoftReferenceGrammarPool$SoftGrammarReference, ref)))->entry);
		if (entry != nullptr) {
			removeEntry(entry);
		}
		$assign(ref, $nc(this->fReferenceQueue)->poll());
	}
}

void clinit$SoftReferenceGrammarPool($Class* class$) {
	$assignStatic(SoftReferenceGrammarPool::ZERO_LENGTH_GRAMMAR_ARRAY, $new($GrammarArray, 0));
}

SoftReferenceGrammarPool::SoftReferenceGrammarPool() {
}

$Class* SoftReferenceGrammarPool::load$($String* name, bool initialize) {
	$loadClass(SoftReferenceGrammarPool, name, initialize, &_SoftReferenceGrammarPool_ClassInfo_, clinit$SoftReferenceGrammarPool, allocate$SoftReferenceGrammarPool);
	return class$;
}

$Class* SoftReferenceGrammarPool::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com