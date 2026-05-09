#include <sun/lwawt/macosx/CImage.h>
#include <java/awt/Image.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <java/util/function/BiFunction.h>
#include <sun/awt/image/MultiResolutionCachedImage.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <sun/lwawt/macosx/CImage$Creator.h>
#include <sun/lwawt/macosx/CTrayIcon$IconObserver.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB_PRE

using $Dimension2DArray = $Array<::java::awt::geom::Dimension2D>;
using $intArray2 = $Array<int32_t, 2>;
using $Image = ::java::awt::Image;
using $Dimension2D = ::java::awt::geom::Dimension2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $BiFunction = ::java::util::function::BiFunction;
using $MultiResolutionCachedImage = ::sun::awt::image::MultiResolutionCachedImage;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CImage$Creator = ::sun::lwawt::macosx::CImage$Creator;
using $CTrayIcon$IconObserver = ::sun::lwawt::macosx::CTrayIcon$IconObserver;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CImage$$Lambda$lambda$toImage$0 : public $CFRetainedResource$CFNativeAction {
	$class(CImage$$Lambda$lambda$toImage$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicReference* sizeRef) {
		$set(this, sizeRef, sizeRef);
	}
	virtual void run(int64_t ptr) override {
		CImage::lambda$toImage$0(sizeRef, ptr);
	}
	$AtomicReference* sizeRef = nullptr;
};
$Class* CImage$$Lambda$lambda$toImage$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sizeRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$0, sizeRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$0, init$, void, $AtomicReference*)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$0, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$0",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$toImage$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$toImage$0);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$toImage$0::class$ = nullptr;

class CImage$$Lambda$lambda$toImage$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CImage$$Lambda$lambda$toImage$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($AtomicReference* repRef, $Dimension2D* size) {
		$set(this, repRef, repRef);
		$set(this, size, size);
	}
	virtual void run(int64_t ptr) override {
		CImage::lambda$toImage$1(repRef, size, ptr);
	}
	$AtomicReference* repRef = nullptr;
	$Dimension2D* size = nullptr;
};
$Class* CImage$$Lambda$lambda$toImage$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"repRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$1$1, repRef)},
		{"size", "Ljava/awt/geom/Dimension2D;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$1$1, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;Ljava/awt/geom/Dimension2D;)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$1$1, init$, void, $AtomicReference*, $Dimension2D*)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$1$1, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$1$1",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$toImage$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$toImage$1$1);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$toImage$1$1::class$ = nullptr;

class CImage$$Lambda$lambda$toImage$2$2 : public $BiFunction {
	$class(CImage$$Lambda$lambda$toImage$2$2, $NO_CLASS_INIT, $BiFunction)
public:
	void init$(CImage* inst, int32_t w, int32_t h) {
		$set(this, inst$, inst);
		this->w = w;
		this->h = h;
	}
	virtual $Object* apply(Object$* width, Object$* height) override {
		return $nc(inst$)->lambda$toImage$2(w, h, $cast($Integer, width), $cast($Integer, height));
	}
	CImage* inst$ = nullptr;
	int32_t w = 0;
	int32_t h = 0;
};
$Class* CImage$$Lambda$lambda$toImage$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, inst$)},
		{"w", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, w)},
		{"h", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CImage;II)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$2$2, init$, void, CImage*, int32_t, int32_t)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$2$2, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$2$2",
		"java.lang.Object",
		"java.util.function.BiFunction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$toImage$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$toImage$2$2);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$toImage$2$2::class$ = nullptr;

class CImage$$Lambda$lambda$toImage$4$3 : public $CFRetainedResource$CFNativeAction {
	$class(CImage$$Lambda$lambda$toImage$4$3, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($ints* buffer, int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight) {
		$set(this, buffer, buffer);
		this->srcWidth = srcWidth;
		this->srcHeight = srcHeight;
		this->dstWidth = dstWidth;
		this->dstHeight = dstHeight;
	}
	virtual void run(int64_t ptr) override {
		CImage::lambda$toImage$4(buffer, srcWidth, srcHeight, dstWidth, dstHeight, ptr);
	}
	$ints* buffer = nullptr;
	int32_t srcWidth = 0;
	int32_t srcHeight = 0;
	int32_t dstWidth = 0;
	int32_t dstHeight = 0;
};
$Class* CImage$$Lambda$lambda$toImage$4$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"buffer", "[I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, buffer)},
		{"srcWidth", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, srcWidth)},
		{"srcHeight", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, srcHeight)},
		{"dstWidth", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, dstWidth)},
		{"dstHeight", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, dstHeight)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([IIIII)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$4$3, init$, void, $ints*, int32_t, int32_t, int32_t, int32_t)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$4$3, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$4$3",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$toImage$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$toImage$4$3);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$toImage$4$3::class$ = nullptr;

class CImage$$Lambda$lambda$resize$5$4 : public $CFRetainedResource$CFNativeAction {
	$class(CImage$$Lambda$lambda$resize$5$4, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(double w, double h) {
		this->w = w;
		this->h = h;
	}
	virtual void run(int64_t ptr) override {
		CImage::lambda$resize$5(w, h, ptr);
	}
	double w = 0.0;
	double h = 0.0;
};
$Class* CImage$$Lambda$lambda$resize$5$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"w", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resize$5$4, w)},
		{"h", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resize$5$4, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(DD)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$resize$5$4, init$, void, double, double)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$resize$5$4, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$resize$5$4",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$resize$5$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$resize$5$4);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$resize$5$4::class$ = nullptr;

class CImage$$Lambda$lambda$resizeRepresentations$6$5 : public $CFRetainedResource$CFNativeAction {
	$class(CImage$$Lambda$lambda$resizeRepresentations$6$5, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(double w, double h) {
		this->w = w;
		this->h = h;
	}
	virtual void run(int64_t ptr) override {
		CImage::lambda$resizeRepresentations$6(w, h, ptr);
	}
	double w = 0.0;
	double h = 0.0;
};
$Class* CImage$$Lambda$lambda$resizeRepresentations$6$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"w", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resizeRepresentations$6$5, w)},
		{"h", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resizeRepresentations$6$5, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(DD)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$resizeRepresentations$6$5, init$, void, double, double)},
		{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$resizeRepresentations$6$5, run, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.lwawt.macosx.CImage$$Lambda$lambda$resizeRepresentations$6$5",
		"java.lang.Object",
		"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CImage$$Lambda$lambda$resizeRepresentations$6$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CImage$$Lambda$lambda$resizeRepresentations$6$5);
	});
	return class$;
}
$Class* CImage$$Lambda$lambda$resizeRepresentations$6$5::class$ = nullptr;

$CImage$Creator* CImage::creator = nullptr;

int64_t CImage::nativeCreateNSImageFromArray($ints* buffer, int32_t w, int32_t h) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromArray, int64_t, $ints* buffer, int32_t w, int32_t h);
	int64_t $ret = $invokeNativeStatic(buffer, w, h);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromBytes($bytes* buffer) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromBytes, int64_t, $bytes* buffer);
	int64_t $ret = $invokeNativeStatic(buffer);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromArrays($intArray2* buffers, $ints* w, $ints* h) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromArrays, int64_t, $intArray2* buffers, $ints* w, $ints* h);
	int64_t $ret = $invokeNativeStatic(buffers, w, h);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromFileContents($String* file) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromFileContents, int64_t, $String* file);
	int64_t $ret = $invokeNativeStatic(file);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageOfFileFromLaunchServices($String* file) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageOfFileFromLaunchServices, int64_t, $String* file);
	int64_t $ret = $invokeNativeStatic(file);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromImageName($String* name) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromImageName, int64_t, $String* name);
	int64_t $ret = $invokeNativeStatic(name);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromIconSelector(int32_t selector) {
	$init(CImage);
	$prepareNativeStatic(nativeCreateNSImageFromIconSelector, int64_t, int32_t selector);
	int64_t $ret = $invokeNativeStatic(selector);
	$finishNativeStatic();
	return $ret;
}

$bytes* CImage::nativeGetPlatformImageBytes($ints* buffer, int32_t w, int32_t h) {
	$init(CImage);
	$prepareNativeStatic(nativeGetPlatformImageBytes, $bytes*, $ints* buffer, int32_t w, int32_t h);
	$var($bytes, $ret, $invokeNativeStaticObject(buffer, w, h));
	$finishNativeStatic();
	return $ret;
}

void CImage::nativeCopyNSImageIntoArray(int64_t image, $ints* buffer, int32_t sw, int32_t sh, int32_t dw, int32_t dh) {
	$init(CImage);
	$prepareNativeStatic(nativeCopyNSImageIntoArray, void, int64_t image, $ints* buffer, int32_t sw, int32_t sh, int32_t dw, int32_t dh);
	$invokeNativeStatic(image, buffer, sw, sh, dw, dh);
	$finishNativeStatic();
}

$Dimension2D* CImage::nativeGetNSImageSize(int64_t image) {
	$init(CImage);
	$prepareNativeStatic(nativeGetNSImageSize, $Dimension2D*, int64_t image);
	$var($Dimension2D, $ret, $invokeNativeStaticObject(image));
	$finishNativeStatic();
	return $ret;
}

void CImage::nativeSetNSImageSize(int64_t image, double w, double h) {
	$init(CImage);
	$prepareNativeStatic(nativeSetNSImageSize, void, int64_t image, double w, double h);
	$invokeNativeStatic(image, w, h);
	$finishNativeStatic();
}

void CImage::nativeResizeNSImageRepresentations(int64_t image, double w, double h) {
	$init(CImage);
	$prepareNativeStatic(nativeResizeNSImageRepresentations, void, int64_t image, double w, double h);
	$invokeNativeStatic(image, w, h);
	$finishNativeStatic();
}

$Dimension2DArray* CImage::nativeGetNSImageRepresentationSizes(int64_t image, double w, double h) {
	$init(CImage);
	$prepareNativeStatic(nativeGetNSImageRepresentationSizes, $Dimension2DArray*, int64_t image, double w, double h);
	$var($Dimension2DArray, $ret, $invokeNativeStaticObject(image, w, h));
	$finishNativeStatic();
	return $ret;
}

$CImage$Creator* CImage::getCreator() {
	$init(CImage);
	return CImage::creator;
}

$Image* CImage::createImageOfFile($String* file, int32_t width, int32_t height) {
	$init(CImage);
	return $$nc(getCreator())->createImageOfFile(file, width, height);
}

$Image* CImage::createSystemImageFromSelector($String* iconSelector, int32_t width, int32_t height) {
	$init(CImage);
	return $$nc(getCreator())->createSystemImageFromSelector(iconSelector, width, height);
}

$Image* CImage::createImageFromFile($String* file, double width, double height) {
	$init(CImage);
	return $$nc(getCreator())->createImageFromFile(file, width, height);
}

CImage* CImage::createFromImage($Image* image) {
	$init(CImage);
	return $$nc(getCreator())->createFromImage(image, nullptr);
}

CImage* CImage::createFromImage($Image* image, $CTrayIcon$IconObserver* observer) {
	$init(CImage);
	return $$nc(getCreator())->createFromImage(image, observer);
}

void CImage::init$(int64_t nsImagePtr) {
	$CFRetainedResource::init$(nsImagePtr, true);
}

$Image* CImage::toImage() {
	$useLocalObjectStack();
	if (this->ptr == 0) {
		return nullptr;
	}
	$var($AtomicReference, sizeRef, $new($AtomicReference));
	execute($$new(CImage$$Lambda$lambda$toImage$0, sizeRef));
	$var($Dimension2D, size, $cast($Dimension2D, sizeRef->get()));
	if (size == nullptr) {
		return nullptr;
	}
	int32_t w = $cast(int32_t, $nc(size)->getWidth());
	int32_t h = $cast(int32_t, size->getHeight());
	$var($AtomicReference, repRef, $new($AtomicReference));
	execute($$new(CImage$$Lambda$lambda$toImage$1$1, repRef, size));
	$var($Dimension2DArray, sizes, $cast($Dimension2DArray, repRef->get()));
	return sizes == nullptr || sizes->length < 2 ? $new($MultiResolutionCachedImage, w, h, $$new(CImage$$Lambda$lambda$toImage$2$2, this, w, h)) : $new($MultiResolutionCachedImage, w, h, sizes, $$new(CImage$$Lambda$lambda$toImage$2$2, this, w, h));
}

$BufferedImage* CImage::toImage(int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight) {
	$useLocalObjectStack();
	$var($BufferedImage, bimg, $new($BufferedImage, dstWidth, dstHeight, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($DataBufferInt, dbi, $cast($DataBufferInt, $$nc(bimg->getRaster())->getDataBuffer()));
	$var($ints, buffer, $SunWritableRaster::stealData(dbi, 0));
	execute($$new(CImage$$Lambda$lambda$toImage$4$3, buffer, srcWidth, srcHeight, dstWidth, dstHeight));
	$SunWritableRaster::markDirty(dbi);
	return bimg;
}

CImage* CImage::resize(double w, double h) {
	execute($$new(CImage$$Lambda$lambda$resize$5$4, w, h));
	return this;
}

void CImage::resizeRepresentations(double w, double h) {
	execute($$new(CImage$$Lambda$lambda$resizeRepresentations$6$5, w, h));
}

void CImage::lambda$resizeRepresentations$6(double w, double h, int64_t ptr) {
	$init(CImage);
	nativeResizeNSImageRepresentations(ptr, w, h);
}

void CImage::lambda$resize$5(double w, double h, int64_t ptr) {
	$init(CImage);
	nativeSetNSImageSize(ptr, w, h);
}

void CImage::lambda$toImage$4($ints* buffer, int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight, int64_t ptr) {
	$init(CImage);
	nativeCopyNSImageIntoArray(ptr, buffer, srcWidth, srcHeight, dstWidth, dstHeight);
}

$Image* CImage::lambda$toImage$2(int32_t w, int32_t h, $Integer* width, $Integer* height) {
	int32_t var$0 = $nc(width)->intValue();
	return toImage(w, h, var$0, $nc(height)->intValue());
}

void CImage::lambda$toImage$1($AtomicReference* repRef, $Dimension2D* size, int64_t ptr) {
	$init(CImage);
	double var$0 = $nc(size)->getWidth();
	$nc(repRef)->set($(nativeGetNSImageRepresentationSizes(ptr, var$0, size->getHeight())));
}

void CImage::lambda$toImage$0($AtomicReference* sizeRef, int64_t ptr) {
	$init(CImage);
	$nc(sizeRef)->set($(nativeGetNSImageSize(ptr)));
}

void CImage::clinit$($Class* clazz) {
	$assignStatic(CImage::creator, $new($CImage$Creator));
}

CImage::CImage() {
}

$Class* CImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$0")) {
			return CImage$$Lambda$lambda$toImage$0::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$1$1")) {
			return CImage$$Lambda$lambda$toImage$1$1::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$2$2")) {
			return CImage$$Lambda$lambda$toImage$2$2::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$4$3")) {
			return CImage$$Lambda$lambda$toImage$4$3::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$resize$5$4")) {
			return CImage$$Lambda$lambda$resize$5$4::load$(name, initialize);
		}
		if (name->equals("sun.lwawt.macosx.CImage$$Lambda$lambda$resizeRepresentations$6$5")) {
			return CImage$$Lambda$lambda$resizeRepresentations$6$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"creator", "Lsun/lwawt/macosx/CImage$Creator;", nullptr, $STATIC, $staticField(CImage, creator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(CImage, init$, void, int64_t)},
		{"createFromImage", "(Ljava/awt/Image;)Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC | $STATIC, $staticMethod(CImage, createFromImage, CImage*, $Image*)},
		{"createFromImage", "(Ljava/awt/Image;Lsun/lwawt/macosx/CTrayIcon$IconObserver;)Lsun/lwawt/macosx/CImage;", nullptr, $PUBLIC | $STATIC, $staticMethod(CImage, createFromImage, CImage*, $Image*, $CTrayIcon$IconObserver*)},
		{"createImageFromFile", "(Ljava/lang/String;DD)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $staticMethod(CImage, createImageFromFile, $Image*, $String*, double, double)},
		{"createImageOfFile", "(Ljava/lang/String;II)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $staticMethod(CImage, createImageOfFile, $Image*, $String*, int32_t, int32_t)},
		{"createSystemImageFromSelector", "(Ljava/lang/String;II)Ljava/awt/Image;", nullptr, $PUBLIC | $STATIC, $staticMethod(CImage, createSystemImageFromSelector, $Image*, $String*, int32_t, int32_t)},
		{"getCreator", "()Lsun/lwawt/macosx/CImage$Creator;", nullptr, $STATIC, $staticMethod(CImage, getCreator, $CImage$Creator*)},
		{"lambda$resize$5", "(DDJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CImage, lambda$resize$5, void, double, double, int64_t)},
		{"lambda$resizeRepresentations$6", "(DDJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CImage, lambda$resizeRepresentations$6, void, double, double, int64_t)},
		{"lambda$toImage$0", "(Ljava/util/concurrent/atomic/AtomicReference;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CImage, lambda$toImage$0, void, $AtomicReference*, int64_t)},
		{"lambda$toImage$1", "(Ljava/util/concurrent/atomic/AtomicReference;Ljava/awt/geom/Dimension2D;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CImage, lambda$toImage$1, void, $AtomicReference*, $Dimension2D*, int64_t)},
		{"lambda$toImage$2", "(IILjava/lang/Integer;Ljava/lang/Integer;)Ljava/awt/Image;", nullptr, $PRIVATE | $SYNTHETIC, $method(CImage, lambda$toImage$2, $Image*, int32_t, int32_t, $Integer*, $Integer*)},
		{"lambda$toImage$4", "([IIIIIJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CImage, lambda$toImage$4, void, $ints*, int32_t, int32_t, int32_t, int32_t, int64_t)},
		{"nativeCopyNSImageIntoArray", "(J[IIIII)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCopyNSImageIntoArray, void, int64_t, $ints*, int32_t, int32_t, int32_t, int32_t)},
		{"nativeCreateNSImageFromArray", "([III)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromArray, int64_t, $ints*, int32_t, int32_t)},
		{"nativeCreateNSImageFromArrays", "([[I[I[I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromArrays, int64_t, $intArray2*, $ints*, $ints*)},
		{"nativeCreateNSImageFromBytes", "([B)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromBytes, int64_t, $bytes*)},
		{"nativeCreateNSImageFromFileContents", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromFileContents, int64_t, $String*)},
		{"nativeCreateNSImageFromIconSelector", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromIconSelector, int64_t, int32_t)},
		{"nativeCreateNSImageFromImageName", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageFromImageName, int64_t, $String*)},
		{"nativeCreateNSImageOfFileFromLaunchServices", "(Ljava/lang/String;)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeCreateNSImageOfFileFromLaunchServices, int64_t, $String*)},
		{"nativeGetNSImageRepresentationSizes", "(JDD)[Ljava/awt/geom/Dimension2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeGetNSImageRepresentationSizes, $Dimension2DArray*, int64_t, double, double)},
		{"nativeGetNSImageSize", "(J)Ljava/awt/geom/Dimension2D;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeGetNSImageSize, $Dimension2D*, int64_t)},
		{"nativeGetPlatformImageBytes", "([III)[B", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeGetPlatformImageBytes, $bytes*, $ints*, int32_t, int32_t)},
		{"nativeResizeNSImageRepresentations", "(JDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeResizeNSImageRepresentations, void, int64_t, double, double)},
		{"nativeSetNSImageSize", "(JDD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CImage, nativeSetNSImageSize, void, int64_t, double, double)},
		{"resize", "(DD)Lsun/lwawt/macosx/CImage;", nullptr, 0, $virtualMethod(CImage, resize, CImage*, double, double)},
		{"resizeRepresentations", "(DD)V", nullptr, 0, $virtualMethod(CImage, resizeRepresentations, void, double, double)},
		{"toImage", "()Ljava/awt/Image;", nullptr, $PRIVATE, $method(CImage, toImage, $Image*)},
		{"toImage", "(IIII)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $method(CImage, toImage, $BufferedImage*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CImage$Creator", "sun.lwawt.macosx.CImage", "Creator", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.lwawt.macosx.CImage",
		"sun.lwawt.macosx.CFRetainedResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CImage$Creator"
	};
	$loadClass(CImage, name, initialize, &classInfo$$, CImage::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CImage);
	});
	return class$;
}

$Class* CImage::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun