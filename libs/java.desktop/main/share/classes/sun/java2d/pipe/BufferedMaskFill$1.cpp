#include <sun/java2d/pipe/BufferedMaskFill$1.h>
#include <sun/java2d/pipe/BufferedMaskFill.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedMaskFill = ::sun::java2d::pipe::BufferedMaskFill;

namespace sun {
	namespace java2d {
		namespace pipe {

void BufferedMaskFill$1::init$($BufferedMaskFill* this$0, int32_t val$x, int32_t val$y, int32_t val$w, int32_t val$h, int32_t val$maskoff, int32_t val$maskscan, $bytes* val$mask) {
	$set(this, this$0, this$0);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$w = val$w;
	this->val$h = val$h;
	this->val$maskoff = val$maskoff;
	this->val$maskscan = val$maskscan;
	$set(this, val$mask, val$mask);
}

void BufferedMaskFill$1::run() {
	this->this$0->maskFill(this->val$x, this->val$y, this->val$w, this->val$h, this->val$maskoff, this->val$maskscan, $nc(this->val$mask)->length, this->val$mask);
}

BufferedMaskFill$1::BufferedMaskFill$1() {
}

$Class* BufferedMaskFill$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/pipe/BufferedMaskFill;", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, this$0)},
		{"val$mask", "[B", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$mask)},
		{"val$maskscan", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$maskscan)},
		{"val$maskoff", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$maskoff)},
		{"val$h", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$h)},
		{"val$w", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$w)},
		{"val$y", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$y)},
		{"val$x", "I", nullptr, $FINAL | $SYNTHETIC, $field(BufferedMaskFill$1, val$x)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/BufferedMaskFill;IIIIII[B)V", "()V", 0, $method(BufferedMaskFill$1, init$, void, $BufferedMaskFill*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $bytes*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BufferedMaskFill$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.pipe.BufferedMaskFill",
		"MaskFill",
		"(Lsun/java2d/SunGraphics2D;Lsun/java2d/SurfaceData;Ljava/awt/Composite;IIII[BII)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.BufferedMaskFill$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.pipe.BufferedMaskFill$1",
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
		"sun.java2d.pipe.BufferedMaskFill"
	};
	$loadClass(BufferedMaskFill$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedMaskFill$1);
	});
	return class$;
}

$Class* BufferedMaskFill$1::class$ = nullptr;

		} // pipe
	} // java2d
} // sun