#include <sun/awt/X11/XSetWindowAttributes.h>

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

$FieldInfo _XSetWindowAttributes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSetWindowAttributes, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSetWindowAttributes, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSetWindowAttributes, pData)},
	{}
};

$MethodInfo _XSetWindowAttributes_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XSetWindowAttributes, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSetWindowAttributes, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSetWindowAttributes, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSetWindowAttributes, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSetWindowAttributes, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XSetWindowAttributes, getSize, int32_t)},
	{"get_background_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_background_pixel, int64_t)},
	{"get_background_pixmap", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_background_pixmap, int64_t)},
	{"get_backing_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_backing_pixel, int64_t)},
	{"get_backing_planes", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_backing_planes, int64_t)},
	{"get_backing_store", "()I", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_backing_store, int32_t)},
	{"get_bit_gravity", "()I", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_bit_gravity, int32_t)},
	{"get_border_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_border_pixel, int64_t)},
	{"get_border_pixmap", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_border_pixmap, int64_t)},
	{"get_colormap", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_colormap, int64_t)},
	{"get_cursor", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_cursor, int64_t)},
	{"get_do_not_propagate_mask", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_do_not_propagate_mask, int64_t)},
	{"get_event_mask", "()J", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_event_mask, int64_t)},
	{"get_override_redirect", "()Z", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_override_redirect, bool)},
	{"get_save_under", "()Z", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_save_under, bool)},
	{"get_win_gravity", "()I", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, get_win_gravity, int32_t)},
	{"set_background_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_background_pixel, void, int64_t)},
	{"set_background_pixmap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_background_pixmap, void, int64_t)},
	{"set_backing_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_backing_pixel, void, int64_t)},
	{"set_backing_planes", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_backing_planes, void, int64_t)},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_backing_store, void, int32_t)},
	{"set_bit_gravity", "(I)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_bit_gravity, void, int32_t)},
	{"set_border_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_border_pixel, void, int64_t)},
	{"set_border_pixmap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_border_pixmap, void, int64_t)},
	{"set_colormap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_colormap, void, int64_t)},
	{"set_cursor", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_cursor, void, int64_t)},
	{"set_do_not_propagate_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_do_not_propagate_mask, void, int64_t)},
	{"set_event_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_event_mask, void, int64_t)},
	{"set_override_redirect", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_override_redirect, void, bool)},
	{"set_save_under", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_save_under, void, bool)},
	{"set_win_gravity", "(I)V", nullptr, $PUBLIC, $virtualMethod(XSetWindowAttributes, set_win_gravity, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSetWindowAttributes, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSetWindowAttributes, zero, void)},
	{}
};

$ClassInfo _XSetWindowAttributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSetWindowAttributes",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSetWindowAttributes_FieldInfo_,
	_XSetWindowAttributes_MethodInfo_
};

$Object* allocate$XSetWindowAttributes($Class* clazz) {
	return $of($alloc(XSetWindowAttributes));
}

int32_t XSetWindowAttributes::getSize() {
	$init(XSetWindowAttributes);
	return 112;
}

int32_t XSetWindowAttributes::getDataSize() {
	return getSize();
}

int64_t XSetWindowAttributes::getPData() {
	return this->pData;
}

void XSetWindowAttributes::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSetWindowAttributes::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSetWindowAttributes::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t XSetWindowAttributes::get_background_pixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void XSetWindowAttributes::set_background_pixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t XSetWindowAttributes::get_background_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XSetWindowAttributes::set_background_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XSetWindowAttributes::get_border_pixmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XSetWindowAttributes::set_border_pixmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XSetWindowAttributes::get_border_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XSetWindowAttributes::set_border_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int32_t XSetWindowAttributes::get_bit_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void XSetWindowAttributes::set_bit_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t XSetWindowAttributes::get_win_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void XSetWindowAttributes::set_win_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t XSetWindowAttributes::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XSetWindowAttributes::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int64_t XSetWindowAttributes::get_backing_planes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XSetWindowAttributes::set_backing_planes(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XSetWindowAttributes::get_backing_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XSetWindowAttributes::set_backing_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

bool XSetWindowAttributes::get_save_under() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 64));
}

void XSetWindowAttributes::set_save_under(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 64, v);
}

int64_t XSetWindowAttributes::get_event_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XSetWindowAttributes::set_event_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int64_t XSetWindowAttributes::get_do_not_propagate_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void XSetWindowAttributes::set_do_not_propagate_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

bool XSetWindowAttributes::get_override_redirect() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XSetWindowAttributes::set_override_redirect(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

int64_t XSetWindowAttributes::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void XSetWindowAttributes::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t XSetWindowAttributes::get_cursor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 104));
}

void XSetWindowAttributes::set_cursor(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

$String* XSetWindowAttributes::getName() {
	return "XSetWindowAttributes"_s;
}

$String* XSetWindowAttributes::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 600));
	ret->append("background_pixmap = "_s)->append(get_background_pixmap())->append(", "_s);
	ret->append("background_pixel = "_s)->append(get_background_pixel())->append(", "_s);
	ret->append("border_pixmap = "_s)->append(get_border_pixmap())->append(", "_s);
	ret->append("border_pixel = "_s)->append(get_border_pixel())->append(", "_s);
	ret->append("bit_gravity = "_s)->append(get_bit_gravity())->append(", "_s);
	ret->append("win_gravity = "_s)->append(get_win_gravity())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("backing_planes = "_s)->append(get_backing_planes())->append(", "_s);
	ret->append("backing_pixel = "_s)->append(get_backing_pixel())->append(", "_s);
	ret->append("save_under = "_s)->append(get_save_under())->append(", "_s);
	ret->append("event_mask = "_s)->append(get_event_mask())->append(", "_s);
	ret->append("do_not_propagate_mask = "_s)->append(get_do_not_propagate_mask())->append(", "_s);
	ret->append("override_redirect = "_s)->append(get_override_redirect())->append(", "_s);
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	ret->append("cursor = "_s)->append(get_cursor())->append(", "_s);
	return ret->toString();
}

$Object* XSetWindowAttributes::clone() {
	return $of($XWrapperBase::clone());
}

void XSetWindowAttributes::zero() {
	$XWrapperBase::zero();
}

$String* XSetWindowAttributes::toString() {
	return $XWrapperBase::toString();
}

XSetWindowAttributes::XSetWindowAttributes() {
}

$Class* XSetWindowAttributes::load$($String* name, bool initialize) {
	$loadClass(XSetWindowAttributes, name, initialize, &_XSetWindowAttributes_ClassInfo_, allocate$XSetWindowAttributes);
	return class$;
}

$Class* XSetWindowAttributes::class$ = nullptr;

		} // X11
	} // awt
} // sun