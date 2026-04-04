#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef VALUE_ARBITRARY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

void TIFFAttrInfo::init$() {
	this->valueType = $IIOMetadataFormat::VALUE_ARBITRARY;
	this->isRequired = false;
	this->listMinLength = 0;
	this->listMaxLength = $Integer::MAX_VALUE;
}

TIFFAttrInfo::TIFFAttrInfo() {
}

$Class* TIFFAttrInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"valueType", "I", nullptr, 0, $field(TIFFAttrInfo, valueType)},
		{"dataType", "I", nullptr, 0, $field(TIFFAttrInfo, dataType)},
		{"isRequired", "Z", nullptr, 0, $field(TIFFAttrInfo, isRequired)},
		{"listMinLength", "I", nullptr, 0, $field(TIFFAttrInfo, listMinLength)},
		{"listMaxLength", "I", nullptr, 0, $field(TIFFAttrInfo, listMaxLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFAttrInfo, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFAttrInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFAttrInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFAttrInfo);
	});
	return class$;
}

$Class* TIFFAttrInfo::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com