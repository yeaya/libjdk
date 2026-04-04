#include <sun/management/MappedMXBeanType$ListMXBeanType.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

bool MappedMXBeanType$ListMXBeanType::$assertionsDisabled = false;

void MappedMXBeanType$ListMXBeanType::init$($ParameterizedType* pt) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$MappedMXBeanType::init$();
	$set(this, javaType, pt);
	$var($TypeArray, argTypes, $nc(pt)->getActualTypeArguments());
	if (!MappedMXBeanType$ListMXBeanType::$assertionsDisabled && !($nc(argTypes)->length == 1)) {
		$throwNew($AssertionError);
	}
	if (!($instanceOf($Class, $nc(argTypes)->get(0)))) {
		$throwNew($OpenDataException, $$str({"Element Type for "_s, pt, " not supported"_s}));
	}
	$Class* et = $cast($Class, argTypes->get(0));
	if ($nc(et)->isArray()) {
		$throwNew($OpenDataException, $$str({"Element Type for "_s, pt, " not supported"_s}));
	}
	$set(this, paramType, getMappedType(et));
	$set(this, typeName, $str({"List<"_s, $($nc(this->paramType)->getName()), ">"_s}));
	try {
		$set(this, mappedTypeClass, $Class::forName($$str({"[L"_s, $(this->paramType->getTypeName()), ";"_s})));
	} catch ($ClassNotFoundException& e) {
		$var($OpenDataException, ode, $new($OpenDataException, "Array class not found"_s));
		ode->initCause(e);
		$throw(ode);
	}
	$set(this, openType, $new($ArrayType, 1, $(this->paramType->getOpenType())));
}

$Type* MappedMXBeanType$ListMXBeanType::getJavaType() {
	return this->javaType;
}

$String* MappedMXBeanType$ListMXBeanType::getName() {
	return this->typeName;
}

$Object* MappedMXBeanType$ListMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalObjectStack();
	$var($List, list, $cast($List, data));
	$Class* var$0 = $nc(this->paramType)->getMappedTypeClass();
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance(var$0, $nc(list)->size())));
	int32_t i = 0;
	{
		$var($Iterator, i$, list->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				openArray->set(i++, $(this->paramType->toOpenTypeData(o)));
			}
		}
	}
	return openArray;
}

$Object* MappedMXBeanType$ListMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalObjectStack();
	$var($ObjectArray, openArray, $cast($ObjectArray, data));
	$var($List, result, $new($ArrayList, $nc(openArray)->length));
	{
		$var($ObjectArray, arr$, openArray);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				result->add($($nc(this->paramType)->toJavaTypeData(o)));
			}
		}
	}
	return result;
}

void MappedMXBeanType$ListMXBeanType::clinit$($Class* clazz) {
	$load($MappedMXBeanType);
	MappedMXBeanType$ListMXBeanType::$assertionsDisabled = !$MappedMXBeanType::class$->desiredAssertionStatus();
}

MappedMXBeanType$ListMXBeanType::MappedMXBeanType$ListMXBeanType() {
}

$Class* MappedMXBeanType$ListMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MappedMXBeanType$ListMXBeanType, $assertionsDisabled)},
		{"javaType", "Ljava/lang/reflect/ParameterizedType;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, javaType)},
		{"paramType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, paramType)},
		{"typeName", "Ljava/lang/String;", nullptr, $FINAL, $field(MappedMXBeanType$ListMXBeanType, typeName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/ParameterizedType;)V", nullptr, 0, $method(MappedMXBeanType$ListMXBeanType, init$, void, $ParameterizedType*), "javax.management.openmbean.OpenDataException"},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$ListMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$ListMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$ListMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$ListMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$ListMXBeanType", "sun.management.MappedMXBeanType", "ListMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$ListMXBeanType",
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
	$loadClass(MappedMXBeanType$ListMXBeanType, name, initialize, &classInfo$$, MappedMXBeanType$ListMXBeanType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$ListMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$ListMXBeanType::class$ = nullptr;

	} // management
} // sun