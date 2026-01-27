#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$KeyValueStore.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ValueStoreBase.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey.h>
#include <jcpp.h>

using $XMLSchemaValidator = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator;
using $XMLSchemaValidator$ValueStoreBase = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator$ValueStoreBase;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $UniqueOrKey = ::com::sun::org::apache::xerces::internal::impl::xs::identity::UniqueOrKey;
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

$FieldInfo _XMLSchemaValidator$KeyValueStore_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$KeyValueStore, this$0)},
	{}
};

$MethodInfo _XMLSchemaValidator$KeyValueStore_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey;)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$KeyValueStore, init$, void, $XMLSchemaValidator*, $UniqueOrKey*)},
	{"checkDuplicateValues", "()V", nullptr, $PROTECTED, $virtualMethod(XMLSchemaValidator$KeyValueStore, checkDuplicateValues, void)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$KeyValueStore_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "KeyValueStore", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreBase", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _XMLSchemaValidator$KeyValueStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$KeyValueStore",
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase",
	nullptr,
	_XMLSchemaValidator$KeyValueStore_FieldInfo_,
	_XMLSchemaValidator$KeyValueStore_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$KeyValueStore_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$KeyValueStore($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$KeyValueStore));
}

void XMLSchemaValidator$KeyValueStore::init$($XMLSchemaValidator* this$0, $UniqueOrKey* key) {
	$set(this, this$0, this$0);
	$XMLSchemaValidator$ValueStoreBase::init$(this$0, key);
}

void XMLSchemaValidator$KeyValueStore::checkDuplicateValues() {
	$useLocalCurrentObjectStackCache();
	if (contains()) {
		$var($String, code, "DuplicateKey"_s);
		$var($String, value, toString(this->fLocalValues));
		$var($String, eName, $nc(this->fIdentityConstraint)->getElementName());
		$var($String, cName, $nc(this->fIdentityConstraint)->getIdentityConstraintName());
		this->this$0->reportSchemaError(code, $$new($ObjectArray, {
			$of(value),
			$of(eName),
			$of(cName)
		}));
	}
}

XMLSchemaValidator$KeyValueStore::XMLSchemaValidator$KeyValueStore() {
}

$Class* XMLSchemaValidator$KeyValueStore::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$KeyValueStore, name, initialize, &_XMLSchemaValidator$KeyValueStore_ClassInfo_, allocate$XMLSchemaValidator$KeyValueStore);
	return class$;
}

$Class* XMLSchemaValidator$KeyValueStore::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com