#include <com/sun/imageio/plugins/gif/GIFStreamMetadataFormatResources.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

void GIFStreamMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* GIFStreamMetadataFormatResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Version"_s,
			"The file version, either 87a or 89a"_s
		}),
		$$new($ObjectArray, {
			"LogicalScreenDescriptor"_s,
			"The logical screen descriptor, except for the global color table"_s
		}),
		$$new($ObjectArray, {
			"GlobalColorTable"_s,
			"The global color table"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry"_s,
			"A global color table entry"_s
		}),
		$$new($ObjectArray, {
			"Version/value"_s,
			"The version string"_s
		}),
		$$new($ObjectArray, {
			"LogicalScreenDescriptor/logicalScreenWidth"_s,
			"The width in pixels of the whole picture"_s
		}),
		$$new($ObjectArray, {
			"LogicalScreenDescriptor/logicalScreenHeight"_s,
			"The height in pixels of the whole picture"_s
		}),
		$$new($ObjectArray, {
			"LogicalScreenDescriptor/colorResolution"_s,
			"The number of bits of color resolution, beteen 1 and 8"_s
		}),
		$$new($ObjectArray, {
			"LogicalScreenDescriptor/pixelAspectRatio"_s,
			"If 0, indicates square pixels, else W/H = (value + 15)/64"_s
		}),
		$$new($ObjectArray, {
			"GlobalColorTable/sizeOfGlobalColorTable"_s,
			"The number of entries in the global color table"_s
		}),
		$$new($ObjectArray, {
			"GlobalColorTable/backgroundColorIndex"_s,
			"The index of the color table entry to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"GlobalColorTable/sortFlag"_s,
			"True if the global color table is sorted by frequency"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry/index"_s,
			"The index of the color table entry"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry/red"_s,
			"The red value for the color table entry"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry/green"_s,
			"The green value for the color table entry"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry/blue"_s,
			"The blue value for the color table entry"_s
		})
	});
}

GIFStreamMetadataFormatResources::GIFStreamMetadataFormatResources() {
}

$Class* GIFStreamMetadataFormatResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GIFStreamMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(GIFStreamMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.gif.GIFStreamMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GIFStreamMetadataFormatResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GIFStreamMetadataFormatResources);
	});
	return class$;
}

$Class* GIFStreamMetadataFormatResources::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com