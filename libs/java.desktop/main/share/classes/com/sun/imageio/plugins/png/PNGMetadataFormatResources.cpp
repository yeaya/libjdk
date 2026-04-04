#include <com/sun/imageio/plugins/png/PNGMetadataFormatResources.h>
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
				namespace png {

void PNGMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* PNGMetadataFormatResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"IHDR"_s,
			"The IHDR chunk, containing the header"_s
		}),
		$$new($ObjectArray, {
			"PLTE"_s,
			"The PLTE chunk, containing the palette"_s
		}),
		$$new($ObjectArray, {
			"PLTEEntry"_s,
			"A palette entry"_s
		}),
		$$new($ObjectArray, {
			"bKGD"_s,
			"The bKGD chunk, containing the background color"_s
		}),
		$$new($ObjectArray, {
			"bKGD_RGB"_s,
			"An RGB background color, for RGB and RGBAlpha images"_s
		}),
		$$new($ObjectArray, {
			"bKGD_Grayscale"_s,
			"A grayscale background color, for Gray and GrayAlpha images"_s
		}),
		$$new($ObjectArray, {
			"bKGD_Palette"_s,
			"A background palette index"_s
		}),
		$$new($ObjectArray, {
			"cHRM"_s,
			"The cHRM chunk, containing color calibration"_s
		}),
		$$new($ObjectArray, {
			"gAMA"_s,
			"The gAMA chunk, containing the image gamma"_s
		}),
		$$new($ObjectArray, {
			"hIST"_s,
			"The hIST chunk, containing histogram information "_s
		}),
		$$new($ObjectArray, {
			"hISTEntry"_s,
			"A histogram entry"_s
		}),
		$$new($ObjectArray, {
			"iCCP"_s,
			"The iCCP chunk, containing an ICC color profile"_s
		}),
		$$new($ObjectArray, {
			"iTXt"_s,
			"The iTXt chunk, containing internationalized text"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry"_s,
			"A localized text entry"_s
		}),
		$$new($ObjectArray, {
			"pHYS"_s,
			"The pHYS chunk, containing the pixel size and aspect ratio"_s
		}),
		$$new($ObjectArray, {
			"sBIT"_s,
			"The sBIT chunk, containing significant bit information"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Grayscale"_s,
			"Significant bit information for gray samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_GrayAlpha"_s,
			"Significant bit information for gray and alpha samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGB"_s,
			"Significant bit information for RGB samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGBAlpha"_s,
			"Significant bit information for RGBA samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Palette"_s,
			"Significant bit information for RGB palette entries"_s
		}),
		$$new($ObjectArray, {
			"sPLT"_s,
			"The sPLT chunk, containing a suggested palette"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry"_s,
			"A suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sRGB"_s,
			"The sRGB chunk, containing rendering intent information"_s
		}),
		$$new($ObjectArray, {
			"tEXt"_s,
			"The tEXt chunk, containing text"_s
		}),
		$$new($ObjectArray, {
			"tEXtEntry"_s,
			"A text entry"_s
		}),
		$$new($ObjectArray, {
			"tIME"_s,
			"The tIME chunk, containing the image modification time"_s
		}),
		$$new($ObjectArray, {
			"tRNS"_s,
			"The tRNS chunk, containing transparency information"_s
		}),
		$$new($ObjectArray, {
			"tRNS_Grayscale"_s,
			"A grayscale value that should be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_RGB"_s,
			"An RGB value that should be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_Palette"_s,
			"A palette index that should be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"zTXt"_s,
			"The zTXt chunk, containing compressed text"_s
		}),
		$$new($ObjectArray, {
			"zTXtEntry"_s,
			"A compressed text entry"_s
		}),
		$$new($ObjectArray, {
			"UnknownChunks"_s,
			"A set of unknown chunks"_s
		}),
		$$new($ObjectArray, {
			"UnknownChunk"_s,
			"Unknown chunk data stored as a byte array"_s
		}),
		$$new($ObjectArray, {
			"IHDR/width"_s,
			"The width of the image in pixels"_s
		}),
		$$new($ObjectArray, {
			"IHDR/height"_s,
			"The height of the image in pixels"_s
		}),
		$$new($ObjectArray, {
			"IHDR/bitDepth"_s,
			"The bit depth of the image samples"_s
		}),
		$$new($ObjectArray, {
			"IHDR/colorType"_s,
			"The color type of the image"_s
		}),
		$$new($ObjectArray, {
			"IHDR/compressionMethod"_s,
			"The compression used for image data, always \"deflate\""_s
		}),
		$$new($ObjectArray, {
			"IHDR/filterMethod"_s,
			"The filtering method used for compression, always \"adaptive\""_s
		}),
		$$new($ObjectArray, {
			"IHDR/interlaceMethod"_s,
			"The interlacing method, \"none\" or \"adam7\""_s
		}),
		$$new($ObjectArray, {
			"PLTEEntry/index"_s,
			"The index of a palette entry"_s
		}),
		$$new($ObjectArray, {
			"PLTEEntry/red"_s,
			"The red value of a palette entry"_s
		}),
		$$new($ObjectArray, {
			"PLTEEntry/green"_s,
			"The green value of a palette entry"_s
		}),
		$$new($ObjectArray, {
			"PLTEEntry/blue"_s,
			"The blue value of a palette entry"_s
		}),
		$$new($ObjectArray, {
			"bKGD_Grayscale/gray"_s,
			"A gray value to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"bKGD_RGB/red"_s,
			"A red value to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"bKGD_RGB/green"_s,
			"A green value to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"bKGD_RGB/blue"_s,
			"A blue value to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"bKGD_Palette/index"_s,
			"A palette index to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"cHRM/whitePointX"_s,
			"The CIE x coordinate of the white point, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/whitePointY"_s,
			"The CIE y coordinate of the white point, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/redX"_s,
			"The CIE x coordinate of the red primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/redY"_s,
			"The CIE y coordinate of the red primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/greenX"_s,
			"The CIE x coordinate of the green primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/greenY"_s,
			"The CIE y coordinate of the green primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/blueX"_s,
			"The CIE x coordinate of the blue primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"cHRM/blueY"_s,
			"The CIE y coordinate of the blue primary, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"gAMA/value"_s,
			"The image gamma, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"hISTEntry/index"_s,
			"The palette index of this histogram entry"_s
		}),
		$$new($ObjectArray, {
			"hISTEntry/value"_s,
			"The frequency of this histogram entry"_s
		}),
		$$new($ObjectArray, {
			"iCCP/profileName"_s,
			"The name of this ICC profile"_s
		}),
		$$new($ObjectArray, {
			"iCCP/compressionMethod"_s,
			"The compression method used to store this ICC profile"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry/keyword"_s,
			"The keyword"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry/compressionMethod"_s,
			"The compression method used to store this iTXt entry"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry/languageTag"_s,
			"The ISO tag describing the language this iTXt entry"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry/translatedKeyword"_s,
			"The translated keyword for iTXt entry"_s
		}),
		$$new($ObjectArray, {
			"iTXtEntry/text"_s,
			"The localized text"_s
		}),
		$$new($ObjectArray, {
			"pHYS/pixelsPerUnitXAxis"_s,
			"The number of horizontal pixels per unit, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"pHYS/pixelsPerUnitYAxis"_s,
			"The number of vertical pixels per unit, multiplied by 1e5"_s
		}),
		$$new($ObjectArray, {
			"pHYS/unitSpecifier"_s,
			"The unit specifier for this chunk (i.e., meters)"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Grayscale/gray"_s,
			"The number of significant bits of the gray samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_GrayAlpha/gray"_s,
			"The number of significant bits of the gray samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_GrayAlpha/alpha"_s,
			"The number of significant bits of the alpha samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGB/red"_s,
			"The number of significant bits of the red samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGB/green"_s,
			"The number of significant bits of the green samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGB/blue"_s,
			"The number of significant bits of the blue samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGBAlpha/red"_s,
			"The number of significant bits of the red samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGBAlpha/green"_s,
			"The number of significant bits of the green samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGBAlpha/blue"_s,
			"The number of significant bits of the blue samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_RGBAlpha/alpha"_s,
			"The number of significant bits of the alpha samples"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Palette/red"_s,
			"The number of significant bits of the red palette entries"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Palette/green"_s,
			"The number of significant bits of the green palette entries"_s
		}),
		$$new($ObjectArray, {
			"sBIT_Palette/blue"_s,
			"The number of significant bits of the blue palette entries"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry/index"_s,
			"The index of a suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry/red"_s,
			"The red value of a suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry/green"_s,
			"The green value of a suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry/blue"_s,
			"The blue value of a suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sPLTEntry/alpha"_s,
			"The blue value of a suggested palette entry"_s
		}),
		$$new($ObjectArray, {
			"sRGB/renderingIntent"_s,
			"The rendering intent"_s
		}),
		$$new($ObjectArray, {
			"tEXtEntry/keyword"_s,
			"The keyword"_s
		}),
		$$new($ObjectArray, {
			"tEXtEntry/value"_s,
			"The text"_s
		}),
		$$new($ObjectArray, {
			"tIME/year"_s,
			"The year when the image was last modified"_s
		}),
		$$new($ObjectArray, {
			"tIME/month"_s,
			"The month when the image was last modified, 1 = January"_s
		}),
		$$new($ObjectArray, {
			"tIME/day"_s,
			"The day of the month when the image was last modified"_s
		}),
		$$new($ObjectArray, {
			"tIME/hour"_s,
			"The hour when the image was last modified"_s
		}),
		$$new($ObjectArray, {
			"tIME/minute"_s,
			"The minute when the image was last modified"_s
		}),
		$$new($ObjectArray, {
			"tIME/second"_s,
			"The second when the image was last modified, 60 = leap second"_s
		}),
		$$new($ObjectArray, {
			"tRNS_Grayscale/gray"_s,
			"The gray value to be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_RGB/red"_s,
			"The red value to be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_RGB/green"_s,
			"The green value to be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_RGB/blue"_s,
			"The blure value to be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_Palette/index"_s,
			"A palette index to be considered transparent"_s
		}),
		$$new($ObjectArray, {
			"tRNS_Palette/alpha"_s,
			"The transparency associated with the palette entry"_s
		}),
		$$new($ObjectArray, {
			"zTXtEntry/keyword"_s,
			"The keyword"_s
		}),
		$$new($ObjectArray, {
			"zTXtEntry/compressionMethod"_s,
			"The compression method"_s
		}),
		$$new($ObjectArray, {
			"zTXtEntry/text"_s,
			"The compressed text"_s
		}),
		$$new($ObjectArray, {
			"UnknownChunk/type"_s,
			"The 4-character type of the unknown chunk"_s
		})
	});
}

PNGMetadataFormatResources::PNGMetadataFormatResources() {
}

$Class* PNGMetadataFormatResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PNGMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(PNGMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.png.PNGMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PNGMetadataFormatResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PNGMetadataFormatResources);
	});
	return class$;
}

$Class* PNGMetadataFormatResources::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com