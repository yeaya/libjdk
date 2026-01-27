#include <sun/lwawt/macosx/CImage.h>

#include <java/awt/Image.h>
#include <java/awt/geom/Dimension2D.h>
#include <java/awt/image/AbstractMultiResolutionImage.h>
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
using $AbstractMultiResolutionImage = ::java::awt::image::AbstractMultiResolutionImage;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $WritableRaster = ::java::awt::image::WritableRaster;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$toImage$0>());
	}
	$AtomicReference* sizeRef = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$toImage$0::fieldInfos[2] = {
	{"sizeRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$0, sizeRef)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$toImage$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$0, init$, void, $AtomicReference*)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$0, run, void, int64_t)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$toImage$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$toImage$0::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$toImage$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$toImage$1$1>());
	}
	$AtomicReference* repRef = nullptr;
	$Dimension2D* size = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$toImage$1$1::fieldInfos[3] = {
	{"repRef", "Ljava/util/concurrent/atomic/AtomicReference;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$1$1, repRef)},
	{"size", "Ljava/awt/geom/Dimension2D;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$1$1, size)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$toImage$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/atomic/AtomicReference;Ljava/awt/geom/Dimension2D;)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$1$1, init$, void, $AtomicReference*, $Dimension2D*)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$1$1, run, void, int64_t)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$toImage$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$toImage$1$1::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$toImage$1$1, name, initialize, &classInfo$, allocate$);
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
		 return $of($nc(inst$)->lambda$toImage$2(w, h, $cast($Integer, width), $cast($Integer, height)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$toImage$2$2>());
	}
	CImage* inst$ = nullptr;
	int32_t w = 0;
	int32_t h = 0;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$toImage$2$2::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, inst$)},
	{"w", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, w)},
	{"h", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$2$2, h)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$toImage$2$2::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CImage;II)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$2$2, init$, void, CImage*, int32_t, int32_t)},
	{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$2$2, apply, $Object*, Object$*, Object$*)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$toImage$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$2$2",
	"java.lang.Object",
	"java.util.function.BiFunction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$toImage$2$2::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$toImage$2$2, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$toImage$4$3>());
	}
	$ints* buffer = nullptr;
	int32_t srcWidth = 0;
	int32_t srcHeight = 0;
	int32_t dstWidth = 0;
	int32_t dstHeight = 0;
	static $FieldInfo fieldInfos[6];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$toImage$4$3::fieldInfos[6] = {
	{"buffer", "[I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, buffer)},
	{"srcWidth", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, srcWidth)},
	{"srcHeight", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, srcHeight)},
	{"dstWidth", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, dstWidth)},
	{"dstHeight", "I", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$toImage$4$3, dstHeight)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$toImage$4$3::methodInfos[3] = {
	{"<init>", "([IIIII)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$toImage$4$3, init$, void, $ints*, int32_t, int32_t, int32_t, int32_t)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$toImage$4$3, run, void, int64_t)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$toImage$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$toImage$4$3",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$toImage$4$3::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$toImage$4$3, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$resize$5$4>());
	}
	double w = 0.0;
	double h = 0.0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$resize$5$4::fieldInfos[3] = {
	{"w", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resize$5$4, w)},
	{"h", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resize$5$4, h)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$resize$5$4::methodInfos[3] = {
	{"<init>", "(DD)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$resize$5$4, init$, void, double, double)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$resize$5$4, run, void, int64_t)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$resize$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$resize$5$4",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$resize$5$4::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$resize$5$4, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CImage$$Lambda$lambda$resizeRepresentations$6$5>());
	}
	double w = 0.0;
	double h = 0.0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CImage$$Lambda$lambda$resizeRepresentations$6$5::fieldInfos[3] = {
	{"w", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resizeRepresentations$6$5, w)},
	{"h", "D", nullptr, $PUBLIC, $field(CImage$$Lambda$lambda$resizeRepresentations$6$5, h)},
	{}
};
$MethodInfo CImage$$Lambda$lambda$resizeRepresentations$6$5::methodInfos[3] = {
	{"<init>", "(DD)V", nullptr, $PUBLIC, $method(CImage$$Lambda$lambda$resizeRepresentations$6$5, init$, void, double, double)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CImage$$Lambda$lambda$resizeRepresentations$6$5, run, void, int64_t)},
	{}
};
$ClassInfo CImage$$Lambda$lambda$resizeRepresentations$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CImage$$Lambda$lambda$resizeRepresentations$6$5",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CImage$$Lambda$lambda$resizeRepresentations$6$5::load$($String* name, bool initialize) {
	$loadClass(CImage$$Lambda$lambda$resizeRepresentations$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CImage$$Lambda$lambda$resizeRepresentations$6$5::class$ = nullptr;

$FieldInfo _CImage_FieldInfo_[] = {
	{"creator", "Lsun/lwawt/macosx/CImage$Creator;", nullptr, $STATIC, $staticField(CImage, creator)},
	{}
};

$MethodInfo _CImage_MethodInfo_[] = {
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

#define _METHOD_INDEX_nativeCopyNSImageIntoArray 13
#define _METHOD_INDEX_nativeCreateNSImageFromArray 14
#define _METHOD_INDEX_nativeCreateNSImageFromArrays 15
#define _METHOD_INDEX_nativeCreateNSImageFromBytes 16
#define _METHOD_INDEX_nativeCreateNSImageFromFileContents 17
#define _METHOD_INDEX_nativeCreateNSImageFromIconSelector 18
#define _METHOD_INDEX_nativeCreateNSImageFromImageName 19
#define _METHOD_INDEX_nativeCreateNSImageOfFileFromLaunchServices 20
#define _METHOD_INDEX_nativeGetNSImageRepresentationSizes 21
#define _METHOD_INDEX_nativeGetNSImageSize 22
#define _METHOD_INDEX_nativeGetPlatformImageBytes 23
#define _METHOD_INDEX_nativeResizeNSImageRepresentations 24
#define _METHOD_INDEX_nativeSetNSImageSize 25

$InnerClassInfo _CImage_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CImage$Creator", "sun.lwawt.macosx.CImage", "Creator", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CImage",
	"sun.lwawt.macosx.CFRetainedResource",
	nullptr,
	_CImage_FieldInfo_,
	_CImage_MethodInfo_,
	nullptr,
	nullptr,
	_CImage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CImage$Creator"
};

$Object* allocate$CImage($Class* clazz) {
	return $of($alloc(CImage));
}

$CImage$Creator* CImage::creator = nullptr;

int64_t CImage::nativeCreateNSImageFromArray($ints* buffer, int32_t w, int32_t h) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromArray, int64_t, $ints* buffer, int32_t w, int32_t h);
	$ret = $invokeNativeStatic(buffer, w, h);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromBytes($bytes* buffer) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromBytes, int64_t, $bytes* buffer);
	$ret = $invokeNativeStatic(buffer);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromArrays($intArray2* buffers, $ints* w, $ints* h) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromArrays, int64_t, $intArray2* buffers, $ints* w, $ints* h);
	$ret = $invokeNativeStatic(buffers, w, h);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromFileContents($String* file) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromFileContents, int64_t, $String* file);
	$ret = $invokeNativeStatic(file);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageOfFileFromLaunchServices($String* file) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageOfFileFromLaunchServices, int64_t, $String* file);
	$ret = $invokeNativeStatic(file);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromImageName($String* name) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromImageName, int64_t, $String* name);
	$ret = $invokeNativeStatic(name);
	$finishNativeStatic();
	return $ret;
}

int64_t CImage::nativeCreateNSImageFromIconSelector(int32_t selector) {
	$init(CImage);
	int64_t $ret = 0;
	$prepareNativeStatic(CImage, nativeCreateNSImageFromIconSelector, int64_t, int32_t selector);
	$ret = $invokeNativeStatic(selector);
	$finishNativeStatic();
	return $ret;
}

$bytes* CImage::nativeGetPlatformImageBytes($ints* buffer, int32_t w, int32_t h) {
	$init(CImage);
	$var($bytes, $ret, nullptr);
	$prepareNativeStatic(CImage, nativeGetPlatformImageBytes, $bytes*, $ints* buffer, int32_t w, int32_t h);
	$assign($ret, $invokeNativeStaticObject(buffer, w, h));
	$finishNativeStatic();
	return $ret;
}

void CImage::nativeCopyNSImageIntoArray(int64_t image, $ints* buffer, int32_t sw, int32_t sh, int32_t dw, int32_t dh) {
	$init(CImage);
	$prepareNativeStatic(CImage, nativeCopyNSImageIntoArray, void, int64_t image, $ints* buffer, int32_t sw, int32_t sh, int32_t dw, int32_t dh);
	$invokeNativeStatic(image, buffer, sw, sh, dw, dh);
	$finishNativeStatic();
}

$Dimension2D* CImage::nativeGetNSImageSize(int64_t image) {
	$init(CImage);
	$var($Dimension2D, $ret, nullptr);
	$prepareNativeStatic(CImage, nativeGetNSImageSize, $Dimension2D*, int64_t image);
	$assign($ret, $invokeNativeStaticObject(image));
	$finishNativeStatic();
	return $ret;
}

void CImage::nativeSetNSImageSize(int64_t image, double w, double h) {
	$init(CImage);
	$prepareNativeStatic(CImage, nativeSetNSImageSize, void, int64_t image, double w, double h);
	$invokeNativeStatic(image, w, h);
	$finishNativeStatic();
}

void CImage::nativeResizeNSImageRepresentations(int64_t image, double w, double h) {
	$init(CImage);
	$prepareNativeStatic(CImage, nativeResizeNSImageRepresentations, void, int64_t image, double w, double h);
	$invokeNativeStatic(image, w, h);
	$finishNativeStatic();
}

$Dimension2DArray* CImage::nativeGetNSImageRepresentationSizes(int64_t image, double w, double h) {
	$init(CImage);
	$var($Dimension2DArray, $ret, nullptr);
	$prepareNativeStatic(CImage, nativeGetNSImageRepresentationSizes, $Dimension2DArray*, int64_t image, double w, double h);
	$assign($ret, $invokeNativeStaticObject(image, w, h));
	$finishNativeStatic();
	return $ret;
}

$CImage$Creator* CImage::getCreator() {
	$init(CImage);
	return CImage::creator;
}

$Image* CImage::createImageOfFile($String* file, int32_t width, int32_t height) {
	$init(CImage);
	return $nc($(getCreator()))->createImageOfFile(file, width, height);
}

$Image* CImage::createSystemImageFromSelector($String* iconSelector, int32_t width, int32_t height) {
	$init(CImage);
	return $nc($(getCreator()))->createSystemImageFromSelector(iconSelector, width, height);
}

$Image* CImage::createImageFromFile($String* file, double width, double height) {
	$init(CImage);
	return $nc($(getCreator()))->createImageFromFile(file, width, height);
}

CImage* CImage::createFromImage($Image* image) {
	$init(CImage);
	return $nc($(getCreator()))->createFromImage(image, nullptr);
}

CImage* CImage::createFromImage($Image* image, $CTrayIcon$IconObserver* observer) {
	$init(CImage);
	return $nc($(getCreator()))->createFromImage(image, observer);
}

void CImage::init$(int64_t nsImagePtr) {
	$CFRetainedResource::init$(nsImagePtr, true);
}

$Image* CImage::toImage() {
	$useLocalCurrentObjectStackCache();
	if (this->ptr == 0) {
		return nullptr;
	}
	$var($AtomicReference, sizeRef, $new($AtomicReference));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CImage$$Lambda$lambda$toImage$0, sizeRef)));
	$var($Dimension2D, size, $cast($Dimension2D, sizeRef->get()));
	if (size == nullptr) {
		return nullptr;
	}
	int32_t w = $cast(int32_t, $nc(size)->getWidth());
	int32_t h = $cast(int32_t, size->getHeight());
	$var($AtomicReference, repRef, $new($AtomicReference));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CImage$$Lambda$lambda$toImage$1$1, repRef, size)));
	$var($Dimension2DArray, sizes, $cast($Dimension2DArray, repRef->get()));
	return sizes == nullptr || $nc(sizes)->length < 2 ? static_cast<$Image*>($new($MultiResolutionCachedImage, w, h, static_cast<$BiFunction*>($$new(CImage$$Lambda$lambda$toImage$2$2, this, w, h)))) : static_cast<$Image*>($new($MultiResolutionCachedImage, w, h, sizes, static_cast<$BiFunction*>($$new(CImage$$Lambda$lambda$toImage$2$2, this, w, h))));
}

$BufferedImage* CImage::toImage(int32_t srcWidth, int32_t srcHeight, int32_t dstWidth, int32_t dstHeight) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bimg, $new($BufferedImage, dstWidth, dstHeight, $BufferedImage::TYPE_INT_ARGB_PRE));
	$var($DataBufferInt, dbi, $cast($DataBufferInt, $nc($(bimg->getRaster()))->getDataBuffer()));
	$var($ints, buffer, $SunWritableRaster::stealData(dbi, 0));
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CImage$$Lambda$lambda$toImage$4$3, buffer, srcWidth, srcHeight, dstWidth, dstHeight)));
	$SunWritableRaster::markDirty(static_cast<$DataBuffer*>(dbi));
	return bimg;
}

CImage* CImage::resize(double w, double h) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CImage$$Lambda$lambda$resize$5$4, w, h)));
	return this;
}

void CImage::resizeRepresentations(double w, double h) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CImage$$Lambda$lambda$resizeRepresentations$6$5, w, h)));
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
	int32_t var$0 = w;
	int32_t var$1 = h;
	int32_t var$2 = $nc(width)->intValue();
	return toImage(var$0, var$1, var$2, $nc(height)->intValue());
}

void CImage::lambda$toImage$1($AtomicReference* repRef, $Dimension2D* size, int64_t ptr) {
	$init(CImage);
	int64_t var$0 = ptr;
	double var$1 = $nc(size)->getWidth();
	$nc(repRef)->set($(nativeGetNSImageRepresentationSizes(var$0, var$1, size->getHeight())));
}

void CImage::lambda$toImage$0($AtomicReference* sizeRef, int64_t ptr) {
	$init(CImage);
	$nc(sizeRef)->set($(nativeGetNSImageSize(ptr)));
}

void clinit$CImage($Class* class$) {
	$assignStatic(CImage::creator, $new($CImage$Creator));
}

CImage::CImage() {
}

$Class* CImage::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CImage$$Lambda$lambda$toImage$0::classInfo$.name)) {
			return CImage$$Lambda$lambda$toImage$0::load$(name, initialize);
		}
		if (name->equals(CImage$$Lambda$lambda$toImage$1$1::classInfo$.name)) {
			return CImage$$Lambda$lambda$toImage$1$1::load$(name, initialize);
		}
		if (name->equals(CImage$$Lambda$lambda$toImage$2$2::classInfo$.name)) {
			return CImage$$Lambda$lambda$toImage$2$2::load$(name, initialize);
		}
		if (name->equals(CImage$$Lambda$lambda$toImage$4$3::classInfo$.name)) {
			return CImage$$Lambda$lambda$toImage$4$3::load$(name, initialize);
		}
		if (name->equals(CImage$$Lambda$lambda$resize$5$4::classInfo$.name)) {
			return CImage$$Lambda$lambda$resize$5$4::load$(name, initialize);
		}
		if (name->equals(CImage$$Lambda$lambda$resizeRepresentations$6$5::classInfo$.name)) {
			return CImage$$Lambda$lambda$resizeRepresentations$6$5::load$(name, initialize);
		}
	}
	$loadClass(CImage, name, initialize, &_CImage_ClassInfo_, clinit$CImage, allocate$CImage);
	return class$;
}

$Class* CImage::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun