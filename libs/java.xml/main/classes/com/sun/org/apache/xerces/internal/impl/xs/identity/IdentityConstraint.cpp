#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/StringListImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef IDENTITY_CONSTRAINT

using $XSAnnotationImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl>;
using $FieldArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::identity::Field>;
using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $Selector = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Selector;
using $StringListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::StringListImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$FieldInfo _IdentityConstraint_FieldInfo_[] = {
	{"type", "S", nullptr, $PROTECTED, $field(IdentityConstraint, type)},
	{"fNamespace", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IdentityConstraint, fNamespace)},
	{"fIdentityConstraintName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IdentityConstraint, fIdentityConstraintName)},
	{"fElementName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IdentityConstraint, fElementName)},
	{"fSelector", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector;", nullptr, $PROTECTED, $field(IdentityConstraint, fSelector)},
	{"fFieldCount", "I", nullptr, $PROTECTED, $field(IdentityConstraint, fFieldCount)},
	{"fFields", "[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;", nullptr, $PROTECTED, $field(IdentityConstraint, fFields)},
	{"fAnnotations", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;", nullptr, $PROTECTED, $field(IdentityConstraint, fAnnotations)},
	{"fNumAnnotations", "I", nullptr, $PROTECTED, $field(IdentityConstraint, fNumAnnotations)},
	{}
};

$MethodInfo _IdentityConstraint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(IdentityConstraint, init$, void, $String*, $String*, $String*)},
	{"addAnnotation", "(Lcom/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl;)V", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, addAnnotation, void, $XSAnnotationImpl*)},
	{"addField", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;)V", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, addField, void, $Field*)},
	{"equals", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint;)Z", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, equals, bool, IdentityConstraint*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getAnnotations, $XSObjectList*)},
	{"getCategory", "()S", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getCategory, int16_t)},
	{"getElementName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getElementName, $String*)},
	{"getFieldAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getFieldAt, $Field*, int32_t)},
	{"getFieldCount", "()I", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getFieldCount, int32_t)},
	{"getFieldStrs", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getFieldStrs, $StringList*)},
	{"getIdentityConstraintName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getIdentityConstraintName, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getNamespaceItem, $XSNamespaceItem*)},
	{"getRefKey", "()Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getRefKey, $XSIDCDefinition*)},
	{"getSelector", "()Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getSelector, $Selector*)},
	{"getSelectorStr", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getSelectorStr, $String*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, getType, int16_t)},
	{"resize", "([Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;I)[Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;", nullptr, $STATIC | $FINAL, $staticMethod(IdentityConstraint, resize, $FieldArray*, $FieldArray*, int32_t)},
	{"setSelector", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Selector;)V", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, setSelector, void, $Selector*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdentityConstraint, toString, $String*)},
	{}
};

$ClassInfo _IdentityConstraint_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.IdentityConstraint",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSIDCDefinition",
	_IdentityConstraint_FieldInfo_,
	_IdentityConstraint_MethodInfo_
};

$Object* allocate$IdentityConstraint($Class* clazz) {
	return $of($alloc(IdentityConstraint));
}

void IdentityConstraint::init$($String* namespace$, $String* identityConstraintName, $String* elemName) {
	$set(this, fAnnotations, nullptr);
	$set(this, fNamespace, namespace$);
	$set(this, fIdentityConstraintName, identityConstraintName);
	$set(this, fElementName, elemName);
}

$String* IdentityConstraint::getIdentityConstraintName() {
	return this->fIdentityConstraintName;
}

void IdentityConstraint::setSelector($Selector* selector) {
	$set(this, fSelector, selector);
}

$Selector* IdentityConstraint::getSelector() {
	return this->fSelector;
}

void IdentityConstraint::addField($Field* field) {
	if (this->fFields == nullptr) {
		$set(this, fFields, $new($FieldArray, 4));
	} else if (this->fFieldCount == $nc(this->fFields)->length) {
		$set(this, fFields, resize(this->fFields, this->fFieldCount * 2));
	}
	$nc(this->fFields)->set(this->fFieldCount++, field);
}

int32_t IdentityConstraint::getFieldCount() {
	return this->fFieldCount;
}

$Field* IdentityConstraint::getFieldAt(int32_t index) {
	return $nc(this->fFields)->get(index);
}

$String* IdentityConstraint::getElementName() {
	return this->fElementName;
}

$String* IdentityConstraint::toString() {
	$var($String, s, $XSIDCDefinition::toString());
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

bool IdentityConstraint::equals(IdentityConstraint* id) {
	$useLocalCurrentObjectStackCache();
	bool areEqual = $nc(this->fIdentityConstraintName)->equals($nc(id)->fIdentityConstraintName);
	if (!areEqual) {
		return false;
	}
	areEqual = $nc($($nc(this->fSelector)->toString()))->equals($($nc($nc(id)->fSelector)->toString()));
	if (!areEqual) {
		return false;
	}
	areEqual = (this->fFieldCount == $nc(id)->fFieldCount);
	if (!areEqual) {
		return false;
	}
	for (int32_t i = 0; i < this->fFieldCount; ++i) {
		if (!$nc($($nc($nc(this->fFields)->get(i))->toString()))->equals($($nc($nc(id->fFields)->get(i))->toString()))) {
			return false;
		}
	}
	return true;
}

$FieldArray* IdentityConstraint::resize($FieldArray* oldArray, int32_t newSize) {
	$init(IdentityConstraint);
	$var($FieldArray, newArray, $new($FieldArray, newSize));
	$System::arraycopy(oldArray, 0, newArray, 0, $nc(oldArray)->length);
	return newArray;
}

int16_t IdentityConstraint::getType() {
	return $XSConstants::IDENTITY_CONSTRAINT;
}

$String* IdentityConstraint::getName() {
	return this->fIdentityConstraintName;
}

$String* IdentityConstraint::getNamespace() {
	return this->fNamespace;
}

int16_t IdentityConstraint::getCategory() {
	return this->type;
}

$String* IdentityConstraint::getSelectorStr() {
	return (this->fSelector != nullptr) ? $nc(this->fSelector)->toString() : ($String*)nullptr;
}

$StringList* IdentityConstraint::getFieldStrs() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, strs, $new($StringArray, this->fFieldCount));
	for (int32_t i = 0; i < this->fFieldCount; ++i) {
		strs->set(i, $($nc($nc(this->fFields)->get(i))->toString()));
	}
	return $new($StringListImpl, strs, this->fFieldCount);
}

$XSIDCDefinition* IdentityConstraint::getRefKey() {
	return nullptr;
}

$XSObjectList* IdentityConstraint::getAnnotations() {
	return $new($XSObjectListImpl, $fcast($XSObjectArray, this->fAnnotations), this->fNumAnnotations);
}

$XSNamespaceItem* IdentityConstraint::getNamespaceItem() {
	return nullptr;
}

void IdentityConstraint::addAnnotation($XSAnnotationImpl* annotation) {
	if (annotation == nullptr) {
		return;
	}
	if (this->fAnnotations == nullptr) {
		$set(this, fAnnotations, $new($XSAnnotationImplArray, 2));
	} else if (this->fNumAnnotations == $nc(this->fAnnotations)->length) {
		$var($XSAnnotationImplArray, newArray, $new($XSAnnotationImplArray, this->fNumAnnotations << 1));
		$System::arraycopy(this->fAnnotations, 0, newArray, 0, this->fNumAnnotations);
		$set(this, fAnnotations, newArray);
	}
	$nc(this->fAnnotations)->set(this->fNumAnnotations++, annotation);
}

IdentityConstraint::IdentityConstraint() {
}

$Class* IdentityConstraint::load$($String* name, bool initialize) {
	$loadClass(IdentityConstraint, name, initialize, &_IdentityConstraint_ClassInfo_, allocate$IdentityConstraint);
	return class$;
}

$Class* IdentityConstraint::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com