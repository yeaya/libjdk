#include <com/sun/imageio/plugins/bmp/BMPCompressionTypes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$StringArray* BMPCompressionTypes::compressionTypeNames = nullptr;

void BMPCompressionTypes::init$() {
}

int32_t BMPCompressionTypes::getType($String* typeString) {
	$init(BMPCompressionTypes);
	for (int32_t i = 0; i < BMPCompressionTypes::compressionTypeNames->length; ++i) {
		if ($nc(BMPCompressionTypes::compressionTypeNames->get(i))->equals(typeString)) {
			return i;
		}
	}
	return 0;
}

$String* BMPCompressionTypes::getName(int32_t type) {
	$init(BMPCompressionTypes);
	return BMPCompressionTypes::compressionTypeNames->get(type);
}

$StringArray* BMPCompressionTypes::getCompressionTypes() {
	$init(BMPCompressionTypes);
	return $cast($StringArray, BMPCompressionTypes::compressionTypeNames->clone());
}

void BMPCompressionTypes::clinit$($Class* clazz) {
	$assignStatic(BMPCompressionTypes::compressionTypeNames, $new($StringArray, {
		"BI_RGB"_s,
		"BI_RLE8"_s,
		"BI_RLE4"_s,
		"BI_BITFIELDS"_s,
		"BI_JPEG"_s,
		"BI_PNG"_s
	}));
}

BMPCompressionTypes::BMPCompressionTypes() {
}

$Class* BMPCompressionTypes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"compressionTypeNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BMPCompressionTypes, compressionTypeNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BMPCompressionTypes, init$, void)},
		{"getCompressionTypes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(BMPCompressionTypes, getCompressionTypes, $StringArray*)},
		{"getName", "(I)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(BMPCompressionTypes, getName, $String*, int32_t)},
		{"getType", "(Ljava/lang/String;)I", nullptr, $STATIC, $staticMethod(BMPCompressionTypes, getType, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPCompressionTypes",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BMPCompressionTypes, name, initialize, &classInfo$$, BMPCompressionTypes::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BMPCompressionTypes);
	});
	return class$;
}

$Class* BMPCompressionTypes::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com