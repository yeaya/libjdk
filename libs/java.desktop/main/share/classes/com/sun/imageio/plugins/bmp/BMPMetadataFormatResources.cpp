#include <com/sun/imageio/plugins/bmp/BMPMetadataFormatResources.h>
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
				namespace bmp {

void BMPMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BMPMetadataFormatResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BMPVersion"_s,
			"BMP version string"_s
		}),
		$$new($ObjectArray, {
			"Width"_s,
			"The width of the image"_s
		}),
		$$new($ObjectArray, {
			"Height"_s,
			"The height of the image"_s
		}),
		$$new($ObjectArray, {
			"BitsPerPixel"_s,
			""_s
		}),
		$$new($ObjectArray, {
			"PixelsPerMeter"_s,
			"Resolution in pixels per unit distance"_s
		}),
		$$new($ObjectArray, {
			"X"_s,
			"Pixels Per Meter along X"_s
		}),
		$$new($ObjectArray, {
			"Y"_s,
			"Pixels Per Meter along Y"_s
		}),
		$$new($ObjectArray, {
			"ColorsUsed"_s,
			"Number of color indexes in the color table actually used"_s
		}),
		$$new($ObjectArray, {
			"ColorsImportant"_s,
			"Number of color indexes considered important for display"_s
		}),
		$$new($ObjectArray, {
			"Mask"_s,
			"Color masks; present for BI_BITFIELDS compression only"_s
		}),
		$$new($ObjectArray, {
			"Intent"_s,
			"Rendering intent"_s
		}),
		$$new($ObjectArray, {
			"Palette"_s,
			"The color palette"_s
		}),
		$$new($ObjectArray, {
			"Red"_s,
			"Red Mask/Color Palette"_s
		}),
		$$new($ObjectArray, {
			"Green"_s,
			"Green Mask/Color Palette/Gamma"_s
		}),
		$$new($ObjectArray, {
			"Blue"_s,
			"Blue Mask/Color Palette/Gamma"_s
		}),
		$$new($ObjectArray, {
			"Alpha"_s,
			"Alpha Mask/Color Palette/Gamma"_s
		}),
		$$new($ObjectArray, {
			"ColorSpaceType"_s,
			"Color Space Type"_s
		}),
		$$new($ObjectArray, {
			"X"_s,
			"The X coordinate of a point in XYZ color space"_s
		}),
		$$new($ObjectArray, {
			"Y"_s,
			"The Y coordinate of a point in XYZ color space"_s
		}),
		$$new($ObjectArray, {
			"Z"_s,
			"The Z coordinate of a point in XYZ color space"_s
		})
	});
}

BMPMetadataFormatResources::BMPMetadataFormatResources() {
}

$Class* BMPMetadataFormatResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BMPMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(BMPMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.bmp.BMPMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BMPMetadataFormatResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BMPMetadataFormatResources);
	});
	return class$;
}

$Class* BMPMetadataFormatResources::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com