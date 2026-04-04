#include <sun/java2d/pipe/SpanClipRenderer$SCRcontext.h>
#include <sun/java2d/pipe/RegionIterator.h>
#include <sun/java2d/pipe/SpanClipRenderer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RegionIterator = ::sun::java2d::pipe::RegionIterator;
using $SpanClipRenderer = ::sun::java2d::pipe::SpanClipRenderer;

namespace sun {
	namespace java2d {
		namespace pipe {

void SpanClipRenderer$SCRcontext::init$($SpanClipRenderer* this$0, $RegionIterator* ri, Object$* outctx) {
	$set(this, this$0, this$0);
	$set(this, iterator, ri);
	$set(this, outcontext, outctx);
	$set(this, band, $new($ints, 4));
}

SpanClipRenderer$SCRcontext::SpanClipRenderer$SCRcontext() {
}

$Class* SpanClipRenderer$SCRcontext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/pipe/SpanClipRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(SpanClipRenderer$SCRcontext, this$0)},
		{"iterator", "Lsun/java2d/pipe/RegionIterator;", nullptr, 0, $field(SpanClipRenderer$SCRcontext, iterator)},
		{"outcontext", "Ljava/lang/Object;", nullptr, 0, $field(SpanClipRenderer$SCRcontext, outcontext)},
		{"band", "[I", nullptr, 0, $field(SpanClipRenderer$SCRcontext, band)},
		{"tile", "[B", nullptr, 0, $field(SpanClipRenderer$SCRcontext, tile)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/pipe/SpanClipRenderer;Lsun/java2d/pipe/RegionIterator;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(SpanClipRenderer$SCRcontext, init$, void, $SpanClipRenderer*, $RegionIterator*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.pipe.SpanClipRenderer$SCRcontext", "sun.java2d.pipe.SpanClipRenderer", "SCRcontext", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.pipe.SpanClipRenderer$SCRcontext",
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
		"sun.java2d.pipe.SpanClipRenderer"
	};
	$loadClass(SpanClipRenderer$SCRcontext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpanClipRenderer$SCRcontext);
	});
	return class$;
}

$Class* SpanClipRenderer$SCRcontext::class$ = nullptr;

		} // pipe
	} // java2d
} // sun