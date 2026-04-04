#include <com/sun/imageio/plugins/jpeg/JPEGImageMetadataFormatResources.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGMetadataFormatResources = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$ObjectArray2* JPEGImageMetadataFormatResources::imageContents = nullptr;

void JPEGImageMetadataFormatResources::init$() {
	$JPEGMetadataFormatResources::init$();
}

$ObjectArray2* JPEGImageMetadataFormatResources::getContents() {
	$init($JPEGMetadataFormatResources);
	$var($ObjectArray2, combinedContents, $new($ObjectArray2, $nc($JPEGMetadataFormatResources::commonContents)->length + JPEGImageMetadataFormatResources::imageContents->length, 2));
	int32_t combined = 0;
	for (int32_t i = 0; i < $JPEGMetadataFormatResources::commonContents->length; ++i, ++combined) {
		$nc(combinedContents->get(combined))->set(0, $nc($JPEGMetadataFormatResources::commonContents->get(i))->get(0));
		$nc(combinedContents->get(combined))->set(1, $nc($JPEGMetadataFormatResources::commonContents->get(i))->get(1));
	}
	for (int32_t i = 0; i < JPEGImageMetadataFormatResources::imageContents->length; ++i, ++combined) {
		$nc(combinedContents->get(combined))->set(0, $nc(JPEGImageMetadataFormatResources::imageContents->get(i))->get(0));
		$nc(combinedContents->get(combined))->set(1, $nc(JPEGImageMetadataFormatResources::imageContents->get(i))->get(1));
	}
	return combinedContents;
}

