#include <sun/awt/X11/XCirculateEvent.h>

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

$FieldInfo _XCirculateEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XCirculateEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XCirculateEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XCirculateEvent, pData)},
	{}
};

$MethodInfo _XCirculateEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XCirculateEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XCirculateEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCirculateEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XCirculateEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XCirculateEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XCirculateEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_display, int64_t)},
	{"get_event", "()J", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_event, int64_t)},
	{"get_place", "()I", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_place, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_display, void, int64_t)},
	{"set_event", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_event, void, int64_t)},
	{"set_place", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_place, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCirculateEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCirculateEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCirculateEvent, zero, void)},
	{}
};

$ClassInfo _XCirculateEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XCirculateEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XCirculateEvent_FieldInfo_,
	_XCirculateEvent_MethodInfo_
};

$Object* allocate$XCirculateEvent($Class* clazz) {
	return $of($alloc(XCirculateEvent));
}

int32_t XCirculateEvent::getSize() {
	$init(XCirculateEvent);
	return 56;
}

int32_t XCirculateEvent::getDataSize() {
	return getSize();
}

int64_t XCirculateEvent::getPData() {
	return this->pData;
}

void XCirculateEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XCirculateEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XCirculateEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XCirculateEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XCirculateEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XCirculateEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XCirculateEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XCirculateEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XCirculateEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XCirculateEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XCirculateEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XCirculateEvent::get_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XCirculateEvent::set_event(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XCirculateEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XCirculateEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int32_t XCirculateEvent::get_place() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XCirculateEvent::set_place(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

$String* XCirculateEvent::getName() {
	return "XCirculateEvent"_s;
}

$String* XCirculateEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("event = "_s)->append(get_event())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("place = "_s)->append(get_place())->append(", "_s);
	return ret->toString();
}

$Object* XCirculateEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XCirculateEvent::zero() {
	$XWrapperBase::zero();
}

$String* XCirculateEvent::toString() {
	return $XWrapperBase::toString();
}

XCirculateEvent::XCirculateEvent() {
}

$Class* XCirculateEvent::load$($String* name, bool initialize) {
	$loadClass(XCirculateEvent, name, initialize, &_XCirculateEvent_ClassInfo_, allocate$XCirculateEvent);
	return class$;
}

$Class* XCirculateEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun