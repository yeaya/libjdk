#include <sun/awt/X11/XAnyEvent.h>

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

$FieldInfo _XAnyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XAnyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XAnyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XAnyEvent, pData)},
	{}
};

$MethodInfo _XAnyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XAnyEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XAnyEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XAnyEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XAnyEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XAnyEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XAnyEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, get_display, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, set_display, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XAnyEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XAnyEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XAnyEvent, zero, void)},
	{}
};

$ClassInfo _XAnyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XAnyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XAnyEvent_FieldInfo_,
	_XAnyEvent_MethodInfo_
};

$Object* allocate$XAnyEvent($Class* clazz) {
	return $of($alloc(XAnyEvent));
}

int32_t XAnyEvent::getSize() {
	$init(XAnyEvent);
	return 40;
}

int32_t XAnyEvent::getDataSize() {
	return getSize();
}

int64_t XAnyEvent::getPData() {
	return this->pData;
}

void XAnyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XAnyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XAnyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XAnyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XAnyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XAnyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XAnyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XAnyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XAnyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XAnyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XAnyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XAnyEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XAnyEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

$String* XAnyEvent::getName() {
	return "XAnyEvent"_s;
}

$String* XAnyEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 200));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	return ret->toString();
}

$Object* XAnyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XAnyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XAnyEvent::toString() {
	return $XWrapperBase::toString();
}

XAnyEvent::XAnyEvent() {
}

$Class* XAnyEvent::load$($String* name, bool initialize) {
	$loadClass(XAnyEvent, name, initialize, &_XAnyEvent_ClassInfo_, allocate$XAnyEvent);
	return class$;
}

$Class* XAnyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun