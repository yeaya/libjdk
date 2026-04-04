#include <sun/management/MappedMXBeanType.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/SimpleType.h>
#include <sun/management/MappedMXBeanType$ArrayMXBeanType.h>
#include <sun/management/MappedMXBeanType$BasicMXBeanType.h>
#include <sun/management/MappedMXBeanType$CompositeDataMXBeanType.h>
#include <sun/management/MappedMXBeanType$EnumMXBeanType.h>
#include <sun/management/MappedMXBeanType$GenericArrayMXBeanType.h>
#include <sun/management/MappedMXBeanType$InProgress.h>
#include <sun/management/MappedMXBeanType$ListMXBeanType.h>
#include <sun/management/MappedMXBeanType$MapMXBeanType.h>
#include <jcpp.h>

#undef BIGDECIMAL
#undef BIGINTEGER
#undef BOOLEAN
#undef BYTE
#undef CHARACTER
#undef COMPOSITE_DATA_CLASS
#undef DATE
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef KEY
#undef LONG
#undef OBJECTNAME
#undef SHORT
#undef STRING
#undef VALUE
#undef VOID

using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $Field = ::java::lang::reflect::Field;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $SimpleType = ::javax::management::openmbean::SimpleType;
using $MappedMXBeanType$ArrayMXBeanType = ::sun::management::MappedMXBeanType$ArrayMXBeanType;
using $MappedMXBeanType$BasicMXBeanType = ::sun::management::MappedMXBeanType$BasicMXBeanType;
using $MappedMXBeanType$CompositeDataMXBeanType = ::sun::management::MappedMXBeanType$CompositeDataMXBeanType;
using $MappedMXBeanType$EnumMXBeanType = ::sun::management::MappedMXBeanType$EnumMXBeanType;
using $MappedMXBeanType$GenericArrayMXBeanType = ::sun::management::MappedMXBeanType$GenericArrayMXBeanType;
using $MappedMXBeanType$InProgress = ::sun::management::MappedMXBeanType$InProgress;
using $MappedMXBeanType$ListMXBeanType = ::sun::management::MappedMXBeanType$ListMXBeanType;
using $MappedMXBeanType$MapMXBeanType = ::sun::management::MappedMXBeanType$MapMXBeanType;

namespace sun {
	namespace management {

$WeakHashMap* MappedMXBeanType::convertedTypes = nullptr;
$String* MappedMXBeanType::KEY = nullptr;
$String* MappedMXBeanType::VALUE = nullptr;
$StringArray* MappedMXBeanType::mapIndexNames = nullptr;
$StringArray* MappedMXBeanType::mapItemNames = nullptr;
$Class* MappedMXBeanType::COMPOSITE_DATA_CLASS = nullptr;
$OpenType* MappedMXBeanType::inProgress = nullptr;
$OpenTypeArray* MappedMXBeanType::simpleTypes = nullptr;

void MappedMXBeanType::init$() {
	this->isBasicType$ = false;
	$set(this, openType, MappedMXBeanType::inProgress);
}

MappedMXBeanType* MappedMXBeanType::newMappedType($Type* javaType) {
	$init(MappedMXBeanType);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var(MappedMXBeanType, mt, nullptr);
		if ($instanceOf($Class, javaType)) {
			$Class* c = $cast($Class, javaType);
			if (c->isEnum()) {
				$assign(mt, $new($MappedMXBeanType$EnumMXBeanType, c));
			} else if (c->isArray()) {
				$assign(mt, $new($MappedMXBeanType$ArrayMXBeanType, c));
			} else {
				$assign(mt, $new($MappedMXBeanType$CompositeDataMXBeanType, c));
			}
		} else if ($instanceOf($ParameterizedType, javaType)) {
			$var($ParameterizedType, pt, $cast($ParameterizedType, javaType));
			$var($Type, rawType, pt->getRawType());
			if ($instanceOf($Class, rawType)) {
				$Class* rc = $cast($Class, rawType);
				$load($List);
				if (rc == $List::class$) {
					$assign(mt, $new($MappedMXBeanType$ListMXBeanType, pt));
				} else {
					$load($Map);
					if (rc == $Map::class$) {
						$assign(mt, $new($MappedMXBeanType$MapMXBeanType, pt));
					}
				}
			}
		} else if ($instanceOf($GenericArrayType, javaType)) {
			$var($GenericArrayType, t, $cast($GenericArrayType, javaType));
			$assign(mt, $new($MappedMXBeanType$GenericArrayMXBeanType, t));
		}
		if (mt == nullptr) {
			$throwNew($OpenDataException, $$str({javaType, " is not a supported MXBean type."_s}));
		}
		MappedMXBeanType::convertedTypes->put(javaType, mt);
		return mt;
	}
}

MappedMXBeanType* MappedMXBeanType::newBasicType($Class* c, $OpenType* ot) {
	$init(MappedMXBeanType);
	$synchronized(class$) {
		$var(MappedMXBeanType, mt, $new($MappedMXBeanType$BasicMXBeanType, c, ot));
		MappedMXBeanType::convertedTypes->put(c, mt);
		return mt;
	}
}

MappedMXBeanType* MappedMXBeanType::getMappedType($Type* t) {
	$init(MappedMXBeanType);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var(MappedMXBeanType, mt, $cast(MappedMXBeanType, MappedMXBeanType::convertedTypes->get(t)));
		if (mt == nullptr) {
			$assign(mt, newMappedType(t));
		}
		if ($instanceOf($MappedMXBeanType$InProgress, $($nc(mt)->getOpenType()))) {
			$throwNew($OpenDataException, "Recursive data structure"_s);
		}
		return mt;
	}
}

$OpenType* MappedMXBeanType::toOpenType($Type* t) {
	$init(MappedMXBeanType);
	$synchronized(class$) {
		$var(MappedMXBeanType, mt, getMappedType(t));
		return $nc(mt)->getOpenType();
	}
}

$Object* MappedMXBeanType::toJavaTypeData(Object$* openData, $Type* t) {
	$init(MappedMXBeanType);
	if (openData == nullptr) {
		return nullptr;
	}
	$var(MappedMXBeanType, mt, getMappedType(t));
	return $nc(mt)->toJavaTypeData(openData);
}

$Object* MappedMXBeanType::toOpenTypeData(Object$* data, $Type* t) {
	$init(MappedMXBeanType);
	if (data == nullptr) {
		return nullptr;
	}
	$var(MappedMXBeanType, mt, getMappedType(t));
	return $nc(mt)->toOpenTypeData(data);
}

$OpenType* MappedMXBeanType::getOpenType() {
	return this->openType;
}

bool MappedMXBeanType::isBasicType() {
	return this->isBasicType$;
}

$String* MappedMXBeanType::getTypeName() {
	return $nc(getMappedTypeClass())->getName();
}

$Class* MappedMXBeanType::getMappedTypeClass() {
	return this->mappedTypeClass;
}

$String* MappedMXBeanType::decapitalize($String* name) {
	$init(MappedMXBeanType);
	if (name == nullptr || name->length() == 0) {
		return name;
	}
	bool var$1 = $nc(name)->length() > 1;
	bool var$0 = var$1 && $Character::isUpperCase(name->charAt(1));
	if (var$0 && $Character::isUpperCase(name->charAt(0))) {
		return name;
	}
	$var($chars, chars, name->toCharArray());
	chars->set(0, $Character::toLowerCase(chars->get(0)));
	return $new($String, chars);
}

void MappedMXBeanType::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(MappedMXBeanType::KEY, "key"_s);
	$assignStatic(MappedMXBeanType::VALUE, "value"_s);
	$beforeCallerSensitive();
	$assignStatic(MappedMXBeanType::convertedTypes, $new($WeakHashMap));
	$assignStatic(MappedMXBeanType::mapIndexNames, $new($StringArray, {MappedMXBeanType::KEY}));
	$assignStatic(MappedMXBeanType::mapItemNames, $new($StringArray, {
		MappedMXBeanType::KEY,
		MappedMXBeanType::VALUE
	}));
	$load($CompositeData);
	$assignStatic(MappedMXBeanType::COMPOSITE_DATA_CLASS, $CompositeData::class$);
	{
		$var($OpenType, t, nullptr);
		try {
			$assign(t, $new($MappedMXBeanType$InProgress));
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
		$assignStatic(MappedMXBeanType::inProgress, t);
	}
	$init($SimpleType);
	$assignStatic(MappedMXBeanType::simpleTypes, $new($OpenTypeArray, {
		$SimpleType::BIGDECIMAL,
		$SimpleType::BIGINTEGER,
		$SimpleType::BOOLEAN,
		$SimpleType::BYTE,
		$SimpleType::CHARACTER,
		$SimpleType::DATE,
		$SimpleType::DOUBLE,
		$SimpleType::FLOAT,
		$SimpleType::INTEGER,
		$SimpleType::LONG,
		$SimpleType::OBJECTNAME,
		$SimpleType::SHORT,
		$SimpleType::STRING,
		$SimpleType::VOID
	}));
	{
		try {
			for (int32_t i = 0; i < MappedMXBeanType::simpleTypes->length; ++i) {
				$var($OpenType, t, MappedMXBeanType::simpleTypes->get(i));
				$Class* c = nullptr;
				try {
					$var($String, var$0, $nc(t)->getClassName());
					c = $Class::forName(var$0, false, $(MappedMXBeanType::class$->getClassLoader()));
					MappedMXBeanType::newBasicType(c, t);
				} catch ($ClassNotFoundException& e) {
					$throwNew($AssertionError, $of(e));
				} catch ($OpenDataException& e) {
					$throwNew($AssertionError, $of(e));
				}
				if ($$nc($nc(c)->getName())->startsWith("java.lang."_s)) {
					try {
						$var($Field, typeField, c->getField("TYPE"_s));
						$Class* primitiveType = $cast($Class, $nc(typeField)->get(nullptr));
						MappedMXBeanType::newBasicType(primitiveType, t);
					} catch ($NoSuchFieldException& e) {
					} catch ($IllegalAccessException& e) {
						$throwNew($AssertionError, $of(e));
					}
				}
			}
		} catch ($OpenDataException& e) {
			$throwNew($AssertionError, $of(e));
		}
	}
}

