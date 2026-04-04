#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/Repository.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayType.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef NULL
#undef OBJECT
#undef T
#undef T_OBJECT

using $JavaClassArray = $Array<::com::sun::org::apache::bcel::internal::classfile::JavaClass>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Repository = ::com::sun::org::apache::bcel::internal::Repository;
using $JavaClass = ::com::sun::org::apache::bcel::internal::classfile::JavaClass;
using $ArrayType = ::com::sun::org::apache::bcel::internal::generic::ArrayType;
using $BasicType = ::com::sun::org::apache::bcel::internal::generic::BasicType;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void ReferenceType::init$(int8_t t, $String* s) {
	$Type::init$(t, s);
}

void ReferenceType::init$() {
	$Type::init$($Const::T_OBJECT, "<null object>"_s);
}

bool ReferenceType::isCastableTo($Type* t) {
	$init($Type);
	if (this->equals($Type::NULL)) {
		return $instanceOf(ReferenceType, t);
	}
	return isAssignmentCompatibleWith(t);
}

bool ReferenceType::isAssignmentCompatibleWith($Type* t) {
	$useLocalObjectStack();
	if (!($instanceOf(ReferenceType, t))) {
		return false;
	}
	$var(ReferenceType, T, $cast(ReferenceType, t));
	$init($Type);
	if (this->equals($Type::NULL)) {
		return true;
	}
	if (($instanceOf($ObjectType, this)) && ($cast($ObjectType, this)->referencesClassExact())) {
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesClassExact())) {
			if (this->equals(T)) {
				return true;
			}
			$var($String, var$0, $cast($ObjectType, this)->getClassName());
			if ($Repository::instanceOf(var$0, $($cast($ObjectType, T)->getClassName()))) {
				return true;
			}
		}
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesInterfaceExact())) {
			$var($String, var$1, $cast($ObjectType, this)->getClassName());
			if ($Repository::implementationOf(var$1, $($cast($ObjectType, T)->getClassName()))) {
				return true;
			}
		}
	}
	if (($instanceOf($ObjectType, this)) && ($cast($ObjectType, this)->referencesInterfaceExact())) {
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesClassExact())) {
			if (T->equals($Type::OBJECT)) {
				return true;
			}
		}
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesInterfaceExact())) {
			if (this->equals(T)) {
				return true;
			}
			$var($String, var$2, $cast($ObjectType, this)->getClassName());
			if ($Repository::implementationOf(var$2, $($cast($ObjectType, T)->getClassName()))) {
				return true;
			}
		}
	}
	if ($instanceOf($ArrayType, this)) {
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesClassExact())) {
			if (T->equals($Type::OBJECT)) {
				return true;
			}
		}
		if ($instanceOf($ArrayType, T)) {
			$var($Type, sc, $cast($ArrayType, this)->getElementType());
			$var($Type, tc, $cast($ArrayType, T)->getElementType());
			if ($instanceOf($BasicType, sc) && $instanceOf($BasicType, tc) && sc->equals(tc)) {
				return true;
			}
			if ($instanceOf(ReferenceType, tc) && $instanceOf(ReferenceType, sc) && $cast(ReferenceType, sc)->isAssignmentCompatibleWith(tc)) {
				return true;
			}
		}
		if (($instanceOf($ObjectType, T)) && ($cast($ObjectType, T)->referencesInterfaceExact())) {
			$var($Iterator, i$, $$nc($Const::getInterfacesImplementedByArrays())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, element, $cast($String, i$->next()));
				if (T->equals($($ObjectType::getInstance(element)))) {
					return true;
				}
			}
		}
	}
	return false;
}

ReferenceType* ReferenceType::getFirstCommonSuperclass(ReferenceType* t) {
	$useLocalObjectStack();
	$init($Type);
	if (this->equals($Type::NULL)) {
		return t;
	}
	if ($nc(t)->equals($Type::NULL)) {
		return this;
	}
	if (this->equals(t)) {
		return this;
	}
	if (($instanceOf($ArrayType, this)) && ($instanceOf($ArrayType, t))) {
		$var($ArrayType, arrType1, $cast($ArrayType, this));
		$var($ArrayType, arrType2, $cast($ArrayType, t));
		int32_t var$2 = arrType1->getDimensions();
		bool var$1 = var$2 == arrType2->getDimensions();
		bool var$0 = var$1 && $instanceOf($ObjectType, $(arrType1->getBasicType()));
		if (var$0 && $instanceOf($ObjectType, $(arrType2->getBasicType()))) {
			$var($Type, var$3, $$sure($ObjectType, arrType1->getBasicType())->getFirstCommonSuperclass($$cast($ObjectType, arrType2->getBasicType())));
			return $new($ArrayType, var$3, arrType1->getDimensions());
		}
	}
	if (($instanceOf($ArrayType, this)) || ($instanceOf($ArrayType, t))) {
		return $Type::OBJECT;
	}
	bool var$4 = ($instanceOf($ObjectType, this)) && $cast($ObjectType, this)->referencesInterfaceExact();
	if (var$4 || (($instanceOf($ObjectType, t)) && $cast($ObjectType, t)->referencesInterfaceExact())) {
		return $Type::OBJECT;
	}
	$var($ObjectType, thiz, $cast($ObjectType, this));
	$var($ObjectType, other, $cast($ObjectType, t));
	$var($JavaClassArray, thiz_sups, $Repository::getSuperClasses($(thiz->getClassName())));
	$var($JavaClassArray, other_sups, $Repository::getSuperClasses($(other->getClassName())));
	if ((thiz_sups == nullptr) || (other_sups == nullptr)) {
		return nullptr;
	}
	$var($JavaClassArray, this_sups, $new($JavaClassArray, $nc(thiz_sups)->length + 1));
	$var($JavaClassArray, t_sups, $new($JavaClassArray, $nc(other_sups)->length + 1));
	$System::arraycopy(thiz_sups, 0, this_sups, 1, thiz_sups->length);
	$System::arraycopy(other_sups, 0, t_sups, 1, other_sups->length);
	this_sups->set(0, $($Repository::lookupClass($(thiz->getClassName()))));
	t_sups->set(0, $($Repository::lookupClass($(other->getClassName()))));
	{
		$var($JavaClassArray, arr$, t_sups);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JavaClass, t_sup, arr$->get(i$));
			{
				$var($JavaClassArray, arr$, this_sups);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($JavaClass, this_sup, arr$->get(i$));
					if ($nc(this_sup)->equals(t_sup)) {
						return $ObjectType::getInstance($(this_sup->getClassName()));
					}
				}
			}
		}
	}
	return nullptr;
}

ReferenceType* ReferenceType::firstCommonSuperclass(ReferenceType* t) {
	$useLocalObjectStack();
	$init($Type);
	if (this->equals($Type::NULL)) {
		return t;
	}
	if ($nc(t)->equals($Type::NULL)) {
		return this;
	}
	if (this->equals(t)) {
		return this;
	}
	if (($instanceOf($ArrayType, this)) || ($instanceOf($ArrayType, t))) {
		return $Type::OBJECT;
	}
	bool var$0 = ($instanceOf($ObjectType, this)) && $cast($ObjectType, this)->referencesInterface();
	if (var$0 || (($instanceOf($ObjectType, t)) && $cast($ObjectType, t)->referencesInterface())) {
		return $Type::OBJECT;
	}
	$var($ObjectType, thiz, $cast($ObjectType, this));
	$var($ObjectType, other, $cast($ObjectType, t));
	$var($JavaClassArray, thiz_sups, $Repository::getSuperClasses($(thiz->getClassName())));
	$var($JavaClassArray, other_sups, $Repository::getSuperClasses($(other->getClassName())));
	if ((thiz_sups == nullptr) || (other_sups == nullptr)) {
		return nullptr;
	}
	$var($JavaClassArray, this_sups, $new($JavaClassArray, $nc(thiz_sups)->length + 1));
	$var($JavaClassArray, t_sups, $new($JavaClassArray, $nc(other_sups)->length + 1));
	$System::arraycopy(thiz_sups, 0, this_sups, 1, thiz_sups->length);
	$System::arraycopy(other_sups, 0, t_sups, 1, other_sups->length);
	this_sups->set(0, $($Repository::lookupClass($(thiz->getClassName()))));
	t_sups->set(0, $($Repository::lookupClass($(other->getClassName()))));
	{
		$var($JavaClassArray, arr$, t_sups);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($JavaClass, t_sup, arr$->get(i$));
			{
				$var($JavaClassArray, arr$, this_sups);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($JavaClass, this_sup, arr$->get(i$));
					if ($nc(this_sup)->equals(t_sup)) {
						return $ObjectType::getInstance($(this_sup->getClassName()));
					}
				}
			}
		}
	}
	return nullptr;
}

ReferenceType::ReferenceType() {
}

$Class* ReferenceType::load$($String* name, bool initialize) {
	$CompoundAttribute firstCommonSuperclassmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(BLjava/lang/String;)V", nullptr, $PROTECTED, $method(ReferenceType, init$, void, int8_t, $String*)},
		{"<init>", "()V", nullptr, 0, $method(ReferenceType, init$, void)},
		{"firstCommonSuperclass", "(Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;)Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ReferenceType, firstCommonSuperclass, ReferenceType*, ReferenceType*), "java.lang.ClassNotFoundException", nullptr, firstCommonSuperclassmethodAnnotations$$},
		{"getFirstCommonSuperclass", "(Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;)Lcom/sun/org/apache/bcel/internal/generic/ReferenceType;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, getFirstCommonSuperclass, ReferenceType*, ReferenceType*), "java.lang.ClassNotFoundException"},
		{"isAssignmentCompatibleWith", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Z", nullptr, $PUBLIC, $virtualMethod(ReferenceType, isAssignmentCompatibleWith, bool, $Type*), "java.lang.ClassNotFoundException"},
		{"isCastableTo", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)Z", nullptr, $PUBLIC, $virtualMethod(ReferenceType, isCastableTo, bool, $Type*), "java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.ReferenceType",
		"com.sun.org.apache.bcel.internal.generic.Type",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReferenceType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceType);
	});
	return class$;
}

$Class* ReferenceType::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com