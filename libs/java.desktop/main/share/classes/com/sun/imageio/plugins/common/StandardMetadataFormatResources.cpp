#include <com/sun/imageio/plugins/common/StandardMetadataFormatResources.h>
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
				namespace common {

void StandardMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* StandardMetadataFormatResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Chroma"_s,
			"Chroma (color) information"_s
		}),
		$$new($ObjectArray, {
			"ColorSpaceType"_s,
			"The raw color space of the image"_s
		}),
		$$new($ObjectArray, {
			"NumChannels"_s,
			"The number of channels in the raw image, including alpha"_s
		}),
		$$new($ObjectArray, {
			"Gamma"_s,
			"The image gamma"_s
		}),
		$$new($ObjectArray, {
			"BlackIsZero"_s,
			"True if smaller values represent darker shades"_s
		}),
		$$new($ObjectArray, {
			"Palette"_s,
			"Palette-color information"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry"_s,
			"A palette entry"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry/index"_s,
			"The index of the palette entry"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry/red"_s,
			"The red value for the palette entry"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry/green"_s,
			"The green value for the palette entry"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry/blue"_s,
			"The blue value for the palette entry"_s
		}),
		$$new($ObjectArray, {
			"PaletteEntry/alpha"_s,
			"The alpha value for the palette entry"_s
		}),
		$$new($ObjectArray, {
			"BackgroundIndex"_s,
			"A palette index to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"BackgroundColor"_s,
			"An RGB triple to be used as a background"_s
		}),
		$$new($ObjectArray, {
			"BackgroundColor/red"_s,
			"The red background value"_s
		}),
		$$new($ObjectArray, {
			"BackgroundColor/green"_s,
			"The green background value"_s
		}),
		$$new($ObjectArray, {
			"BackgroundColor/blue"_s,
			"The blue background value"_s
		}),
		$$new($ObjectArray, {
			"Compression"_s,
			"Compression information"_s
		}),
		$$new($ObjectArray, {
			"CompressionTypeName"_s,
			"The name of the compression scheme in use"_s
		}),
		$$new($ObjectArray, {
			"Lossless"_s,
			"True if the compression scheme is lossless"_s
		}),
		$$new($ObjectArray, {
			"BitRate"_s,
			"The estimated bit rate of the compression scheme"_s
		}),
		$$new($ObjectArray, {
			"NumProgressiveScans"_s,
			"The number of progressive scans used in the image encoding"_s
		}),
		$$new($ObjectArray, {
			"Data"_s,
			"Information on the image layout"_s
		}),
		$$new($ObjectArray, {
			"PlanarConfiguration"_s,
			"The organization of image samples in the stream"_s
		}),
		$$new($ObjectArray, {
			"SampleFormat"_s,
			"The numeric format of image samples"_s
		}),
		$$new($ObjectArray, {
			"BitsPerSample"_s,
			"The number of bits per sample"_s
		}),
		$$new($ObjectArray, {
			"BitsPerSample/value"_s,
			"A list of integers, one per channel"_s
		}),
		$$new($ObjectArray, {
			"SignificantBitsPerSample"_s,
			"The number of significant bits per sample"_s
		}),
		$$new($ObjectArray, {
			"SignificantBitsPerSample/value"_s,
			"A list of integers, one per channel"_s
		}),
		$$new($ObjectArray, {
			"SampleMSB"_s,
			"The position of the most significant bit of each sample"_s
		}),
		$$new($ObjectArray, {
			"SampleMSB/value"_s,
			"A list of integers, one per channel"_s
		}),
		$$new($ObjectArray, {
			"Dimension"_s,
			"Dimension information"_s
		}),
		$$new($ObjectArray, {
			"PixelAspectRatio"_s,
			"The width of a pixel divided by its height"_s
		}),
		$$new($ObjectArray, {
			"ImageOrientation"_s,
			"The desired orientation of the image in terms of flips and counter-clockwise rotations"_s
		}),
		$$new($ObjectArray, {
			"HorizontalPixelSize"_s,
			"The width of a pixel, in millimeters, as it should be rendered on media"_s
		}),
		$$new($ObjectArray, {
			"VerticalPixelSize"_s,
			"The height of a pixel, in millimeters, as it should be rendered on media"_s
		}),
		$$new($ObjectArray, {
			"HorizontalPhysicalPixelSpacing"_s,
			"The horizontal distance in the subject of the image, in millimeters, represented by one pixel at the center of the image"_s
		}),
		$$new($ObjectArray, {
			"VerticalPhysicalPixelSpacing"_s,
			"The vertical distance in the subject of the image, in millimeters, represented by one pixel at the center of the image"_s
		}),
		$$new($ObjectArray, {
			"HorizontalPosition"_s,
			"The horizontal position, in millimeters, where the image should be rendered on media "_s
		}),
		$$new($ObjectArray, {
			"VerticalPosition"_s,
			"The vertical position, in millimeters, where the image should be rendered on media "_s
		}),
		$$new($ObjectArray, {
			"HorizontalPixelOffset"_s,
			"The horizontal position, in pixels, where the image should be rendered onto a raster display"_s
		}),
		$$new($ObjectArray, {
			"VerticalPixelOffset"_s,
			"The vertical position, in pixels, where the image should be rendered onto a raster display"_s
		}),
		$$new($ObjectArray, {
			"HorizontalScreenSize"_s,
			"The width, in pixels, of the raster display into which the image should be rendered"_s
		}),
		$$new($ObjectArray, {
			"VerticalScreenSize"_s,
			"The height, in pixels, of the raster display into which the image should be rendered"_s
		}),
		$$new($ObjectArray, {
			"Document"_s,
			"Document information"_s
		}),
		$$new($ObjectArray, {
			"FormatVersion"_s,
			"The version of the format used by the stream"_s
		}),
		$$new($ObjectArray, {
			"SubimageInterpretation"_s,
			"The interpretation of this image in relation to the other images stored in the same stream"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime"_s,
			"The time of image creation"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/year"_s,
			"The full year (e.g., 1967, not 67)"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/month"_s,
			"The month, with January = 1"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/day"_s,
			"The day of the month"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/hour"_s,
			"The hour from 0 to 23"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/minute"_s,
			"The minute from 0 to 59"_s
		}),
		$$new($ObjectArray, {
			"ImageCreationTime/second"_s,
			"The second from 0 to 60 (60 = leap second)"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime"_s,
			"The time of the last image modification"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/year"_s,
			"The full year (e.g., 1967, not 67)"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/month"_s,
			"The month, with January = 1"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/day"_s,
			"The day of the month"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/hour"_s,
			"The hour from 0 to 23"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/minute"_s,
			"The minute from 0 to 59"_s
		}),
		$$new($ObjectArray, {
			"ImageModificationTime/second"_s,
			"The second from 0 to 60 (60 = leap second)"_s
		}),
		$$new($ObjectArray, {
			"Text"_s,
			"Text information"_s
		}),
		$$new($ObjectArray, {
			"TextEntry"_s,
			"A text entry"_s
		}),
		$$new($ObjectArray, {
			"TextEntry/keyword"_s,
			"A keyword associated with the text entry"_s
		}),
		$$new($ObjectArray, {
			"TextEntry/value"_s,
			"the text entry"_s
		}),
		$$new($ObjectArray, {
			"TextEntry/language"_s,
			"The language of the text"_s
		}),
		$$new($ObjectArray, {
			"TextEntry/encoding"_s,
			"The encoding of the text"_s
		}),
		$$new($ObjectArray, {
			"TextEntry/compression"_s,
			"The method used to compress the text"_s
		}),
		$$new($ObjectArray, {
			"Transparency"_s,
			"Transparency information"_s
		}),
		$$new($ObjectArray, {
			"Alpha"_s,
			"The type of alpha information contained in the image"_s
		}),
		$$new($ObjectArray, {
			"TransparentIndex"_s,
			"A palette index to be treated as transparent"_s
		}),
		$$new($ObjectArray, {
			"TransparentColor"_s,
			"An RGB color to be treated as transparent"_s
		}),
		$$new($ObjectArray, {
			"TransparentColor/red"_s,
			"The red channel of the transparent color"_s
		}),
		$$new($ObjectArray, {
			"TransparentColor/green"_s,
			"The green channel of the transparent color"_s
		}),
		$$new($ObjectArray, {
			"TransparentColor/blue"_s,
			"The blue channel of the transparent color"_s
		}),
		$$new($ObjectArray, {
			"TileTransparencies"_s,
			"A list of completely transparent tiles"_s
		}),
		$$new($ObjectArray, {
			"TransparentTile"_s,
			"The index of a completely transparent tile"_s
		}),
		$$new($ObjectArray, {
			"TransparentTile/x"_s,
			"The tile\'s X index"_s
		}),
		$$new($ObjectArray, {
			"TransparentTile/y"_s,
			"The tile\'s Y index"_s
		}),
		$$new($ObjectArray, {
			"TileOpacities"_s,
			"A list of completely opaque tiles"_s
		}),
		$$new($ObjectArray, {
			"OpaqueTile"_s,
			"The index of a completely opaque tile"_s
		}),
		$$new($ObjectArray, {
			"OpaqueTile/x"_s,
			"The tile\'s X index"_s
		}),
		$$new($ObjectArray, {
			"OpaqueTile/y"_s,
			"The tile\'s Y index"_s
		})
	});
}

StandardMetadataFormatResources::StandardMetadataFormatResources() {
}

$Class* StandardMetadataFormatResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StandardMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(StandardMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.StandardMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StandardMetadataFormatResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardMetadataFormatResources);
	});
	return class$;
}

$Class* StandardMetadataFormatResources::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com