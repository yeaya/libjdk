#include <javax/imageio/stream/MemoryCacheImageInputStream$StreamDisposerRecord.h>
#include <javax/imageio/stream/MemoryCache.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryCache = ::javax::imageio::stream::MemoryCache;

namespace javax {
	namespace imageio {
		namespace stream {

void MemoryCacheImageInputStream$StreamDisposerRecord::init$($MemoryCache* cache) {
	$set(this, cache, cache);
}

void MemoryCacheImageInputStream$StreamDisposerRecord::dispose() {
	$synchronized(this) {
		if (this->cache != nullptr) {
			this->cache->reset();
			$set(this, cache, nullptr);
		}
	}
}

MemoryCacheImageInputStream$StreamDisposerRecord::MemoryCacheImageInputStream$StreamDisposerRecord() {
}

$Class* MemoryCacheImageInputStream$StreamDisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "Ljavax/imageio/stream/MemoryCache;", nullptr, $PRIVATE, $field(MemoryCacheImageInputStream$StreamDisposerRecord, cache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/stream/MemoryCache;)V", nullptr, $PUBLIC, $method(MemoryCacheImageInputStream$StreamDisposerRecord, init$, void, $MemoryCache*)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MemoryCacheImageInputStream$StreamDisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord", "javax.imageio.stream.MemoryCacheImageInputStream", "StreamDisposerRecord", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.stream.MemoryCacheImageInputStream$StreamDisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.stream.MemoryCacheImageInputStream"
	};
	$loadClass(MemoryCacheImageInputStream$StreamDisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryCacheImageInputStream$StreamDisposerRecord);
	});
	return class$;
}

$Class* MemoryCacheImageInputStream$StreamDisposerRecord::class$ = nullptr;

		} // stream
	} // imageio
} // javax