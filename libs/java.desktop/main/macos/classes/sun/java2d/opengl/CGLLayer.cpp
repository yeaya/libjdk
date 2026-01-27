#include <sun/java2d/opengl/CGLLayer.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Rectangle.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/awt/CGraphicsConfig.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/NullSurfaceData.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/CGLSurfaceData.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CFLayer.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CGraphicsConfig = ::sun::awt::CGraphicsConfig;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $NullSurfaceData = ::sun::java2d::NullSurfaceData;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CGLSurfaceData = ::sun::java2d::opengl::CGLSurfaceData;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $CFLayer = ::sun::lwawt::macosx::CFLayer;
using $CFRetainedResource = ::sun::lwawt::macosx::CFRetainedResource;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLLayer$$Lambda$lambda$validate$0 : public $CFRetainedResource$CFNativeAction {
	$class(CGLLayer$$Lambda$lambda$validate$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($CGLSurfaceData* cglsd) {
		$set(this, cglsd, cglsd);
	}
	virtual void run(int64_t ptr) override {
		CGLLayer::lambda$validate$0(cglsd, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CGLLayer$$Lambda$lambda$validate$0>());
	}
	$CGLSurfaceData* cglsd = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CGLLayer$$Lambda$lambda$validate$0::fieldInfos[2] = {
	{"cglsd", "Lsun/java2d/opengl/CGLSurfaceData;", nullptr, $PUBLIC, $field(CGLLayer$$Lambda$lambda$validate$0, cglsd)},
	{}
};
$MethodInfo CGLLayer$$Lambda$lambda$validate$0::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/opengl/CGLSurfaceData;)V", nullptr, $PUBLIC, $method(CGLLayer$$Lambda$lambda$validate$0, init$, void, $CGLSurfaceData*)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CGLLayer$$Lambda$lambda$validate$0, run, void, int64_t)},
	{}
};
$ClassInfo CGLLayer$$Lambda$lambda$validate$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.opengl.CGLLayer$$Lambda$lambda$validate$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CGLLayer$$Lambda$lambda$validate$0::load$($String* name, bool initialize) {
	$loadClass(CGLLayer$$Lambda$lambda$validate$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CGLLayer$$Lambda$lambda$validate$0::class$ = nullptr;

class CGLLayer$$Lambda$lambda$setScale$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CGLLayer$$Lambda$lambda$setScale$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CGLLayer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t ptr) override {
		$nc(inst$)->lambda$setScale$1(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CGLLayer$$Lambda$lambda$setScale$1$1>());
	}
	CGLLayer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CGLLayer$$Lambda$lambda$setScale$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CGLLayer$$Lambda$lambda$setScale$1$1, inst$)},
	{}
};
$MethodInfo CGLLayer$$Lambda$lambda$setScale$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/java2d/opengl/CGLLayer;)V", nullptr, $PUBLIC, $method(CGLLayer$$Lambda$lambda$setScale$1$1, init$, void, CGLLayer*)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CGLLayer$$Lambda$lambda$setScale$1$1, run, void, int64_t)},
	{}
};
$ClassInfo CGLLayer$$Lambda$lambda$setScale$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.opengl.CGLLayer$$Lambda$lambda$setScale$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CGLLayer$$Lambda$lambda$setScale$1$1::load$($String* name, bool initialize) {
	$loadClass(CGLLayer$$Lambda$lambda$setScale$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CGLLayer$$Lambda$lambda$setScale$1$1::class$ = nullptr;

class CGLLayer$$Lambda$lambda$drawInCGLContext$2$2 : public $CFRetainedResource$CFNativeAction {
	$class(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CGLLayer::lambda$drawInCGLContext$2(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CGLLayer$$Lambda$lambda$drawInCGLContext$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2, init$, void)},
	{"run", "(J)V", nullptr, $PUBLIC, $virtualMethod(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2, run, void, int64_t)},
	{}
};
$ClassInfo CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.opengl.CGLLayer$$Lambda$lambda$drawInCGLContext$2$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::load$($String* name, bool initialize) {
	$loadClass(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::class$ = nullptr;

$FieldInfo _CGLLayer_FieldInfo_[] = {
	{"scale", "I", nullptr, $PRIVATE, $field(CGLLayer, scale)},
	{}
};

$MethodInfo _CGLLayer_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC, $method(CGLLayer, init$, void, $LWWindowPeer*)},
	{"blitTexture", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CGLLayer, blitTexture, void, int64_t)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(CGLLayer, dispose, void)},
	{"drawInCGLContext", "()V", nullptr, $PRIVATE, $method(CGLLayer, drawInCGLContext, void)},
	{"lambda$drawInCGLContext$2", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CGLLayer, lambda$drawInCGLContext$2, void, int64_t)},
	{"lambda$setScale$1", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CGLLayer, lambda$setScale$1, void, int64_t)},
	{"lambda$validate$0", "(Lsun/java2d/opengl/CGLSurfaceData;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CGLLayer, lambda$validate$0, void, $CGLSurfaceData*, int64_t)},
	{"nativeCreateLayer", "()J", nullptr, $PRIVATE | $NATIVE, $method(CGLLayer, nativeCreateLayer, int64_t)},
	{"nativeSetScale", "(JD)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CGLLayer, nativeSetScale, void, int64_t, double)},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC, $virtualMethod(CGLLayer, replaceSurfaceData, $SurfaceData*)},
	{"setScale", "(I)V", nullptr, $PRIVATE, $method(CGLLayer, setScale, void, int32_t)},
	{"validate", "(JLsun/java2d/opengl/CGLSurfaceData;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(CGLLayer, validate, void, int64_t, $CGLSurfaceData*)},
	{"validate", "(Lsun/java2d/opengl/CGLSurfaceData;)V", nullptr, $PUBLIC, $virtualMethod(CGLLayer, validate, void, $CGLSurfaceData*)},
	{}
};

#define _METHOD_INDEX_blitTexture 1
#define _METHOD_INDEX_nativeCreateLayer 7
#define _METHOD_INDEX_nativeSetScale 8
#define _METHOD_INDEX_validate 11

$ClassInfo _CGLLayer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.opengl.CGLLayer",
	"sun.lwawt.macosx.CFLayer",
	nullptr,
	_CGLLayer_FieldInfo_,
	_CGLLayer_MethodInfo_
};

$Object* allocate$CGLLayer($Class* clazz) {
	return $of($alloc(CGLLayer));
}

int64_t CGLLayer::nativeCreateLayer() {
	int64_t $ret = 0;
	$prepareNative(CGLLayer, nativeCreateLayer, int64_t);
	$ret = $invokeNative();
	$finishNative();
	return $ret;
}

void CGLLayer::nativeSetScale(int64_t layerPtr, double scale) {
	$init(CGLLayer);
	$prepareNativeStatic(CGLLayer, nativeSetScale, void, int64_t layerPtr, double scale);
	$invokeNativeStatic(layerPtr, scale);
	$finishNativeStatic();
}

void CGLLayer::validate(int64_t layerPtr, $CGLSurfaceData* cglsd) {
	$init(CGLLayer);
	$prepareNativeStatic(CGLLayer, validate, void, int64_t layerPtr, $CGLSurfaceData* cglsd);
	$invokeNativeStatic(layerPtr, cglsd);
	$finishNativeStatic();
}

void CGLLayer::blitTexture(int64_t layerPtr) {
	$init(CGLLayer);
	$prepareNativeStatic(CGLLayer, blitTexture, void, int64_t layerPtr);
	$invokeNativeStatic(layerPtr);
	$finishNativeStatic();
}

void CGLLayer::init$($LWWindowPeer* peer) {
	$CFLayer::init$(0, true);
	this->scale = 1;
	setPtr(nativeCreateLayer());
	$set(this, peer, peer);
}

$SurfaceData* CGLLayer::replaceSurfaceData() {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getBounds()))->isEmpty()) {
		$init($NullSurfaceData);
		$set(this, surfaceData, $NullSurfaceData::theInstance);
		return this->surfaceData;
	}
	$var($CGraphicsConfig, gc, $cast($CGraphicsConfig, getGraphicsConfiguration()));
	$set(this, surfaceData, $nc(gc)->createSurfaceData(this));
	setScale($nc($($cast($CGraphicsDevice, gc->getDevice())))->getScaleFactor());
	if ($instanceOf($CGLSurfaceData, this->surfaceData)) {
		validate($cast($CGLSurfaceData, this->surfaceData));
	}
	return this->surfaceData;
}

void CGLLayer::validate($CGLSurfaceData* cglsd) {
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CGLLayer$$Lambda$lambda$validate$0, cglsd)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void CGLLayer::dispose() {
	validate(nullptr);
	$var($SurfaceData, oldData, this->surfaceData);
	$init($NullSurfaceData);
	$set(this, surfaceData, $NullSurfaceData::theInstance);
	if (oldData != nullptr) {
		oldData->flush();
	}
	$CFLayer::dispose();
}

void CGLLayer::setScale(int32_t _scale) {
	if (this->scale != _scale) {
		this->scale = _scale;
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CGLLayer$$Lambda$lambda$setScale$1$1, this)));
	}
}

void CGLLayer::drawInCGLContext() {
	$useLocalCurrentObjectStackCache();
	$var($OGLRenderQueue, rq, $OGLRenderQueue::getInstance());
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2)));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void CGLLayer::lambda$drawInCGLContext$2(int64_t ptr) {
	$init(CGLLayer);
	blitTexture(ptr);
}

void CGLLayer::lambda$setScale$1(int64_t ptr) {
	nativeSetScale(ptr, (double)this->scale);
}

void CGLLayer::lambda$validate$0($CGLSurfaceData* cglsd, int64_t ptr) {
	$init(CGLLayer);
	validate(ptr, cglsd);
}

CGLLayer::CGLLayer() {
}

$Class* CGLLayer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CGLLayer$$Lambda$lambda$validate$0::classInfo$.name)) {
			return CGLLayer$$Lambda$lambda$validate$0::load$(name, initialize);
		}
		if (name->equals(CGLLayer$$Lambda$lambda$setScale$1$1::classInfo$.name)) {
			return CGLLayer$$Lambda$lambda$setScale$1$1::load$(name, initialize);
		}
		if (name->equals(CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::classInfo$.name)) {
			return CGLLayer$$Lambda$lambda$drawInCGLContext$2$2::load$(name, initialize);
		}
	}
	$loadClass(CGLLayer, name, initialize, &_CGLLayer_ClassInfo_, allocate$CGLLayer);
	return class$;
}

$Class* CGLLayer::class$ = nullptr;

		} // opengl
	} // java2d
} // sun