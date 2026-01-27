#include <sun/awt/X11/XSelectionClearEvent.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAtom.h>
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
using $XAtom = ::sun::awt::X11::XAtom;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XSelectionClearEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSelectionClearEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSelectionClearEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSelectionClearEvent, pData)},
	{}
};

$MethodInfo _XSelectionClearEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XSelectionClearEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSelectionClearEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionClearEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSelectionClearEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSelectionClearEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XSelectionClearEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_display, int64_t)},
	{"get_selection", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_selection, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_serial, int64_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_display, void, int64_t)},
	{"set_selection", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_selection, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_serial, void, int64_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionClearEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionClearEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionClearEvent, zero, void)},
	{}
};

$ClassInfo _XSelectionClearEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSelectionClearEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSelectionClearEvent_FieldInfo_,
	_XSelectionClearEvent_MethodInfo_
};

$Object* allocate$XSelectionClearEvent($Class* clazz) {
	return $of($alloc(XSelectionClearEvent));
}

int32_t XSelectionClearEvent::getSize() {
	$init(XSelectionClearEvent);
	return 56;
}

int32_t XSelectionClearEvent::getDataSize() {
	return getSize();
}

int64_t XSelectionClearEvent::getPData() {
	return this->pData;
}

void XSelectionClearEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSelectionClearEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSelectionClearEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XSelectionClearEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XSelectionClearEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XSelectionClearEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XSelectionClearEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XSelectionClearEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XSelectionClearEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XSelectionClearEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XSelectionClearEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XSelectionClearEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XSelectionClearEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XSelectionClearEvent::get_selection() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XSelectionClearEvent::set_selection(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XSelectionClearEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 48));
}

void XSelectionClearEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 48, v);
}

$String* XSelectionClearEvent::getName() {
	return "XSelectionClearEvent"_s;
}

$String* XSelectionClearEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("selection = "_s)->append($($of($XAtom::get(get_selection()))))->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	return ret->toString();
}

$Object* XSelectionClearEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XSelectionClearEvent::zero() {
	$XWrapperBase::zero();
}

$String* XSelectionClearEvent::toString() {
	return $XWrapperBase::toString();
}

XSelectionClearEvent::XSelectionClearEvent() {
}

$Class* XSelectionClearEvent::load$($String* name, bool initialize) {
	$loadClass(XSelectionClearEvent, name, initialize, &_XSelectionClearEvent_ClassInfo_, allocate$XSelectionClearEvent);
	return class$;
}

$Class* XSelectionClearEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun