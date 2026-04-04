#include <sun/management/MappedMXBeanType$MapMXBeanType.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenType.h>
#include <javax/management/openmbean/TabularData.h>
#include <javax/management/openmbean/TabularDataSupport.h>
#include <javax/management/openmbean/TabularType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $TabularData = ::javax::management::openmbean::TabularData;
using $TabularDataSupport = ::javax::management::openmbean::TabularDataSupport;
using $TabularType = ::javax::management::openmbean::TabularType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

bool MappedMXBeanType$MapMXBeanType::$assertionsDisabled = false;

void MappedMXBeanType$MapMXBeanType::init$($ParameterizedType* pt) {
	$useLocalObjectStack();
	$MappedMXBeanType::init$();
	$set(this, javaType, pt);
	$var($TypeArray, argTypes, $nc(pt)->getActualTypeArguments());
	if (!MappedMXBeanType$MapMXBeanType::$assertionsDisabled && !($nc(argTypes)->length == 2)) {
		$throwNew($AssertionError);
	}
	$set(this, keyType, getMappedType($nc(argTypes)->get(0)));
	$set(this, valueType, getMappedType(argTypes->get(1)));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Map<"_s);
	var$0->append($($nc(this->keyType)->getName()));
	var$0->append(","_s);
	var$0->append($($nc(this->valueType)->getName()));
	var$0->append(">"_s);
	$set(this, typeName, $str(var$0));
	$var($OpenTypeArray, mapItemTypes, $new($OpenTypeArray, {
		$($nc(this->keyType)->getOpenType()),
		$($nc(this->valueType)->getOpenType())
	}));
	$var($CompositeType, rowType, $new($CompositeType, this->typeName, this->typeName, $MappedMXBeanType::mapItemNames, $MappedMXBeanType::mapItemNames, mapItemTypes));
	$set(this, openType, $new($TabularType, this->typeName, this->typeName, rowType, $MappedMXBeanType::mapIndexNames));
	$load($TabularData);
	$set(this, mappedTypeClass, $TabularData::class$);
}

$Type* MappedMXBeanType$MapMXBeanType::getJavaType() {
	return this->javaType;
}

$String* MappedMXBeanType$MapMXBeanType::getName() {
	return this->typeName;
}

$Object* MappedMXBeanType$MapMXBeanType::toOpenTypeData(Object$* data) {
	$useLocalObjectStack();
	$var($Map, map, $cast($Map, data));
	$var($TabularType, tabularType, $cast($TabularType, this->openType));
	$var($TabularData, table, $new($TabularDataSupport, tabularType));
	$var($CompositeType, rowType, $nc(tabularType)->getRowType());
	{
		$var($Iterator, i$, $$nc($nc(map)->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Object, key, $nc(this->keyType)->toOpenTypeData($($nc(entry)->getKey())));
				$var($Object, value, $nc(this->valueType)->toOpenTypeData($(entry->getValue())));
				$var($CompositeData, row, $new($CompositeDataSupport, rowType, $MappedMXBeanType::mapItemNames, $$new($ObjectArray, {
					key,
					value
				})));
				table->put(row);
			}
		}
	}
	return table;
}

$Object* MappedMXBeanType$MapMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalObjectStack();
	$var($TabularData, td, $cast($TabularData, data));
	$var($Map, result, $new($HashMap));
	{
		$var($Iterator, i$, $($nc(td)->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CompositeData, row, $cast($CompositeData, i$->next()));
			{
				$var($Object, key, $nc(this->keyType)->toJavaTypeData($($nc(row)->get("key"_s))));
				$var($Object, value, $nc(this->valueType)->toJavaTypeData($(row->get("value"_s))));
				result->put(key, value);
			}
		}
	}
	return result;
}

void MappedMXBeanType$MapMXBeanType::clinit$($Class* clazz) {
	$load($MappedMXBeanType);
	MappedMXBeanType$MapMXBeanType::$assertionsDisabled = !$MappedMXBeanType::class$->desiredAssertionStatus();
}

MappedMXBeanType$MapMXBeanType::MappedMXBeanType$MapMXBeanType() {
}

$Class* MappedMXBeanType$MapMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MappedMXBeanType$MapMXBeanType, $assertionsDisabled)},
		{"javaType", "Ljava/lang/reflect/ParameterizedType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, javaType)},
		{"keyType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, keyType)},
		{"valueType", "Lsun/management/MappedMXBeanType;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, valueType)},
		{"typeName", "Ljava/lang/String;", nullptr, $FINAL, $field(MappedMXBeanType$MapMXBeanType, typeName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/ParameterizedType;)V", nullptr, 0, $method(MappedMXBeanType$MapMXBeanType, init$, void, $ParameterizedType*), "javax.management.openmbean.OpenDataException"},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$MapMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$MapMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$MapMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$MapMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$MapMXBeanType", "sun.management.MappedMXBeanType", "MapMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$MapMXBeanType",
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
	$loadClass(MappedMXBeanType$MapMXBeanType, name, initialize, &classInfo$$, MappedMXBeanType$MapMXBeanType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$MapMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$MapMXBeanType::class$ = nullptr;

	} // management
} // sun