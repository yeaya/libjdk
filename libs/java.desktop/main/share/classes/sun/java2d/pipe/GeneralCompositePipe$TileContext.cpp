#include <sun/java2d/pipe/GeneralCompositePipe$TileContext.h>
#include <java/awt/CompositeContext.h>
#include <java/awt/PaintContext.h>
#include <java/awt/image/ColorModel.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/GeneralCompositePipe.h>
#include <jcpp.h>

using $CompositeContext = ::java::awt::CompositeContext;
using $PaintContext = ::java::awt::PaintContext;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GeneralCompositePipe = ::sun::java2d::pipe::GeneralCompositePipe;

namespace sun {
	namespace java2d {
		namespace pipe {

void GeneralCompositePipe$TileContext::init$($GeneralCompositePipe* this$0, $SunGraphics2D* sg, $PaintContext* pCtx, $CompositeContext* cCtx, $ColorModel* cModel) {
	$set(this, this$0, this$0);
	$set(this, sunG2D, sg);
	$set(this, paintCtxt, pCtx);
	$set(this, compCtxt, cCtx);
	$set(this, compModel, cModel);
}

GeneralCompositePipe$TileContext::GeneralCompositePipe$TileContext() {
}

$Class* GeneralCompositePipe$TileContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/pipe/GeneralCompositePipe;", nullptr, $FINAL | $SYNTHETIC, $field(GeneralCompositePipe$TileContext, this$0)},
		{"sunG2D", "Lsun/java2d/SunGraphics2D;", nullptr, 0, $field(GeneralCompositePipe$TileContext, sunG2D)},
		{"paintCtxt", "Ljava/awt/PaintContext;", nullptr, 0, $field(GeneralCompositePipe$TileContext, paintCtxt)},
		{"compCtxt", "Ljava/awt/CompositeContext;", nullptr, 0, $field(GeneralCompositePipe$TileContext, compCtxt)},
		{"compModel", "Ljava/awt/image/ColorModel;", nullptr, 0, $field(GeneralCompositePipe$TileContext, compModel)},
		{"pipeState", "Ljava/lang/Object;", nullptr, 0, $field(GeneralCompositePipe$TileContext, pipeState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/GeneralCompositePipe;Lsun/java2d/SunGraphics2D;Ljava/awt/PaintContext;Ljava/awt/CompositeContext;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(GeneralCompositePipe$TileContext, init$, void, $GeneralCompositePipe*, $SunGraphics2D*, $PaintContext*, $CompositeContext*, $ColorModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.GeneralCompositePipe$TileContext", "sun.java2d.pipe.GeneralCompositePipe", "TileContext", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.pipe.GeneralCompositePipe$TileContext",
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
		"sun.java2d.pipe.GeneralCompositePipe"
	};
	$loadClass(GeneralCompositePipe$TileContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GeneralCompositePipe$TileContext);
	});
	return class$;
}

$Class* GeneralCompositePipe$TileContext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun