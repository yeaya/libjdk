#include <com/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_SEQUENCE

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGMetadataFormat = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

JPEGStreamMetadataFormat* JPEGStreamMetadataFormat::theInstance = nullptr;

void JPEGStreamMetadataFormat::init$() {
	$init($JPEG);
	$JPEGMetadataFormat::init$($JPEG::nativeStreamMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE);
	addStreamElements($(getRootName()));
}

$IIOMetadataFormat* JPEGStreamMetadataFormat::getInstance() {
	$init(JPEGStreamMetadataFormat);
	$synchronized(class$) {
		if (JPEGStreamMetadataFormat::theInstance == nullptr) {
			$assignStatic(JPEGStreamMetadataFormat::theInstance, $new(JPEGStreamMetadataFormat));
		}
		return JPEGStreamMetadataFormat::theInstance;
	}
}

bool JPEGStreamMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return $JPEGMetadataFormat::canNodeAppear(elementName, imageType);
}

void JPEGStreamMetadataFormat::clinit$($Class* clazz) {
	$assignStatic(JPEGStreamMetadataFormat::theInstance, nullptr);
}

JPEGStreamMetadataFormat::JPEGStreamMetadataFormat() {
}

$Class* JPEGStreamMetadataFormat::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Lcom/sun/imageio/plugins/jpeg/JPEGStreamMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGStreamMetadataFormat, theInstance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JPEGStreamMetadataFormat, init$, void)},
		{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JPEGStreamMetadataFormat, canNodeAppear, bool, $String*, $ImageTypeSpecifier*)},
		{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(JPEGStreamMetadataFormat, getInstance, $IIOMetadataFormat*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGStreamMetadataFormat",
		"com.sun.imageio.plugins.jpeg.JPEGMetadataFormat",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JPEGStreamMetadataFormat, name, initialize, &classInfo$$, JPEGStreamMetadataFormat::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGStreamMetadataFormat);
	});
	return class$;
}

$Class* JPEGStreamMetadataFormat::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com