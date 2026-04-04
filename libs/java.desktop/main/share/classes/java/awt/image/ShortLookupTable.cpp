#include <java/awt/image/ShortLookupTable.h>
#include <java/awt/image/LookupTable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

using $shortArray2 = $Array<int16_t, 2>;
using $LookupTable = ::java::awt::image::LookupTable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

void ShortLookupTable::init$(int32_t offset, $shortArray2* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = data->length;
	this->numEntries = $nc(data->get(0))->length;
	$set(this, data, $new($shortArray2, this->numComponents));
	for (int32_t i = 0; i < this->numComponents; ++i) {
		this->data->set(i, data->get(i));
	}
}

void ShortLookupTable::init$(int32_t offset, $shorts* data) {
	$LookupTable::init$(offset, $nc(data)->length);
	this->numComponents = 1;
	this->numEntries = data->length;
	$set(this, data, $new($shortArray2, 1));
	this->data->set(0, data);
}

$shortArray2* ShortLookupTable::getTable() {
	return this->data;
}

$ints* ShortLookupTable::lookupPixel($ints* src, $ints* dst$renamed) {
	$useLocalObjectStack();
	$var($ints, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($ints, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xffff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xffff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, (int32_t)$nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

$shorts* ShortLookupTable::lookupPixel($shorts* src, $shorts* dst$renamed) {
	$useLocalObjectStack();
	$var($shorts, dst, dst$renamed);
	if (dst == nullptr) {
		$assign(dst, $new($shorts, $nc(src)->length));
	}
	if (this->numComponents == 1) {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xffff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(0))->get(s));
		}
	} else {
		for (int32_t i = 0; i < $nc(src)->length; ++i) {
			int32_t s = (src->get(i) & 0xffff) - this->offset;
			if (s < 0) {
				$throwNew($ArrayIndexOutOfBoundsException, $$str({"src["_s, $$str(i), "]-offset is less than zero"_s}));
			}
			$nc(dst)->set(i, $nc($nc(this->data)->get(i))->get(s));
		}
	}
	return dst;
}

ShortLookupTable::ShortLookupTable() {
}

$Class* ShortLookupTable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "[[S", nullptr, 0, $field(ShortLookupTable, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[[S)V", nullptr, $PUBLIC, $method(ShortLookupTable, init$, void, int32_t, $shortArray2*)},
		{"<init>", "(I[S)V", nullptr, $PUBLIC, $method(ShortLookupTable, init$, void, int32_t, $shorts*)},
		{"getTable", "()[[S", nullptr, $PUBLIC | $FINAL, $method(ShortLookupTable, getTable, $shortArray2*)},
		{"lookupPixel", "([I[I)[I", nullptr, $PUBLIC, $virtualMethod(ShortLookupTable, lookupPixel, $ints*, $ints*, $ints*)},
		{"lookupPixel", "([S[S)[S", nullptr, $PUBLIC, $virtualMethod(ShortLookupTable, lookupPixel, $shorts*, $shorts*, $shorts*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.image.ShortLookupTable",
		"java.awt.image.LookupTable",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ShortLookupTable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShortLookupTable);
	});
	return class$;
}

$Class* ShortLookupTable::class$ = nullptr;

		} // image
	} // awt
} // java