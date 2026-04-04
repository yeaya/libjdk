#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyRefValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreCache.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <java/util/Map.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XMLSchemaValidator$KeyValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$KeyValueStore;
using $XMLSchemaValidator$ValueStoreBase = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase;
using $KeyRef = ::com::sun::org::apache::xerces::internal::impl::xs::identity::KeyRef;
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
						namespace impl {
							namespace xs {

void XMLSchemaValidator$KeyRefValueStore::init$($XMLSchemaValidator* this$0, $KeyRef* keyRef, $XMLSchemaValidator$KeyValueStore* keyValueStore) {
	$set(this, this$0, this$0);
	$XMLSchemaValidator$ValueStoreBase::init$(this$0, keyRef);
	$set(this, fKeyValueStore, keyValueStore);
}

void XMLSchemaValidator$KeyRefValueStore::endDocumentFragment() {
	$useLocalObjectStack();
	$XMLSchemaValidator$ValueStoreBase::endDocumentFragment();
	$set(this, fKeyValueStore, $cast($XMLSchemaValidator$ValueStoreBase, $nc($nc(this->this$0->fValueStoreCache)->fGlobalIDConstraintMap)->get($($nc($cast($KeyRef, this->fIdentityConstraint))->getKey()))));
	if (this->fKeyValueStore == nullptr) {
		$var($String, code, "KeyRefOutOfScope"_s);
		$var($String, value, $nc(this->fIdentityConstraint)->toString());
		this->this$0->reportSchemaError(code, $$new($ObjectArray, {value}));
		return;
	}
	int32_t errorIndex = $nc(this->fKeyValueStore)->contains(this);
	if (errorIndex != -1) {
		$var($String, code, "KeyNotFound"_s);
		$var($String, values, toString(this->fValues, errorIndex, this->fFieldCount));
		$var($String, element, $nc(this->fIdentityConstraint)->getElementName());
		$var($String, name, $nc(this->fIdentityConstraint)->getName());
		this->this$0->reportSchemaError(code, $$new($ObjectArray, {
			name,
			values,
			element
		}));
	}
}

void XMLSchemaValidator$KeyRefValueStore::endDocument() {
	$XMLSchemaValidator$ValueStoreBase::endDocument();
}

XMLSchemaValidator$KeyRefValueStore::XMLSchemaValidator$KeyRefValueStore() {
}

$Class* XMLSchemaValidator$KeyRefValueStore::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$KeyRefValueStore, this$0)},
		{"fKeyValueStore", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase;", nullptr, $PROTECTED, $field(XMLSchemaValidator$KeyRefValueStore, fKeyValueStore)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/KeyRef;Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore;)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$KeyRefValueStore, init$, void, $XMLSchemaValidator*, $KeyRef*, $XMLSchemaValidator$KeyValueStore*)},
		{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$KeyRefValueStore, endDocument, void)},
		{"endDocumentFragment", "()V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaValidator$KeyRefValueStore, endDocumentFragment, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyRefValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "KeyRefValueStore", $PROTECTED},
		{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreBase", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyRefValueStore",
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
	};
	$loadClass(XMLSchemaValidator$KeyRefValueStore, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSchemaValidator$KeyRefValueStore);
	});
	return class$;
}

$Class* XMLSchemaValidator$KeyRefValueStore::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com