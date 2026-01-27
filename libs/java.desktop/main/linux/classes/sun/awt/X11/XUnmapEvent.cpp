#include <sun/awt/X11/XUnmapEvent.h>

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

$FieldInfo _XUnmapEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XUnmapEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XUnmapEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XUnmapEvent, pData)},
	{}
};

$MethodInfo _XUnmapEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XUnmapEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XUnmapEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XUnmapEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XUnmapEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XUnmapEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XUnmapEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_display, int64_t)},
	{"get_event", "()J", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_event, int64_t)},
	{"get_from_configure", "()Z", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_from_configure, bool)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_display, void, int64_t)},
	{"set_event", "(J)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_event, void, int64_t)},
	{"set_from_configure", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_from_configure, void, bool)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XUnmapEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XUnmapEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XUnmapEvent, zero, void)},
	{}
};

$ClassInfo _XUnmapEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XUnmapEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XUnmapEvent_FieldInfo_,
	_XUnmapEvent_MethodInfo_
};

$Object* allocate$XUnmapEvent($Class* clazz) {
	return $of($alloc(XUnmapEvent));
}

int32_t XUnmapEvent::getSize() {
	$init(XUnmapEvent);
	return 56;
}

int32_t XUnmapEvent::getDataSize() {
	return getSize();
}

int64_t XUnmapEvent::getPData() {
	return this->pData;
}

void XUnmapEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XUnmapEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XUnmapEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XUnmapEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XUnmapEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XUnmapEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XUnmapEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XUnmapEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XUnmapEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XUnmapEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XUnmapEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XUnmapEvent::get_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XUnmapEvent::set_event(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XUnmapEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XUnmapEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

bool XUnmapEvent::get_from_configure() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 48));
}

void XUnmapEvent::set_from_configure(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 48, v);
}

$String* XUnmapEvent::getName() {
	return "XUnmapEvent"_s;
}

$String* XUnmapEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("event = "_s)->append(get_event())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("from_configure = "_s)->append(get_from_configure())->append(", "_s);
	return ret->toString();
}

$Object* XUnmapEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XUnmapEvent::zero() {
	$XWrapperBase::zero();
}

$String* XUnmapEvent::toString() {
	return $XWrapperBase::toString();
}

XUnmapEvent::XUnmapEvent() {
}

$Class* XUnmapEvent::load$($String* name, bool initialize) {
	$loadClass(XUnmapEvent, name, initialize, &_XUnmapEvent_ClassInfo_, allocate$XUnmapEvent);
	return class$;
}

$Class* XUnmapEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun