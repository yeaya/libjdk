#include <sun/awt/X11/XGraphicsExposeEvent.h>

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

$FieldInfo _XGraphicsExposeEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XGraphicsExposeEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XGraphicsExposeEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XGraphicsExposeEvent, pData)},
	{}
};

$MethodInfo _XGraphicsExposeEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XGraphicsExposeEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XGraphicsExposeEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XGraphicsExposeEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XGraphicsExposeEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XGraphicsExposeEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XGraphicsExposeEvent, getSize, int32_t)},
	{"get_count", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_count, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_display, int64_t)},
	{"get_drawable", "()J", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_drawable, int64_t)},
	{"get_height", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_height, int32_t)},
	{"get_major_code", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_major_code, int32_t)},
	{"get_minor_code", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_minor_code, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_type, int32_t)},
	{"get_width", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_width, int32_t)},
	{"get_x", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_x, int32_t)},
	{"get_y", "()I", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, get_y, int32_t)},
	{"set_count", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_count, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_display, void, int64_t)},
	{"set_drawable", "(J)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_drawable, void, int64_t)},
	{"set_height", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_height, void, int32_t)},
	{"set_major_code", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_major_code, void, int32_t)},
	{"set_minor_code", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_minor_code, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_type, void, int32_t)},
	{"set_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_width, void, int32_t)},
	{"set_x", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_x, void, int32_t)},
	{"set_y", "(I)V", nullptr, $PUBLIC, $virtualMethod(XGraphicsExposeEvent, set_y, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XGraphicsExposeEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XGraphicsExposeEvent, zero, void)},
	{}
};

$ClassInfo _XGraphicsExposeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XGraphicsExposeEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XGraphicsExposeEvent_FieldInfo_,
	_XGraphicsExposeEvent_MethodInfo_
};

$Object* allocate$XGraphicsExposeEvent($Class* clazz) {
	return $of($alloc(XGraphicsExposeEvent));
}

int32_t XGraphicsExposeEvent::getSize() {
	$init(XGraphicsExposeEvent);
	return 72;
}

int32_t XGraphicsExposeEvent::getDataSize() {
	return getSize();
}

int64_t XGraphicsExposeEvent::getPData() {
	return this->pData;
}

void XGraphicsExposeEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XGraphicsExposeEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XGraphicsExposeEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XGraphicsExposeEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XGraphicsExposeEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XGraphicsExposeEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XGraphicsExposeEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XGraphicsExposeEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XGraphicsExposeEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XGraphicsExposeEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XGraphicsExposeEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XGraphicsExposeEvent::get_drawable() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XGraphicsExposeEvent::set_drawable(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XGraphicsExposeEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XGraphicsExposeEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XGraphicsExposeEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XGraphicsExposeEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XGraphicsExposeEvent::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XGraphicsExposeEvent::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XGraphicsExposeEvent::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XGraphicsExposeEvent::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XGraphicsExposeEvent::get_count() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XGraphicsExposeEvent::set_count(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XGraphicsExposeEvent::get_major_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XGraphicsExposeEvent::set_major_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XGraphicsExposeEvent::get_minor_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XGraphicsExposeEvent::set_minor_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

$String* XGraphicsExposeEvent::getName() {
	return "XGraphicsExposeEvent"_s;
}

$String* XGraphicsExposeEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 480));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("drawable = "_s)->append(get_drawable())->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("count = "_s)->append(get_count())->append(", "_s);
	ret->append("major_code = "_s)->append(get_major_code())->append(", "_s);
	ret->append("minor_code = "_s)->append(get_minor_code())->append(", "_s);
	return ret->toString();
}

$Object* XGraphicsExposeEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XGraphicsExposeEvent::zero() {
	$XWrapperBase::zero();
}

$String* XGraphicsExposeEvent::toString() {
	return $XWrapperBase::toString();
}

XGraphicsExposeEvent::XGraphicsExposeEvent() {
}

$Class* XGraphicsExposeEvent::load$($String* name, bool initialize) {
	$loadClass(XGraphicsExposeEvent, name, initialize, &_XGraphicsExposeEvent_ClassInfo_, allocate$XGraphicsExposeEvent);
	return class$;
}

$Class* XGraphicsExposeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun