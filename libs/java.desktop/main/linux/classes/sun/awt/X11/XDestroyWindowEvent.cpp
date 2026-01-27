#include <sun/awt/X11/XDestroyWindowEvent.h>

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

$FieldInfo _XDestroyWindowEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XDestroyWindowEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XDestroyWindowEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XDestroyWindowEvent, pData)},
	{}
};

$MethodInfo _XDestroyWindowEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XDestroyWindowEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XDestroyWindowEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XDestroyWindowEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XDestroyWindowEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XDestroyWindowEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XDestroyWindowEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_display, int64_t)},
	{"get_event", "()J", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_event, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_display, void, int64_t)},
	{"set_event", "(J)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_event, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XDestroyWindowEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XDestroyWindowEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XDestroyWindowEvent, zero, void)},
	{}
};

$ClassInfo _XDestroyWindowEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XDestroyWindowEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XDestroyWindowEvent_FieldInfo_,
	_XDestroyWindowEvent_MethodInfo_
};

$Object* allocate$XDestroyWindowEvent($Class* clazz) {
	return $of($alloc(XDestroyWindowEvent));
}

int32_t XDestroyWindowEvent::getSize() {
	$init(XDestroyWindowEvent);
	return 48;
}

int32_t XDestroyWindowEvent::getDataSize() {
	return getSize();
}

int64_t XDestroyWindowEvent::getPData() {
	return this->pData;
}

void XDestroyWindowEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XDestroyWindowEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XDestroyWindowEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XDestroyWindowEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XDestroyWindowEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XDestroyWindowEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XDestroyWindowEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XDestroyWindowEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XDestroyWindowEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XDestroyWindowEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XDestroyWindowEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XDestroyWindowEvent::get_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XDestroyWindowEvent::set_event(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XDestroyWindowEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XDestroyWindowEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

$String* XDestroyWindowEvent::getName() {
	return "XDestroyWindowEvent"_s;
}

$String* XDestroyWindowEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("event = "_s)->append(get_event())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	return ret->toString();
}

$Object* XDestroyWindowEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XDestroyWindowEvent::zero() {
	$XWrapperBase::zero();
}

$String* XDestroyWindowEvent::toString() {
	return $XWrapperBase::toString();
}

XDestroyWindowEvent::XDestroyWindowEvent() {
}

$Class* XDestroyWindowEvent::load$($String* name, bool initialize) {
	$loadClass(XDestroyWindowEvent, name, initialize, &_XDestroyWindowEvent_ClassInfo_, allocate$XDestroyWindowEvent);
	return class$;
}

$Class* XDestroyWindowEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun