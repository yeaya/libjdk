#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
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

$Map* PrimitiveWrapperMap::map = nullptr;

void PrimitiveWrapperMap::replacePrimitivesWithWrappers($ClassArray* types) {
	$init(PrimitiveWrapperMap);
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(types)->length; ++i) {
		if (types->get(i) != nullptr) {
			if ($nc(types->get(i))->isPrimitive()) {
				types->set(i, getType($($nc(types->get(i))->getName())));
			}
		}
	}
}

$Class* PrimitiveWrapperMap::getType($String* name) {
	$init(PrimitiveWrapperMap);
	return $cast($Class, PrimitiveWrapperMap::map->get(name));
}

void PrimitiveWrapperMap::init$() {
}

void PrimitiveWrapperMap::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(PrimitiveWrapperMap::map, $new($HashMap, 9));
	{
		PrimitiveWrapperMap::map->put($($nc($Boolean::TYPE)->getName()), $Boolean::class$);
		PrimitiveWrapperMap::map->put($($nc($Character::TYPE)->getName()), $Character::class$);
		PrimitiveWrapperMap::map->put($($nc($Byte::TYPE)->getName()), $Byte::class$);
		PrimitiveWrapperMap::map->put($($nc($Short::TYPE)->getName()), $Short::class$);
		PrimitiveWrapperMap::map->put($($nc($Integer::TYPE)->getName()), $Integer::class$);
		PrimitiveWrapperMap::map->put($($nc($Long::TYPE)->getName()), $Long::class$);
		PrimitiveWrapperMap::map->put($($nc($Float::TYPE)->getName()), $Float::class$);
		PrimitiveWrapperMap::map->put($($nc($Double::TYPE)->getName()), $Double::class$);
		PrimitiveWrapperMap::map->put($($nc($Void::TYPE)->getName()), $Void::class$);
	}
}

PrimitiveWrapperMap::PrimitiveWrapperMap() {
}

$Class* PrimitiveWrapperMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(PrimitiveWrapperMap, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PrimitiveWrapperMap, init$, void)},
		{"getType", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $staticMethod(PrimitiveWrapperMap, getType, $Class*, $String*)},
		{"replacePrimitivesWithWrappers", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $STATIC, $staticMethod(PrimitiveWrapperMap, replacePrimitivesWithWrappers, void, $ClassArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.finder.PrimitiveWrapperMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrimitiveWrapperMap, name, initialize, &classInfo$$, PrimitiveWrapperMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveWrapperMap);
	});
	return class$;
}

$Class* PrimitiveWrapperMap::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com