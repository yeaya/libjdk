#include <com/sun/tools/javac/file/BaseFileManager$ByteBufferCache.h>
#include <com/sun/tools/javac/file/BaseFileManager.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

void BaseFileManager$ByteBufferCache::init$() {
}

$ByteBuffer* BaseFileManager$ByteBufferCache::get(int32_t capacity) {
	if (capacity < 20480) {
		capacity = 20480;
	}
	$var($ByteBuffer, result, (this->cached != nullptr && this->cached->capacity() >= capacity) ? this->cached->clear() : $ByteBuffer::allocate((capacity + capacity) >> 1));
	$set(this, cached, nullptr);
	return result;
}

void BaseFileManager$ByteBufferCache::put($ByteBuffer* x) {
	$set(this, cached, x);
}

BaseFileManager$ByteBufferCache::BaseFileManager$ByteBufferCache() {
}

$Class* BaseFileManager$ByteBufferCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cached", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(BaseFileManager$ByteBufferCache, cached)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BaseFileManager$ByteBufferCache, init$, void)},
		{"get", "(I)Ljava/nio/ByteBuffer;", nullptr, 0, $virtualMethod(BaseFileManager$ByteBufferCache, get, $ByteBuffer*, int32_t)},
		{"put", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $virtualMethod(BaseFileManager$ByteBufferCache, put, void, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.file.BaseFileManager$ByteBufferCache", "com.sun.tools.javac.file.BaseFileManager", "ByteBufferCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.file.BaseFileManager$ByteBufferCache",
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
		"com.sun.tools.javac.file.BaseFileManager"
	};
	$loadClass(BaseFileManager$ByteBufferCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BaseFileManager$ByteBufferCache);
	});
	return class$;
}

$Class* BaseFileManager$ByteBufferCache::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com