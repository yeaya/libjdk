#include <sun/awt/X11/XExposeEvent.h>

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

$FieldInfo _XExposeEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XExposeEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XExposeEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XExposeEvent, pData)},
	{}
};

$MethodInfo _XExposeEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XExposeEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XExposeEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XExposeEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XExposeEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XExposeEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XExposeEvent, getSize, int32_t)},
	{"get_count", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_count, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_display, int64_t)},
	{"get_height", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_height, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_type, int32_t)},
	{"get_width", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_width, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_window, int64_t)},
	{"get_x", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_x, int32_t)},
	{"get_y", "()I", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, get_y, int32_t)},
	{"set_count", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_count, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_display, void, int64_t)},
	{"set_height", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_height, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_type, void, int32_t)},
	{"set_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_width, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_window, void, int64_t)},
	{"set_x", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_x, void, int32_t)},
	{"set_y", "(I)V", nullptr, $PUBLIC, $virtualMethod(XExposeEvent, set_y, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XExposeEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XExposeEvent, zero, void)},
	{}
};

$ClassInfo _XExposeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XExposeEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XExposeEvent_FieldInfo_,
	_XExposeEvent_MethodInfo_
};

$Object* allocate$XExposeEvent($Class* clazz) {
	return $of($alloc(XExposeEvent));
}

int32_t XExposeEvent::getSize() {
	$init(XExposeEvent);
	return 64;
}

int32_t XExposeEvent::getDataSize() {
	return getSize();
}

int64_t XExposeEvent::getPData() {
	return this->pData;
}

void XExposeEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XExposeEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XExposeEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XExposeEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XExposeEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XExposeEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XExposeEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XExposeEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XExposeEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XExposeEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XExposeEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XExposeEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XExposeEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XExposeEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XExposeEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XExposeEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XExposeEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XExposeEvent::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XExposeEvent::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XExposeEvent::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XExposeEvent::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XExposeEvent::get_count() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XExposeEvent::set_count(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

$String* XExposeEvent::getName() {
	return "XExposeEvent"_s;
}

$String* XExposeEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 400));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("count = "_s)->append(get_count())->append(", "_s);
	return ret->toString();
}

$Object* XExposeEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XExposeEvent::zero() {
	$XWrapperBase::zero();
}

$String* XExposeEvent::toString() {
	return $XWrapperBase::toString();
}

XExposeEvent::XExposeEvent() {
}

$Class* XExposeEvent::load$($String* name, bool initialize) {
	$loadClass(XExposeEvent, name, initialize, &_XExposeEvent_ClassInfo_, allocate$XExposeEvent);
	return class$;
}

$Class* XExposeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun