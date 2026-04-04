#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadataFormat.h>
#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFElementInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFMetadataFormat.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
#include <java/util/Map.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef CHILD_POLICY_ALL
#undef CHILD_POLICY_EMPTY
#undef DATATYPE_STRING
#undef NATIVE_METADATA_FORMAT_NAME

using $TIFFAttrInfo = ::com::sun::imageio::plugins::tiff::TIFFAttrInfo;
using $TIFFElementInfo = ::com::sun::imageio::plugins::tiff::TIFFElementInfo;
using $TIFFMetadataFormat = ::com::sun::imageio::plugins::tiff::TIFFMetadataFormat;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

TIFFStreamMetadataFormat* TIFFStreamMetadataFormat::theInstance = nullptr;

bool TIFFStreamMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return false;
}

void TIFFStreamMetadataFormat::init$() {
	$useLocalObjectStack();
	$TIFFMetadataFormat::init$();
	$set(this, resourceBaseName, "javax.imageio.plugins.tiff.TIFFStreamMetadataFormatResources"_s);
	$init($TIFFStreamMetadata);
	$set(this, rootName, $TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME);
	$var($TIFFElementInfo, einfo, nullptr);
	$var($TIFFAttrInfo, ainfo, nullptr);
	$var($StringArray, empty, $new($StringArray, 0));
	$var($StringArray, childNames, nullptr);
	$var($StringArray, attrNames, nullptr);
	$assign(childNames, $new($StringArray, {"ByteOrder"_s}));
	$assign(einfo, $new($TIFFElementInfo, childNames, empty, $IIOMetadataFormat::CHILD_POLICY_ALL));
	$nc(this->elementInfoMap)->put($TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, einfo);
	$assign(childNames, empty);
	$assign(attrNames, $new($StringArray, {"value"_s}));
	$assign(einfo, $new($TIFFElementInfo, childNames, attrNames, $IIOMetadataFormat::CHILD_POLICY_EMPTY));
	this->elementInfoMap->put("ByteOrder"_s, einfo);
	$assign(ainfo, $new($TIFFAttrInfo));
	ainfo->dataType = $IIOMetadataFormat::DATATYPE_STRING;
	ainfo->isRequired = true;
	$nc(this->attrInfoMap)->put("ByteOrder/value"_s, ainfo);
}

$IIOMetadataFormat* TIFFStreamMetadataFormat::getInstance() {
	$init(TIFFStreamMetadataFormat);
	$synchronized(class$) {
		if (TIFFStreamMetadataFormat::theInstance == nullptr) {
			$assignStatic(TIFFStreamMetadataFormat::theInstance, $new(TIFFStreamMetadataFormat));
		}
		return TIFFStreamMetadataFormat::theInstance;
	}
}

void TIFFStreamMetadataFormat::clinit$($Class* clazz) {
	$assignStatic(TIFFStreamMetadataFormat::theInstance, nullptr);
}

TIFFStreamMetadataFormat::TIFFStreamMetadataFormat() {
}

$Class* TIFFStreamMetadataFormat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lcom/sun/imageio/plugins/tiff/TIFFStreamMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(TIFFStreamMetadataFormat, theInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TIFFStreamMetadataFormat, init$, void)},
		{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC, $virtualMethod(TIFFStreamMetadataFormat, canNodeAppear, bool, $String*, $ImageTypeSpecifier*)},
		{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(TIFFStreamMetadataFormat, getInstance, $IIOMetadataFormat*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormat",
		"com.sun.imageio.plugins.tiff.TIFFMetadataFormat",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFStreamMetadataFormat, name, initialize, &classInfo$$, TIFFStreamMetadataFormat::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFStreamMetadataFormat);
	});
	return class$;
}

$Class* TIFFStreamMetadataFormat::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com