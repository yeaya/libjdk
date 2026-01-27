#include <sun/awt/X11/XRenderPictFormat.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XRenderDirectFormat.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XRenderDirectFormat = ::sun::awt::X11::XRenderDirectFormat;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XRenderPictFormat_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XRenderPictFormat, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XRenderPictFormat, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XRenderPictFormat, pData)},
	{}
};

$MethodInfo _XRenderPictFormat_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XRenderPictFormat, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XRenderPictFormat, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderPictFormat, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XRenderPictFormat, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XRenderPictFormat, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XRenderPictFormat, getSize, int32_t)},
	{"get_colormap", "()J", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, get_colormap, int64_t)},
	{"get_depth", "()I", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, get_depth, int32_t)},
	{"get_direct", "()Lsun/awt/X11/XRenderDirectFormat;", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, get_direct, $XRenderDirectFormat*)},
	{"get_id", "()J", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, get_id, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, get_type, int32_t)},
	{"set_colormap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, set_colormap, void, int64_t)},
	{"set_depth", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, set_depth, void, int32_t)},
	{"set_id", "(J)V", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, set_id, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XRenderPictFormat, set_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderPictFormat, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderPictFormat, zero, void)},
	{}
};

$ClassInfo _XRenderPictFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XRenderPictFormat",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XRenderPictFormat_FieldInfo_,
	_XRenderPictFormat_MethodInfo_
};

$Object* allocate$XRenderPictFormat($Class* clazz) {
	return $of($alloc(XRenderPictFormat));
}

int32_t XRenderPictFormat::getSize() {
	$init(XRenderPictFormat);
	return 40;
}

int32_t XRenderPictFormat::getDataSize() {
	return getSize();
}

int64_t XRenderPictFormat::getPData() {
	return this->pData;
}

void XRenderPictFormat::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XRenderPictFormat::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XRenderPictFormat::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XRenderPictFormat::get_id() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XRenderPictFormat::set_id(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int32_t XRenderPictFormat::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XRenderPictFormat::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XRenderPictFormat::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XRenderPictFormat::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

$XRenderDirectFormat* XRenderPictFormat::get_direct() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $new($XRenderDirectFormat, this->pData + 16);
}

int64_t XRenderPictFormat::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XRenderPictFormat::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

$String* XRenderPictFormat::getName() {
	return "XRenderPictFormat"_s;
}

$String* XRenderPictFormat::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 200));
	ret->append("id = "_s)->append(get_id())->append(", "_s);
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("direct = "_s)->append($($of(get_direct())))->append(", "_s);
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	return ret->toString();
}

$Object* XRenderPictFormat::clone() {
	return $of($XWrapperBase::clone());
}

void XRenderPictFormat::zero() {
	$XWrapperBase::zero();
}

$String* XRenderPictFormat::toString() {
	return $XWrapperBase::toString();
}

XRenderPictFormat::XRenderPictFormat() {
}

$Class* XRenderPictFormat::load$($String* name, bool initialize) {
	$loadClass(XRenderPictFormat, name, initialize, &_XRenderPictFormat_ClassInfo_, allocate$XRenderPictFormat);
	return class$;
}

$Class* XRenderPictFormat::class$ = nullptr;

		} // X11
	} // awt
} // sun