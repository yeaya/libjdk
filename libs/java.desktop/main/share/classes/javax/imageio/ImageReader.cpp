#include <javax/imageio/ImageReader.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Module.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/event/IIOReadProgressListener.h>
#include <javax/imageio/event/IIOReadUpdateListener.h>
#include <javax/imageio/event/IIOReadWarningListener.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $LocaleArray = $Array<::java::util::Locale>;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOReadProgressListener = ::javax::imageio::event::IIOReadProgressListener;
using $IIOReadUpdateListener = ::javax::imageio::event::IIOReadUpdateListener;
using $IIOReadWarningListener = ::javax::imageio::event::IIOReadWarningListener;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace javax {
	namespace imageio {

$FieldInfo _ImageReader_FieldInfo_[] = {
	{"originatingProvider", "Ljavax/imageio/spi/ImageReaderSpi;", nullptr, $PROTECTED, $field(ImageReader, originatingProvider)},
	{"input", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(ImageReader, input)},
	{"seekForwardOnly", "Z", nullptr, $PROTECTED, $field(ImageReader, seekForwardOnly)},
	{"ignoreMetadata", "Z", nullptr, $PROTECTED, $field(ImageReader, ignoreMetadata)},
	{"minIndex", "I", nullptr, $PROTECTED, $field(ImageReader, minIndex)},
	{"availableLocales", "[Ljava/util/Locale;", nullptr, $PROTECTED, $field(ImageReader, availableLocales)},
	{"locale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(ImageReader, locale)},
	{"warningListeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/event/IIOReadWarningListener;>;", $PROTECTED, $field(ImageReader, warningListeners)},
	{"warningLocales", "Ljava/util/List;", "Ljava/util/List<Ljava/util/Locale;>;", $PROTECTED, $field(ImageReader, warningLocales)},
	{"progressListeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/event/IIOReadProgressListener;>;", $PROTECTED, $field(ImageReader, progressListeners)},
	{"updateListeners", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/event/IIOReadUpdateListener;>;", $PROTECTED, $field(ImageReader, updateListeners)},
	{"abortFlag", "Z", nullptr, $PRIVATE, $field(ImageReader, abortFlag)},
	{}
};

$MethodInfo _ImageReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PROTECTED, $method(ImageReader, init$, void, $ImageReaderSpi*)},
	{"abort", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ImageReader, abort, void)},
	{"abortRequested", "()Z", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(ImageReader, abortRequested, bool)},
	{"addIIOReadProgressListener", "(Ljavax/imageio/event/IIOReadProgressListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, addIIOReadProgressListener, void, $IIOReadProgressListener*)},
	{"addIIOReadUpdateListener", "(Ljavax/imageio/event/IIOReadUpdateListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, addIIOReadUpdateListener, void, $IIOReadUpdateListener*)},
	{"addIIOReadWarningListener", "(Ljavax/imageio/event/IIOReadWarningListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, addIIOReadWarningListener, void, $IIOReadWarningListener*)},
	{"addToList", "(Ljava/util/List;Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/List<TT;>;TT;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(ImageReader, addToList, $List*, $List*, Object$*)},
	{"canReadRaster", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, canReadRaster, bool)},
	{"checkReadParamBandSettings", "(Ljavax/imageio/ImageReadParam;II)V", nullptr, $PROTECTED | $STATIC, $staticMethod(ImageReader, checkReadParamBandSettings, void, $ImageReadParam*, int32_t, int32_t)},
	{"clearAbortRequest", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(ImageReader, clearAbortRequest, void)},
	{"computeRegions", "(Ljavax/imageio/ImageReadParam;IILjava/awt/image/BufferedImage;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(ImageReader, computeRegions, void, $ImageReadParam*, int32_t, int32_t, $BufferedImage*, $Rectangle*, $Rectangle*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(ImageReader, dispose, void)},
	{"getAspectRatio", "(I)F", nullptr, $PUBLIC, $virtualMethod(ImageReader, getAspectRatio, float, int32_t), "java.io.IOException"},
	{"getAvailableLocales", "()[Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getAvailableLocales, $LocaleArray*)},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getDefaultReadParam, $ImageReadParam*)},
	{"getDestination", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator;II)Ljava/awt/image/BufferedImage;", "(Ljavax/imageio/ImageReadParam;Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;II)Ljava/awt/image/BufferedImage;", $PROTECTED | $STATIC, $staticMethod(ImageReader, getDestination, $BufferedImage*, $ImageReadParam*, $Iterator*, int32_t, int32_t), "javax.imageio.IIOException"},
	{"getFormatName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getFormatName, $String*), "java.io.IOException"},
	{"getHeight", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getHeight, int32_t, int32_t), "java.io.IOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getImageMetadata, $IIOMetadata*, int32_t), "java.io.IOException"},
	{"getImageMetadata", "(ILjava/lang/String;Ljava/util/Set;)Ljavax/imageio/metadata/IIOMetadata;", "(ILjava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljavax/imageio/metadata/IIOMetadata;", $PUBLIC, $virtualMethod(ImageReader, getImageMetadata, $IIOMetadata*, int32_t, $String*, $Set*), "java.io.IOException"},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getImageTypes, $Iterator*, int32_t), "java.io.IOException"},
	{"getInput", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getInput, $Object*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getLocale, $Locale*)},
	{"getMetadata", "(Ljava/lang/String;Ljava/util/Set;ZI)Ljavax/imageio/metadata/IIOMetadata;", "(Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;ZI)Ljavax/imageio/metadata/IIOMetadata;", $PRIVATE, $method(ImageReader, getMetadata, $IIOMetadata*, $String*, $Set*, bool, int32_t), "java.io.IOException"},
	{"getMinIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getMinIndex, int32_t)},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getNumImages, int32_t, bool), "java.io.IOException"},
	{"getNumThumbnails", "(I)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getNumThumbnails, int32_t, int32_t), "java.io.IOException"},
	{"getOriginatingProvider", "()Ljavax/imageio/spi/ImageReaderSpi;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getOriginatingProvider, $ImageReaderSpi*)},
	{"getRawImageType", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC, $virtualMethod(ImageReader, getRawImageType, $ImageTypeSpecifier*, int32_t), "java.io.IOException"},
	{"getSourceRegion", "(Ljavax/imageio/ImageReadParam;II)Ljava/awt/Rectangle;", nullptr, $PROTECTED | $STATIC, $staticMethod(ImageReader, getSourceRegion, $Rectangle*, $ImageReadParam*, int32_t, int32_t)},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getStreamMetadata, $IIOMetadata*), "java.io.IOException"},
	{"getStreamMetadata", "(Ljava/lang/String;Ljava/util/Set;)Ljavax/imageio/metadata/IIOMetadata;", "(Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;)Ljavax/imageio/metadata/IIOMetadata;", $PUBLIC, $virtualMethod(ImageReader, getStreamMetadata, $IIOMetadata*, $String*, $Set*), "java.io.IOException"},
	{"getThumbnailHeight", "(II)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getThumbnailHeight, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"getThumbnailWidth", "(II)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getThumbnailWidth, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"getTileGridXOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getTileGridXOffset, int32_t, int32_t), "java.io.IOException"},
	{"getTileGridYOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getTileGridYOffset, int32_t, int32_t), "java.io.IOException"},
	{"getTileHeight", "(I)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getTileHeight, int32_t, int32_t), "java.io.IOException"},
	{"getTileWidth", "(I)I", nullptr, $PUBLIC, $virtualMethod(ImageReader, getTileWidth, int32_t, int32_t), "java.io.IOException"},
	{"getWidth", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, getWidth, int32_t, int32_t), "java.io.IOException"},
	{"hasThumbnails", "(I)Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, hasThumbnails, bool, int32_t), "java.io.IOException"},
	{"isIgnoringMetadata", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, isIgnoringMetadata, bool)},
	{"isImageTiled", "(I)Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, isImageTiled, bool, int32_t), "java.io.IOException"},
	{"isRandomAccessEasy", "(I)Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, isRandomAccessEasy, bool, int32_t), "java.io.IOException"},
	{"isSeekForwardOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, isSeekForwardOnly, bool)},
	{"processImageComplete", "()V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processImageComplete, void)},
	{"processImageProgress", "(F)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processImageProgress, void, float)},
	{"processImageStarted", "(I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processImageStarted, void, int32_t)},
	{"processImageUpdate", "(Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processImageUpdate, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"processPassComplete", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processPassComplete, void, $BufferedImage*)},
	{"processPassStarted", "(Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processPassStarted, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"processReadAborted", "()V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processReadAborted, void)},
	{"processSequenceComplete", "()V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processSequenceComplete, void)},
	{"processSequenceStarted", "(I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processSequenceStarted, void, int32_t)},
	{"processThumbnailComplete", "()V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailComplete, void)},
	{"processThumbnailPassComplete", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailPassComplete, void, $BufferedImage*)},
	{"processThumbnailPassStarted", "(Ljava/awt/image/BufferedImage;IIIIIII[I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailPassStarted, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"processThumbnailProgress", "(F)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailProgress, void, float)},
	{"processThumbnailStarted", "(II)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailStarted, void, int32_t, int32_t)},
	{"processThumbnailUpdate", "(Ljava/awt/image/BufferedImage;IIIIII[I)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processThumbnailUpdate, void, $BufferedImage*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, $ints*)},
	{"processWarningOccurred", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processWarningOccurred, void, $String*)},
	{"processWarningOccurred", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(ImageReader, processWarningOccurred, void, $String*, $String*)},
	{"read", "(I)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(ImageReader, read, $BufferedImage*, int32_t), "java.io.IOException"},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageReader, read, $BufferedImage*, int32_t, $ImageReadParam*), "java.io.IOException"},
	{"readAll", "(ILjavax/imageio/ImageReadParam;)Ljavax/imageio/IIOImage;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readAll, $IIOImage*, int32_t, $ImageReadParam*), "java.io.IOException"},
	{"readAll", "(Ljava/util/Iterator;)Ljava/util/Iterator;", "(Ljava/util/Iterator<+Ljavax/imageio/ImageReadParam;>;)Ljava/util/Iterator<Ljavax/imageio/IIOImage;>;", $PUBLIC, $virtualMethod(ImageReader, readAll, $Iterator*, $Iterator*), "java.io.IOException"},
	{"readAsRenderedImage", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readAsRenderedImage, $RenderedImage*, int32_t, $ImageReadParam*), "java.io.IOException"},
	{"readRaster", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readRaster, $Raster*, int32_t, $ImageReadParam*), "java.io.IOException"},
	{"readThumbnail", "(II)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readThumbnail, $BufferedImage*, int32_t, int32_t), "java.io.IOException"},
	{"readTile", "(III)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readTile, $BufferedImage*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"readTileRaster", "(III)Ljava/awt/image/Raster;", nullptr, $PUBLIC, $virtualMethod(ImageReader, readTileRaster, $Raster*, int32_t, int32_t, int32_t), "java.io.IOException"},
	{"readerSupportsThumbnails", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageReader, readerSupportsThumbnails, bool)},
	{"removeAllIIOReadProgressListeners", "()V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeAllIIOReadProgressListeners, void)},
	{"removeAllIIOReadUpdateListeners", "()V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeAllIIOReadUpdateListeners, void)},
	{"removeAllIIOReadWarningListeners", "()V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeAllIIOReadWarningListeners, void)},
	{"removeFromList", "(Ljava/util/List;Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>(Ljava/util/List<TT;>;TT;)Ljava/util/List<TT;>;", $STATIC, $staticMethod(ImageReader, removeFromList, $List*, $List*, Object$*)},
	{"removeIIOReadProgressListener", "(Ljavax/imageio/event/IIOReadProgressListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeIIOReadProgressListener, void, $IIOReadProgressListener*)},
	{"removeIIOReadUpdateListener", "(Ljavax/imageio/event/IIOReadUpdateListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeIIOReadUpdateListener, void, $IIOReadUpdateListener*)},
	{"removeIIOReadWarningListener", "(Ljavax/imageio/event/IIOReadWarningListener;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, removeIIOReadWarningListener, void, $IIOReadWarningListener*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ImageReader, reset, void)},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, setInput, void, Object$*, bool, bool)},
	{"setInput", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, setInput, void, Object$*, bool)},
	{"setInput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, setInput, void, Object$*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(ImageReader, setLocale, void, $Locale*)},
	{}
};

$ClassInfo _ImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.ImageReader",
	"java.lang.Object",
	nullptr,
	_ImageReader_FieldInfo_,
	_ImageReader_MethodInfo_
};

$Object* allocate$ImageReader($Class* clazz) {
	return $of($alloc(ImageReader));
}

void ImageReader::init$($ImageReaderSpi* originatingProvider) {
	$set(this, input, nullptr);
	this->seekForwardOnly = false;
	this->ignoreMetadata = false;
	this->minIndex = 0;
	$set(this, availableLocales, nullptr);
	$set(this, locale, nullptr);
	$set(this, warningListeners, nullptr);
	$set(this, warningLocales, nullptr);
	$set(this, progressListeners, nullptr);
	$set(this, updateListeners, nullptr);
	this->abortFlag = false;
	$set(this, originatingProvider, originatingProvider);
}

$String* ImageReader::getFormatName() {
	return $nc($($nc(this->originatingProvider)->getFormatNames()))->get(0);
}

$ImageReaderSpi* ImageReader::getOriginatingProvider() {
	return this->originatingProvider;
}

void ImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	if (input != nullptr) {
		bool found = false;
		if (this->originatingProvider != nullptr) {
			$var($ClassArray, classes, $nc(this->originatingProvider)->getInputTypes());
			for (int32_t i = 0; i < $nc(classes)->length; ++i) {
				if ($nc(classes->get(i))->isInstance(input)) {
					found = true;
					break;
				}
			}
		} else if ($instanceOf($ImageInputStream, input)) {
			found = true;
		}
		if (!found) {
			$throwNew($IllegalArgumentException, "Incorrect input type!"_s);
		}
		this->seekForwardOnly = seekForwardOnly;
		this->ignoreMetadata = ignoreMetadata;
		this->minIndex = 0;
	}
	$set(this, input, input);
}

void ImageReader::setInput(Object$* input, bool seekForwardOnly) {
	setInput(input, seekForwardOnly, false);
}

void ImageReader::setInput(Object$* input) {
	setInput(input, false, false);
}

$Object* ImageReader::getInput() {
	return $of(this->input);
}

bool ImageReader::isSeekForwardOnly() {
	return this->seekForwardOnly;
}

bool ImageReader::isIgnoringMetadata() {
	return this->ignoreMetadata;
}

int32_t ImageReader::getMinIndex() {
	return this->minIndex;
}

$LocaleArray* ImageReader::getAvailableLocales() {
	if (this->availableLocales == nullptr) {
		return nullptr;
	} else {
		return $cast($LocaleArray, $nc(this->availableLocales)->clone());
	}
}

void ImageReader::setLocale($Locale* locale) {
	if (locale != nullptr) {
		$var($LocaleArray, locales, getAvailableLocales());
		bool found = false;
		if (locales != nullptr) {
			for (int32_t i = 0; i < locales->length; ++i) {
				if (locale->equals(locales->get(i))) {
					found = true;
					break;
				}
			}
		}
		if (!found) {
			$throwNew($IllegalArgumentException, "Invalid locale!"_s);
		}
	}
	$set(this, locale, locale);
}

$Locale* ImageReader::getLocale() {
	return this->locale;
}

bool ImageReader::isRandomAccessEasy(int32_t imageIndex) {
	return false;
}

float ImageReader::getAspectRatio(int32_t imageIndex) {
	float var$0 = (float)getWidth(imageIndex);
	return var$0 / getHeight(imageIndex);
}

$ImageTypeSpecifier* ImageReader::getRawImageType(int32_t imageIndex) {
	return $cast($ImageTypeSpecifier, $nc($(getImageTypes(imageIndex)))->next());
}

$ImageReadParam* ImageReader::getDefaultReadParam() {
	return $new($ImageReadParam);
}

$IIOMetadata* ImageReader::getStreamMetadata($String* formatName, $Set* nodeNames) {
	return getMetadata(formatName, nodeNames, true, 0);
}

$IIOMetadata* ImageReader::getMetadata($String* formatName, $Set* nodeNames, bool wantStream, int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "formatName == null!"_s);
	}
	if (nodeNames == nullptr) {
		$throwNew($IllegalArgumentException, "nodeNames == null!"_s);
	}
	$var($IIOMetadata, metadata, wantStream ? getStreamMetadata() : getImageMetadata(imageIndex));
	if (metadata != nullptr) {
		bool var$0 = metadata->isStandardMetadataFormatSupported();
		$init($IIOMetadataFormatImpl);
		if (var$0 && $nc(formatName)->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return metadata;
		}
		$var($String, nativeName, metadata->getNativeMetadataFormatName());
		if (nativeName != nullptr && $nc(formatName)->equals(nativeName)) {
			return metadata;
		}
		$var($StringArray, extraNames, metadata->getExtraMetadataFormatNames());
		if (extraNames != nullptr) {
			for (int32_t i = 0; i < extraNames->length; ++i) {
				if ($nc(formatName)->equals(extraNames->get(i))) {
					return metadata;
				}
			}
		}
	}
	return nullptr;
}

$IIOMetadata* ImageReader::getImageMetadata(int32_t imageIndex, $String* formatName, $Set* nodeNames) {
	return getMetadata(formatName, nodeNames, false, imageIndex);
}

$BufferedImage* ImageReader::read(int32_t imageIndex) {
	return read(imageIndex, nullptr);
}

$IIOImage* ImageReader::readAll(int32_t imageIndex, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	if (imageIndex < getMinIndex()) {
		$throwNew($IndexOutOfBoundsException, "imageIndex < getMinIndex()!"_s);
	}
	$var($BufferedImage, im, read(imageIndex, param));
	$var($ArrayList, thumbnails, nullptr);
	int32_t numThumbnails = getNumThumbnails(imageIndex);
	if (numThumbnails > 0) {
		$assign(thumbnails, $new($ArrayList));
		for (int32_t j = 0; j < numThumbnails; ++j) {
			thumbnails->add($(readThumbnail(imageIndex, j)));
		}
	}
	$var($IIOMetadata, metadata, getImageMetadata(imageIndex));
	return $new($IIOImage, static_cast<$RenderedImage*>(im), static_cast<$List*>(thumbnails), metadata);
}

$Iterator* ImageReader::readAll($Iterator* params) {
	$useLocalCurrentObjectStackCache();
	$var($List, output, $new($ArrayList));
	int32_t imageIndex = getMinIndex();
	processSequenceStarted(imageIndex);
	while (true) {
		$var($ImageReadParam, param, nullptr);
		if (params != nullptr && params->hasNext()) {
			$var($Object, o, params->next());
			if (o != nullptr) {
				if ($instanceOf($ImageReadParam, o)) {
					$assign(param, $cast($ImageReadParam, o));
				} else {
					$throwNew($IllegalArgumentException, "Non-ImageReadParam supplied as part of params!"_s);
				}
			}
		}
		$var($BufferedImage, bi, nullptr);
		try {
			$assign(bi, read(imageIndex, param));
		} catch ($IndexOutOfBoundsException& e) {
			break;
		}
		$var($ArrayList, thumbnails, nullptr);
		int32_t numThumbnails = getNumThumbnails(imageIndex);
		if (numThumbnails > 0) {
			$assign(thumbnails, $new($ArrayList));
			for (int32_t j = 0; j < numThumbnails; ++j) {
				thumbnails->add($(readThumbnail(imageIndex, j)));
			}
		}
		$var($IIOMetadata, metadata, getImageMetadata(imageIndex));
		$var($IIOImage, im, $new($IIOImage, static_cast<$RenderedImage*>(bi), static_cast<$List*>(thumbnails), metadata));
		output->add(im);
		++imageIndex;
	}
	processSequenceComplete();
	return output->iterator();
}

bool ImageReader::canReadRaster() {
	return false;
}

$Raster* ImageReader::readRaster(int32_t imageIndex, $ImageReadParam* param) {
	$throwNew($UnsupportedOperationException, "readRaster not supported!"_s);
	$shouldNotReachHere();
}

bool ImageReader::isImageTiled(int32_t imageIndex) {
	return false;
}

int32_t ImageReader::getTileWidth(int32_t imageIndex) {
	return getWidth(imageIndex);
}

int32_t ImageReader::getTileHeight(int32_t imageIndex) {
	return getHeight(imageIndex);
}

int32_t ImageReader::getTileGridXOffset(int32_t imageIndex) {
	return 0;
}

int32_t ImageReader::getTileGridYOffset(int32_t imageIndex) {
	return 0;
}

$BufferedImage* ImageReader::readTile(int32_t imageIndex, int32_t tileX, int32_t tileY) {
	if ((tileX != 0) || (tileY != 0)) {
		$throwNew($IllegalArgumentException, "Invalid tile indices"_s);
	}
	return read(imageIndex);
}

$Raster* ImageReader::readTileRaster(int32_t imageIndex, int32_t tileX, int32_t tileY) {
	if (!canReadRaster()) {
		$throwNew($UnsupportedOperationException, "readTileRaster not supported!"_s);
	}
	if ((tileX != 0) || (tileY != 0)) {
		$throwNew($IllegalArgumentException, "Invalid tile indices"_s);
	}
	return readRaster(imageIndex, nullptr);
}

$RenderedImage* ImageReader::readAsRenderedImage(int32_t imageIndex, $ImageReadParam* param) {
	return read(imageIndex, param);
}

bool ImageReader::readerSupportsThumbnails() {
	return false;
}

bool ImageReader::hasThumbnails(int32_t imageIndex) {
	return getNumThumbnails(imageIndex) > 0;
}

int32_t ImageReader::getNumThumbnails(int32_t imageIndex) {
	return 0;
}

int32_t ImageReader::getThumbnailWidth(int32_t imageIndex, int32_t thumbnailIndex) {
	return $nc($(readThumbnail(imageIndex, thumbnailIndex)))->getWidth();
}

int32_t ImageReader::getThumbnailHeight(int32_t imageIndex, int32_t thumbnailIndex) {
	return $nc($(readThumbnail(imageIndex, thumbnailIndex)))->getHeight();
}

$BufferedImage* ImageReader::readThumbnail(int32_t imageIndex, int32_t thumbnailIndex) {
	$throwNew($UnsupportedOperationException, "Thumbnails not supported!"_s);
	$shouldNotReachHere();
}

void ImageReader::abort() {
	$synchronized(this) {
		this->abortFlag = true;
	}
}

bool ImageReader::abortRequested() {
	$synchronized(this) {
		return this->abortFlag;
	}
}

void ImageReader::clearAbortRequest() {
	$synchronized(this) {
		this->abortFlag = false;
	}
}

$List* ImageReader::addToList($List* l$renamed, Object$* elt) {
	$var($List, l, l$renamed);
	if (l == nullptr) {
		$assign(l, $new($ArrayList));
	}
	$nc(l)->add(elt);
	return l;
}

$List* ImageReader::removeFromList($List* l$renamed, Object$* elt) {
	$var($List, l, l$renamed);
	if (l == nullptr) {
		return l;
	}
	$nc(l)->remove(elt);
	if (l->size() == 0) {
		$assign(l, nullptr);
	}
	return l;
}

void ImageReader::addIIOReadWarningListener($IIOReadWarningListener* listener) {
	if (listener == nullptr) {
		return;
	}
	$set(this, warningListeners, addToList(this->warningListeners, listener));
	$set(this, warningLocales, addToList(this->warningLocales, $(getLocale())));
}

void ImageReader::removeIIOReadWarningListener($IIOReadWarningListener* listener) {
	if (listener == nullptr || this->warningListeners == nullptr) {
		return;
	}
	int32_t index = $nc(this->warningListeners)->indexOf(listener);
	if (index != -1) {
		$nc(this->warningListeners)->remove(index);
		$nc(this->warningLocales)->remove(index);
		if ($nc(this->warningListeners)->size() == 0) {
			$set(this, warningListeners, nullptr);
			$set(this, warningLocales, nullptr);
		}
	}
}

void ImageReader::removeAllIIOReadWarningListeners() {
	$set(this, warningListeners, nullptr);
	$set(this, warningLocales, nullptr);
}

void ImageReader::addIIOReadProgressListener($IIOReadProgressListener* listener) {
	if (listener == nullptr) {
		return;
	}
	$set(this, progressListeners, addToList(this->progressListeners, listener));
}

void ImageReader::removeIIOReadProgressListener($IIOReadProgressListener* listener) {
	if (listener == nullptr || this->progressListeners == nullptr) {
		return;
	}
	$set(this, progressListeners, removeFromList(this->progressListeners, listener));
}

void ImageReader::removeAllIIOReadProgressListeners() {
	$set(this, progressListeners, nullptr);
}

void ImageReader::addIIOReadUpdateListener($IIOReadUpdateListener* listener) {
	if (listener == nullptr) {
		return;
	}
	$set(this, updateListeners, addToList(this->updateListeners, listener));
}

void ImageReader::removeIIOReadUpdateListener($IIOReadUpdateListener* listener) {
	if (listener == nullptr || this->updateListeners == nullptr) {
		return;
	}
	$set(this, updateListeners, removeFromList(this->updateListeners, listener));
}

void ImageReader::removeAllIIOReadUpdateListeners() {
	$set(this, updateListeners, nullptr);
}

void ImageReader::processSequenceStarted(int32_t minIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->sequenceStarted(this, minIndex);
	}
}

void ImageReader::processSequenceComplete() {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->sequenceComplete(this);
	}
}

void ImageReader::processImageStarted(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageStarted(this, imageIndex);
	}
}

void ImageReader::processImageProgress(float percentageDone) {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageProgress(this, percentageDone);
	}
}

void ImageReader::processImageComplete() {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->imageComplete(this);
	}
}

void ImageReader::processThumbnailStarted(int32_t imageIndex, int32_t thumbnailIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailStarted(this, imageIndex, thumbnailIndex);
	}
}

void ImageReader::processThumbnailProgress(float percentageDone) {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailProgress(this, percentageDone);
	}
}

void ImageReader::processThumbnailComplete() {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->thumbnailComplete(this);
	}
}

void ImageReader::processReadAborted() {
	$useLocalCurrentObjectStackCache();
	if (this->progressListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->progressListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadProgressListener, listener, $cast($IIOReadProgressListener, $nc(this->progressListeners)->get(i)));
		$nc(listener)->readAborted(this);
	}
}

void ImageReader::processPassStarted($BufferedImage* theImage, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->passStarted(this, theImage, pass, minPass, maxPass, minX, minY, periodX, periodY, bands);
	}
}

void ImageReader::processImageUpdate($BufferedImage* theImage, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->imageUpdate(this, theImage, minX, minY, width, height, periodX, periodY, bands);
	}
}

void ImageReader::processPassComplete($BufferedImage* theImage) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->passComplete(this, theImage);
	}
}

void ImageReader::processThumbnailPassStarted($BufferedImage* theThumbnail, int32_t pass, int32_t minPass, int32_t maxPass, int32_t minX, int32_t minY, int32_t periodX, int32_t periodY, $ints* bands) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->thumbnailPassStarted(this, theThumbnail, pass, minPass, maxPass, minX, minY, periodX, periodY, bands);
	}
}

void ImageReader::processThumbnailUpdate($BufferedImage* theThumbnail, int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t periodX, int32_t periodY, $ints* bands) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->thumbnailUpdate(this, theThumbnail, minX, minY, width, height, periodX, periodY, bands);
	}
}

void ImageReader::processThumbnailPassComplete($BufferedImage* theThumbnail) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr) {
		return;
	}
	int32_t numListeners = $nc(this->updateListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadUpdateListener, listener, $cast($IIOReadUpdateListener, $nc(this->updateListeners)->get(i)));
		$nc(listener)->thumbnailPassComplete(this, theThumbnail);
	}
}

void ImageReader::processWarningOccurred($String* warning) {
	$useLocalCurrentObjectStackCache();
	if (this->warningListeners == nullptr) {
		return;
	}
	if (warning == nullptr) {
		$throwNew($IllegalArgumentException, "warning == null!"_s);
	}
	int32_t numListeners = $nc(this->warningListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadWarningListener, listener, $cast($IIOReadWarningListener, $nc(this->warningListeners)->get(i)));
		$nc(listener)->warningOccurred(this, warning);
	}
}

void ImageReader::processWarningOccurred($String* baseName, $String* keyword) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->warningListeners == nullptr) {
		return;
	}
	if (baseName == nullptr) {
		$throwNew($IllegalArgumentException, "baseName == null!"_s);
	}
	if (keyword == nullptr) {
		$throwNew($IllegalArgumentException, "keyword == null!"_s);
	}
	int32_t numListeners = $nc(this->warningListeners)->size();
	for (int32_t i = 0; i < numListeners; ++i) {
		$var($IIOReadWarningListener, listener, $cast($IIOReadWarningListener, $nc(this->warningListeners)->get(i)));
		$var($Locale, locale, $cast($Locale, $nc(this->warningLocales)->get(i)));
		if (locale == nullptr) {
			$assign(locale, $Locale::getDefault());
		}
		$var($ResourceBundle, bundle, nullptr);
		try {
			$assign(bundle, $ResourceBundle::getBundle(baseName, locale, $($of(this)->getClass()->getModule())));
		} catch ($MissingResourceException& mre) {
			$throwNew($IllegalArgumentException, "Bundle not found!"_s, mre);
		}
		$var($String, warning, nullptr);
		try {
			$assign(warning, $nc(bundle)->getString(keyword));
		} catch ($ClassCastException& cce) {
			$throwNew($IllegalArgumentException, "Resource is not a String!"_s, cce);
		} catch ($MissingResourceException& mre) {
			$throwNew($IllegalArgumentException, "Resource is missing!"_s, mre);
		}
		$nc(listener)->warningOccurred(this, warning);
	}
}

void ImageReader::reset() {
	setInput(nullptr, false, false);
	setLocale(nullptr);
	removeAllIIOReadUpdateListeners();
	removeAllIIOReadProgressListeners();
	removeAllIIOReadWarningListeners();
	clearAbortRequest();
}

void ImageReader::dispose() {
}

$Rectangle* ImageReader::getSourceRegion($ImageReadParam* param, int32_t srcWidth, int32_t srcHeight) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, sourceRegion, $new($Rectangle, 0, 0, srcWidth, srcHeight));
	if (param != nullptr) {
		$var($Rectangle, region, param->getSourceRegion());
		if (region != nullptr) {
			$assign(sourceRegion, sourceRegion->intersection(region));
		}
		int32_t subsampleXOffset = param->getSubsamplingXOffset();
		int32_t subsampleYOffset = param->getSubsamplingYOffset();
		sourceRegion->x += subsampleXOffset;
		sourceRegion->y += subsampleYOffset;
		sourceRegion->width -= subsampleXOffset;
		sourceRegion->height -= subsampleYOffset;
	}
	return sourceRegion;
}

void ImageReader::computeRegions($ImageReadParam* param, int32_t srcWidth, int32_t srcHeight, $BufferedImage* image, $Rectangle* srcRegion, $Rectangle* destRegion) {
	$useLocalCurrentObjectStackCache();
	if (srcRegion == nullptr) {
		$throwNew($IllegalArgumentException, "srcRegion == null!"_s);
	}
	if (destRegion == nullptr) {
		$throwNew($IllegalArgumentException, "destRegion == null!"_s);
	}
	$nc(srcRegion)->setBounds(0, 0, srcWidth, srcHeight);
	$nc(destRegion)->setBounds(0, 0, srcWidth, srcHeight);
	int32_t periodX = 1;
	int32_t periodY = 1;
	int32_t gridX = 0;
	int32_t gridY = 0;
	if (param != nullptr) {
		$var($Rectangle, paramSrcRegion, param->getSourceRegion());
		if (paramSrcRegion != nullptr) {
			srcRegion->setBounds($(srcRegion->intersection(paramSrcRegion)));
		}
		periodX = param->getSourceXSubsampling();
		periodY = param->getSourceYSubsampling();
		gridX = param->getSubsamplingXOffset();
		gridY = param->getSubsamplingYOffset();
		srcRegion->translate(gridX, gridY);
		srcRegion->width -= gridX;
		srcRegion->height -= gridY;
		destRegion->setLocation($(param->getDestinationOffset()));
	}
	if (destRegion->x < 0) {
		int32_t delta = -destRegion->x * periodX;
		srcRegion->x += delta;
		srcRegion->width -= delta;
		destRegion->x = 0;
	}
	if (destRegion->y < 0) {
		int32_t delta = -destRegion->y * periodY;
		srcRegion->y += delta;
		srcRegion->height -= delta;
		destRegion->y = 0;
	}
	int32_t subsampledWidth = $div((srcRegion->width + periodX - 1), periodX);
	int32_t subsampledHeight = $div((srcRegion->height + periodY - 1), periodY);
	destRegion->width = subsampledWidth;
	destRegion->height = subsampledHeight;
	if (image != nullptr) {
		int32_t var$0 = image->getWidth();
		$var($Rectangle, destImageRect, $new($Rectangle, 0, 0, var$0, image->getHeight()));
		destRegion->setBounds($(destRegion->intersection(destImageRect)));
		if (destRegion->isEmpty()) {
			$throwNew($IllegalArgumentException, "Empty destination region!"_s);
		}
		int32_t deltaX = destRegion->x + subsampledWidth - image->getWidth();
		if (deltaX > 0) {
			srcRegion->width -= deltaX * periodX;
		}
		int32_t deltaY = destRegion->y + subsampledHeight - image->getHeight();
		if (deltaY > 0) {
			srcRegion->height -= deltaY * periodY;
		}
	}
	bool var$1 = srcRegion->isEmpty();
	if (var$1 || destRegion->isEmpty()) {
		$throwNew($IllegalArgumentException, "Empty region!"_s);
	}
}

void ImageReader::checkReadParamBandSettings($ImageReadParam* param, int32_t numSrcBands, int32_t numDstBands) {
	$useLocalCurrentObjectStackCache();
	$var($ints, srcBands, nullptr);
	$var($ints, dstBands, nullptr);
	if (param != nullptr) {
		$assign(srcBands, param->getSourceBands());
		$assign(dstBands, param->getDestinationBands());
	}
	int32_t paramSrcBandLength = (srcBands == nullptr) ? numSrcBands : $nc(srcBands)->length;
	int32_t paramDstBandLength = (dstBands == nullptr) ? numDstBands : $nc(dstBands)->length;
	if (paramSrcBandLength != paramDstBandLength) {
		$throwNew($IllegalArgumentException, "ImageReadParam num source & dest bands differ!"_s);
	}
	if (srcBands != nullptr) {
		for (int32_t i = 0; i < srcBands->length; ++i) {
			if (srcBands->get(i) >= numSrcBands) {
				$throwNew($IllegalArgumentException, "ImageReadParam source bands contains a value >= the number of source bands!"_s);
			}
		}
	}
	if (dstBands != nullptr) {
		for (int32_t i = 0; i < dstBands->length; ++i) {
			if (dstBands->get(i) >= numDstBands) {
				$throwNew($IllegalArgumentException, "ImageReadParam dest bands contains a value >= the number of dest bands!"_s);
			}
		}
	}
}