MappedMXBeanType::MappedMXBeanType() {
}

$Class* MappedMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"convertedTypes", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/reflect/Type;Lsun/management/MappedMXBeanType;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, convertedTypes)},
		{"isBasicType", "Z", nullptr, 0, $field(MappedMXBeanType, isBasicType$)},
		{"openType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", 0, $field(MappedMXBeanType, openType)},
		{"mappedTypeClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", 0, $field(MappedMXBeanType, mappedTypeClass)},
		{"KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, KEY)},
		{"VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, VALUE)},
		{"mapIndexNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, mapIndexNames)},
		{"mapItemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, mapItemNames)},
		{"COMPOSITE_DATA_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, COMPOSITE_DATA_CLASS)},
		{"inProgress", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, inProgress)},
		{"simpleTypes", "[Ljavax/management/openmbean/OpenType;", "[Ljavax/management/openmbean/OpenType<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType, simpleTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MappedMXBeanType, init$, void)},
		{"decapitalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MappedMXBeanType, decapitalize, $String*, $String*)},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, $ABSTRACT, $virtualMethod(MappedMXBeanType, getJavaType, $Type*)},
		{"getMappedType", "(Ljava/lang/reflect/Type;)Lsun/management/MappedMXBeanType;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(MappedMXBeanType, getMappedType, MappedMXBeanType*, $Type*), "javax.management.openmbean.OpenDataException"},
		{"getMappedTypeClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(MappedMXBeanType, getMappedTypeClass, $Class*)},
		{"getName", "()Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(MappedMXBeanType, getName, $String*)},
		{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC, $virtualMethod(MappedMXBeanType, getOpenType, $OpenType*)},
		{"getTypeName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType, getTypeName, $String*)},
		{"isBasicType", "()Z", nullptr, 0, $virtualMethod(MappedMXBeanType, isBasicType, bool)},
		{"newBasicType", "(Ljava/lang/Class;Ljavax/management/openmbean/OpenType;)Lsun/management/MappedMXBeanType;", "(Ljava/lang/Class<*>;Ljavax/management/openmbean/OpenType<*>;)Lsun/management/MappedMXBeanType;", $STATIC | $SYNCHRONIZED, $staticMethod(MappedMXBeanType, newBasicType, MappedMXBeanType*, $Class*, $OpenType*), "javax.management.openmbean.OpenDataException"},
		{"newMappedType", "(Ljava/lang/reflect/Type;)Lsun/management/MappedMXBeanType;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(MappedMXBeanType, newMappedType, MappedMXBeanType*, $Type*), "javax.management.openmbean.OpenDataException"},
		{"toJavaTypeData", "(Ljava/lang/Object;Ljava/lang/reflect/Type;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(MappedMXBeanType, toJavaTypeData, $Object*, Object$*, $Type*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MappedMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenType", "(Ljava/lang/reflect/Type;)Ljavax/management/openmbean/OpenType;", "(Ljava/lang/reflect/Type;)Ljavax/management/openmbean/OpenType<*>;", $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(MappedMXBeanType, toOpenType, $OpenType*, $Type*), "javax.management.openmbean.OpenDataException"},
		{"toOpenTypeData", "(Ljava/lang/Object;Ljava/lang/reflect/Type;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(MappedMXBeanType, toOpenTypeData, $Object*, Object$*, $Type*), "javax.management.openmbean.OpenDataException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MappedMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$InProgress", "sun.management.MappedMXBeanType", "InProgress", $PRIVATE | $STATIC},
		{"sun.management.MappedMXBeanType$CompositeDataMXBeanType", "sun.management.MappedMXBeanType", "CompositeDataMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$MapMXBeanType", "sun.management.MappedMXBeanType", "MapMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$ListMXBeanType", "sun.management.MappedMXBeanType", "ListMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$GenericArrayMXBeanType", "sun.management.MappedMXBeanType", "GenericArrayMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$ArrayMXBeanType", "sun.management.MappedMXBeanType", "ArrayMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$EnumMXBeanType", "sun.management.MappedMXBeanType", "EnumMXBeanType", $STATIC},
		{"sun.management.MappedMXBeanType$BasicMXBeanType", "sun.management.MappedMXBeanType", "BasicMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.management.MappedMXBeanType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType$InProgress,sun.management.MappedMXBeanType$CompositeDataMXBeanType,sun.management.MappedMXBeanType$CompositeDataMXBeanType$2,sun.management.MappedMXBeanType$CompositeDataMXBeanType$1,sun.management.MappedMXBeanType$MapMXBeanType,sun.management.MappedMXBeanType$ListMXBeanType,sun.management.MappedMXBeanType$GenericArrayMXBeanType,sun.management.MappedMXBeanType$ArrayMXBeanType,sun.management.MappedMXBeanType$EnumMXBeanType,sun.management.MappedMXBeanType$BasicMXBeanType"
	};
	$loadClass(MappedMXBeanType, name, initialize, &classInfo$$, MappedMXBeanType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType::class$ = nullptr;

	} // management
} // sun