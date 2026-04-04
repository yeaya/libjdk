#include <com/sun/imageio/plugins/wbmp/WBMPMetadataFormat.h>
#include <com/sun/imageio/plugins/wbmp/WBMPMetadata.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_INTEGER

using $WBMPMetadata = ::com::sun::imageio::plugins::wbmp::WBMPMetadata;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace wbmp {

$IIOMetadataFormat* WBMPMetadataFormat::instance = nullptr;

void WBMPMetadataFormat::init$() {
	$init($WBMPMetadata);
	$IIOMetadataFormatImpl::init$($WBMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("ImageDescriptor"_s, $WBMPMetadata::nativeMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageDescriptor"_s, "WBMPType"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, "0"_s);
	addAttribute("ImageDescriptor"_s, "Width"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("ImageDescriptor"_s, "Height"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "65535"_s, true, true);
}

bool WBMPMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

$IIOMetadataFormat* WBMPMetadataFormat::getInstance() {
	$init(WBMPMetadataFormat);
	$synchronized(class$) {
		if (WBMPMetadataFormat::instance == nullptr) {
			$assignStatic(WBMPMetadataFormat::instance, $new(WBMPMetadataFormat));
		}
		return WBMPMetadataFormat::instance;
	}
}

void WBMPMetadataFormat::clinit$($Class* clazz) {
	$assignStatic(WBMPMetadataFormat::instance, nullptr);
}

WBMPMetadataFormat::WBMPMetadataFormat() {
}

$Class* WBMPMetadataFormat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(WBMPMetadataFormat, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WBMPMetadataFormat, init$, void)},
		{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC, $virtualMethod(WBMPMetadataFormat, canNodeAppear, bool, $String*, $ImageTypeSpecifier*)},
		{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(WBMPMetadataFormat, getInstance, $IIOMetadataFormat*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.wbmp.WBMPMetadataFormat",
		"javax.imageio.metadata.IIOMetadataFormatImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WBMPMetadataFormat, name, initialize, &classInfo$$, WBMPMetadataFormat::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WBMPMetadataFormat);
	});
	return class$;
}

$Class* WBMPMetadataFormat::class$ = nullptr;

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com