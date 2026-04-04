#include <sun/awt/windows/WDataTransferer.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <java/nio/charset/Charset.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/SortedMap.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/awt/windows/EHTMLReadMode.h>
#include <sun/awt/windows/HTMLCodec.h>
#include <sun/awt/windows/WToolkitThreadBlockedHandler.h>
#include <jcpp.h>

#undef ALLBITS
#undef CFSTR_INETURL
#undef CF_DIB
#undef CF_ENHMETAFILE
#undef CF_FILEGROUPDESCRIPTORA
#undef CF_FILEGROUPDESCRIPTORW
#undef CF_HDROP
#undef CF_HTML
#undef CF_JFIF
#undef CF_LOCALE
#undef CF_METAFILEPICT
#undef CF_PNG
#undef CF_TEXT
#undef L_CF_LOCALE
#undef OPAQUE
#undef TYPE_BYTE
#undef UNICODE_NULL_TERMINATOR

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $FileArray = $Array<::java::io::File>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Charset = ::java::nio::charset::Charset;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $SortedMap = ::java::util::SortedMap;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $EHTMLReadMode = ::sun::awt::windows::EHTMLReadMode;
using $HTMLCodec = ::sun::awt::windows::HTMLCodec;
using $WToolkitThreadBlockedHandler = ::sun::awt::windows::WToolkitThreadBlockedHandler;

namespace sun {
	namespace awt {
		namespace windows {

$StringArray* WDataTransferer::predefinedClipboardNames = nullptr;
$Map* WDataTransferer::predefinedClipboardNameMap = nullptr;
int64_t WDataTransferer::CF_HTML = 0;
int64_t WDataTransferer::CFSTR_INETURL = 0;
int64_t WDataTransferer::CF_PNG = 0;
int64_t WDataTransferer::CF_JFIF = 0;
int64_t WDataTransferer::CF_FILEGROUPDESCRIPTORW = 0;
int64_t WDataTransferer::CF_FILEGROUPDESCRIPTORA = 0;
$Long* WDataTransferer::L_CF_LOCALE = nullptr;
$DirectColorModel* WDataTransferer::directColorModel = nullptr;
$ints* WDataTransferer::bandmasks = nullptr;
WDataTransferer* WDataTransferer::transferer = nullptr;
$bytes* WDataTransferer::UNICODE_NULL_TERMINATOR = nullptr;

void WDataTransferer::init$() {
	$DataTransferer::init$();
	$set(this, handler, $new($WToolkitThreadBlockedHandler));
}

WDataTransferer* WDataTransferer::getInstanceImpl() {
	$init(WDataTransferer);
	$synchronized(class$) {
		if (WDataTransferer::transferer == nullptr) {
			$assignStatic(WDataTransferer::transferer, $new(WDataTransferer));
		}
		return WDataTransferer::transferer;
	}
}

$SortedMap* WDataTransferer::getFormatsForFlavors($DataFlavorArray* flavors, $FlavorTable* map) {
	$var($SortedMap, retval, $DataTransferer::getFormatsForFlavors(flavors, map));
	$nc(retval)->remove(WDataTransferer::L_CF_LOCALE);
	return retval;
}

$String* WDataTransferer::getDefaultUnicodeEncoding() {
	return "utf-16le"_s;
}

$bytes* WDataTransferer::translateTransferable($Transferable* contents, $DataFlavor* flavor, int64_t format) {
	$useLocalObjectStack();
	$var($bytes, bytes, nullptr);
	if (format == WDataTransferer::CF_HTML) {
		$init($DataFlavor);
		if ($nc(contents)->isDataFlavorSupported($DataFlavor::selectionHtmlFlavor)) {
			$assign(bytes, $DataTransferer::translateTransferable(contents, $DataFlavor::selectionHtmlFlavor, format));
		} else if (contents->isDataFlavorSupported($DataFlavor::allHtmlFlavor)) {
			$assign(bytes, $DataTransferer::translateTransferable(contents, $DataFlavor::allHtmlFlavor, format));
		} else {
			$assign(bytes, $HTMLCodec::convertToHTMLFormat($($DataTransferer::translateTransferable(contents, flavor, format))));
		}
	} else {
		$assign(bytes, $DataTransferer::translateTransferable(contents, flavor, format));
	}
	return bytes;
}

$Object* WDataTransferer::translateStream($InputStream* str$renamed, $DataFlavor* flavor, int64_t format, $Transferable* localeTransferable) {
	$useLocalObjectStack();
	$var($InputStream, str, str$renamed);
	if (format == WDataTransferer::CF_HTML && $nc(flavor)->isFlavorTextType()) {
		$assign(str, $new($HTMLCodec, str, $($EHTMLReadMode::getEHTMLReadMode(flavor))));
	}
	return $DataTransferer::translateStream(str, flavor, format, localeTransferable);
}

$Object* WDataTransferer::translateBytes($bytes* bytes, $DataFlavor* flavor, int64_t format, $Transferable* localeTransferable) {
	$useLocalObjectStack();
	if (format == WDataTransferer::CF_FILEGROUPDESCRIPTORA || format == WDataTransferer::CF_FILEGROUPDESCRIPTORW) {
		$init($DataFlavor);
		if (bytes == nullptr || !$nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
			$throwNew($IOException, "data translation failed"_s);
		}
		$var($String, st, $new($String, bytes, 0, $nc(bytes)->length, "UTF-16LE"_s));
		$var($StringArray, filenames, st->split($cstr({'\0'})));
		if (0 == filenames->length) {
			return nullptr;
		}
		$var($FileArray, files, $new($FileArray, filenames->length));
		for (int32_t i = 0; i < filenames->length; ++i) {
			files->set(i, $$new($File, filenames->get(i)));
			$nc(files->get(i))->deleteOnExit();
		}
		return $Arrays::asList(files);
	}
	$load($URL);
	if (format == WDataTransferer::CFSTR_INETURL && $URL::class$->equals($nc(flavor)->getRepresentationClass())) {
		$var($String, charset, $$nc($Charset::defaultCharset())->name());
		$init($DataTransferer);
		if (localeTransferable != nullptr && localeTransferable->isDataFlavorSupported($DataTransferer::javaTextEncodingFlavor)) {
			try {
				$assign(charset, $new($String, $$cast($bytes, localeTransferable->getTransferData($DataTransferer::javaTextEncodingFlavor)), "UTF-8"_s));
			} catch ($UnsupportedFlavorException& cannotHappen) {
			}
		}
		return $new($URL, $$new($String, bytes, charset));
	}
	return $DataTransferer::translateBytes(bytes, flavor, format, localeTransferable);
}

bool WDataTransferer::isLocaleDependentTextFormat(int64_t format) {
	return format == WDataTransferer::CF_TEXT || format == WDataTransferer::CFSTR_INETURL;
}

bool WDataTransferer::isFileFormat(int64_t format) {
	return format == WDataTransferer::CF_HDROP || format == WDataTransferer::CF_FILEGROUPDESCRIPTORA || format == WDataTransferer::CF_FILEGROUPDESCRIPTORW;
}

$Long* WDataTransferer::getFormatForNativeAsLong($String* str) {
	$var($Long, format, $cast($Long, $nc(WDataTransferer::predefinedClipboardNameMap)->get(str)));
	if (format == nullptr) {
		$assign(format, $Long::valueOf(registerClipboardFormat(str)));
	}
	return format;
}

$String* WDataTransferer::getNativeForFormat(int64_t format) {
	return (format < WDataTransferer::predefinedClipboardNames->length) ? WDataTransferer::predefinedClipboardNames->get((int32_t)format) : getClipboardFormatName(format);
}

$ToolkitThreadBlockedHandler* WDataTransferer::getToolkitThreadBlockedHandler() {
	return this->handler;
}

int64_t WDataTransferer::registerClipboardFormat($String* str) {
	$init(WDataTransferer);
	$prepareNativeStatic(registerClipboardFormat, int64_t, $String* str);
	int64_t $ret = $invokeNativeStatic(str);
	$finishNativeStatic();
	return $ret;
}

$String* WDataTransferer::getClipboardFormatName(int64_t format) {
	$init(WDataTransferer);
	$prepareNativeStatic(getClipboardFormatName, $String*, int64_t format);
	$var($String, $ret, $invokeNativeStaticObject(format));
	$finishNativeStatic();
	return $ret;
}

bool WDataTransferer::isImageFormat(int64_t format) {
	return format == WDataTransferer::CF_DIB || format == WDataTransferer::CF_ENHMETAFILE || format == WDataTransferer::CF_METAFILEPICT || format == WDataTransferer::CF_PNG || format == WDataTransferer::CF_JFIF;
}

$bytes* WDataTransferer::imageToPlatformBytes($Image* image, int64_t format) {
	$useLocalObjectStack();
	$var($String, mimeType, nullptr);
	if (format == WDataTransferer::CF_PNG) {
		$assign(mimeType, "image/png"_s);
	} else if (format == WDataTransferer::CF_JFIF) {
		$assign(mimeType, "image/jpeg"_s);
	}
	if (mimeType != nullptr) {
		return imageToStandardBytes(image, mimeType);
	}
	int32_t width = 0;
	int32_t height = 0;
	if ($instanceOf($ToolkitImage, image)) {
		$var($ImageRepresentation, ir, $cast($ToolkitImage, image)->getImageRep());
		$nc(ir)->reconstruct($ImageObserver::ALLBITS);
		width = ir->getWidth();
		height = ir->getHeight();
	} else {
		width = $nc(image)->getWidth(nullptr);
		height = image->getHeight(nullptr);
	}
	int32_t mod = (width * 3) % 4;
	int32_t pad = mod > 0 ? 4 - mod : 0;
	$var($ColorSpace, cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	$var($ints, nBits, $new($ints, {
		8,
		8,
		8
	}));
	$var($ints, bOffs, $new($ints, {
		2,
		1,
		0
	}));
	$var($ColorModel, colorModel, $new($ComponentColorModel, cs, nBits, false, false, $Transparency::OPAQUE, $DataBuffer::TYPE_BYTE));
	$var($WritableRaster, raster, $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, width, height, width * 3 + pad, 3, bOffs, nullptr));
	$var($BufferedImage, bimage, $new($BufferedImage, colorModel, raster, false, nullptr));
	$var($AffineTransform, imageFlipTransform, $new($AffineTransform, (float)1, 0, 0, -1, 0, (float)height));
	$var($Graphics2D, g2d, bimage->createGraphics());
	$var($Throwable, var$0, nullptr);
	try {
		$nc(g2d)->drawImage(image, imageFlipTransform, nullptr);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$nc(g2d)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	$var($DataBufferByte, buffer, $cast($DataBufferByte, $nc(raster)->getDataBuffer()));
	$var($bytes, imageData, $nc(buffer)->getData());
	return imageDataToPlatformImageBytes(imageData, width, height, format);
}

$ByteArrayOutputStream* WDataTransferer::convertFileListToBytes($ArrayList* fileList) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	if ($nc(fileList)->isEmpty()) {
		bos->write(WDataTransferer::UNICODE_NULL_TERMINATOR);
	} else {
		for (int32_t i = 0; i < fileList->size(); ++i) {
			$var($bytes, bytes, $$sure($String, fileList->get(i))->getBytes($(getDefaultUnicodeEncoding())));
			bos->write(bytes, 0, bytes->length);
			bos->write(WDataTransferer::UNICODE_NULL_TERMINATOR);
		}
	}
	bos->write(WDataTransferer::UNICODE_NULL_TERMINATOR);
	return bos;
}

$bytes* WDataTransferer::imageDataToPlatformImageBytes($bytes* imageData, int32_t width, int32_t height, int64_t format) {
	$prepareNative(imageDataToPlatformImageBytes, $bytes*, $bytes* imageData, int32_t width, int32_t height, int64_t format);
	$var($bytes, $ret, $invokeNativeObject(imageData, width, height, format));
	$finishNative();
	return $ret;
}

$Image* WDataTransferer::platformImageBytesToImage($bytes* bytes, int64_t format) {
	$useLocalObjectStack();
	$var($String, mimeType, nullptr);
	if (format == WDataTransferer::CF_PNG) {
		$assign(mimeType, "image/png"_s);
	} else if (format == WDataTransferer::CF_JFIF) {
		$assign(mimeType, "image/jpeg"_s);
	}
	if (mimeType != nullptr) {
		return standardImageBytesToImage(bytes, mimeType);
	}
	$var($ints, imageData, platformImageBytesToImageData(bytes, format));
	if (imageData == nullptr) {
		$throwNew($IOException, "data translation failed"_s);
	}
	int32_t len = $nc(imageData)->length - 2;
	int32_t width = imageData->get(len);
	int32_t height = imageData->get(len + 1);
	$var($DataBufferInt, buffer, $new($DataBufferInt, imageData, len));
	$var($WritableRaster, raster, $Raster::createPackedRaster(buffer, width, height, width, WDataTransferer::bandmasks, nullptr));
	return $new($BufferedImage, WDataTransferer::directColorModel, raster, false, nullptr);
}

$ints* WDataTransferer::platformImageBytesToImageData($bytes* bytes, int64_t format) {
	$prepareNative(platformImageBytesToImageData, $ints*, $bytes* bytes, int64_t format);
	$var($ints, $ret, $invokeNativeObject(bytes, format));
	$finishNative();
	return $ret;
}

$StringArray* WDataTransferer::dragQueryFile($bytes* bytes) {
	$prepareNative(dragQueryFile, $StringArray*, $bytes* bytes);
	$var($StringArray, $ret, $invokeNativeObject(bytes));
	$finishNative();
	return $ret;
}

void WDataTransferer::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(WDataTransferer::predefinedClipboardNames, $new($StringArray, {
		""_s,
		"TEXT"_s,
		"BITMAP"_s,
		"METAFILEPICT"_s,
		"SYLK"_s,
		"DIF"_s,
		"TIFF"_s,
		"OEM TEXT"_s,
		"DIB"_s,
		"PALETTE"_s,
		"PENDATA"_s,
		"RIFF"_s,
		"WAVE"_s,
		"UNICODE TEXT"_s,
		"ENHMETAFILE"_s,
		"HDROP"_s,
		"LOCALE"_s,
		"DIBV5"_s
	}));
	{
		$var($Map, tempMap, $new($HashMap, WDataTransferer::predefinedClipboardNames->length, 1.0f));
		for (int32_t i = 1; i < WDataTransferer::predefinedClipboardNames->length; ++i) {
			tempMap->put(WDataTransferer::predefinedClipboardNames->get(i), $($Long::valueOf(i)));
		}
		$assignStatic(WDataTransferer::predefinedClipboardNameMap, $Collections::synchronizedMap(tempMap));
	}
	WDataTransferer::CF_HTML = WDataTransferer::registerClipboardFormat("HTML Format"_s);
	WDataTransferer::CFSTR_INETURL = WDataTransferer::registerClipboardFormat("UniformResourceLocator"_s);
	WDataTransferer::CF_PNG = WDataTransferer::registerClipboardFormat("PNG"_s);
	WDataTransferer::CF_JFIF = WDataTransferer::registerClipboardFormat("JFIF"_s);
	WDataTransferer::CF_FILEGROUPDESCRIPTORW = WDataTransferer::registerClipboardFormat("FileGroupDescriptorW"_s);
	WDataTransferer::CF_FILEGROUPDESCRIPTORA = WDataTransferer::registerClipboardFormat("FileGroupDescriptor"_s);
	$assignStatic(WDataTransferer::L_CF_LOCALE, $cast($Long, $nc(WDataTransferer::predefinedClipboardNameMap)->get(WDataTransferer::predefinedClipboardNames->get(WDataTransferer::CF_LOCALE))));
	$assignStatic(WDataTransferer::directColorModel, $new($DirectColorModel, 24, 0x00ff0000, 0x0000ff00, 255));
	$assignStatic(WDataTransferer::bandmasks, $new($ints, {
		WDataTransferer::directColorModel->getRedMask(),
		WDataTransferer::directColorModel->getGreenMask(),
		WDataTransferer::directColorModel->getBlueMask()
	}));
	$assignStatic(WDataTransferer::UNICODE_NULL_TERMINATOR, $new($bytes, {
		0,
		0
	}));
}

WDataTransferer::WDataTransferer() {
}

$Class* WDataTransferer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"predefinedClipboardNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, predefinedClipboardNames)},
		{"predefinedClipboardNameMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Long;>;", $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, predefinedClipboardNameMap)},
		{"CF_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_TEXT)},
		{"CF_METAFILEPICT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_METAFILEPICT)},
		{"CF_DIB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_DIB)},
		{"CF_ENHMETAFILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_ENHMETAFILE)},
		{"CF_HDROP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_HDROP)},
		{"CF_LOCALE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WDataTransferer, CF_LOCALE)},
		{"CF_HTML", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CF_HTML)},
		{"CFSTR_INETURL", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CFSTR_INETURL)},
		{"CF_PNG", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CF_PNG)},
		{"CF_JFIF", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CF_JFIF)},
		{"CF_FILEGROUPDESCRIPTORW", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CF_FILEGROUPDESCRIPTORW)},
		{"CF_FILEGROUPDESCRIPTORA", "J", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WDataTransferer, CF_FILEGROUPDESCRIPTORA)},
		{"L_CF_LOCALE", "Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, L_CF_LOCALE)},
		{"directColorModel", "Ljava/awt/image/DirectColorModel;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, directColorModel)},
		{"bandmasks", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, bandmasks)},
		{"transferer", "Lsun/awt/windows/WDataTransferer;", nullptr, $PRIVATE | $STATIC, $staticField(WDataTransferer, transferer)},
		{"handler", "Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PRIVATE | $FINAL, $field(WDataTransferer, handler)},
		{"UNICODE_NULL_TERMINATOR", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDataTransferer, UNICODE_NULL_TERMINATOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(WDataTransferer, init$, void)},
		{"convertFileListToBytes", "(Ljava/util/ArrayList;)Ljava/io/ByteArrayOutputStream;", "(Ljava/util/ArrayList<Ljava/lang/String;>;)Ljava/io/ByteArrayOutputStream;", $PROTECTED, $virtualMethod(WDataTransferer, convertFileListToBytes, $ByteArrayOutputStream*, $ArrayList*), "java.io.IOException"},
		{"dragQueryFile", "([B)[Ljava/lang/String;", nullptr, $PROTECTED | $NATIVE, $virtualMethod(WDataTransferer, dragQueryFile, $StringArray*, $bytes*)},
		{"getClipboardFormatName", "(J)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDataTransferer, getClipboardFormatName, $String*, int64_t)},
		{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, getDefaultUnicodeEncoding, $String*)},
		{"getFormatForNativeAsLong", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PROTECTED, $virtualMethod(WDataTransferer, getFormatForNativeAsLong, $Long*, $String*)},
		{"getFormatsForFlavors", "([Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap;", "([Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC, $virtualMethod(WDataTransferer, getFormatsForFlavors, $SortedMap*, $DataFlavorArray*, $FlavorTable*)},
		{"getInstanceImpl", "()Lsun/awt/windows/WDataTransferer;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(WDataTransferer, getInstanceImpl, WDataTransferer*)},
		{"getNativeForFormat", "(J)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(WDataTransferer, getNativeForFormat, $String*, int64_t)},
		{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, getToolkitThreadBlockedHandler, $ToolkitThreadBlockedHandler*)},
		{"imageDataToPlatformImageBytes", "([BIIJ)[B", nullptr, $PRIVATE | $NATIVE, $method(WDataTransferer, imageDataToPlatformImageBytes, $bytes*, $bytes*, int32_t, int32_t, int64_t)},
		{"imageToPlatformBytes", "(Ljava/awt/Image;J)[B", nullptr, $PROTECTED, $virtualMethod(WDataTransferer, imageToPlatformBytes, $bytes*, $Image*, int64_t), "java.io.IOException"},
		{"isFileFormat", "(J)Z", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, isFileFormat, bool, int64_t)},
		{"isImageFormat", "(J)Z", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, isImageFormat, bool, int64_t)},
		{"isLocaleDependentTextFormat", "(J)Z", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, isLocaleDependentTextFormat, bool, int64_t)},
		{"platformImageBytesToImage", "([BJ)Ljava/awt/Image;", nullptr, $PROTECTED, $virtualMethod(WDataTransferer, platformImageBytesToImage, $Image*, $bytes*, int64_t), "java.io.IOException"},
		{"platformImageBytesToImageData", "([BJ)[I", nullptr, $PRIVATE | $NATIVE, $method(WDataTransferer, platformImageBytesToImageData, $ints*, $bytes*, int64_t), "java.io.IOException"},
		{"registerClipboardFormat", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(WDataTransferer, registerClipboardFormat, int64_t, $String*)},
		{"translateBytes", "([BLjava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, translateBytes, $Object*, $bytes*, $DataFlavor*, int64_t, $Transferable*), "java.io.IOException"},
		{"translateStream", "(Ljava/io/InputStream;Ljava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, translateStream, $Object*, $InputStream*, $DataFlavor*, int64_t, $Transferable*), "java.io.IOException"},
		{"translateTransferable", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/DataFlavor;J)[B", nullptr, $PUBLIC, $virtualMethod(WDataTransferer, translateTransferable, $bytes*, $Transferable*, $DataFlavor*, int64_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WDataTransferer",
		"sun.awt.datatransfer.DataTransferer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WDataTransferer, name, initialize, &classInfo$$, WDataTransferer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WDataTransferer);
	});
	return class$;
}

$Class* WDataTransferer::class$ = nullptr;

		} // windows
	} // awt
} // sun