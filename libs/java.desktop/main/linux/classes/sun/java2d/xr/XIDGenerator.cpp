#include <sun/java2d/xr/XIDGenerator.h>
#include <jcpp.h>

#undef XID_BUFFER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

void XIDGenerator::init$() {
	$set(this, xidBuffer, $new($ints, XIDGenerator::XID_BUFFER_SIZE));
	this->currentIndex = XIDGenerator::XID_BUFFER_SIZE;
}

int32_t XIDGenerator::getNextXID() {
	if (this->currentIndex >= XIDGenerator::XID_BUFFER_SIZE) {
		bufferXIDs(this->xidBuffer, $nc(this->xidBuffer)->length);
		this->currentIndex = 0;
	}
	return $nc(this->xidBuffer)->get(this->currentIndex++);
}

void XIDGenerator::bufferXIDs($ints* buffer, int32_t arraySize) {
	$init(XIDGenerator);
	$prepareNativeStatic(bufferXIDs, void, $ints* buffer, int32_t arraySize);
	$invokeNativeStatic(buffer, arraySize);
	$finishNativeStatic();
}

XIDGenerator::XIDGenerator() {
}

$Class* XIDGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XID_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIDGenerator, XID_BUFFER_SIZE)},
		{"xidBuffer", "[I", nullptr, 0, $field(XIDGenerator, xidBuffer)},
		{"currentIndex", "I", nullptr, 0, $field(XIDGenerator, currentIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XIDGenerator, init$, void)},
		{"bufferXIDs", "([II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(XIDGenerator, bufferXIDs, void, $ints*, int32_t)},
		{"getNextXID", "()I", nullptr, $PUBLIC, $virtualMethod(XIDGenerator, getNextXID, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.xr.XIDGenerator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XIDGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XIDGenerator);
	});
	return class$;
}

$Class* XIDGenerator::class$ = nullptr;

		} // xr
	} // java2d
} // sun