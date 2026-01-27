#include <sun/awt/X11/XPixmapFormatValues.h>

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

$FieldInfo _XPixmapFormatValues_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XPixmapFormatValues, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XPixmapFormatValues, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XPixmapFormatValues, pData)},
	{}
};

$MethodInfo _XPixmapFormatValues_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XPixmapFormatValues, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPixmapFormatValues, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XPixmapFormatValues, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XPixmapFormatValues, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XPixmapFormatValues, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XPixmapFormatValues, getSize, int32_t)},
	{"get_bits_per_pixel", "()I", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, get_bits_per_pixel, int32_t)},
	{"get_depth", "()I", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, get_depth, int32_t)},
	{"get_scanline_pad", "()I", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, get_scanline_pad, int32_t)},
	{"set_bits_per_pixel", "(I)V", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, set_bits_per_pixel, void, int32_t)},
	{"set_depth", "(I)V", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, set_depth, void, int32_t)},
	{"set_scanline_pad", "(I)V", nullptr, $PUBLIC, $virtualMethod(XPixmapFormatValues, set_scanline_pad, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XPixmapFormatValues, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XPixmapFormatValues, zero, void)},
	{}
};

$ClassInfo _XPixmapFormatValues_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XPixmapFormatValues",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XPixmapFormatValues_FieldInfo_,
	_XPixmapFormatValues_MethodInfo_
};

$Object* allocate$XPixmapFormatValues($Class* clazz) {
	return $of($alloc(XPixmapFormatValues));
}

int32_t XPixmapFormatValues::getSize() {
	$init(XPixmapFormatValues);
	return 12;
}

int32_t XPixmapFormatValues::getDataSize() {
	return getSize();
}

int64_t XPixmapFormatValues::getPData() {
	return this->pData;
}

void XPixmapFormatValues::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XPixmapFormatValues::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XPixmapFormatValues::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XPixmapFormatValues::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XPixmapFormatValues::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XPixmapFormatValues::get_bits_per_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XPixmapFormatValues::set_bits_per_pixel(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XPixmapFormatValues::get_scanline_pad() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XPixmapFormatValues::set_scanline_pad(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

$String* XPixmapFormatValues::getName() {
	return "XPixmapFormatValues"_s;
}

$String* XPixmapFormatValues::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("bits_per_pixel = "_s)->append(get_bits_per_pixel())->append(", "_s);
	ret->append("scanline_pad = "_s)->append(get_scanline_pad())->append(", "_s);
	return ret->toString();
}

$Object* XPixmapFormatValues::clone() {
	return $of($XWrapperBase::clone());
}

void XPixmapFormatValues::zero() {
	$XWrapperBase::zero();
}

$String* XPixmapFormatValues::toString() {
	return $XWrapperBase::toString();
}

XPixmapFormatValues::XPixmapFormatValues() {
}

$Class* XPixmapFormatValues::load$($String* name, bool initialize) {
	$loadClass(XPixmapFormatValues, name, initialize, &_XPixmapFormatValues_ClassInfo_, allocate$XPixmapFormatValues);
	return class$;
}

$Class* XPixmapFormatValues::class$ = nullptr;

		} // X11
	} // awt
} // sun