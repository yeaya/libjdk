#include <sun/java2d/pipe/BufferedTextPipe$1.h>
#include <sun/font/GlyphList.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/BufferedTextPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GlyphList = ::sun::font::GlyphList;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $BufferedTextPipe = ::sun::java2d::pipe::BufferedTextPipe;

namespace sun {
	namespace java2d {
		namespace pipe {

void BufferedTextPipe$1::init$($BufferedTextPipe* this$0, int32_t val$totalGlyphs, $GlyphList* val$gl, $SunGraphics2D* val$sg2d, float val$glyphListOrigX, float val$glyphListOrigY, $longs* val$images) {
	$set(this, this$0, this$0);
	this->val$totalGlyphs = val$totalGlyphs;
	$set(this, val$gl, val$gl);
	$set(this, val$sg2d, val$sg2d);
	this->val$glyphListOrigX = val$glyphListOrigX;
	this->val$glyphListOrigY = val$glyphListOrigY;
	$set(this, val$images, val$images);
}

void BufferedTextPipe$1::run() {
	$useLocalObjectStack();
	int32_t var$0 = this->val$totalGlyphs;
	bool var$1 = $nc(this->val$gl)->usePositions();
	bool var$2 = this->val$gl->isSubPixPos();
	bool var$3 = this->val$gl->isRGBOrder();
	int32_t var$4 = $nc(this->val$sg2d)->lcdTextContrast;
	float var$5 = this->val$glyphListOrigX;
	float var$6 = this->val$glyphListOrigY;
	$var($longs, var$7, this->val$images);
	this->this$0->drawGlyphList(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, $(this->val$gl->getPositions()));
}

BufferedTextPipe$1::BufferedTextPipe$1() {
}

$Class* BufferedTextPipe$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/pipe/BufferedTextPipe;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, this$0)},
		{"val$images", "[J", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$images)},
		{"val$glyphListOrigY", "F", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$glyphListOrigY)},
		{"val$glyphListOrigX", "F", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$glyphListOrigX)},
		{"val$sg2d", "Lsun/java2d/SunGraphics2D;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$sg2d)},
		{"val$gl", "Lsun/font/GlyphList;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$gl)},
		{"val$totalGlyphs", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedTextPipe$1, val$totalGlyphs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/BufferedTextPipe;ILsun/font/GlyphList;Lsun/java2d/SunGraphics2D;FF[J)V", "()V", 0, $method(BufferedTextPipe$1, init$, void, $BufferedTextPipe*, int32_t, $GlyphList*, $SunGraphics2D*, float, float, $longs*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BufferedTextPipe$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.pipe.BufferedTextPipe",
		"enqueueGlyphList",
		"(Lsun/java2d/SunGraphics2D;Lsun/font/GlyphList;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.BufferedTextPipe$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.pipe.BufferedTextPipe$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.pipe.BufferedTextPipe"
	};
	$loadClass(BufferedTextPipe$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedTextPipe$1);
	});
	return class$;
}

$Class* BufferedTextPipe$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun