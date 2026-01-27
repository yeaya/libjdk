#include <sun/awt/X11/XVisibilityEvent.h>

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

$FieldInfo _XVisibilityEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XVisibilityEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XVisibilityEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XVisibilityEvent, pData)},
	{}
};

$MethodInfo _XVisibilityEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XVisibilityEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XVisibilityEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XVisibilityEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XVisibilityEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XVisibilityEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XVisibilityEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_display, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_serial, int64_t)},
	{"get_state", "()I", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_state, int32_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_display, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_serial, void, int64_t)},
	{"set_state", "(I)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_state, void, int32_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XVisibilityEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XVisibilityEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XVisibilityEvent, zero, void)},
	{}
};

$ClassInfo _XVisibilityEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XVisibilityEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XVisibilityEvent_FieldInfo_,
	_XVisibilityEvent_MethodInfo_
};

$Object* allocate$XVisibilityEvent($Class* clazz) {
	return $of($alloc(XVisibilityEvent));
}

int32_t XVisibilityEvent::getSize() {
	$init(XVisibilityEvent);
	return 48;
}

int32_t XVisibilityEvent::getDataSize() {
	return getSize();
}

int64_t XVisibilityEvent::getPData() {
	return this->pData;
}

void XVisibilityEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XVisibilityEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XVisibilityEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XVisibilityEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XVisibilityEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XVisibilityEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XVisibilityEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XVisibilityEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XVisibilityEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XVisibilityEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XVisibilityEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XVisibilityEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XVisibilityEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XVisibilityEvent::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XVisibilityEvent::set_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

$String* XVisibilityEvent::getName() {
	return "XVisibilityEvent"_s;
}

$String* XVisibilityEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("state = "_s)->append(get_state())->append(", "_s);
	return ret->toString();
}

$Object* XVisibilityEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XVisibilityEvent::zero() {
	$XWrapperBase::zero();
}

$String* XVisibilityEvent::toString() {
	return $XWrapperBase::toString();
}

XVisibilityEvent::XVisibilityEvent() {
}

$Class* XVisibilityEvent::load$($String* name, bool initialize) {
	$loadClass(XVisibilityEvent, name, initialize, &_XVisibilityEvent_ClassInfo_, allocate$XVisibilityEvent);
	return class$;
}

$Class* XVisibilityEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun