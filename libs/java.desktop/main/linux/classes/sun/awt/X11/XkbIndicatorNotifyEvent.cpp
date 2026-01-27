#include <sun/awt/X11/XkbIndicatorNotifyEvent.h>

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

$FieldInfo _XkbIndicatorNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbIndicatorNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbIndicatorNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbIndicatorNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbIndicatorNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XkbIndicatorNotifyEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XkbIndicatorNotifyEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbIndicatorNotifyEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbIndicatorNotifyEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbIndicatorNotifyEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XkbIndicatorNotifyEvent, getSize, int32_t)},
	{"get_changed", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_changed, int32_t)},
	{"get_device", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_device, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_display, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_serial, int64_t)},
	{"get_state", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_state, int32_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_type, int32_t)},
	{"get_xkb_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, get_xkb_type, int32_t)},
	{"set_changed", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_changed, void, int32_t)},
	{"set_device", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_device, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_display, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_serial, void, int64_t)},
	{"set_state", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_state, void, int32_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_type, void, int32_t)},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbIndicatorNotifyEvent, set_xkb_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbIndicatorNotifyEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbIndicatorNotifyEvent, zero, void)},
	{}
};

$ClassInfo _XkbIndicatorNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbIndicatorNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbIndicatorNotifyEvent_FieldInfo_,
	_XkbIndicatorNotifyEvent_MethodInfo_
};

$Object* allocate$XkbIndicatorNotifyEvent($Class* clazz) {
	return $of($alloc(XkbIndicatorNotifyEvent));
}

int32_t XkbIndicatorNotifyEvent::getSize() {
	$init(XkbIndicatorNotifyEvent);
	return 56;
}

int32_t XkbIndicatorNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbIndicatorNotifyEvent::getPData() {
	return this->pData;
}

void XkbIndicatorNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbIndicatorNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbIndicatorNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbIndicatorNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbIndicatorNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbIndicatorNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbIndicatorNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbIndicatorNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbIndicatorNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbIndicatorNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbIndicatorNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbIndicatorNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbIndicatorNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbIndicatorNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbIndicatorNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbIndicatorNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbIndicatorNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbIndicatorNotifyEvent::get_changed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbIndicatorNotifyEvent::set_changed(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbIndicatorNotifyEvent::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbIndicatorNotifyEvent::set_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

$String* XkbIndicatorNotifyEvent::getName() {
	return "XkbIndicatorNotifyEvent"_s;
}

$String* XkbIndicatorNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 360));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("changed = "_s)->append(get_changed())->append(", "_s);
	ret->append("state = "_s)->append(get_state())->append(", "_s);
	return ret->toString();
}

$Object* XkbIndicatorNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbIndicatorNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbIndicatorNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbIndicatorNotifyEvent::XkbIndicatorNotifyEvent() {
}

$Class* XkbIndicatorNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbIndicatorNotifyEvent, name, initialize, &_XkbIndicatorNotifyEvent_ClassInfo_, allocate$XkbIndicatorNotifyEvent);
	return class$;
}

$Class* XkbIndicatorNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun