#include <com/sun/jmx/mbeanserver/Introspector$SimpleIntrospector.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanIntrospector.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

#undef ENGLISH
#undef GET_METHOD_PREFIX
#undef IS_METHOD_PREFIX
#undef TYPE

using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $StandardMBeanIntrospector = ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$String* Introspector$SimpleIntrospector::GET_METHOD_PREFIX = nullptr;
$String* Introspector$SimpleIntrospector::IS_METHOD_PREFIX = nullptr;
$Map* Introspector$SimpleIntrospector::cache = nullptr;

void Introspector$SimpleIntrospector::init$() {
}

$List* Introspector$SimpleIntrospector::getCachedMethods($Class* clazz) {
	$init(Introspector$SimpleIntrospector);
	$useLocalObjectStack();
	$var($SoftReference, ref, $cast($SoftReference, $nc(Introspector$SimpleIntrospector::cache)->get(clazz)));
	if (ref != nullptr) {
		$var($List, cached, $cast($List, ref->get()));
		if (cached != nullptr) {
			return cached;
		}
	}
	return nullptr;
}

bool Introspector$SimpleIntrospector::isReadMethod($Method* method) {
	$init(Introspector$SimpleIntrospector);
	$useLocalObjectStack();
	int32_t modifiers = $nc(method)->getModifiers();
	if ($Modifier::isStatic(modifiers)) {
		return false;
	}
	$var($String, name, method->getName());
	$var($ClassArray, paramTypes, method->getParameterTypes());
	int32_t paramCount = $nc(paramTypes)->length;
	if (paramCount == 0 && $nc(name)->length() > 2) {
		if (name->startsWith(Introspector$SimpleIntrospector::IS_METHOD_PREFIX)) {
			return (method->getReturnType() == $Boolean::TYPE);
		}
		bool var$0 = name->length() > 3;
		if (var$0 && name->startsWith(Introspector$SimpleIntrospector::GET_METHOD_PREFIX)) {
			return (method->getReturnType() != $Void::TYPE);
		}
	}
	return false;
}

$List* Introspector$SimpleIntrospector::getReadMethods($Class* clazz) {
	$init(Introspector$SimpleIntrospector);
	$useLocalObjectStack();
	$var($List, cachedResult, getCachedMethods(clazz));
	if (cachedResult != nullptr) {
		return cachedResult;
	}
	$var($List, methods, $$nc($StandardMBeanIntrospector::getInstance())->getMethods(clazz));
	$assign(methods, $MBeanAnalyzer::eliminateCovariantMethods(methods));
	$var($List, result, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			if (isReadMethod(m)) {
				if ($$nc($nc(m)->getName())->startsWith(Introspector$SimpleIntrospector::IS_METHOD_PREFIX)) {
					result->add(0, m);
				} else {
					result->add(m);
				}
			}
		}
	}
	$nc(Introspector$SimpleIntrospector::cache)->put(clazz, $$new($SoftReference, result));
	return result;
}

$Method* Introspector$SimpleIntrospector::getReadMethod($Class* clazz, $String* property$renamed) {
	$init(Introspector$SimpleIntrospector);
	$useLocalObjectStack();
	$var($String, property, property$renamed);
	if ($Character::isUpperCase($nc(property)->charAt(0))) {
		return nullptr;
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	$init($Locale);
	var$0->append($($(property->substring(0, 1))->toUpperCase($Locale::ENGLISH)));
	var$0->append($(property->substring(1)));
	$assign(property, $str(var$0));
	$var($String, getMethod, $str({Introspector$SimpleIntrospector::GET_METHOD_PREFIX, property}));
	$var($String, isMethod, $str({Introspector$SimpleIntrospector::IS_METHOD_PREFIX, property}));
	{
		$var($Iterator, i$, $$nc(getReadMethods(clazz))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				$var($String, name, $nc(m)->getName());
				bool var$1 = $nc(name)->equals(isMethod);
				if (var$1 || name->equals(getMethod)) {
					return m;
				}
			}
		}
	}
	return nullptr;
}

void Introspector$SimpleIntrospector::clinit$($Class* clazz) {
	$assignStatic(Introspector$SimpleIntrospector::GET_METHOD_PREFIX, "get"_s);
	$assignStatic(Introspector$SimpleIntrospector::IS_METHOD_PREFIX, "is"_s);
	$assignStatic(Introspector$SimpleIntrospector::cache, $Collections::synchronizedMap($$new($WeakHashMap)));
}

Introspector$SimpleIntrospector::Introspector$SimpleIntrospector() {
}

$Class* Introspector$SimpleIntrospector::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"GET_METHOD_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, GET_METHOD_PREFIX)},
		{"IS_METHOD_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, IS_METHOD_PREFIX)},
		{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/ref/SoftReference<Ljava/util/List<Ljava/lang/reflect/Method;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Introspector$SimpleIntrospector, init$, void)},
		{"getCachedMethods", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC, $staticMethod(Introspector$SimpleIntrospector, getCachedMethods, $List*, $Class*)},
		{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $STATIC, $staticMethod(Introspector$SimpleIntrospector, getReadMethod, $Method*, $Class*, $String*)},
		{"getReadMethods", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $STATIC, $staticMethod(Introspector$SimpleIntrospector, getReadMethods, $List*, $Class*)},
		{"isReadMethod", "(Ljava/lang/reflect/Method;)Z", nullptr, $STATIC, $staticMethod(Introspector$SimpleIntrospector, isReadMethod, bool, $Method*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector", "com.sun.jmx.mbeanserver.Introspector", "SimpleIntrospector", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.Introspector"
	};
	$loadClass(Introspector$SimpleIntrospector, name, initialize, &classInfo$$, Introspector$SimpleIntrospector::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Introspector$SimpleIntrospector);
	});
	return class$;
}

$Class* Introspector$SimpleIntrospector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com