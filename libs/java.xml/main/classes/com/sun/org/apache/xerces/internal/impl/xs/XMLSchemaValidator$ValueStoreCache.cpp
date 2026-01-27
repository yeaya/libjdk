#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreCache.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyRefValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$LocalIDKey.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$UniqueValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <jcpp.h>

#undef IC_KEY
#undef IC_KEYREF
#undef IC_UNIQUE

using $IdentityConstraintArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint>;
using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XMLSchemaValidator$KeyRefValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$KeyRefValueStore;
using $XMLSchemaValidator$KeyValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$KeyValueStore;
using $XMLSchemaValidator$LocalIDKey = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$LocalIDKey;
using $XMLSchemaValidator$UniqueValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$UniqueValueStore;
using $XMLSchemaValidator$ValueStoreBase = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $FieldActivator = ::com::sun::org::apache::xerces::internal::impl::xs::identity::FieldActivator;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $KeyRef = ::com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
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
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$ValueStoreCache_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$ValueStoreCache, this$0)},
	{"fLocalId", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$LocalIDKey;", nullptr, $FINAL, $field(XMLSchemaValidator$ValueStoreCache, fLocalId)},
	{"fValueStores", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;>;", $PROTECTED | $FINAL, $field(XMLSchemaValidator$ValueStoreCache, fValueStores)},
	{"fIdentityConstraint2ValueStoreMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$LocalIDKey;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;>;", $PROTECTED | $FINAL, $field(XMLSchemaValidator$ValueStoreCache, fIdentityConstraint2ValueStoreMap)},
	{"fGlobalMapStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;>;>;", $PROTECTED | $FINAL, $field(XMLSchemaValidator$ValueStoreCache, fGlobalMapStack)},
	{"fGlobalIDConstraintMap", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;>;", $PROTECTED | $FINAL, $field(XMLSchemaValidator$ValueStoreCache, fGlobalIDConstraintMap)},
	{}
};

$MethodInfo _XMLSchemaValidator$ValueStoreCache_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$ValueStoreCache, init$, void, $XMLSchemaValidator*)},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, endDocument, void)},
	{"endElement", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, endElement, void)},
	{"getGlobalValueStoreFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, getGlobalValueStoreFor, $XMLSchemaValidator$ValueStoreBase*, $IdentityConstraint*)},
	{"getValueStoreFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, getValueStoreFor, $XMLSchemaValidator$ValueStoreBase*, $IdentityConstraint*, int32_t)},
	{"initValueStoresFor", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/FieldActivator;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, initValueStoresFor, void, $XSElementDecl*, $FieldActivator*)},
	{"startDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, startDocument, void)},
	{"startElement", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, startElement, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, toString, $String*)},
	{"transplant", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;I)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$ValueStoreCache, transplant, void, $IdentityConstraint*, int32_t)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$ValueStoreCache_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreCache", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreCache", $PROTECTED},
	{}
};

$ClassInfo _XMLSchemaValidator$ValueStoreCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreCache",
	"java.lang.Object",
	nullptr,
	_XMLSchemaValidator$ValueStoreCache_FieldInfo_,
	_XMLSchemaValidator$ValueStoreCache_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$ValueStoreCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$ValueStoreCache($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$ValueStoreCache));
}

void XMLSchemaValidator$ValueStoreCache::init$($XMLSchemaValidator* this$0) {
	$set(this, this$0, this$0);
	$set(this, fLocalId, $new($XMLSchemaValidator$LocalIDKey));
	$set(this, fValueStores, $new($ArrayList));
	$set(this, fIdentityConstraint2ValueStoreMap, $new($HashMap));
	$set(this, fGlobalMapStack, $new($Stack));
	$set(this, fGlobalIDConstraintMap, $new($HashMap));
}

void XMLSchemaValidator$ValueStoreCache::startDocument() {
	$nc(this->fValueStores)->clear();
	$nc(this->fIdentityConstraint2ValueStoreMap)->clear();
	$nc(this->fGlobalIDConstraintMap)->clear();
	$nc(this->fGlobalMapStack)->removeAllElements();
}

void XMLSchemaValidator$ValueStoreCache::startElement() {
	if ($nc(this->fGlobalIDConstraintMap)->size() > 0) {
		$nc(this->fGlobalMapStack)->push($cast($Map, $($nc(($cast($HashMap, this->fGlobalIDConstraintMap)))->clone())));
	} else {
		$nc(this->fGlobalMapStack)->push(nullptr);
	}
	$nc(this->fGlobalIDConstraintMap)->clear();
}

void XMLSchemaValidator$ValueStoreCache::endElement() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fGlobalMapStack)->isEmpty()) {
		return;
	}
	$var($Map, oldMap, $cast($Map, $nc(this->fGlobalMapStack)->pop()));
	if (oldMap == nullptr) {
		return;
	}
	{
		$var($Iterator, i$, $nc($($nc(oldMap)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($IdentityConstraint, id, $cast($IdentityConstraint, $nc(entry)->getKey()));
				$var($XMLSchemaValidator$ValueStoreBase, oldVal, $cast($XMLSchemaValidator$ValueStoreBase, entry->getValue()));
				if (oldVal != nullptr) {
					$var($XMLSchemaValidator$ValueStoreBase, currVal, $cast($XMLSchemaValidator$ValueStoreBase, $nc(this->fGlobalIDConstraintMap)->get(id)));
					if (currVal == nullptr) {
						$nc(this->fGlobalIDConstraintMap)->put(id, oldVal);
					} else if (currVal != oldVal) {
						$nc(currVal)->append(oldVal);
					}
				}
			}
		}
	}
}

void XMLSchemaValidator$ValueStoreCache::initValueStoresFor($XSElementDecl* eDecl, $FieldActivator* activator) {
	$useLocalCurrentObjectStackCache();
	$var($IdentityConstraintArray, icArray, $nc(eDecl)->fIDConstraints);
	int32_t icCount = eDecl->fIDCPos;
	for (int32_t i = 0; i < icCount; ++i) {
		{
			$var($UniqueOrKey, unique, nullptr)
			$var($XMLSchemaValidator$LocalIDKey, toHash, nullptr)
			$var($XMLSchemaValidator$UniqueValueStore, uniqueValueStore, nullptr)
			$var($UniqueOrKey, key, nullptr)
			$var($XMLSchemaValidator$KeyValueStore, keyValueStore, nullptr)
			$var($KeyRef, keyRef, nullptr)
			$var($XMLSchemaValidator$KeyRefValueStore, keyRefValueStore, nullptr)
			do {
				int16_t var$0 = $nc($nc(icArray)->get(i))->getCategory();
				if (var$0 == ($IdentityConstraint::IC_UNIQUE)) {
					goto case$0;
				}
				if (var$0 == ($IdentityConstraint::IC_KEY)) {
					goto case$1;
				}
				if (var$0 == ($IdentityConstraint::IC_KEYREF)) {
					goto case$2;
				}
				break;
case$0:
				// (IdentityConstraint.IC_UNIQUE)
				{
					$assign(unique, $cast($UniqueOrKey, icArray->get(i)));
					$assign(toHash, $new($XMLSchemaValidator$LocalIDKey, unique, this->this$0->fElementDepth));
					$assign(uniqueValueStore, $cast($XMLSchemaValidator$UniqueValueStore, $nc(this->fIdentityConstraint2ValueStoreMap)->get(toHash)));
					if (uniqueValueStore == nullptr) {
						$assign(uniqueValueStore, $new($XMLSchemaValidator$UniqueValueStore, this->this$0, unique));
						$nc(this->fIdentityConstraint2ValueStoreMap)->put(toHash, uniqueValueStore);
					} else {
						$nc(uniqueValueStore)->clear();
					}
					$nc(this->fValueStores)->add(uniqueValueStore);
					this->this$0->activateSelectorFor(icArray->get(i));
					break;
				}
case$1:
				// (IdentityConstraint.IC_KEY)
				{
					$assign(key, $cast($UniqueOrKey, icArray->get(i)));
					$assign(toHash, $new($XMLSchemaValidator$LocalIDKey, key, this->this$0->fElementDepth));
					$assign(keyValueStore, $cast($XMLSchemaValidator$KeyValueStore, $nc(this->fIdentityConstraint2ValueStoreMap)->get(toHash)));
					if (keyValueStore == nullptr) {
						$assign(keyValueStore, $new($XMLSchemaValidator$KeyValueStore, this->this$0, key));
						$nc(this->fIdentityConstraint2ValueStoreMap)->put(toHash, keyValueStore);
					} else {
						$nc(keyValueStore)->clear();
					}
					$nc(this->fValueStores)->add(keyValueStore);
					this->this$0->activateSelectorFor(icArray->get(i));
					break;
				}
case$2:
				// (IdentityConstraint.IC_KEYREF)
				{
					$assign(keyRef, $cast($KeyRef, icArray->get(i)));
					$assign(toHash, $new($XMLSchemaValidator$LocalIDKey, keyRef, this->this$0->fElementDepth));
					$assign(keyRefValueStore, $cast($XMLSchemaValidator$KeyRefValueStore, $nc(this->fIdentityConstraint2ValueStoreMap)->get(toHash)));
					if (keyRefValueStore == nullptr) {
						$assign(keyRefValueStore, $new($XMLSchemaValidator$KeyRefValueStore, this->this$0, keyRef, nullptr));
						$nc(this->fIdentityConstraint2ValueStoreMap)->put(toHash, keyRefValueStore);
					} else {
						$nc(keyRefValueStore)->clear();
					}
					$nc(this->fValueStores)->add(keyRefValueStore);
					this->this$0->activateSelectorFor(icArray->get(i));
					break;
				}
			} while (false);
		}
	}
}

