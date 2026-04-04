#include <java/awt/image/ByteLookupTable.h>
#include <java/awt/image/LookupTable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $LookupTable = ::java::awt::image::LookupTable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

void ByteLookupTable::init$(int32_t offset, $byteArray2* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = data->length;
	this->numEntries = $nc(data->get(0))->length;
	$set(this, data, $new($byteArray2, this->numComponents));
	for (int32_t i = 0; i < this->numComponents; ++i) {
		this->data->set(i, data->get(i));
	}
}

void ByteLookupTable::init$(int32_t offset, $bytes* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = 1;
	this->numEntries = data->length;
	$set(this, data, $new($byteArray2, 1));
	this->data->set(0, data);
}

$byteArray2* ByteLookupTable::getTable() {
	return this->data;
}

$ints* ByteLookupTable::lookupPixel($ints* src, $ints* dst$renamed) {
	$useLocalObjectStack();
	$var($ints, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($ints, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = src->get(i) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = src->get(i) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

$bytes* ByteLookupTable::lookupPixel($bytes* src, $bytes* dst$renamed) {
	$useLocalObjectStack();
	$var($bytes, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($bytes, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

ByteLookupTable::ByteLookupTable() {
}

$Class* ByteLookupTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "[[B", nullptr, 0, $field(ByteLookupTable, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[[B)V", nullptr, $PUBLIC, $method(ByteLookupTable, init$, void, int32_t, $byteArray2*)},
		{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(ByteLookupTable, init$, void, int32_t, $bytes*)},
		{"getTable", "()[[B", nullptr, $PUBLIC | $FINAL, $method(ByteLookupTable, getTable, $byteArray2*)},
		{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC, $virtualMethod(ByteLookupTable, lookupPixel, $ints*, $ints*, $ints*)},
		{"lookupPixel", "([B[B)[B", nullptr, $PUBLIC, $virtualMethod(ByteLookupTable, lookupPixel, $bytes*, $bytes*, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.ByteLookupTable",
		"java.awt.image.LookupTable",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ByteLookupTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteLookupTable);
	});
	return class$;
}

$Class* ByteLookupTable::class$ = nullptr;

		} // image
	} // awt
} // java