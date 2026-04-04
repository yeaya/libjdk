#include <com/sun/imageio/plugins/tiff/TIFFPackBitsUtil.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFPackBitsUtil::init$() {
	$set(this, dstData, $new($bytes, 8192));
	this->dstIndex = 0;
}

void TIFFPackBitsUtil::ensureCapacity(int32_t bytesToAdd) {
	if (this->dstIndex + bytesToAdd > $nc(this->dstData)->length) {
		$var($bytes, newDstData, $new($bytes, $Math::max($cast(int32_t, (this->dstData->length * 1.2f)), this->dstIndex + bytesToAdd)));
		$System::arraycopy(this->dstData, 0, newDstData, 0, this->dstData->length);
		$set(this, dstData, newDstData);
	}
}

$bytes* TIFFPackBitsUtil::decode($bytes* srcData) {
	int32_t inIndex = 0;
	while (inIndex < $nc(srcData)->length) {
		int8_t b = srcData->get(inIndex++);
		if (b >= 0 && b <= 127) {
			ensureCapacity(b + 1);
			for (int32_t i = 0; i < b + 1; ++i) {
				$nc(this->dstData)->set(this->dstIndex++, srcData->get(inIndex++));
			}
		} else if (b <= -1 && b >= -127) {
			int8_t repeat = srcData->get(inIndex++);
			ensureCapacity(-b + 1);
			for (int32_t i = 0; i < (-b + 1); ++i) {
				$nc(this->dstData)->set(this->dstIndex++, repeat);
			}
		} else {
			++inIndex;
		}
	}
	$var($bytes, newDstData, $new($bytes, this->dstIndex));
	$System::arraycopy(this->dstData, 0, newDstData, 0, this->dstIndex);
	return newDstData;
}

TIFFPackBitsUtil::TIFFPackBitsUtil() {
}

$Class* TIFFPackBitsUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dstData", "[B", nullptr, 0, $field(TIFFPackBitsUtil, dstData)},
		{"dstIndex", "I", nullptr, 0, $field(TIFFPackBitsUtil, dstIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFPackBitsUtil, init$, void)},
		{"decode", "([B)[B", nullptr, $PUBLIC, $virtualMethod(TIFFPackBitsUtil, decode, $bytes*, $bytes*), "java.io.IOException"},
		{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(TIFFPackBitsUtil, ensureCapacity, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFPackBitsUtil",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFPackBitsUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFPackBitsUtil);
	});
	return class$;
}

$Class* TIFFPackBitsUtil::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com