$XMLSchemaValidator$ValueStoreBase* XMLSchemaValidator$ValueStoreCache::getValueStoreFor($IdentityConstraint* id, int32_t initialDepth) {
	$nc(this->fLocalId)->fDepth = initialDepth;
	$set($nc(this->fLocalId), fId, id);
	return $cast($XMLSchemaValidator$ValueStoreBase, $nc(this->fIdentityConstraint2ValueStoreMap)->get(this->fLocalId));
}

$XMLSchemaValidator$ValueStoreBase* XMLSchemaValidator$ValueStoreCache::getGlobalValueStoreFor($IdentityConstraint* id) {
	return $cast($XMLSchemaValidator$ValueStoreBase, $nc(this->fGlobalIDConstraintMap)->get(id));
}

void XMLSchemaValidator$ValueStoreCache::transplant($IdentityConstraint* id, int32_t initialDepth) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fLocalId)->fDepth = initialDepth;
	$set($nc(this->fLocalId), fId, id);
	$var($XMLSchemaValidator$ValueStoreBase, newVals, $cast($XMLSchemaValidator$ValueStoreBase, $nc(this->fIdentityConstraint2ValueStoreMap)->get(this->fLocalId)));
	if ($nc(id)->getCategory() == $IdentityConstraint::IC_KEYREF) {
		return;
	}
	$var($XMLSchemaValidator$ValueStoreBase, currVals, $cast($XMLSchemaValidator$ValueStoreBase, $nc(this->fGlobalIDConstraintMap)->get(id)));
	if (currVals != nullptr) {
		currVals->append(newVals);
		$nc(this->fGlobalIDConstraintMap)->put(id, currVals);
	} else {
		$nc(this->fGlobalIDConstraintMap)->put(id, newVals);
	}
}

void XMLSchemaValidator$ValueStoreCache::endDocument() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->fValueStores)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLSchemaValidator$ValueStoreBase, valueStore, $cast($XMLSchemaValidator$ValueStoreBase, i$->next()));
			{
				$nc(valueStore)->endDocument();
			}
		}
	}
}

$String* XMLSchemaValidator$ValueStoreCache::toString() {
	$var($String, s, $Object::toString());
	int32_t index1 = $nc(s)->lastIndexOf((int32_t)u'$');
	if (index1 != -1) {
		return s->substring(index1 + 1);
	}
	int32_t index2 = s->lastIndexOf((int32_t)u'.');
	if (index2 != -1) {
		return s->substring(index2 + 1);
	}
	return s;
}

XMLSchemaValidator$ValueStoreCache::XMLSchemaValidator$ValueStoreCache() {
}

$Class* XMLSchemaValidator$ValueStoreCache::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$ValueStoreCache, name, initialize, &_XMLSchemaValidator$ValueStoreCache_ClassInfo_, allocate$XMLSchemaValidator$ValueStoreCache);
	return class$;
}

$Class* XMLSchemaValidator$ValueStoreCache::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com