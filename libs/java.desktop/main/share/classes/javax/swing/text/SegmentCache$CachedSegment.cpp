#include <javax/swing/text/SegmentCache$CachedSegment.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {
		namespace text {

void SegmentCache$CachedSegment::init$() {
	$Segment::init$();
}

SegmentCache$CachedSegment::SegmentCache$CachedSegment() {
}

$Class* SegmentCache$CachedSegment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SegmentCache$CachedSegment, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.SegmentCache$CachedSegment", "javax.swing.text.SegmentCache", "CachedSegment", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.SegmentCache$CachedSegment",
		"javax.swing.text.Segment",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.SegmentCache"
	};
	$loadClass(SegmentCache$CachedSegment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SegmentCache$CachedSegment));
	});
	return class$;
}

$Class* SegmentCache$CachedSegment::class$ = nullptr;

		} // text
	} // swing
} // javax