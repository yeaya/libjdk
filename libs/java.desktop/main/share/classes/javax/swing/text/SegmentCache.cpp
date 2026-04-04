#include <javax/swing/text/SegmentCache.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache$CachedSegment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache$CachedSegment = ::javax::swing::text::SegmentCache$CachedSegment;

namespace javax {
	namespace swing {
		namespace text {

SegmentCache* SegmentCache::sharedCache = nullptr;

SegmentCache* SegmentCache::getSharedInstance() {
	$init(SegmentCache);
	return SegmentCache::sharedCache;
}

$Segment* SegmentCache::getSharedSegment() {
	$init(SegmentCache);
	return $$nc(getSharedInstance())->getSegment();
}

void SegmentCache::releaseSharedSegment($Segment* segment) {
	$init(SegmentCache);
	$$nc(getSharedInstance())->releaseSegment(segment);
}

void SegmentCache::init$() {
	$set(this, segments, $new($ArrayList, 11));
}

$Segment* SegmentCache::getSegment() {
	$synchronized(this) {
		int32_t size = $nc(this->segments)->size();
		if (size > 0) {
			return $cast($Segment, this->segments->remove(size - 1));
		}
	}
	return $new($SegmentCache$CachedSegment);
}

void SegmentCache::releaseSegment($Segment* segment) {
	if ($instanceOf($SegmentCache$CachedSegment, segment)) {
		$synchronized(this) {
			if (segment->copy) {
				$Arrays::fill(segment->array, u'\0');
			}
			$set(segment, array, nullptr);
			segment->copy = false;
			segment->count = 0;
			$nc(this->segments)->add(segment);
		}
	}
}

void SegmentCache::clinit$($Class* clazz) {
	$assignStatic(SegmentCache::sharedCache, $new(SegmentCache));
}

SegmentCache::SegmentCache() {
}

$Class* SegmentCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sharedCache", "Ljavax/swing/text/SegmentCache;", nullptr, $PRIVATE | $STATIC, $staticField(SegmentCache, sharedCache)},
		{"segments", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/text/Segment;>;", $PRIVATE, $field(SegmentCache, segments)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SegmentCache, init$, void)},
		{"getSegment", "()Ljavax/swing/text/Segment;", nullptr, $PUBLIC, $virtualMethod(SegmentCache, getSegment, $Segment*)},
		{"getSharedInstance", "()Ljavax/swing/text/SegmentCache;", nullptr, $PUBLIC | $STATIC, $staticMethod(SegmentCache, getSharedInstance, SegmentCache*)},
		{"getSharedSegment", "()Ljavax/swing/text/Segment;", nullptr, $PUBLIC | $STATIC, $staticMethod(SegmentCache, getSharedSegment, $Segment*)},
		{"releaseSegment", "(Ljavax/swing/text/Segment;)V", nullptr, $PUBLIC, $virtualMethod(SegmentCache, releaseSegment, void, $Segment*)},
		{"releaseSharedSegment", "(Ljavax/swing/text/Segment;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SegmentCache, releaseSharedSegment, void, $Segment*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.SegmentCache$CachedSegment", "javax.swing.text.SegmentCache", "CachedSegment", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.SegmentCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.SegmentCache$CachedSegment"
	};
	$loadClass(SegmentCache, name, initialize, &classInfo$$, SegmentCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SegmentCache);
	});
	return class$;
}

$Class* SegmentCache::class$ = nullptr;

		} // text
	} // swing
} // javax