#include <sun/awt/X11/XMappingEvent.h>

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

$FieldInfo _XMappingEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XMappingEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XMappingEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XMappingEvent, pData)},
	{}
};

$MethodInfo _XMappingEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XMappingEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMappingEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XMappingEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XMappingEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XMappingEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XMappingEvent, getSize, int32_t)},
	{"get_count", "()I", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_count, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_display, int64_t)},
	{"get_first_keycode", "()I", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_first_keycode, int32_t)},
	{"get_request", "()I", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_request, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, get_window, int64_t)},
	{"set_count", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_count, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_display, void, int64_t)},
	{"set_first_keycode", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_first_keycode, void, int32_t)},
	{"set_request", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_request, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XMappingEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XMappingEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XMappingEvent, zero, void)},
	{}
};

$ClassInfo _XMappingEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XMappingEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XMappingEvent_FieldInfo_,
	_XMappingEvent_MethodInfo_
};

$Object* allocate$XMappingEvent($Class* clazz) {
	return $of($alloc(XMappingEvent));
}

int32_t XMappingEvent::getSize() {
	$init(XMappingEvent);
	return 56;
}

int32_t XMappingEvent::getDataSize() {
	return getSize();
}

int64_t XMappingEvent::getPData() {
	return this->pData;
}

void XMappingEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XMappingEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XMappingEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XMappingEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XMappingEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XMappingEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XMappingEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XMappingEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XMappingEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XMappingEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XMappingEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XMappingEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XMappingEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XMappingEvent::get_request() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XMappingEvent::set_request(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XMappingEvent::get_first_keycode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XMappingEvent::set_first_keycode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XMappingEvent::get_count() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XMappingEvent::set_count(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

$String* XMappingEvent::getName() {
	return "XMappingEvent"_s;
}

$String* XMappingEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 320));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("request = "_s)->append(get_request())->append(", "_s);
	ret->append("first_keycode = "_s)->append(get_first_keycode())->append(", "_s);
	ret->append("count = "_s)->append(get_count())->append(", "_s);
	return ret->toString();
}

$Object* XMappingEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XMappingEvent::zero() {
	$XWrapperBase::zero();
}

$String* XMappingEvent::toString() {
	return $XWrapperBase::toString();
}

XMappingEvent::XMappingEvent() {
}

$Class* XMappingEvent::load$($String* name, bool initialize) {
	$loadClass(XMappingEvent, name, initialize, &_XMappingEvent_ClassInfo_, allocate$XMappingEvent);
	return class$;
}

$Class* XMappingEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun