#include <com/sun/org/apache/bcel/internal/generic/FieldGen.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/classfile/AccessFlags.h>
#include <com/sun/org/apache/bcel/internal/classfile/AnnotationEntry.h>
#include <com/sun/org/apache/bcel/internal/classfile/Annotations.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/Constant.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantObject.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantValue.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/Utility.h>
#include <com/sun/org/apache/bcel/internal/generic/AnnotationEntryGen.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGenException.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGen$1.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldGenOrMethodGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldObserver.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT
#undef T_BOOLEAN
#undef T_BYTE
#undef T_CHAR
#undef T_DOUBLE
#undef T_FLOAT
#undef T_INT
#undef T_LONG
#undef T_REFERENCE
#undef T_SHORT

using $AnnotationEntryArray = $Array<::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry>;
using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $AnnotationEntry = ::com::sun::org::apache::bcel::internal::classfile::AnnotationEntry;
using $Annotations = ::com::sun::org::apache::bcel::internal::classfile::Annotations;
using $Attribute = ::com::sun::org::apache::bcel::internal::classfile::Attribute;
using $Constant = ::com::sun::org::apache::bcel::internal::classfile::Constant;
using $ConstantObject = ::com::sun::org::apache::bcel::internal::classfile::ConstantObject;
using $ConstantPool = ::com::sun::org::apache::bcel::internal::classfile::ConstantPool;
using $ConstantValue = ::com::sun::org::apache::bcel::internal::classfile::ConstantValue;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $Utility = ::com::sun::org::apache::bcel::internal::classfile::Utility;
using $AnnotationEntryGen = ::com::sun::org::apache::bcel::internal::generic::AnnotationEntryGen;
using $ClassGenException = ::com::sun::org::apache::bcel::internal::generic::ClassGenException;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldGen$1 = ::com::sun::org::apache::bcel::internal::generic::FieldGen$1;
using $FieldGenOrMethodGen = ::com::sun::org::apache::bcel::internal::generic::FieldGenOrMethodGen;
using $FieldObserver = ::com::sun::org::apache::bcel::internal::generic::FieldObserver;
using $ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $BCELComparator = ::com::sun::org::apache::bcel::internal::util::BCELComparator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$FieldInfo _FieldGen_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(FieldGen, value)},
	{"bcelComparator", "Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PRIVATE | $STATIC, $staticField(FieldGen, bcelComparator)},
	{"observers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/bcel/internal/generic/FieldObserver;>;", $PRIVATE, $field(FieldGen, observers)},
	{}
};

$MethodInfo _FieldGen_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/bcel/internal/generic/Type;Ljava/lang/String;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(FieldGen, init$, void, int32_t, $Type*, $String*, $ConstantPoolGen*)},
	{"<init>", "(Lcom/sun/org/apache/bcel/internal/classfile/Field;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PUBLIC, $method(FieldGen, init$, void, $Field*, $ConstantPoolGen*)},
	{"addAnnotationsAsAttribute", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)V", nullptr, $PRIVATE, $method(FieldGen, addAnnotationsAsAttribute, void, $ConstantPoolGen*)},
	{"addConstant", "()I", nullptr, $PRIVATE, $method(FieldGen, addConstant, int32_t)},
	{"addObserver", "(Lcom/sun/org/apache/bcel/internal/generic/FieldObserver;)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, addObserver, void, $FieldObserver*)},
	{"cancelInitValue", "()V", nullptr, $PUBLIC, $virtualMethod(FieldGen, cancelInitValue, void)},
	{"checkType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PRIVATE, $method(FieldGen, checkType, void, $Type*)},
	{"copy", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)Lcom/sun/org/apache/bcel/internal/generic/FieldGen;", nullptr, $PUBLIC, $virtualMethod(FieldGen, copy, FieldGen*, $ConstantPoolGen*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FieldGen, equals, bool, Object$*)},
	{"getComparator", "()Lcom/sun/org/apache/bcel/internal/util/BCELComparator;", nullptr, $PUBLIC | $STATIC, $staticMethod(FieldGen, getComparator, $BCELComparator*)},
	{"getField", "()Lcom/sun/org/apache/bcel/internal/classfile/Field;", nullptr, $PUBLIC, $virtualMethod(FieldGen, getField, $Field*)},
	{"getInitValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldGen, getInitValue, $String*)},
	{"getSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldGen, getSignature, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FieldGen, hashCode, int32_t)},
	{"removeObserver", "(Lcom/sun/org/apache/bcel/internal/generic/FieldObserver;)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, removeObserver, void, $FieldObserver*)},
	{"setComparator", "(Lcom/sun/org/apache/bcel/internal/util/BCELComparator;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FieldGen, setComparator, void, $BCELComparator*)},
	{"setInitValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, $String*)},
	{"setInitValue", "(J)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, int64_t)},
	{"setInitValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, int32_t)},
	{"setInitValue", "(S)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, int16_t)},
	{"setInitValue", "(C)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, char16_t)},
	{"setInitValue", "(B)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, int8_t)},
	{"setInitValue", "(Z)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, bool)},
	{"setInitValue", "(F)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, float)},
	{"setInitValue", "(D)V", nullptr, $PUBLIC, $virtualMethod(FieldGen, setInitValue, void, double)},
	{"setValue", "(I)V", nullptr, $PRIVATE, $method(FieldGen, setValue, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(FieldGen, toString, $String*)},
	{"update", "()V", nullptr, $PUBLIC, $virtualMethod(FieldGen, update, void)},
	{}
};

$InnerClassInfo _FieldGen_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.FieldGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FieldGen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FieldGen",
	"com.sun.org.apache.bcel.internal.generic.FieldGenOrMethodGen",
	nullptr,
	_FieldGen_FieldInfo_,
	_FieldGen_MethodInfo_,
	nullptr,
	nullptr,
	_FieldGen_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.FieldGen$1"
};

$Object* allocate$FieldGen($Class* clazz) {
	return $of($alloc(FieldGen));
}

$BCELComparator* FieldGen::bcelComparator = nullptr;

void FieldGen::init$(int32_t access_flags, $Type* type, $String* name, $ConstantPoolGen* cp) {
	$FieldGenOrMethodGen::init$(access_flags);
	$set(this, value, nullptr);
	setType(type);
	setName(name);
	setConstantPool(cp);
}

void FieldGen::init$($Field* field, $ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(field)->getAccessFlags();
	$var($Type, var$1, $Type::getType($(field->getSignature())));
	FieldGen::init$(var$0, var$1, $(field->getName()), cp);
	$var($AttributeArray, attrs, $nc(field)->getAttributes());
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				if ($instanceOf($ConstantValue, attr)) {
					setValue($nc(($cast($ConstantValue, attr)))->getConstantValueIndex());
				} else if ($instanceOf($Annotations, attr)) {
					$var($Annotations, runtimeAnnotations, $cast($Annotations, attr));
					$var($AnnotationEntryArray, annotationEntries, $nc(runtimeAnnotations)->getAnnotationEntries());
					{
						$var($AnnotationEntryArray, arr$, annotationEntries);
						int32_t len$ = arr$->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($AnnotationEntry, element, arr$->get(i$));
							{
								addAnnotationEntry($$new($AnnotationEntryGen, element, cp, false));
							}
						}
					}
				} else {
					addAttribute(attr);
				}
			}
		}
	}
}

void FieldGen::setValue(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPool, cp, $nc($($FieldGenOrMethodGen::getConstantPool()))->getConstantPool());
	$var($Constant, c, $nc(cp)->getConstant(index));
	$set(this, value, $nc(($cast($ConstantObject, c)))->getConstantValue(cp));
}

void FieldGen::setInitValue($String* str) {
	checkType($($ObjectType::getInstance("java.lang.String"_s)));
	if (str != nullptr) {
		$set(this, value, str);
	}
}

void FieldGen::setInitValue(int64_t l) {
	$init($Type);
	checkType($Type::LONG);
	if (l != (int64_t)0) {
		$set(this, value, $Long::valueOf(l));
	}
}

void FieldGen::setInitValue(int32_t i) {
	$init($Type);
	checkType($Type::INT);
	if (i != 0) {
		$set(this, value, $Integer::valueOf(i));
	}
}

void FieldGen::setInitValue(int16_t s) {
	$init($Type);
	checkType($Type::SHORT);
	if (s != 0) {
		$set(this, value, $Integer::valueOf((int32_t)s));
	}
}

void FieldGen::setInitValue(char16_t c) {
	$init($Type);
	checkType($Type::CHAR);
	if (c != 0) {
		$set(this, value, $Integer::valueOf((int32_t)c));
	}
}

void FieldGen::setInitValue(int8_t b) {
	$init($Type);
	checkType($Type::BYTE);
	if (b != 0) {
		$set(this, value, $Integer::valueOf((int32_t)b));
	}
}

void FieldGen::setInitValue(bool b) {
	$init($Type);
	checkType($Type::BOOLEAN);
	if (b) {
		$set(this, value, $Integer::valueOf(1));
	}
}

void FieldGen::setInitValue(float f) {
	$init($Type);
	checkType($Type::FLOAT);
	if (f != 0.0) {
		$set(this, value, $Float::valueOf(f));
	}
}

void FieldGen::setInitValue(double d) {
	$init($Type);
	checkType($Type::DOUBLE);
	if (d != 0.0) {
		$set(this, value, $Double::valueOf(d));
	}
}

void FieldGen::cancelInitValue() {
	$set(this, value, nullptr);
}

void FieldGen::checkType($Type* atype) {
	$useLocalCurrentObjectStackCache();
	$var($Type, superType, $FieldGenOrMethodGen::getType());
	if (superType == nullptr) {
		$throwNew($ClassGenException, "You haven\'t defined the type of the field yet"_s);
	}
	if (!isFinal()) {
		$throwNew($ClassGenException, "Only final fields may have an initial value!"_s);
	}
	if (!$nc(superType)->equals(atype)) {
		$throwNew($ClassGenException, $$str({"Types are not compatible: "_s, superType, " vs. "_s, atype}));
	}
}

$Field* FieldGen::getField() {
	$useLocalCurrentObjectStackCache();
	$var($String, signature, getSignature());
	int32_t name_index = $nc($($FieldGenOrMethodGen::getConstantPool()))->addUtf8($($FieldGenOrMethodGen::getName()));
	int32_t signature_index = $nc($($FieldGenOrMethodGen::getConstantPool()))->addUtf8(signature);
	if (this->value != nullptr) {
		checkType($($FieldGenOrMethodGen::getType()));
		int32_t index = addConstant();
		int32_t var$0 = $nc($($FieldGenOrMethodGen::getConstantPool()))->addUtf8("ConstantValue"_s);
		int32_t var$1 = index;
		addAttribute($$new($ConstantValue, var$0, 2, var$1, $($nc($($FieldGenOrMethodGen::getConstantPool()))->getConstantPool())));
	}
	addAnnotationsAsAttribute($($FieldGenOrMethodGen::getConstantPool()));
	int32_t var$2 = $FieldGenOrMethodGen::getAccessFlags();
	int32_t var$3 = name_index;
	int32_t var$4 = signature_index;
	$var($AttributeArray, var$5, getAttributes());
	return $new($Field, var$2, var$3, var$4, var$5, $($nc($($FieldGenOrMethodGen::getConstantPool()))->getConstantPool()));
}

void FieldGen::addAnnotationsAsAttribute($ConstantPoolGen* cp) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $AnnotationEntryGen::getAnnotationAttributes(cp, $($FieldGenOrMethodGen::getAnnotationEntries())));
	{
		$var($AttributeArray, arr$, attrs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, attr, arr$->get(i$));
			{
				addAttribute(attr);
			}
		}
	}
}

int32_t FieldGen::addConstant() {
	$useLocalCurrentObjectStackCache();
	switch ($nc($($FieldGenOrMethodGen::getType()))->getType()) {
	case $Const::T_INT:
		{}
	case $Const::T_CHAR:
		{}
	case $Const::T_BYTE:
		{}
	case $Const::T_BOOLEAN:
		{}
	case $Const::T_SHORT:
		{
			return $nc($($FieldGenOrMethodGen::getConstantPool()))->addInteger($nc(($cast($Integer, this->value)))->intValue());
		}
	case $Const::T_FLOAT:
		{
			return $nc($($FieldGenOrMethodGen::getConstantPool()))->addFloat($nc(($cast($Float, this->value)))->floatValue());
		}
	case $Const::T_DOUBLE:
		{
			return $nc($($FieldGenOrMethodGen::getConstantPool()))->addDouble($nc(($cast($Double, this->value)))->doubleValue());
		}
	case $Const::T_LONG:
		{
			return $nc($($FieldGenOrMethodGen::getConstantPool()))->addLong($nc(($cast($Long, this->value)))->longValue());
		}
	case $Const::T_REFERENCE:
		{
			return $nc($($FieldGenOrMethodGen::getConstantPool()))->addString($cast($String, this->value));
		}
	default:
		{
			$throwNew($IllegalStateException, $$str({"Unhandled : "_s, $$str($nc($($FieldGenOrMethodGen::getType()))->getType())}));
		}
	}
}

$String* FieldGen::getSignature() {
	return $nc($($FieldGenOrMethodGen::getType()))->getSignature();
}

void FieldGen::addObserver($FieldObserver* o) {
	if (this->observers == nullptr) {
		$set(this, observers, $new($ArrayList));
	}
	$nc(this->observers)->add(o);
}

void FieldGen::removeObserver($FieldObserver* o) {
	if (this->observers != nullptr) {
		$nc(this->observers)->remove($of(o));
	}
}

void FieldGen::update() {
	$useLocalCurrentObjectStackCache();
	if (this->observers != nullptr) {
		{
			$var($Iterator, i$, $nc(this->observers)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($FieldObserver, observer, $cast($FieldObserver, i$->next()));
				{
					$nc(observer)->notify(this);
				}
			}
		}
	}
}

$String* FieldGen::getInitValue() {
	if (this->value != nullptr) {
		return $nc($of(this->value))->toString();
	}
	return nullptr;
}

$String* FieldGen::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, nullptr);
	$var($String, signature, nullptr);
	$var($String, access, nullptr);
	$assign(access, $Utility::accessToString($FieldGenOrMethodGen::getAccessFlags()));
	$assign(access, $nc(access)->isEmpty() ? ""_s : ($str({access, " "_s})));
	$assign(signature, $nc($($FieldGenOrMethodGen::getType()))->toString());
	$assign(name, getName());
	$var($StringBuilder, buf, $new($StringBuilder, 32));
	buf->append(access)->append(signature)->append(" "_s)->append(name);
	$var($String, value, getInitValue());
	if (value != nullptr) {
		buf->append(" = "_s)->append(value);
	}
	return buf->toString();
}

FieldGen* FieldGen::copy($ConstantPoolGen* cp) {
	$var(FieldGen, fg, $cast(FieldGen, clone()));
	$nc(fg)->setConstantPool(cp);
	return fg;
}

$BCELComparator* FieldGen::getComparator() {
	$init(FieldGen);
	return FieldGen::bcelComparator;
}

void FieldGen::setComparator($BCELComparator* comparator) {
	$init(FieldGen);
	$assignStatic(FieldGen::bcelComparator, comparator);
}

bool FieldGen::equals(Object$* obj) {
	return $nc(FieldGen::bcelComparator)->equals(this, obj);
}

int32_t FieldGen::hashCode() {
	return $nc(FieldGen::bcelComparator)->hashCode(this);
}

void clinit$FieldGen($Class* class$) {
	$assignStatic(FieldGen::bcelComparator, $new($FieldGen$1));
}

FieldGen::FieldGen() {
}

$Class* FieldGen::load$($String* name, bool initialize) {
	$loadClass(FieldGen, name, initialize, &_FieldGen_ClassInfo_, clinit$FieldGen, allocate$FieldGen);
	return class$;
}

$Class* FieldGen::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com