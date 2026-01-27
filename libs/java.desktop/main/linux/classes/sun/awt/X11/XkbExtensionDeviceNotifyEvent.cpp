#include <sun/awt/X11/XkbExtensionDeviceNotifyEvent.h>

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

$FieldInfo _XkbExtensionDeviceNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbExtensionDeviceNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbExtensionDeviceNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbExtensionDeviceNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbExtensionDeviceNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XkbExtensionDeviceNotifyEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XkbExtensionDeviceNotifyEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbExtensionDeviceNotifyEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbExtensionDeviceNotifyEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XkbExtensionDeviceNotifyEvent, getSize, int32_t)},
	{"get_device", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_device, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_display, int64_t)},
	{"get_first_btn", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_first_btn, int32_t)},
	{"get_led_class", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_led_class, int32_t)},
	{"get_led_id", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_led_id, int32_t)},
	{"get_led_state", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_led_state, int32_t)},
	{"get_leds_defined", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_leds_defined, int32_t)},
	{"get_num_btns", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_num_btns, int32_t)},
	{"get_reason", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_reason, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_serial, int64_t)},
	{"get_supported", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_supported, int32_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_type, int32_t)},
	{"get_unsupported", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_unsupported, int32_t)},
	{"get_xkb_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, get_xkb_type, int32_t)},
	{"set_device", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_device, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_display, void, int64_t)},
	{"set_first_btn", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_first_btn, void, int32_t)},
	{"set_led_class", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_led_class, void, int32_t)},
	{"set_led_id", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_led_id, void, int32_t)},
	{"set_led_state", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_led_state, void, int32_t)},
	{"set_leds_defined", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_leds_defined, void, int32_t)},
	{"set_num_btns", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_num_btns, void, int32_t)},
	{"set_reason", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_reason, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_serial, void, int64_t)},
	{"set_supported", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_supported, void, int32_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_type, void, int32_t)},
	{"set_unsupported", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_unsupported, void, int32_t)},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, set_xkb_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbExtensionDeviceNotifyEvent, zero, void)},
	{}
};

$ClassInfo _XkbExtensionDeviceNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbExtensionDeviceNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbExtensionDeviceNotifyEvent_FieldInfo_,
	_XkbExtensionDeviceNotifyEvent_MethodInfo_
};

$Object* allocate$XkbExtensionDeviceNotifyEvent($Class* clazz) {
	return $of($alloc(XkbExtensionDeviceNotifyEvent));
}

int32_t XkbExtensionDeviceNotifyEvent::getSize() {
	$init(XkbExtensionDeviceNotifyEvent);
	return 88;
}

int32_t XkbExtensionDeviceNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbExtensionDeviceNotifyEvent::getPData() {
	return this->pData;
}

void XkbExtensionDeviceNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbExtensionDeviceNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbExtensionDeviceNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbExtensionDeviceNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbExtensionDeviceNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbExtensionDeviceNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbExtensionDeviceNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbExtensionDeviceNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbExtensionDeviceNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbExtensionDeviceNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbExtensionDeviceNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbExtensionDeviceNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbExtensionDeviceNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbExtensionDeviceNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbExtensionDeviceNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_reason() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbExtensionDeviceNotifyEvent::set_reason(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_supported() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbExtensionDeviceNotifyEvent::set_supported(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_unsupported() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbExtensionDeviceNotifyEvent::set_unsupported(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_first_btn() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbExtensionDeviceNotifyEvent::set_first_btn(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_num_btns() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbExtensionDeviceNotifyEvent::set_num_btns(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_leds_defined() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XkbExtensionDeviceNotifyEvent::set_leds_defined(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_led_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XkbExtensionDeviceNotifyEvent::set_led_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_led_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XkbExtensionDeviceNotifyEvent::set_led_class(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XkbExtensionDeviceNotifyEvent::get_led_id() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XkbExtensionDeviceNotifyEvent::set_led_id(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

$String* XkbExtensionDeviceNotifyEvent::getName() {
	return "XkbExtensionDeviceNotifyEvent"_s;
}

$String* XkbExtensionDeviceNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 640));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("reason = "_s)->append(get_reason())->append(", "_s);
	ret->append("supported = "_s)->append(get_supported())->append(", "_s);
	ret->append("unsupported = "_s)->append(get_unsupported())->append(", "_s);
	ret->append("first_btn = "_s)->append(get_first_btn())->append(", "_s);
	ret->append("num_btns = "_s)->append(get_num_btns())->append(", "_s);
	ret->append("leds_defined = "_s)->append(get_leds_defined())->append(", "_s);
	ret->append("led_state = "_s)->append(get_led_state())->append(", "_s);
	ret->append("led_class = "_s)->append(get_led_class())->append(", "_s);
	ret->append("led_id = "_s)->append(get_led_id())->append(", "_s);
	return ret->toString();
}

$Object* XkbExtensionDeviceNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbExtensionDeviceNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbExtensionDeviceNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbExtensionDeviceNotifyEvent::XkbExtensionDeviceNotifyEvent() {
}

$Class* XkbExtensionDeviceNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbExtensionDeviceNotifyEvent, name, initialize, &_XkbExtensionDeviceNotifyEvent_ClassInfo_, allocate$XkbExtensionDeviceNotifyEvent);
	return class$;
}

$Class* XkbExtensionDeviceNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun