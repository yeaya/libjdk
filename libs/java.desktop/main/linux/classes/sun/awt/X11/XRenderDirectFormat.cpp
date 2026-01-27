#include <sun/awt/X11/XRenderDirectFormat.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XRenderDirectFormat_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XRenderDirectFormat, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XRenderDirectFormat, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XRenderDirectFormat, pData)},
	{}
};

$MethodInfo _XRenderDirectFormat_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XRenderDirectFormat, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XRenderDirectFormat, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderDirectFormat, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XRenderDirectFormat, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XRenderDirectFormat, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XRenderDirectFormat, getSize, int32_t)},
	{"get_alpha", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_alpha, int16_t)},
	{"get_alphaMask", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_alphaMask, int16_t)},
	{"get_blue", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_blue, int16_t)},
	{"get_blueMask", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_blueMask, int16_t)},
	{"get_green", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_green, int16_t)},
	{"get_greenMask", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_greenMask, int16_t)},
	{"get_red", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_red, int16_t)},
	{"get_redMask", "()S", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, get_redMask, int16_t)},
	{"set_alpha", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_alpha, void, int16_t)},
	{"set_alphaMask", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_alphaMask, void, int16_t)},
	{"set_blue", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_blue, void, int16_t)},
	{"set_blueMask", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_blueMask, void, int16_t)},
	{"set_green", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_green, void, int16_t)},
	{"set_greenMask", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_greenMask, void, int16_t)},
	{"set_red", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_red, void, int16_t)},
	{"set_redMask", "(S)V", nullptr, $PUBLIC, $virtualMethod(XRenderDirectFormat, set_redMask, void, int16_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderDirectFormat, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XRenderDirectFormat, zero, void)},
	{}
};

$ClassInfo _XRenderDirectFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XRenderDirectFormat",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XRenderDirectFormat_FieldInfo_,
	_XRenderDirectFormat_MethodInfo_
};

$Object* allocate$XRenderDirectFormat($Class* clazz) {
	return $of($alloc(XRenderDirectFormat));
}

int32_t XRenderDirectFormat::getSize() {
	$init(XRenderDirectFormat);
	return 16;
}

int32_t XRenderDirectFormat::getDataSize() {
	return getSize();
}

int64_t XRenderDirectFormat::getPData() {
	return this->pData;
}

void XRenderDirectFormat::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XRenderDirectFormat::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XRenderDirectFormat::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int16_t XRenderDirectFormat::get_red() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 0));
}

void XRenderDirectFormat::set_red(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 0, v);
}

int16_t XRenderDirectFormat::get_redMask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 2));
}

void XRenderDirectFormat::set_redMask(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 2, v);
}

int16_t XRenderDirectFormat::get_green() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 4));
}

void XRenderDirectFormat::set_green(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 4, v);
}

int16_t XRenderDirectFormat::get_greenMask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 6));
}

void XRenderDirectFormat::set_greenMask(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 6, v);
}

int16_t XRenderDirectFormat::get_blue() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 8));
}

void XRenderDirectFormat::set_blue(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 8, v);
}

int16_t XRenderDirectFormat::get_blueMask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 10));
}

void XRenderDirectFormat::set_blueMask(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 10, v);
}

int16_t XRenderDirectFormat::get_alpha() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 12));
}

void XRenderDirectFormat::set_alpha(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 12, v);
}

int16_t XRenderDirectFormat::get_alphaMask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getShort(this->pData + 14));
}

void XRenderDirectFormat::set_alphaMask(int16_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putShort(this->pData + 14, v);
}

$String* XRenderDirectFormat::getName() {
	return "XRenderDirectFormat"_s;
}

$String* XRenderDirectFormat::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 320));
	ret->append("red = "_s)->append((int32_t)get_red())->append(", "_s);
	ret->append("redMask = "_s)->append((int32_t)get_redMask())->append(", "_s);
	ret->append("green = "_s)->append((int32_t)get_green())->append(", "_s);
	ret->append("greenMask = "_s)->append((int32_t)get_greenMask())->append(", "_s);
	ret->append("blue = "_s)->append((int32_t)get_blue())->append(", "_s);
	ret->append("blueMask = "_s)->append((int32_t)get_blueMask())->append(", "_s);
	ret->append("alpha = "_s)->append((int32_t)get_alpha())->append(", "_s);
	ret->append("alphaMask = "_s)->append((int32_t)get_alphaMask())->append(", "_s);
	return ret->toString();
}

$Object* XRenderDirectFormat::clone() {
	return $of($XWrapperBase::clone());
}

void XRenderDirectFormat::zero() {
	$XWrapperBase::zero();
}

$String* XRenderDirectFormat::toString() {
	return $XWrapperBase::toString();
}

XRenderDirectFormat::XRenderDirectFormat() {
}

$Class* XRenderDirectFormat::load$($String* name, bool initialize) {
	$loadClass(XRenderDirectFormat, name, initialize, &_XRenderDirectFormat_ClassInfo_, allocate$XRenderDirectFormat);
	return class$;
}

$Class* XRenderDirectFormat::class$ = nullptr;

		} // X11
	} // awt
} // sun