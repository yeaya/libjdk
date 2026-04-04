#include <javax/imageio/metadata/IIOMetadataController.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;

namespace javax {
	namespace imageio {
		namespace metadata {

$Class* IIOMetadataController::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"activate", "(Ljavax/imageio/metadata/IIOMetadata;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataController, activate, bool, $IIOMetadata*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.imageio.metadata.IIOMetadataController",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IIOMetadataController, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIOMetadataController);
	});
	return class$;
}

$Class* IIOMetadataController::class$ = nullptr;

		} // metadata
	} // imageio
} // javax