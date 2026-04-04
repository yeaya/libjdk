#include <com/sun/imageio/plugins/tiff/TIFFIFD$TIFFIFDEntry.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFIFD$TIFFIFDEntry::init$($TIFFTag* tag, int32_t type, int32_t count, int64_t offset) {
	$set(this, tag, tag);
	this->type = type;
	this->count = count;
	this->offset = offset;
}

TIFFIFD$TIFFIFDEntry::TIFFIFD$TIFFIFDEntry() {
}

$Class* TIFFIFD$TIFFIFDEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tag", "Ljavax/imageio/plugins/tiff/TIFFTag;", nullptr, $PUBLIC | $FINAL, $field(TIFFIFD$TIFFIFDEntry, tag)},
		{"type", "I", nullptr, $PUBLIC | $FINAL, $field(TIFFIFD$TIFFIFDEntry, type)},
		{"count", "I", nullptr, $PUBLIC | $FINAL, $field(TIFFIFD$TIFFIFDEntry, count)},
		{"offset", "J", nullptr, $PUBLIC | $FINAL, $field(TIFFIFD$TIFFIFDEntry, offset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/imageio/plugins/tiff/TIFFTag;IIJ)V", nullptr, 0, $method(TIFFIFD$TIFFIFDEntry, init$, void, $TIFFTag*, int32_t, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.imageio.plugins.tiff.TIFFIFD$TIFFIFDEntry", "com.sun.imageio.plugins.tiff.TIFFIFD", "TIFFIFDEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFIFD$TIFFIFDEntry",
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
		"com.sun.imageio.plugins.tiff.TIFFIFD"
	};
	$loadClass(TIFFIFD$TIFFIFDEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFIFD$TIFFIFDEntry);
	});
	return class$;
}

$Class* TIFFIFD$TIFFIFDEntry::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com