#include <sun/java2d/loops/RenderCache.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/loops/RenderCache$Entry.h>
#include <sun/java2d/loops/SurfaceType.h>
#include <jcpp.h>

using $RenderCache$EntryArray = $Array<::sun::java2d::loops::RenderCache$Entry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $RenderCache$Entry = ::sun::java2d::loops::RenderCache$Entry;
using $SurfaceType = ::sun::java2d::loops::SurfaceType;

namespace sun {
	namespace java2d {
		namespace loops {

void RenderCache::init$(int32_t size) {
	$set(this, entries, $new($RenderCache$EntryArray, size));
}

$Object* RenderCache::get($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst) {
	$synchronized(this) {
		$useLocalObjectStack();
		int32_t max = $nc(this->entries)->length - 1;
		for (int32_t i = max; i >= 0; --i) {
			$var($RenderCache$Entry, e, $nc(this->entries)->get(i));
			if (e == nullptr) {
				break;
			}
			if ($nc(e)->matches(src, comp, dst)) {
				if (i < max - 4) {
					$System::arraycopy(this->entries, i + 1, this->entries, i, max - i);
					$nc(this->entries)->set(max, e);
				}
				return e->getValue();
			}
		}
		return nullptr;
	}
}

void RenderCache::put($SurfaceType* src, $CompositeType* comp, $SurfaceType* dst, Object$* value) {
	$synchronized(this) {
		$var($RenderCache$Entry, e, $new($RenderCache$Entry, this, src, comp, dst, value));
		int32_t num = $nc(this->entries)->length;
		$System::arraycopy(this->entries, 1, this->entries, 0, num - 1);
		this->entries->set(num - 1, e);
	}
}

RenderCache::RenderCache() {
}

$Class* RenderCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entries", "[Lsun/java2d/loops/RenderCache$Entry;", nullptr, $PRIVATE, $field(RenderCache, entries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(RenderCache, init$, void, int32_t)},
		{"get", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;)Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED, $method(RenderCache, get, $Object*, $SurfaceType*, $CompositeType*, $SurfaceType*)},
		{"put", "(Lsun/java2d/loops/SurfaceType;Lsun/java2d/loops/CompositeType;Lsun/java2d/loops/SurfaceType;Ljava/lang/Object;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(RenderCache, put, void, $SurfaceType*, $CompositeType*, $SurfaceType*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.loops.RenderCache$Entry", "sun.java2d.loops.RenderCache", "Entry", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.loops.RenderCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.java2d.loops.RenderCache$Entry"
	};
	$loadClass(RenderCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenderCache);
	});
	return class$;
}

$Class* RenderCache::class$ = nullptr;

		} // loops
	} // java2d
} // sun