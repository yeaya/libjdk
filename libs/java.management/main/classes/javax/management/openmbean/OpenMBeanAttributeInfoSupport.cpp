#include <javax/management/openmbean/OpenMBeanAttributeInfoSupport.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Comparable.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/Descriptor.h>
#include <javax/management/DescriptorRead.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularType.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorRead = ::javax::management::DescriptorRead;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenMBeanAttributeInfo = ::javax::management::openmbean::OpenMBeanAttributeInfo;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;
using $OpenType = ::javax::management::openmbean::OpenType;
using $TabularType = ::javax::management::openmbean::TabularType;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace openmbean {

$Object* OpenMBeanAttributeInfoSupport::clone() {
	return this->$MBeanAttributeInfo::clone();
}

bool OpenMBeanAttributeInfoSupport::isReadable() {
	return this->$MBeanAttributeInfo::isReadable();
}

bool OpenMBeanAttributeInfoSupport::isWritable() {
	return this->$MBeanAttributeInfo::isWritable();
}

bool OpenMBeanAttributeInfoSupport::isIs() {
	return this->$MBeanAttributeInfo::isIs();
}

$String* OpenMBeanAttributeInfoSupport::getName() {
	return this->$MBeanAttributeInfo::getName();
}

$String* OpenMBeanAttributeInfoSupport::getDescription() {
	return this->$MBeanAttributeInfo::getDescription();
}

void OpenMBeanAttributeInfoSupport::finalize() {
	this->$MBeanAttributeInfo::finalize();
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs) {
	OpenMBeanAttributeInfoSupport::init$(name, description, openType, isReadable, isWritable, isIs, ($Descriptor*)nullptr);
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs, $Descriptor* descriptor$renamed) {
	$useLocalObjectStack();
	$var($Descriptor, descriptor, descriptor$renamed);
	$var($String, var$0, (openType == nullptr) ? ($String*)nullptr : openType->getClassName());
	$MBeanAttributeInfo::init$(name, var$0, description, isReadable, isWritable, isIs, $($ImmutableDescriptor::union$($$new($DescriptorArray, {
		descriptor,
		(openType == nullptr) ? ($Descriptor*)nullptr : $(openType->getDescriptor())
	}))));
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	$set(this, openType, openType);
	$assign(descriptor, getDescriptor());
	$set(this, defaultValue, valueFrom(descriptor, "defaultValue"_s, openType));
	$set(this, legalValues, valuesFrom(descriptor, "legalValues"_s, openType));
	$set(this, minValue, comparableValueFrom(descriptor, "minValue"_s, openType));
	$set(this, maxValue, comparableValueFrom(descriptor, "maxValue"_s, openType));
	try {
		check(this);
	} catch ($OpenDataException& e) {
		$throwNew($IllegalArgumentException, $(e->getMessage()), e);
	}
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue) {
	OpenMBeanAttributeInfoSupport::init$(name, description, openType, isReadable, isWritable, isIs, defaultValue, ($ObjectArray*)nullptr);
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, $ObjectArray* legalValues) {
	OpenMBeanAttributeInfoSupport::init$(name, description, openType, isReadable, isWritable, isIs, defaultValue, legalValues, nullptr, nullptr);
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, $Comparable* minValue, $Comparable* maxValue) {
	OpenMBeanAttributeInfoSupport::init$(name, description, openType, isReadable, isWritable, isIs, defaultValue, nullptr, minValue, maxValue);
}

void OpenMBeanAttributeInfoSupport::init$($String* name, $String* description, $OpenType* openType, bool isReadable, bool isWritable, bool isIs, Object$* defaultValue, $ObjectArray* legalValues, $Comparable* minValue, $Comparable* maxValue) {
	$useLocalObjectStack();
	$var($String, var$0, (openType == nullptr) ? ($String*)nullptr : openType->getClassName());
	$MBeanAttributeInfo::init$(name, var$0, description, isReadable, isWritable, isIs, $(makeDescriptor(openType, defaultValue, legalValues, minValue, maxValue)));
	$set(this, myHashCode, nullptr);
	$set(this, myToString, nullptr);
	$set(this, openType, openType);
	$var($Descriptor, d, getDescriptor());
	$set(this, defaultValue, defaultValue);
	$set(this, minValue, minValue);
	$set(this, maxValue, maxValue);
	$set(this, legalValues, $cast($Set, $nc(d)->getFieldValue("legalValues"_s)));
	check(this);
}

$Object* OpenMBeanAttributeInfoSupport::readResolve() {
	$useLocalObjectStack();
	if ($nc($($$nc(getDescriptor())->getFieldNames()))->length == 0) {
		$var($OpenType, xopenType, $cast($OpenType, cast(this->openType)));
		$var($Set, xlegalValues, $cast($Set, cast(this->legalValues)));
		$var($Comparable, xminValue, $cast($Comparable, cast(this->minValue)));
		$var($Comparable, xmaxValue, $cast($Comparable, cast(this->maxValue)));
		$var($String, var$0, this->name);
		$var($String, var$1, this->description);
		$var($OpenType, var$2, this->openType);
		bool var$3 = isReadable();
		bool var$4 = isWritable();
		bool var$5 = isIs();
		return $of($new(OpenMBeanAttributeInfoSupport, var$0, var$1, var$2, var$3, var$4, var$5, $(makeDescriptor(xopenType, this->defaultValue, xlegalValues, xminValue, xmaxValue))));
	} else {
		return $of(this);
	}
}

void OpenMBeanAttributeInfoSupport::check($OpenMBeanParameterInfo* info) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($OpenType, openType, $nc(info)->getOpenType());
	if (openType == nullptr) {
		$throwNew($IllegalArgumentException, "OpenType cannot be null"_s);
	}
	bool var$0 = info->getName() == nullptr;
	if (var$0 || $($$nc(info->getName())->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Name cannot be null or empty"_s);
	}
	bool var$1 = info->getDescription() == nullptr;
	if (var$1 || $($$nc(info->getDescription())->trim())->isEmpty()) {
		$throwNew($IllegalArgumentException, "Description cannot be null or empty"_s);
	}
	if (info->hasDefaultValue()) {
		if ($nc(openType)->isArray() || $instanceOf($TabularType, $of(openType))) {
			$throwNew($OpenDataException, "Default value not supported for ArrayType and TabularType"_s);
		}
		if (!openType->isValue($(info->getDefaultValue()))) {
			$var($StringBuilder, var$2, $new($StringBuilder));
			var$2->append("Argument defaultValue\'s class [\""_s);
			var$2->append($($$nc(info->getDefaultValue())->getClass()->getName()));
			var$2->append("\"] does not match the one defined in openType[\""_s);
			var$2->append($(openType->getClassName()));
			var$2->append("\"]"_s);
			$var($String, msg, $str(var$2));
			$throwNew($OpenDataException, msg);
		}
	}
	bool var$3 = info->hasLegalValues();
	if (var$3) {
		bool var$4 = info->hasMinValue();
		var$3 = var$4 || info->hasMaxValue();
	}
	if (var$3) {
		$throwNew($OpenDataException, "cannot have both legalValue and minValue or maxValue"_s);
	}
	bool var$5 = info->hasMinValue();
	if (var$5 && !$nc(openType)->isValue($(info->getMinValue()))) {
		$var($StringBuilder, var$6, $new($StringBuilder));
		var$6->append("Type of minValue ["_s);
		var$6->append($($$nc(info->getMinValue())->getClass()->getName()));
		var$6->append("] does not match OpenType ["_s);
		var$6->append($(openType->getClassName()));
		var$6->append("]"_s);
		$var($String, msg, $str(var$6));
		$throwNew($OpenDataException, msg);
	}
	bool var$7 = info->hasMaxValue();
	if (var$7 && !$nc(openType)->isValue($(info->getMaxValue()))) {
		$var($StringBuilder, var$8, $new($StringBuilder));
		var$8->append("Type of maxValue ["_s);
		var$8->append($($$nc(info->getMaxValue())->getClass()->getName()));
		var$8->append("] does not match OpenType ["_s);
		var$8->append($(openType->getClassName()));
		var$8->append("]"_s);
		$var($String, msg, $str(var$8));
		$throwNew($OpenDataException, msg);
	}
	if (info->hasDefaultValue()) {
		$var($Object, defaultValue, info->getDefaultValue());
		bool var$9 = info->hasLegalValues();
		if (var$9 && !$$nc(info->getLegalValues())->contains(defaultValue)) {
			$throwNew($OpenDataException, "defaultValue is not contained in legalValues"_s);
		}
		if (info->hasMinValue()) {
			if (compare($(info->getMinValue()), defaultValue) > 0) {
				$throwNew($OpenDataException, "minValue cannot be greater than defaultValue"_s);
			}
		}
		if (info->hasMaxValue()) {
			if (compare($(info->getMaxValue()), defaultValue) < 0) {
				$throwNew($OpenDataException, "maxValue cannot be less than defaultValue"_s);
			}
		}
	}
	if (info->hasLegalValues()) {
		if ($instanceOf($TabularType, $of(openType)) || $nc(openType)->isArray()) {
			$throwNew($OpenDataException, "Legal values not supported for TabularType and arrays"_s);
		}
		{
			$var($Iterator, i$, $$nc(info->getLegalValues())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, v, i$->next());
				if (!$nc(openType)->isValue(v)) {
					$var($StringBuilder, var$10, $new($StringBuilder));
					var$10->append("Element of legalValues ["_s);
					var$10->append(v);
					var$10->append("] is not a valid value for the specified openType ["_s);
					var$10->append($(openType->toString()));
					var$10->append("]"_s);
					$var($String, msg, $str(var$10));
					$throwNew($OpenDataException, msg);
				}
			}
		}
	}
	bool var$11 = info->hasMinValue();
	if (var$11 && info->hasMaxValue()) {
		$var($Object, var$12, info->getMinValue());
		if (compare(var$12, $(info->getMaxValue())) > 0) {
			$throwNew($OpenDataException, "minValue cannot be greater than maxValue"_s);
		}
	}
}

int32_t OpenMBeanAttributeInfoSupport::compare(Object$* x, Object$* y) {
	$init(OpenMBeanAttributeInfoSupport);
	return $nc($cast($Comparable, x))->compareTo(y);
}

$Descriptor* OpenMBeanAttributeInfoSupport::makeDescriptor($OpenType* openType, Object$* defaultValue, $ObjectArray* legalValues, $Comparable* minValue, $Comparable* maxValue) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($Map, map, $new($HashMap));
	if (defaultValue != nullptr) {
		map->put("defaultValue"_s, defaultValue);
	}
	if (legalValues != nullptr) {
		$var($Set, set, $new($HashSet));
		{
			$var($ObjectArray, arr$, legalValues);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($Object0, v, arr$->get(i$));
				set->add(v);
			}
		}
		$assign(set, $Collections::unmodifiableSet(set));
		map->put("legalValues"_s, set);
	}
	if (minValue != nullptr) {
		map->put("minValue"_s, minValue);
	}
	if (maxValue != nullptr) {
		map->put("maxValue"_s, maxValue);
	}
	if (map->isEmpty()) {
		return $nc(openType)->getDescriptor();
	} else {
		map->put("openType"_s, openType);
		return $new($ImmutableDescriptor, map);
	}
}

$Descriptor* OpenMBeanAttributeInfoSupport::makeDescriptor($OpenType* openType, Object$* defaultValue, $Set* legalValues, $Comparable* minValue, $Comparable* maxValue) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($ObjectArray, legals, nullptr);
	if (legalValues == nullptr) {
		$assign(legals, nullptr);
	} else {
		$assign(legals, $cast($ObjectArray, cast($$new($ObjectArray, legalValues->size()))));
		legalValues->toArray(legals);
	}
	return makeDescriptor(openType, defaultValue, legals, minValue, maxValue);
}

$Object* OpenMBeanAttributeInfoSupport::valueFrom($Descriptor* d, $String* name, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($Object, x, $nc(d)->getFieldValue(name));
	if (x == nullptr) {
		return nullptr;
	}
	try {
		return convertFrom(x, openType);
	} catch ($Exception& e) {
		$var($String, msg, $str({"Cannot convert descriptor field "_s, name, "  to "_s, $($nc(openType)->getTypeName())}));
		$throw($$cast($IllegalArgumentException, $EnvHelp::initCause($$new($IllegalArgumentException, msg), e)));
	}
	$shouldNotReachHere();
}

$Set* OpenMBeanAttributeInfoSupport::valuesFrom($Descriptor* d, $String* name, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($Object, x, $nc(d)->getFieldValue(name));
	if (x == nullptr) {
		return nullptr;
	}
	$var($Collection, coll, nullptr);
	if ($instanceOf($Set, x)) {
		$var($Set, set, $cast($Set, x));
		bool asis = true;
		{
			$var($Iterator, i$, set->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, element, i$->next());
				if (!$nc(openType)->isValue(element)) {
					asis = false;
					break;
				}
			}
		}
		if (asis) {
			return $cast($Set, cast(set));
		}
		$assign(coll, set);
	} else if ($instanceOf($ObjectArray, x)) {
		$assign(coll, $Arrays::asList($cast($ObjectArray, x)));
	} else {
		$var($String, msg, $str({"Descriptor value for "_s, name, " must be a Set or an array: "_s, $($nc(x)->getClass()->getName())}));
		$throwNew($IllegalArgumentException, msg);
	}
	$var($Set, result, $new($HashSet));
	{
		$var($Iterator, i$, $nc(coll)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, element, i$->next());
			result->add($(convertFrom(element, openType)));
		}
	}
	return result;
}

$Comparable* OpenMBeanAttributeInfoSupport::comparableValueFrom($Descriptor* d, $String* name, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($Object, t, valueFrom(d, name, openType));
	if (t == nullptr || $instanceOf($Comparable, t)) {
		return $cast($Comparable, t);
	}
	$var($String, msg, $str({"Descriptor field "_s, name, " with value "_s, t, " is not Comparable"_s}));
	$throwNew($IllegalArgumentException, msg);
}

$Object* OpenMBeanAttributeInfoSupport::convertFrom(Object$* x, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	if ($nc(openType)->isValue(x)) {
		$var($Object, t, OpenMBeanAttributeInfoSupport::cast(x));
		return t;
	}
	return convertFromStrings(x, openType);
}

$Object* OpenMBeanAttributeInfoSupport::convertFromStrings(Object$* x, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	if ($instanceOf($ArrayType, openType)) {
		return convertFromStringArray(x, openType);
	} else if ($instanceOf($String, x)) {
		return convertFromString($cast($String, x), openType);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Cannot convert value "_s);
	var$0->append(x);
	var$0->append(" of type "_s);
	var$0->append($($nc($of(x))->getClass()->getName()));
	var$0->append(" to type "_s);
	var$0->append($($nc(openType)->getTypeName()));
	$var($String, msg, $str(var$0));
	$throwNew($IllegalArgumentException, msg);
}

$Object* OpenMBeanAttributeInfoSupport::convertFromString($String* s, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* c = nullptr;
	try {
		$var($String, className, $nc(openType)->safeGetClassName());
		$ReflectUtil::checkPackageAccess(className);
		c = $cast($Class, cast($Class::forName(className)));
	} catch ($ClassNotFoundException& e) {
		$throwNew($NoClassDefFoundError, $(e->toString()));
	}
	$var($Method, valueOf, nullptr);
	try {
		$assign(valueOf, $nc(c)->getMethod("valueOf"_s, $$new($ClassArray, {$String::class$})));
		bool var$0 = !$Modifier::isStatic($nc(valueOf)->getModifiers());
		if (var$0 || valueOf->getReturnType() != c) {
			$assign(valueOf, nullptr);
		}
	} catch ($NoSuchMethodException& e) {
		$assign(valueOf, nullptr);
	}
	if (valueOf != nullptr) {
		try {
			return $nc(c)->cast($($MethodUtil::invoke(valueOf, nullptr, $$new($ObjectArray, {s}))));
		} catch ($Exception& e) {
			$var($String, msg, $str({"Could not convert \""_s, s, "\" using method: "_s, valueOf}));
			$throwNew($IllegalArgumentException, msg, e);
		}
	}
	$var($Constructor, con, nullptr);
	try {
		$assign(con, $nc(c)->getConstructor($$new($ClassArray, {$String::class$})));
	} catch ($NoSuchMethodException& e) {
		$assign(con, nullptr);
	}
	if (con != nullptr) {
		try {
			return con->newInstance($$new($ObjectArray, {s}));
		} catch ($Exception& e) {
			$var($String, msg, $str({"Could not convert \""_s, s, "\" using constructor: "_s, con}));
			$throwNew($IllegalArgumentException, msg, e);
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Don\'t know how to convert string to "_s, $($nc(openType)->getTypeName())}));
	$shouldNotReachHere();
}

$Object* OpenMBeanAttributeInfoSupport::convertFromStringArray(Object$* x, $OpenType* openType) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ArrayType, arrayType, $cast($ArrayType, openType));
	$var($OpenType, baseType, $nc(arrayType)->getElementOpenType());
	int32_t dim = arrayType->getDimension();
	$var($String, squareBrackets, "["_s);
	for (int32_t i = 1; i < dim; ++i) {
		$plusAssign(squareBrackets, "["_s);
	}
	$Class* stringArrayClass = nullptr;
	$Class* targetArrayClass = nullptr;
	try {
		$var($String, baseClassName, $nc(baseType)->safeGetClassName());
		$ReflectUtil::checkPackageAccess(baseClassName);
		stringArrayClass = $Class::forName($$str({squareBrackets, "Ljava.lang.String;"_s}));
		targetArrayClass = $Class::forName($$str({squareBrackets, "L"_s, baseClassName, ";"_s}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($NoClassDefFoundError, $(e->toString()));
	}
	if (!$nc(stringArrayClass)->isInstance(x)) {
		$var($String, msg, $str({"Value for "_s, $$str(dim), "-dimensional array of "_s, $($nc(baseType)->getTypeName()), " must be same type or a String array with same dimensions"_s}));
		$throwNew($IllegalArgumentException, msg);
	}
	$var($OpenType, componentOpenType, nullptr);
	if (dim == 1) {
		$assign(componentOpenType, baseType);
	} else {
		try {
			$assign(componentOpenType, $new($ArrayType, dim - 1, baseType));
		} catch ($OpenDataException& e) {
			$throwNew($IllegalArgumentException, $(e->getMessage()), e);
		}
	}
	int32_t n = $1Array::getLength(x);
	$var($ObjectArray, targetArray, $cast($ObjectArray, $1Array::newInstance($nc(targetArrayClass)->getComponentType(), n)));
	for (int32_t i = 0; i < n; ++i) {
		$var($Object, stringish, $1Array::get(x, i));
		$var($Object, converted, convertFromStrings(stringish, componentOpenType));
		$1Array::set(targetArray, i, converted);
	}
	return OpenMBeanAttributeInfoSupport::cast(targetArray);
}

$Object* OpenMBeanAttributeInfoSupport::cast(Object$* x) {
	$init(OpenMBeanAttributeInfoSupport);
	return $of(x);
}

$OpenType* OpenMBeanAttributeInfoSupport::getOpenType() {
	return this->openType;
}

$Object* OpenMBeanAttributeInfoSupport::getDefaultValue() {
	return this->defaultValue;
}

$Set* OpenMBeanAttributeInfoSupport::getLegalValues() {
	return (this->legalValues);
}

$Comparable* OpenMBeanAttributeInfoSupport::getMinValue() {
	return this->minValue;
}

$Comparable* OpenMBeanAttributeInfoSupport::getMaxValue() {
	return this->maxValue;
}

bool OpenMBeanAttributeInfoSupport::hasDefaultValue() {
	return (this->defaultValue != nullptr);
}

bool OpenMBeanAttributeInfoSupport::hasLegalValues() {
	return (this->legalValues != nullptr);
}

bool OpenMBeanAttributeInfoSupport::hasMinValue() {
	return (this->minValue != nullptr);
}

bool OpenMBeanAttributeInfoSupport::hasMaxValue() {
	return (this->maxValue != nullptr);
}

bool OpenMBeanAttributeInfoSupport::isValue(Object$* obj) {
	return isValue(this, obj);
}

bool OpenMBeanAttributeInfoSupport::isValue($OpenMBeanParameterInfo* info, Object$* obj) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	if ($nc(info)->hasDefaultValue() && obj == nullptr) {
		return true;
	}
	bool var$2 = $$nc(info->getOpenType())->isValue(obj);
	if (var$2) {
		bool var$3 = !info->hasLegalValues();
		var$2 = var$3 || $$nc(info->getLegalValues())->contains(obj);
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$4 = !info->hasMinValue();
		var$1 = var$4 || $(info->getMinValue())->compareTo(obj) <= 0;
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$5 = !info->hasMaxValue();
		var$0 = var$5 || $(info->getMaxValue())->compareTo(obj) >= 0;
	}
	return var$0;
}

bool OpenMBeanAttributeInfoSupport::equals(Object$* obj) {
	if (!($instanceOf($OpenMBeanAttributeInfo, obj))) {
		return false;
	}
	$var($OpenMBeanAttributeInfo, other, $cast($OpenMBeanAttributeInfo, obj));
	bool var$3 = this->isReadable();
	bool var$2 = var$3 == $nc(other)->isReadable();
	if (var$2) {
		bool var$4 = this->isWritable();
		var$2 = var$4 == other->isWritable();
	}
	bool var$1 = var$2;
	if (var$1) {
		bool var$5 = this->isIs();
		var$1 = var$5 == other->isIs();
	}
	bool var$0 = var$1;
	return var$0 && equal(this, other);
}

bool OpenMBeanAttributeInfoSupport::equal($OpenMBeanParameterInfo* x1, $OpenMBeanParameterInfo* x2) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	if ($instanceOf($DescriptorRead, x1)) {
		if (!($instanceOf($DescriptorRead, x2))) {
			return false;
		}
		$var($Descriptor, d1, $cast($DescriptorRead, x1)->getDescriptor());
		$var($Descriptor, d2, $nc($cast($DescriptorRead, x2))->getDescriptor());
		if (!$nc(d1)->equals(d2)) {
			return false;
		}
	} else if ($instanceOf($DescriptorRead, x2)) {
		return false;
	}
	bool var$4 = $$nc($nc(x1)->getName())->equals($($nc(x2)->getName()));
	bool var$3 = var$4 && $$nc(x1->getOpenType())->equals($(x2->getOpenType()));
	bool var$2 = var$3 && (x1->hasDefaultValue() ? $$nc(x1->getDefaultValue())->equals($(x2->getDefaultValue())) : !x2->hasDefaultValue());
	bool var$1 = var$2 && (x1->hasMinValue() ? $$nc(x1->getMinValue())->equals($(x2->getMinValue())) : !x2->hasMinValue());
	bool var$0 = var$1 && (x1->hasMaxValue() ? $$nc(x1->getMaxValue())->equals($(x2->getMaxValue())) : !x2->hasMaxValue());
	return var$0 && (x1->hasLegalValues() ? $$nc(x1->getLegalValues())->equals($(x2->getLegalValues())) : !x2->hasLegalValues());
}

int32_t OpenMBeanAttributeInfoSupport::hashCode() {
	if (this->myHashCode == nullptr) {
		$set(this, myHashCode, $Integer::valueOf(hashCode(this)));
	}
	return $nc(this->myHashCode)->intValue();
}

int32_t OpenMBeanAttributeInfoSupport::hashCode($OpenMBeanParameterInfo* info) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	int32_t value = 0;
	value += $$nc($nc(info)->getName())->hashCode();
	value += $$nc(info->getOpenType())->hashCode();
	if (info->hasDefaultValue()) {
		value += $$nc(info->getDefaultValue())->hashCode();
	}
	if (info->hasMinValue()) {
		value += $$nc(info->getMinValue())->hashCode();
	}
	if (info->hasMaxValue()) {
		value += $$nc(info->getMaxValue())->hashCode();
	}
	if (info->hasLegalValues()) {
		value += $$nc(info->getLegalValues())->hashCode();
	}
	if ($instanceOf($DescriptorRead, info)) {
		value += $$nc($cast($DescriptorRead, info)->getDescriptor())->hashCode();
	}
	return value;
}

