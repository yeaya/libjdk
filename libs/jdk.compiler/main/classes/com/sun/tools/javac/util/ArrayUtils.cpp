#include <com/sun/tools/javac/util/ArrayUtils.h>

#include <java/lang/reflect/Array.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$MethodInfo _ArrayUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayUtils, init$, void)},
	{"calculateNewLength", "(II)I", nullptr, $PRIVATE | $STATIC, $staticMethod(ArrayUtils, calculateNewLength, int32_t, int32_t, int32_t)},
	{"ensureCapacity", "([Ljava/lang/Object;I)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;I)[TT;", $PUBLIC | $STATIC, $staticMethod(ArrayUtils, ensureCapacity, $ObjectArray*, $ObjectArray*, int32_t)},
	{"ensureCapacity", "([BI)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayUtils, ensureCapacity, $bytes*, $bytes*, int32_t)},
	{"ensureCapacity", "([CI)[C", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayUtils, ensureCapacity, $chars*, $chars*, int32_t)},
	{"ensureCapacity", "([II)[I", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayUtils, ensureCapacity, $ints*, $ints*, int32_t)},
	{}
};

$ClassInfo _ArrayUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.ArrayUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArrayUtils_MethodInfo_
};

$Object* allocate$ArrayUtils($Class* clazz) {
	return $of($alloc(ArrayUtils));
}

void ArrayUtils::init$() {
}

int32_t ArrayUtils::calculateNewLength(int32_t currentLength, int32_t maxIndex) {
	while (currentLength < maxIndex + 1) {
		currentLength = currentLength * 2;
	}
	return currentLength;
}

$ObjectArray* ArrayUtils::ensureCapacity($ObjectArray* array, int32_t maxIndex) {
	if (maxIndex < $nc(array)->length) {
		return array;
	} else {
		int32_t newLength = calculateNewLength(array->length, maxIndex);
		$var($ObjectArray, result, $cast($ObjectArray, $1Array::newInstance($of(array)->getClass()->getComponentType(), newLength)));
		$System::arraycopy(array, 0, result, 0, array->length);
		return result;
	}
}

$bytes* ArrayUtils::ensureCapacity($bytes* array, int32_t maxIndex) {
	if (maxIndex < $nc(array)->length) {
		return array;
	} else {
		int32_t newLength = calculateNewLength(array->length, maxIndex);
		$var($bytes, result, $new($bytes, newLength));
		$System::arraycopy(array, 0, result, 0, array->length);
		return result;
	}
}

$chars* ArrayUtils::ensureCapacity($chars* array, int32_t maxIndex) {
	if (maxIndex < $nc(array)->length) {
		return array;
	} else {
		int32_t newLength = calculateNewLength(array->length, maxIndex);
		$var($chars, result, $new($chars, newLength));
		$System::arraycopy(array, 0, result, 0, array->length);
		return result;
	}
}

$ints* ArrayUtils::ensureCapacity($ints* array, int32_t maxIndex) {
	if (maxIndex < $nc(array)->length) {
		return array;
	} else {
		int32_t newLength = calculateNewLength(array->length, maxIndex);
		$var($ints, result, $new($ints, newLength));
		$System::arraycopy(array, 0, result, 0, array->length);
		return result;
	}
}

ArrayUtils::ArrayUtils() {
}

$Class* ArrayUtils::load$($String* name, bool initialize) {
	$loadClass(ArrayUtils, name, initialize, &_ArrayUtils_ClassInfo_, allocate$ArrayUtils);
	return class$;
}

$Class* ArrayUtils::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com