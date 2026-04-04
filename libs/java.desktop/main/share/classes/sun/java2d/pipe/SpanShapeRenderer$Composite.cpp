#include <sun/java2d/pipe/SpanShapeRenderer$Composite.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/SpanShapeRenderer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $SpanShapeRenderer = ::sun::java2d::pipe::SpanShapeRenderer;

namespace sun {
	namespace java2d {
		namespace pipe {

void SpanShapeRenderer$Composite::init$($CompositePipe* pipe) {
	$SpanShapeRenderer::init$();
	$set(this, comppipe, pipe);
}

$Object* SpanShapeRenderer$Composite::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* bbox) {
	return $nc(this->comppipe)->startSequence(sg, s, devR, bbox);
}

void SpanShapeRenderer$Composite::renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->comppipe)->renderPathTile(ctx, nullptr, 0, w, x, y, w, h);
}

void SpanShapeRenderer$Composite::endSequence(Object$* ctx) {
	$nc(this->comppipe)->endSequence(ctx);
}

SpanShapeRenderer$Composite::SpanShapeRenderer$Composite() {
}

$Class* SpanShapeRenderer$Composite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comppipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, 0, $field(SpanShapeRenderer$Composite, comppipe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/CompositePipe;)V", nullptr, $PUBLIC, $method(SpanShapeRenderer$Composite, init$, void, $CompositePipe*)},
		{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SpanShapeRenderer$Composite, endSequence, void, Object$*)},
		{"renderBox", "(Ljava/lang/Object;IIII)V", nullptr, $PUBLIC, $virtualMethod(SpanShapeRenderer$Composite, renderBox, void, Object$*, int32_t, int32_t, int32_t, int32_t)},
		{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SpanShapeRenderer$Composite, startSequence, $Object*, $SunGraphics2D*, $Shape*, $Rectangle*, $ints*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.SpanShapeRenderer$Composite", "sun.java2d.pipe.SpanShapeRenderer", "Composite", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.pipe.SpanShapeRenderer$Composite",
		"sun.java2d.pipe.SpanShapeRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.pipe.SpanShapeRenderer"
	};
	$loadClass(SpanShapeRenderer$Composite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanShapeRenderer$Composite);
	});
	return class$;
}

$Class* SpanShapeRenderer$Composite::class$ = nullptr;

		} // pipe
	} // java2d
} // sun