$String* OpenMBeanAttributeInfoSupport::toString() {
	if (this->myToString == nullptr) {
		$set(this, myToString, toString(this));
	}
	return this->myToString;
}

$String* OpenMBeanAttributeInfoSupport::toString($OpenMBeanParameterInfo* info) {
	$init(OpenMBeanAttributeInfoSupport);
	$useLocalObjectStack();
	$var($Descriptor, d, ($instanceOf($DescriptorRead, info)) ? $cast($DescriptorRead, info)->getDescriptor() : ($Descriptor*)nullptr);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc($of(info))->getClass()->getName()));
	var$0->append("(name="_s);
	var$0->append($(info->getName()));
	var$0->append(",openType="_s);
	var$0->append($(info->getOpenType()));
	var$0->append(",default="_s);
	var$0->append($(info->getDefaultValue()));
	var$0->append(",minValue="_s);
	var$0->append($(info->getMinValue()));
	var$0->append(",maxValue="_s);
	var$0->append($(info->getMaxValue()));
	var$0->append(",legalValues="_s);
	var$0->append($(info->getLegalValues()));
	var$0->append((d == nullptr) ? ""_s : $$str({",descriptor="_s, d}));
	var$0->append(")"_s);
	return $str(var$0);
}

OpenMBeanAttributeInfoSupport::OpenMBeanAttributeInfoSupport() {
}

$Class* OpenMBeanAttributeInfoSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(OpenMBeanAttributeInfoSupport, serialVersionUID)},
		{"openType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE, $field(OpenMBeanAttributeInfoSupport, openType)},
		{"defaultValue", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(OpenMBeanAttributeInfoSupport, defaultValue)},
		{"legalValues", "Ljava/util/Set;", "Ljava/util/Set<*>;", $PRIVATE | $FINAL, $field(OpenMBeanAttributeInfoSupport, legalValues)},
		{"minValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE | $FINAL, $field(OpenMBeanAttributeInfoSupport, minValue)},
		{"maxValue", "Ljava/lang/Comparable;", "Ljava/lang/Comparable<*>;", $PRIVATE | $FINAL, $field(OpenMBeanAttributeInfoSupport, maxValue)},
		{"myHashCode", "Ljava/lang/Integer;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanAttributeInfoSupport, myHashCode)},
		{"myToString", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(OpenMBeanAttributeInfoSupport, myToString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZ)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<*>;ZZZ)V", $PUBLIC, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZLjavax/management/Descriptor;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<*>;ZZZLjavax/management/Descriptor;)V", $PUBLIC, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool, $Descriptor*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZLjava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;ZZZTT;)V", $PUBLIC, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool, Object$*), "javax.management.openmbean.OpenDataException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZLjava/lang/Object;[Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;ZZZTT;[TT;)V", $PUBLIC, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool, Object$*, $ObjectArray*), "javax.management.openmbean.OpenDataException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZLjava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;ZZZTT;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)V", $PUBLIC, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool, Object$*, $Comparable*, $Comparable*), "javax.management.openmbean.OpenDataException"},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType;ZZZLjava/lang/Object;[Ljava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;)V", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;ZZZTT;[TT;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)V", $PRIVATE, $method(OpenMBeanAttributeInfoSupport, init$, void, $String*, $String*, $OpenType*, bool, bool, bool, Object$*, $ObjectArray*, $Comparable*, $Comparable*), "javax.management.openmbean.OpenDataException"},
		{"cast", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;)TT;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, cast, $Object*, Object$*)},
		{"check", "(Ljavax/management/openmbean/OpenMBeanParameterInfo;)V", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, check, void, $OpenMBeanParameterInfo*), "javax.management.openmbean.OpenDataException"},
		{"comparableValueFrom", "(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType;)Ljava/lang/Comparable;", "<T:Ljava/lang/Object;>(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;)Ljava/lang/Comparable<*>;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, comparableValueFrom, $Comparable*, $Descriptor*, $String*, $OpenType*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, compare, int32_t, Object$*, Object$*)},
		{"convertFrom", "(Ljava/lang/Object;Ljavax/management/openmbean/OpenType;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljavax/management/openmbean/OpenType<TT;>;)TT;", $PRIVATE | $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, convertFrom, $Object*, Object$*, $OpenType*)},
		{"convertFromString", "(Ljava/lang/String;Ljavax/management/openmbean/OpenType;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;)TT;", $PRIVATE | $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, convertFromString, $Object*, $String*, $OpenType*)},
		{"convertFromStringArray", "(Ljava/lang/Object;Ljavax/management/openmbean/OpenType;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljavax/management/openmbean/OpenType<TT;>;)TT;", $PRIVATE | $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, convertFromStringArray, $Object*, Object$*, $OpenType*)},
		{"convertFromStrings", "(Ljava/lang/Object;Ljavax/management/openmbean/OpenType;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;Ljavax/management/openmbean/OpenType<TT;>;)TT;", $PRIVATE | $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, convertFromStrings, $Object*, Object$*, $OpenType*)},
		{"equal", "(Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljavax/management/openmbean/OpenMBeanParameterInfo;)Z", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, equal, bool, $OpenMBeanParameterInfo*, $OpenMBeanParameterInfo*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, equals, bool, Object$*)},
		{"getDefaultValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, getDefaultValue, $Object*)},
		{"getLegalValues", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, getLegalValues, $Set*)},
		{"getMaxValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, getMaxValue, $Comparable*)},
		{"getMinValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, getMinValue, $Comparable*)},
		{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, getOpenType, $OpenType*)},
		{"hasDefaultValue", "()Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, hasDefaultValue, bool)},
		{"hasLegalValues", "()Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, hasLegalValues, bool)},
		{"hasMaxValue", "()Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, hasMaxValue, bool)},
		{"hasMinValue", "()Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, hasMinValue, bool)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, hashCode, int32_t)},
		{"hashCode", "(Ljavax/management/openmbean/OpenMBeanParameterInfo;)I", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, hashCode, int32_t, $OpenMBeanParameterInfo*)},
		{"*isIs", "()Z", nullptr, $PUBLIC},
		{"*isReadable", "()Z", nullptr, $PUBLIC},
		{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, isValue, bool, Object$*)},
		{"isValue", "(Ljavax/management/openmbean/OpenMBeanParameterInfo;Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, isValue, bool, $OpenMBeanParameterInfo*, Object$*)},
		{"*isWritable", "()Z", nullptr, $PUBLIC},
		{"makeDescriptor", "(Ljavax/management/openmbean/OpenType;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljavax/management/Descriptor;", "<T:Ljava/lang/Object;>(Ljavax/management/openmbean/OpenType<TT;>;TT;[TT;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)Ljavax/management/Descriptor;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, makeDescriptor, $Descriptor*, $OpenType*, Object$*, $ObjectArray*, $Comparable*, $Comparable*)},
		{"makeDescriptor", "(Ljavax/management/openmbean/OpenType;Ljava/lang/Object;Ljava/util/Set;Ljava/lang/Comparable;Ljava/lang/Comparable;)Ljavax/management/Descriptor;", "<T:Ljava/lang/Object;>(Ljavax/management/openmbean/OpenType<TT;>;TT;Ljava/util/Set<TT;>;Ljava/lang/Comparable<TT;>;Ljava/lang/Comparable<TT;>;)Ljavax/management/Descriptor;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, makeDescriptor, $Descriptor*, $OpenType*, Object$*, $Set*, $Comparable*, $Comparable*)},
		{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(OpenMBeanAttributeInfoSupport, readResolve, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(OpenMBeanAttributeInfoSupport, toString, $String*)},
		{"toString", "(Ljavax/management/openmbean/OpenMBeanParameterInfo;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, toString, $String*, $OpenMBeanParameterInfo*)},
		{"valueFrom", "(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;)TT;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, valueFrom, $Object*, $Descriptor*, $String*, $OpenType*)},
		{"valuesFrom", "(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType;)Ljava/util/Set;", "<T:Ljava/lang/Object;>(Ljavax/management/Descriptor;Ljava/lang/String;Ljavax/management/openmbean/OpenType<TT;>;)Ljava/util/Set<TT;>;", $STATIC, $staticMethod(OpenMBeanAttributeInfoSupport, valuesFrom, $Set*, $Descriptor*, $String*, $OpenType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.OpenMBeanAttributeInfoSupport",
		"javax.management.MBeanAttributeInfo",
		"javax.management.openmbean.OpenMBeanAttributeInfo",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenMBeanAttributeInfoSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpenMBeanAttributeInfoSupport));
	});
	return class$;
}

$Class* OpenMBeanAttributeInfoSupport::class$ = nullptr;

		} // openmbean
	} // management
} // javax