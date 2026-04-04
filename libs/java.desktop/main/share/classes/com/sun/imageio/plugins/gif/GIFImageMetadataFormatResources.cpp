#include <com/sun/imageio/plugins/gif/GIFImageMetadataFormatResources.h>
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

void GIFImageMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* GIFImageMetadataFormatResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ImageDescriptor"_s,
			"The image descriptor"_s
		}),
		$$new($ObjectArray, {
			"LocalColorTable"_s,
			"The local color table"_s
		}),
		$$new($ObjectArray, {
			"ColorTableEntry"_s,
			"A local color table entry"_s
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension"_s,
			"A graphic control extension"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension"_s,
			"A plain text (text grid) extension"_s
		}),
		$$new($ObjectArray, {
			"ApplicationExtensions"_s,
			"A set of application extensions"_s
		}),
		$$new($ObjectArray, {
			"ApplicationExtension"_s,
			"An application extension"_s
		}),
		$$new($ObjectArray, {
			"CommentExtensions"_s,
			"A set of comments"_s
		}),
		$$new($ObjectArray, {
			"CommentExtension"_s,
			"A comment"_s
		}),
		$$new($ObjectArray, {
			"ImageDescriptor/imageLeftPosition"_s,
			"The X offset of the image relative to the screen origin"_s
		}),
		$$new($ObjectArray, {
			"ImageDescriptor/imageTopPosition"_s,
			"The Y offset of the image relative to the screen origin"_s
		}),
		$$new($ObjectArray, {
			"ImageDescriptor/imageWidth"_s,
			"The width of the image"_s
		}),
		$$new($ObjectArray, {
			"ImageDescriptor/imageHeight"_s,
			"The height of the image"_s
		}),
		$$new($ObjectArray, {
			"ImageDescriptor/interlaceFlag"_s,
			"True if the image is stored using interlacing"_s
		}),
		$$new($ObjectArray, {
			"LocalColorTable/sizeOfLocalColorTable"_s,
			"The number of entries in the local color table"_s
		}),
		$$new($ObjectArray, {
			"LocalColorTable/sortFlag"_s,
			"True if the local color table is sorted by frequency"_s
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
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension/disposalMethod"_s,
			"The disposal method for this frame"_s
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension/userInputFlag"_s,
			"True if the frame should be advanced based on user input"_s
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension/transparentColorFlag"_s,
			"True if a transparent color exists"_s
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension/delayTime"_s,
			"The time to delay between frames, in hundredths of a second"_s
		}),
		$$new($ObjectArray, {
			"GraphicControlExtension/transparentColorIndex"_s,
			"The transparent color, if transparentColorFlag is true"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textGridLeft"_s,
			"The X offset of the text grid"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textGridTop"_s,
			"The Y offset of the text grid"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textGridWidth"_s,
			"The number of columns in the text grid"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textGridHeight"_s,
			"The number of rows in the text grid"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/characterCellWidth"_s,
			"The width of a character cell"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/characterCellHeight"_s,
			"The height of a character cell"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textForegroundColor"_s,
			"The text foreground color index"_s
		}),
		$$new($ObjectArray, {
			"PlainTextExtension/textBackgroundColor"_s,
			"The text background color index"_s
		}),
		$$new($ObjectArray, {
			"ApplicationExtension/applicationID"_s,
			"The application ID"_s
		}),
		$$new($ObjectArray, {
			"ApplicationExtension/authenticationCode"_s,
			"The authentication code"_s
		}),
		$$new($ObjectArray, {
			"CommentExtension/value"_s,
			"The comment"_s
		})
	});
}

GIFImageMetadataFormatResources::GIFImageMetadataFormatResources() {
}

$Class* GIFImageMetadataFormatResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GIFImageMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(GIFImageMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.gif.GIFImageMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GIFImageMetadataFormatResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GIFImageMetadataFormatResources);
	});
	return class$;
}

$Class* GIFImageMetadataFormatResources::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com