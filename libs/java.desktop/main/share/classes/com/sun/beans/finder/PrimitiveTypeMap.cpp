#include <com/sun/beans/finder/PrimitiveTypeMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef TYPE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$Map* PrimitiveTypeMap::map = nullptr;

$Class* PrimitiveTypeMap::getType($String* name) {
	$init(PrimitiveTypeMap);
	return $cast($Class, PrimitiveTypeMap::map->get(name));
}

void PrimitiveTypeMap::init$() {
}

void PrimitiveTypeMap::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(PrimitiveTypeMap::map, $new($HashMap, 9));
	{
		PrimitiveTypeMap::map->put($($nc($Boolean::TYPE)->getName()), $Boolean::TYPE);
		PrimitiveTypeMap::map->put($($nc($Character::TYPE)->getName()), $Character::TYPE);
		PrimitiveTypeMap::map->put($($nc($Byte::TYPE)->getName()), $Byte::TYPE);
		PrimitiveTypeMap::map->put($($nc($Short::TYPE)->getName()), $Short::TYPE);
		PrimitiveTypeMap::map->put($($nc($Integer::TYPE)->getName()), $Integer::TYPE);
		PrimitiveTypeMap::map->put($($nc($Long::TYPE)->getName()), $Long::TYPE);
		PrimitiveTypeMap::map->put($($nc($Float::TYPE)->getName()), $Float::TYPE);
		PrimitiveTypeMap::map->put($($nc($Double::TYPE)->getName()), $Double::TYPE);
		PrimitiveTypeMap::map->put($($nc($Void::TYPE)->getName()), $Void::TYPE);
	}
}

PrimitiveTypeMap::PrimitiveTypeMap() {
}

$Class* PrimitiveTypeMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(PrimitiveTypeMap, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PrimitiveTypeMap, init$, void)},
		{"getType", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(PrimitiveTypeMap, getType, $Class*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.finder.PrimitiveTypeMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrimitiveTypeMap, name, initialize, &classInfo$$, PrimitiveTypeMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveTypeMap);
	});
	return class$;
}

$Class* PrimitiveTypeMap::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com