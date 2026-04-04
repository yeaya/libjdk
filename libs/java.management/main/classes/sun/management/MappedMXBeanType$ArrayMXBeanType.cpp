#include <sun/management/MappedMXBeanType$ArrayMXBeanType.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Type = ::java::lang::reflect::Type;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

void MappedMXBeanType$ArrayMXBeanType::init$($Class* c) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	$set(this, arrayClass, c);
	$set(this, componentType, getMappedType($nc(c)->getComponentType()));
	$var($StringBuilder, className, $new($StringBuilder));
	$Class* et = c;
	int32_t dim = 0;
	for (dim = 0; $nc(et)->isArray(); ++dim) {
		className->append(u'[');
		et = et->getComponentType();
	}
	$set(this, baseElementType, getMappedType(et));
	if ($nc(et)->isPrimitive()) {
		$assign(className, $new($StringBuilder, $(c->getName())));
	} else {
		className->append(u'L')->append($($nc(this->baseElementType)->getTypeName()))->append(u';');
	}
	try {
		$set(this, mappedTypeClass, $Class::forName($(className->toString())));
	} catch ($ClassNotFoundException& e) {
		$var($OpenDataException, ode, $new($OpenDataException, "Cannot obtain array class"_s));
		ode->initCause(e);
		$throw(ode);
	}
	$set(this, openType, $new($ArrayType, dim, $($nc(this->baseElementType)->getOpenType())));
}

void MappedMXBeanType$ArrayMXBeanType::init$() {
	$MappedMXBeanType::init$();
	$set(this, arrayClass, nullptr);
}

$Type* MappedMXBeanType$ArrayMXBeanType::getJavaType() {
	return this->arrayClass;
}

$String* MappedMXBeanType$ArrayMXBeanType::getName() {
	return $nc(this->arrayClass)->getName();
}

$Object* MappedMXBeanType$ArrayMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalObjectStack();
	if ($nc(this->baseElementType)->isBasicType()) {
		return $of(data);
	}
	$var($ObjectArray, array, $cast($ObjectArray, data));
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance($nc(this->componentType)->getMappedTypeClass(), $nc(array)->length)));
	int32_t i = 0;
	{
		$var($ObjectArray, arr$, array);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o == nullptr) {
					openArray->set(i, nullptr);
				} else {
					openArray->set(i, $($nc(this->componentType)->toOpenTypeData(o)));
				}
				++i;
			}
		}
	}
	return openArray;
}

$Object* MappedMXBeanType$ArrayMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalObjectStack();
	if ($nc(this->baseElementType)->isBasicType()) {
		return $of(data);
	}
	$var($ObjectArray, openArray, $cast($ObjectArray, data));
	$var($ObjectArray, array, $cast($ObjectArray, $1Array::newInstance($$cast($Class, $nc(this->componentType)->getJavaType()), $nc(openArray)->length)));
	int32_t i = 0;
	{
		$var($ObjectArray, arr$, openArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				if (o == nullptr) {
					array->set(i, nullptr);
				} else {
					array->set(i, $($nc(this->componentType)->toJavaTypeData(o)));
				}
				++i;
			}
		}
	}
	return array;
}

MappedMXBeanType$ArrayMXBeanType::MappedMXBeanType$ArrayMXBeanType() {
}

$Class* MappedMXBeanType$ArrayMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"arrayClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$ArrayMXBeanType, arrayClass)},
		{"componentType", "Lsun/management/MappedMXBeanType;", nullptr, $PROTECTED, $field(MappedMXBeanType$ArrayMXBeanType, componentType)},
		{"baseElementType", "Lsun/management/MappedMXBeanType;", nullptr, $PROTECTED, $field(MappedMXBeanType$ArrayMXBeanType, baseElementType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(MappedMXBeanType$ArrayMXBeanType, init$, void, $Class*), "javax.management.openmbean.OpenDataException"},
		{"<init>", "()V", nullptr, $PROTECTED, $method(MappedMXBeanType$ArrayMXBeanType, init$, void)},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$ArrayMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$ArrayMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$ArrayMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$ArrayMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$ArrayMXBeanType", "sun.management.MappedMXBeanType", "ArrayMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$ArrayMXBeanType",
		"sun.management.MappedMXBeanType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$ArrayMXBeanType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$ArrayMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$ArrayMXBeanType::class$ = nullptr;

	} // management
} // sun