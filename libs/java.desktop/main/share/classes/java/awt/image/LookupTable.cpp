#include <java/awt/image/LookupTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

void LookupTable::init$(int32_t offset, int32_t numComponents) {
	if (offset < 0) {
		$throwNew($IllegalArgumentException, "Offset must be greater than 0"_s);
	}
	if (numComponents < 1) {
		$throwNew($IllegalArgumentException, "Number of components must  be at least 1"_s);
	}
	this->numComponents = numComponents;
	this->offset = offset;
}

int32_t LookupTable::getNumComponents() {
	return this->numComponents;
}

int32_t LookupTable::getOffset() {
	return this->offset;
}

LookupTable::LookupTable() {
}

$Class* LookupTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"numComponents", "I", nullptr, 0, $field(LookupTable, numComponents)},
		{"offset", "I", nullptr, 0, $field(LookupTable, offset)},
		{"numEntries", "I", nullptr, 0, $field(LookupTable, numEntries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, $PROTECTED, $method(LookupTable, init$, void, int32_t, int32_t)},
		{"getNumComponents", "()I", nullptr, $PUBLIC, $virtualMethod(LookupTable, getNumComponents, int32_t)},
		{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(LookupTable, getOffset, int32_t)},
		{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LookupTable, lookupPixel, $ints*, $ints*, $ints*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.awt.image.LookupTable",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LookupTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LookupTable);
	});
	return class$;
}

$Class* LookupTable::class$ = nullptr;

		} // image
	} // awt
} // java