#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>
#include <java/awt/geom/PathIterator.h>
#include <java/lang/Enum.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$1.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$2.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode$3.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine.h>
#include <sun/java2d/marlin/RendererContext.h>
#include <jcpp.h>

#undef OFF
#undef ON_NO_AA
#undef ON_WITH_AA

using $DMarlinRenderingEngine$NormModeArray = $Array<::sun::java2d::marlin::DMarlinRenderingEngine$NormMode>;
using $PathIterator = ::java::awt::geom::PathIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DMarlinRenderingEngine$NormMode$1 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$1;
using $DMarlinRenderingEngine$NormMode$2 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$2;
using $DMarlinRenderingEngine$NormMode$3 = ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode$3;
using $RendererContext = ::sun::java2d::marlin::RendererContext;

namespace sun {
	namespace java2d {
		namespace marlin {

DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::ON_WITH_AA = nullptr;
DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::ON_NO_AA = nullptr;
DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::OFF = nullptr;
$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::$VALUES = nullptr;

$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::$values() {
	$init(DMarlinRenderingEngine$NormMode);
	return $new($DMarlinRenderingEngine$NormModeArray, {
		DMarlinRenderingEngine$NormMode::ON_WITH_AA,
		DMarlinRenderingEngine$NormMode::ON_NO_AA,
		DMarlinRenderingEngine$NormMode::OFF
	});
}

$DMarlinRenderingEngine$NormModeArray* DMarlinRenderingEngine$NormMode::values() {
	$init(DMarlinRenderingEngine$NormMode);
	return $cast($DMarlinRenderingEngine$NormModeArray, DMarlinRenderingEngine$NormMode::$VALUES->clone());
}

DMarlinRenderingEngine$NormMode* DMarlinRenderingEngine$NormMode::valueOf($String* name) {
	$init(DMarlinRenderingEngine$NormMode);
	return $cast(DMarlinRenderingEngine$NormMode, $Enum::valueOf(DMarlinRenderingEngine$NormMode::class$, name));
}

void DMarlinRenderingEngine$NormMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void DMarlinRenderingEngine$NormMode::clinit$($Class* clazz) {
	$assignStatic(DMarlinRenderingEngine$NormMode::ON_WITH_AA, $new($DMarlinRenderingEngine$NormMode$1, "ON_WITH_AA"_s, 0));
	$assignStatic(DMarlinRenderingEngine$NormMode::ON_NO_AA, $new($DMarlinRenderingEngine$NormMode$2, "ON_NO_AA"_s, 1));
	$assignStatic(DMarlinRenderingEngine$NormMode::OFF, $new($DMarlinRenderingEngine$NormMode$3, "OFF"_s, 2));
	$assignStatic(DMarlinRenderingEngine$NormMode::$VALUES, DMarlinRenderingEngine$NormMode::$values());
}

DMarlinRenderingEngine$NormMode::DMarlinRenderingEngine$NormMode() {
}

$Class* DMarlinRenderingEngine$NormMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ON_WITH_AA", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, ON_WITH_AA)},
		{"ON_NO_AA", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, ON_NO_AA)},
		{"OFF", "Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(DMarlinRenderingEngine$NormMode, OFF)},
		{"$VALUES", "[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(DMarlinRenderingEngine$NormMode, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DMarlinRenderingEngine$NormMode, $values, $DMarlinRenderingEngine$NormModeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(DMarlinRenderingEngine$NormMode, init$, void, $String*, int32_t)},
		{"getNormalizingPathIterator", "(Lsun/java2d/marlin/RendererContext;Ljava/awt/geom/PathIterator;)Ljava/awt/geom/PathIterator;", nullptr, $ABSTRACT, $virtualMethod(DMarlinRenderingEngine$NormMode, getNormalizingPathIterator, $PathIterator*, $RendererContext*, $PathIterator*)},
		{"valueOf", "(Ljava/lang/String;)Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(DMarlinRenderingEngine$NormMode, valueOf, DMarlinRenderingEngine$NormMode*, $String*)},
		{"values", "()[Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;", nullptr, $PUBLIC | $STATIC, $staticMethod(DMarlinRenderingEngine$NormMode, values, $DMarlinRenderingEngine$NormModeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode", "sun.java2d.marlin.DMarlinRenderingEngine", "NormMode", $PRIVATE | $STATIC | $ABSTRACT | $ENUM},
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$3", nullptr, nullptr, $FINAL | $ENUM},
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2", nullptr, nullptr, $FINAL | $ENUM},
		{"sun.java2d.marlin.DMarlinRenderingEngine$NormMode$1", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT | $ENUM,
		"sun.java2d.marlin.DMarlinRenderingEngine$NormMode",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lsun/java2d/marlin/DMarlinRenderingEngine$NormMode;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.marlin.DMarlinRenderingEngine"
	};
	$loadClass(DMarlinRenderingEngine$NormMode, name, initialize, &classInfo$$, DMarlinRenderingEngine$NormMode::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DMarlinRenderingEngine$NormMode));
	});
	return class$;
}

$Class* DMarlinRenderingEngine$NormMode::class$ = nullptr;

		} // marlin
	} // java2d
} // sun