$BufferedImage* ImageReader::getDestination($ImageReadParam* param, $Iterator* imageTypes, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (imageTypes == nullptr || !$nc(imageTypes)->hasNext()) {
		$throwNew($IllegalArgumentException, "imageTypes null or empty!"_s);
	}
	if ((int64_t)width * height > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, "width*height > Integer.MAX_VALUE!"_s);
	}
	$var($BufferedImage, dest, nullptr);
	$var($ImageTypeSpecifier, imageType, nullptr);
	if (param != nullptr) {
		$assign(dest, param->getDestination());
		if (dest != nullptr) {
			return dest;
		}
		$assign(imageType, param->getDestinationType());
	}
	if (imageType == nullptr) {
		$var($Object, o, $nc(imageTypes)->next());
		if (!($instanceOf($ImageTypeSpecifier, o))) {
			$throwNew($IllegalArgumentException, "Non-ImageTypeSpecifier retrieved from imageTypes!"_s);
		}
		$assign(imageType, $cast($ImageTypeSpecifier, o));
	} else {
		bool foundIt = false;
		while ($nc(imageTypes)->hasNext()) {
			$var($ImageTypeSpecifier, type, $cast($ImageTypeSpecifier, imageTypes->next()));
			if ($nc(type)->equals(imageType)) {
				foundIt = true;
				break;
			}
		}
		if (!foundIt) {
			$throwNew($IIOException, "Destination type from ImageReadParam does not match!"_s);
		}
	}
	$var($Rectangle, srcRegion, $new($Rectangle, 0, 0, 0, 0));
	$var($Rectangle, destRegion, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(param, width, height, nullptr, srcRegion, destRegion);
	int32_t destWidth = destRegion->x + destRegion->width;
	int32_t destHeight = destRegion->y + destRegion->height;
	return $nc(imageType)->createBufferedImage(destWidth, destHeight);
}

ImageReader::ImageReader() {
}

$Class* ImageReader::load$($String* name, bool initialize) {
	$loadClass(ImageReader, name, initialize, &_ImageReader_ClassInfo_, allocate$ImageReader);
	return class$;
}

$Class* ImageReader::class$ = nullptr;

	} // imageio
} // javax