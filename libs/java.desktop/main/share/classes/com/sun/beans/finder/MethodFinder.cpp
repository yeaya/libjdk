#include <com/sun/beans/finder/MethodFinder.h>
#include <com/sun/beans/TypeResolver.h>
#include <com/sun/beans/finder/AbstractFinder.h>
#include <com/sun/beans/finder/FinderUtils.h>
#include <com/sun/beans/finder/MethodFinder$1.h>
#include <com/sun/beans/finder/PrimitiveWrapperMap.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Arrays.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CACHE
#undef SOFT

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeResolver = ::com::sun::beans::TypeResolver;
using $AbstractFinder = ::com::sun::beans::finder::AbstractFinder;
using $FinderUtils = ::com::sun::beans::finder::FinderUtils;
using $MethodFinder$1 = ::com::sun::beans::finder::MethodFinder$1;
using $PrimitiveWrapperMap = ::com::sun::beans::finder::PrimitiveWrapperMap;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Executable = ::java::lang::reflect::Executable;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $ParameterizedType = ::java::lang::reflect::ParameterizedType;
using $Type = ::java::lang::reflect::Type;
using $Arrays = ::java::util::Arrays;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$Cache* MethodFinder::CACHE = nullptr;

$Method* MethodFinder::findMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	$useLocalObjectStack();
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Method name is not set"_s);
	}
	$PrimitiveWrapperMap::replacePrimitivesWithWrappers(args);
	$var($Signature, signature, $new($Signature, type, name, args));
	try {
		$var($Method, method, $cast($Method, MethodFinder::CACHE->get(signature)));
		return (method == nullptr) || $ReflectUtil::isPackageAccessible(method->getDeclaringClass()) ? method : $cast($Method, MethodFinder::CACHE->create(signature));
	} catch ($SignatureException& exception) {
		$throw($(exception->toNoSuchMethodException($$str({"Method \'"_s, name, "\' is not found"_s}))));
	}
	$shouldNotReachHere();
}

$Method* MethodFinder::findInstanceMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	$useLocalObjectStack();
	$var($Method, method, findMethod(type, name, args));
	if ($Modifier::isStatic($nc(method)->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is static"_s}));
	}
	return method;
}

$Method* MethodFinder::findStaticMethod($Class* type, $String* name, $ClassArray* args) {
	$init(MethodFinder);
	$useLocalObjectStack();
	$var($Method, method, findMethod(type, name, args));
	if (!$Modifier::isStatic($nc(method)->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is not static"_s}));
	}
	return method;
}

$Method* MethodFinder::findAccessibleMethod($Method* method) {
	$init(MethodFinder);
	$useLocalObjectStack();
	$Class* type = $nc(method)->getDeclaringClass();
	if (!$FinderUtils::isExported(type)) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, $(method->getName()), "\' is not accessible"_s}));
	}
	bool var$0 = $Modifier::isPublic($nc(type)->getModifiers());
	if (var$0 && $ReflectUtil::isPackageAccessible(type)) {
		return method;
	}
	if ($Modifier::isStatic(method->getModifiers())) {
		$throwNew($NoSuchMethodException, $$str({"Method \'"_s, $(method->getName()), "\' is not accessible"_s}));
	}
	{
		$var($TypeArray, arr$, type->getGenericInterfaces());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Type, generic, arr$->get(i$));
			try {
				return findAccessibleMethod(method, generic);
			} catch ($NoSuchMethodException& exception) {
			}
		}
	}
	return findAccessibleMethod(method, $(type->getGenericSuperclass()));
}

$Method* MethodFinder::findAccessibleMethod($Method* method, $Type* generic) {
	$init(MethodFinder);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, name, $nc(method)->getName());
	$var($ClassArray, params, method->getParameterTypes());
	if ($instanceOf($Class, generic)) {
		$Class* type = $cast($Class, generic);
		return findAccessibleMethod($(type->getMethod(name, params)));
	}
	if ($instanceOf($ParameterizedType, generic)) {
		$var($ParameterizedType, pt, $cast($ParameterizedType, generic));
		$Class* type = $cast($Class, pt->getRawType());
		{
			$var($MethodArray, arr$, $nc(type)->getMethods());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Method, m, arr$->get(i$));
				if ($$nc($nc(m)->getName())->equals(name)) {
					$var($ClassArray, pts, m->getParameterTypes());
					if ($nc(pts)->length == $nc(params)->length) {
						if ($Arrays::equals(params, pts)) {
							return findAccessibleMethod(m);
						}
						$var($TypeArray, gpts, m->getGenericParameterTypes());
						if (params->length == $nc(gpts)->length) {
							if ($Arrays::equals(params, $($TypeResolver::erase($($TypeResolver::resolve(pt, gpts)))))) {
								return findAccessibleMethod(m);
							}
						}
					}
				}
			}
		}
	}
	$throwNew($NoSuchMethodException, $$str({"Method \'"_s, name, "\' is not accessible"_s}));
}

void MethodFinder::init$($String* name, $ClassArray* args) {
	$AbstractFinder::init$(args);
	$set(this, name, name);
}

bool MethodFinder::isValid($Method* method) {
	bool var$0 = $AbstractFinder::isValid(method);
	return var$0 && $$nc($nc(method)->getName())->equals(this->name);
}

bool MethodFinder::isValid($Executable* method) {
	return this->isValid($cast($Method, method));
}

void MethodFinder::clinit$($Class* clazz) {
	$init($Cache$Kind);
	$assignStatic(MethodFinder::CACHE, $new($MethodFinder$1, $Cache$Kind::SOFT, $Cache$Kind::SOFT));
}

MethodFinder::MethodFinder() {
}

$Class* MethodFinder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CACHE", "Lcom/sun/beans/util/Cache;", "Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MethodFinder, CACHE)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MethodFinder, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/Class;)V", "(Ljava/lang/String;[Ljava/lang/Class<*>;)V", $PRIVATE, $method(MethodFinder, init$, void, $String*, $ClassArray*)},
		{"findAccessibleMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodFinder, findAccessibleMethod, $Method*, $Method*), "java.lang.NoSuchMethodException"},
		{"findAccessibleMethod", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Type;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodFinder, findAccessibleMethod, $Method*, $Method*, $Type*), "java.lang.NoSuchMethodException"},
		{"findInstanceMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MethodFinder, findInstanceMethod, $Method*, $Class*, $String*, $ClassArray*), "java.lang.NoSuchMethodException"},
		{"findMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MethodFinder, findMethod, $Method*, $Class*, $String*, $ClassArray*), "java.lang.NoSuchMethodException"},
		{"findStaticMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MethodFinder, findStaticMethod, $Method*, $Class*, $String*, $ClassArray*), "java.lang.NoSuchMethodException"},
		{"isValid", "(Ljava/lang/reflect/Method;)Z", nullptr, $PROTECTED, $method(MethodFinder, isValid, bool, $Method*)},
		{"isValid", "(Ljava/lang/reflect/Executable;)Z", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodFinder, isValid, bool, $Executable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.finder.MethodFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.beans.finder.MethodFinder",
		"com.sun.beans.finder.AbstractFinder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/beans/finder/AbstractFinder<Ljava/lang/reflect/Method;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.beans.finder.MethodFinder$1"
	};
	$loadClass(MethodFinder, name, initialize, &classInfo$$, MethodFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodFinder);
	});
	return class$;
}

$Class* MethodFinder::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com