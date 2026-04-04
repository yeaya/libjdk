#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$Matcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/IdentityConstraint.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/ShortListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSComplexTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

#undef COMPLEX_TYPE
#undef CONTENTTYPE_SIMPLE
#undef DECIMAL_DT
#undef ENTITY_DT
#undef IC_KEY
#undef NOTATION_DT
#undef POSITIVEINTEGER_DT
#undef STRING_DT

using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $Field$XPath = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field$XPath;
using $IdentityConstraint = ::com::sun::org::apache::xerces::internal::impl::xs::identity::IdentityConstraint;
using $ValueStore = ::com::sun::org::apache::xerces::internal::impl::xs::identity::ValueStore;
using $XPathMatcher = ::com::sun::org::apache::xerces::internal::impl::xs::identity::XPathMatcher;
using $ShortListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::ShortListImpl;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSComplexTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSComplexTypeDefinition;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
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
								namespace identity {

void Field$Matcher::init$($Field* this$0, $Field$XPath* xpath, $ValueStore* store) {
	$set(this, this$0, this$0);
	$XPathMatcher::init$(xpath);
	this->fMayMatch = true;
	$set(this, fStore, store);
}

void Field$Matcher::matched(Object$* actualValue, int16_t valueType, $ShortList* itemValueType, bool isNil) {
	$useLocalObjectStack();
	$XPathMatcher::matched(actualValue, valueType, itemValueType, isNil);
	if (isNil && ($nc(this->this$0->fIdentityConstraint)->getCategory() == $IdentityConstraint::IC_KEY)) {
		$var($String, code, "KeyMatchesNillable"_s);
		$nc(this->fStore)->reportError(code, $$new($ObjectArray, {
			$(this->this$0->fIdentityConstraint->getElementName()),
			$(this->this$0->fIdentityConstraint->getIdentityConstraintName())
		}));
	}
	$var($Field, var$0, this->this$0);
	bool var$1 = this->fMayMatch;
	int16_t var$2 = convertToPrimitiveKind(valueType);
	$nc(this->fStore)->addValue(var$0, var$1, actualValue, var$2, $(convertToPrimitiveKind(itemValueType)));
	this->fMayMatch = false;
}

int16_t Field$Matcher::convertToPrimitiveKind(int16_t valueType) {
	if (valueType <= $XSConstants::NOTATION_DT) {
		return valueType;
	}
	if (valueType <= $XSConstants::ENTITY_DT) {
		return $XSConstants::STRING_DT;
	}
	if (valueType <= $XSConstants::POSITIVEINTEGER_DT) {
		return $XSConstants::DECIMAL_DT;
	}
	return valueType;
}

$ShortList* Field$Matcher::convertToPrimitiveKind($ShortList* itemValueType) {
	if (itemValueType != nullptr) {
		int32_t i = 0;
		int32_t length = itemValueType->getLength();
		for (i = 0; i < length; ++i) {
			int16_t type = itemValueType->item(i);
			if (type != convertToPrimitiveKind(type)) {
				break;
			}
		}
		if (i != length) {
			$var($shorts, arr, $new($shorts, length));
			for (int32_t j = 0; j < i; ++j) {
				arr->set(j, itemValueType->item(j));
			}
			for (; i < length; ++i) {
				arr->set(i, convertToPrimitiveKind(itemValueType->item(i)));
			}
			return $new($ShortListImpl, arr, arr->length);
		}
	}
	return itemValueType;
}

void Field$Matcher::handleContent($XSTypeDefinition* type, bool nillable, Object$* actualValue, int16_t valueType, $ShortList* itemValueType) {
	$useLocalObjectStack();
	bool var$0 = type == nullptr;
	if (!var$0) {
		bool var$1 = type->getTypeCategory() == $XSTypeDefinition::COMPLEX_TYPE;
		var$0 = var$1 && $cast($XSComplexTypeDefinition, type)->getContentType() != $XSComplexTypeDefinition::CONTENTTYPE_SIMPLE;
	}
	if (var$0) {
		$nc(this->fStore)->reportError("cvc-id.3"_s, $$new($ObjectArray, {
			$($nc(this->this$0->fIdentityConstraint)->getName()),
			$($nc(this->this$0->fIdentityConstraint)->getElementName())
		}));
	}
	$set(this, fMatchedString, actualValue);
	matched(this->fMatchedString, valueType, itemValueType, nillable);
}

Field$Matcher::Field$Matcher() {
}

$Class* Field$Matcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;", nullptr, $FINAL | $SYNTHETIC, $field(Field$Matcher, this$0)},
		{"fStore", "Lcom/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore;", nullptr, $PROTECTED | $FINAL, $field(Field$Matcher, fStore)},
		{"fMayMatch", "Z", nullptr, $PROTECTED, $field(Field$Matcher, fMayMatch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath;Lcom/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore;)V", nullptr, $PUBLIC, $method(Field$Matcher, init$, void, $Field*, $Field$XPath*, $ValueStore*)},
		{"convertToPrimitiveKind", "(S)S", nullptr, $PRIVATE, $method(Field$Matcher, convertToPrimitiveKind, int16_t, int16_t)},
		{"convertToPrimitiveKind", "(Lcom/sun/org/apache/xerces/internal/xs/ShortList;)Lcom/sun/org/apache/xerces/internal/xs/ShortList;", nullptr, $PRIVATE, $method(Field$Matcher, convertToPrimitiveKind, $ShortList*, $ShortList*)},
		{"handleContent", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PROTECTED, $virtualMethod(Field$Matcher, handleContent, void, $XSTypeDefinition*, bool, Object$*, int16_t, $ShortList*)},
		{"matched", "(Ljava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;Z)V", nullptr, $PROTECTED, $virtualMethod(Field$Matcher, matched, void, Object$*, int16_t, $ShortList*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$Matcher", "com.sun.org.apache.xerces.internal.impl.xs.identity.Field", "Matcher", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$Matcher",
		"com.sun.org.apache.xerces.internal.impl.xs.identity.XPathMatcher",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.identity.Field"
	};
	$loadClass(Field$Matcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Field$Matcher);
	});
	return class$;
}

$Class* Field$Matcher::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com