#include <sun/java2d/loops/GraphicsPrimitiveProxy.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void GraphicsPrimitiveProxy::init$($Class* owner, $String* relativeClassName, $String* methodSignature, int32_t primID, $SurfaceType* srctype, $CompositeType* comptype, $SurfaceType* dsttype) {
	$GraphicsPrimitive::init$(methodSignature, primID, srctype, comptype, dsttype);
	$set(this, owner, owner);
	$set(this, relativeClassName, relativeClassName);
}

$GraphicsPrimitive* GraphicsPrimitiveProxy::instantiate() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, name, $str({$(getPackageName($($nc(this->owner)->getName()))), "."_s, this->relativeClassName}));
	try {
		$Class* clazz = $Class::forName(name);
		$var($GraphicsPrimitive, p, $cast($GraphicsPrimitive, $$nc(clazz->getDeclaredConstructor($$new($ClassArray, 0)))->newInstance($$new($ObjectArray, 0))));
		if (!satisfiesSameAs(p)) {
			$throwNew($RuntimeException, $$str({"Primitive "_s, p, " incompatible with proxy for "_s, name}));
		}
		return p;
	} catch ($ReflectiveOperationException& ex) {
		$throwNew($RuntimeException, $(ex->toString()));
	}
	$shouldNotReachHere();
}

$String* GraphicsPrimitiveProxy::getPackageName($String* className) {
	$init(GraphicsPrimitiveProxy);
	int32_t lastDotIdx = $nc(className)->lastIndexOf(u'.');
	if (lastDotIdx < 0) {
		return className;
	}
	return className->substring(0, lastDotIdx);
}

$GraphicsPrimitive* GraphicsPrimitiveProxy::traceWrap() {
	return $$nc(instantiate())->traceWrap();
}

GraphicsPrimitiveProxy::GraphicsPrimitiveProxy() {
}

$Class* GraphicsPrimitiveProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(GraphicsPrimitiveProxy, owner)},
		{"relativeClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GraphicsPrimitiveProxy, relativeClassName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;ILsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)V", $PUBLIC, $method(GraphicsPrimitiveProxy, init$, void, $Class*, $String*, $String*, int32_t, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"getPackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(GraphicsPrimitiveProxy, getPackageName, $String*, $String*)},
		{"instantiate", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, 0, $virtualMethod(GraphicsPrimitiveProxy, instantiate, $GraphicsPrimitive*)},
		{"traceWrap", "()Lsun/java2d/loops/GraphicsPrimitive;", nullptr, $PUBLIC, $virtualMethod(GraphicsPrimitiveProxy, traceWrap, $GraphicsPrimitive*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.loops.GraphicsPrimitiveProxy",
		"sun.java2d.loops.GraphicsPrimitive",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GraphicsPrimitiveProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsPrimitiveProxy);
	});
	return class$;
}

$Class* GraphicsPrimitiveProxy::class$ = nullptr;

		} // loops
	} // java2d
} // sun