void JPEGImageMetadataFormatResources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JPEGImageMetadataFormatResources::imageContents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPEGvariety"_s,
			"A node grouping all marker segments specific to the variety of stream being read/written (e.g. JFIF) - may be empty"_s
		}),
		$$new($ObjectArray, {
			"markerSequence"_s,
			"A node grouping all non-jfif marker segments"_s
		}),
		$$new($ObjectArray, {
			"app0jfif"_s,
			"A JFIF APP0 marker segment"_s
		}),
		$$new($ObjectArray, {
			"app14Adobe"_s,
			"An Adobe APP14 marker segment"_s
		}),
		$$new($ObjectArray, {
			"sof"_s,
			"A Start Of Frame marker segment"_s
		}),
		$$new($ObjectArray, {
			"sos"_s,
			"A Start Of Scan marker segment"_s
		}),
		$$new($ObjectArray, {
			"app0JFXX"_s,
			"A JFIF extension marker segment"_s
		}),
		$$new($ObjectArray, {
			"app2ICC"_s,
			"An ICC profile APP2 marker segment"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbJPEG"_s,
			"A JFIF thumbnail in JPEG format (no JFIF segments permitted)"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbPalette"_s,
			"A JFIF thumbnail as an RGB indexed image"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbRGB"_s,
			"A JFIF thumbnail as an RGB image"_s
		}),
		$$new($ObjectArray, {
			"componentSpec"_s,
			"A component specification for a frame"_s
		}),
		$$new($ObjectArray, {
			"scanComponentSpec"_s,
			"A component specification for a scan"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/majorVersion"_s,
			"The major JFIF version number"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/minorVersion"_s,
			"The minor JFIF version number"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/resUnits"_s,
			"The resolution units for Xdensity and Ydensity (0 = no units, just aspect ratio; 1 = dots/inch; 2 = dots/cm)"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/Xdensity"_s,
			"The horizontal density or aspect ratio numerator"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/Ydensity"_s,
			"The vertical density or aspect ratio denominator"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/thumbWidth"_s,
			"The width of the thumbnail, or 0 if there isn\'t one"_s
		}),
		$$new($ObjectArray, {
			"app0JFIF/thumbHeight"_s,
			"The height of the thumbnail, or 0 if there isn\'t one"_s
		}),
		$$new($ObjectArray, {
			"app0JFXX/extensionCode"_s,
			"The JFXX extension code identifying thumbnail type: (16 = JPEG, 17 = indexed, 19 = RGB"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbPalette/thumbWidth"_s,
			"The width of the thumbnail"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbPalette/thumbHeight"_s,
			"The height of the thumbnail"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbRGB/thumbWidth"_s,
			"The width of the thumbnail"_s
		}),
		$$new($ObjectArray, {
			"JFIFthumbRGB/thumbHeight"_s,
			"The height of the thumbnail"_s
		}),
		$$new($ObjectArray, {
			"app14Adobe/version"_s,
			"The version of Adobe APP14 marker segment"_s
		}),
		$$new($ObjectArray, {
			"app14Adobe/flags0"_s,
			"The flags0 variable of an APP14 marker segment"_s
		}),
		$$new($ObjectArray, {
			"app14Adobe/flags1"_s,
			"The flags1 variable of an APP14 marker segment"_s
		}),
		$$new($ObjectArray, {
			"app14Adobe/transform"_s,
			"The color transform applied to the image (0 = Unknown, 1 = YCbCr, 2 = YCCK)"_s
		}),
		$$new($ObjectArray, {
			"sof/process"_s,
			"The JPEG process (0 = Baseline sequential, 1 = Extended sequential, 2 = Progressive)"_s
		}),
		$$new($ObjectArray, {
			"sof/samplePrecision"_s,
			"The number of bits per sample"_s
		}),
		$$new($ObjectArray, {
			"sof/numLines"_s,
			"The number of lines in the image"_s
		}),
		$$new($ObjectArray, {
			"sof/samplesPerLine"_s,
			"The number of samples per line"_s
		}),
		$$new($ObjectArray, {
			"sof/numFrameComponents"_s,
			"The number of components in the image"_s
		}),
		$$new($ObjectArray, {
			"componentSpec/componentId"_s,
			"The id for this component"_s
		}),
		$$new($ObjectArray, {
			"componentSpec/HsamplingFactor"_s,
			"The horizontal sampling factor for this component"_s
		}),
		$$new($ObjectArray, {
			"componentSpec/VsamplingFactor"_s,
			"The vertical sampling factor for this component"_s
		}),
		$$new($ObjectArray, {
			"componentSpec/QtableSelector"_s,
			"The quantization table to use for this component"_s
		}),
		$$new($ObjectArray, {
			"sos/numScanComponents"_s,
			"The number of components in the scan"_s
		}),
		$$new($ObjectArray, {
			"sos/startSpectralSelection"_s,
			"The first spectral band included in this scan"_s
		}),
		$$new($ObjectArray, {
			"sos/endSpectralSelection"_s,
			"The last spectral band included in this scan"_s
		}),
		$$new($ObjectArray, {
			"sos/approxHigh"_s,
			"The highest bit position included in this scan"_s
		}),
		$$new($ObjectArray, {
			"sos/approxLow"_s,
			"The lowest bit position included in this scan"_s
		}),
		$$new($ObjectArray, {
			"scanComponentSpec/componentSelector"_s,
			"The id of this component"_s
		}),
		$$new($ObjectArray, {
			"scanComponentSpec/dcHuffTable"_s,
			"The huffman table to use for encoding DC coefficients"_s
		}),
		$$new($ObjectArray, {
			"scanComponentSpec/acHuffTable"_s,
			"The huffman table to use for encoding AC coefficients"_s
		})
	}));
}

JPEGImageMetadataFormatResources::JPEGImageMetadataFormatResources() {
}

$Class* JPEGImageMetadataFormatResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"imageContents", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JPEGImageMetadataFormatResources, imageContents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPEGImageMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(JPEGImageMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormatResources",
		"com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JPEGImageMetadataFormatResources, name, initialize, &classInfo$$, JPEGImageMetadataFormatResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageMetadataFormatResources);
	});
	return class$;
}

$Class* JPEGImageMetadataFormatResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com