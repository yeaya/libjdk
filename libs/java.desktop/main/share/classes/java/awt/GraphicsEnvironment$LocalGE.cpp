#include <java/awt/GraphicsEnvironment$LocalGE.h>
#include <java/awt/GraphicsEnvironment.h>
#include <sun/awt/PlatformGraphicsInfo.h>
#include <sun/java2d/HeadlessGraphicsEnvironment.h>
#include <jcpp.h>

#undef INSTANCE

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformGraphicsInfo = ::sun::awt::PlatformGraphicsInfo;
using $HeadlessGraphicsEnvironment = ::sun::java2d::HeadlessGraphicsEnvironment;

namespace java {
	namespace awt {

$GraphicsEnvironment* GraphicsEnvironment$LocalGE::INSTANCE = nullptr;

void GraphicsEnvironment$LocalGE::init$() {
}

$GraphicsEnvironment* GraphicsEnvironment$LocalGE::createGE() {
	$init(GraphicsEnvironment$LocalGE);
	$var($GraphicsEnvironment, ge, $PlatformGraphicsInfo::createGE());
	if ($GraphicsEnvironment::isHeadless()) {
		$assign(ge, $new($HeadlessGraphicsEnvironment, ge));
	}
	return ge;
}

void GraphicsEnvironment$LocalGE::clinit$($Class* clazz) {
	$assignStatic(GraphicsEnvironment$LocalGE::INSTANCE, GraphicsEnvironment$LocalGE::createGE());
}

GraphicsEnvironment$LocalGE::GraphicsEnvironment$LocalGE() {
}

$Class* GraphicsEnvironment$LocalGE::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/awt/GraphicsEnvironment;", nullptr, $STATIC | $FINAL, $staticField(GraphicsEnvironment$LocalGE, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(GraphicsEnvironment$LocalGE, init$, void)},
		{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PRIVATE | $STATIC, $staticMethod(GraphicsEnvironment$LocalGE, createGE, $GraphicsEnvironment*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.GraphicsEnvironment$LocalGE", "java.awt.GraphicsEnvironment", "LocalGE", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.GraphicsEnvironment$LocalGE",
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
		"java.awt.GraphicsEnvironment"
	};
	$loadClass(GraphicsEnvironment$LocalGE, name, initialize, &classInfo$$, GraphicsEnvironment$LocalGE::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GraphicsEnvironment$LocalGE);
	});
	return class$;
}

$Class* GraphicsEnvironment$LocalGE::class$ = nullptr;

	} // awt
} // java