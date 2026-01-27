#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$UniqueValueStore.h>

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

$FieldInfo _XMLSchemaValidator$UniqueValueStore_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;", nullptr, $FINAL | $SYNTHETIC, $field(XMLSchemaValidator$UniqueValueStore, this$0)},
	{}
};

$MethodInfo _XMLSchemaValidator$UniqueValueStore_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/UniqueOrKey;)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$UniqueValueStore, init$, void, $XMLSchemaValidator*, $UniqueOrKey*)},
	{"checkDuplicateValues", "()V", nullptr, $PROTECTED, $virtualMethod(XMLSchemaValidator$UniqueValueStore, checkDuplicateValues, void)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$UniqueValueStore_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$UniqueValueStore", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "UniqueValueStore", $PROTECTED},
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ValueStoreBase", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _XMLSchemaValidator$UniqueValueStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$UniqueValueStore",
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ValueStoreBase",
	nullptr,
	_XMLSchemaValidator$UniqueValueStore_FieldInfo_,
	_XMLSchemaValidator$UniqueValueStore_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$UniqueValueStore_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$UniqueValueStore($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$UniqueValueStore));
}

void XMLSchemaValidator$UniqueValueStore::init$($XMLSchemaValidator* this$0, $UniqueOrKey* unique) {
	$set(this, this$0, this$0);
	$XMLSchemaValidator$ValueStoreBase::init$(this$0, unique);
}

void XMLSchemaValidator$UniqueValueStore::checkDuplicateValues() {
	$useLocalCurrentObjectStackCache();
	if (contains()) {
		$var($String, code, "DuplicateUnique"_s);
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

XMLSchemaValidator$UniqueValueStore::XMLSchemaValidator$UniqueValueStore() {
}

$Class* XMLSchemaValidator$UniqueValueStore::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$UniqueValueStore, name, initialize, &_XMLSchemaValidator$UniqueValueStore_ClassInfo_, allocate$XMLSchemaValidator$UniqueValueStore);
	return class$;
}

$Class* XMLSchemaValidator$UniqueValueStore::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com