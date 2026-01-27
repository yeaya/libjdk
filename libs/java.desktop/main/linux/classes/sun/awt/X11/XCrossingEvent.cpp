#include <sun/awt/X11/XCrossingEvent.h>

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

$FieldInfo _XCrossingEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XCrossingEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XCrossingEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XCrossingEvent, pData)},
	{}
};

$MethodInfo _XCrossingEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XCrossingEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XCrossingEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCrossingEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XCrossingEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XCrossingEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XCrossingEvent, getSize, int32_t)},
	{"get_detail", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_detail, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_display, int64_t)},
	{"get_focus", "()Z", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_focus, bool)},
	{"get_mode", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_mode, int32_t)},
	{"get_root", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_root, int64_t)},
	{"get_same_screen", "()Z", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_same_screen, bool)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_serial, int64_t)},
	{"get_state", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_state, int32_t)},
	{"get_subwindow", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_subwindow, int64_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_window, int64_t)},
	{"get_x", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_x, int32_t)},
	{"get_x_root", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_x_root, int32_t)},
	{"get_y", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_y, int32_t)},
	{"get_y_root", "()I", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, get_y_root, int32_t)},
	{"set_detail", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_detail, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_display, void, int64_t)},
	{"set_focus", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_focus, void, bool)},
	{"set_mode", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_mode, void, int32_t)},
	{"set_root", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_root, void, int64_t)},
	{"set_same_screen", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_same_screen, void, bool)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_serial, void, int64_t)},
	{"set_state", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_state, void, int32_t)},
	{"set_subwindow", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_subwindow, void, int64_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_window, void, int64_t)},
	{"set_x", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_x, void, int32_t)},
	{"set_x_root", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_x_root, void, int32_t)},
	{"set_y", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_y, void, int32_t)},
	{"set_y_root", "(I)V", nullptr, $PUBLIC, $virtualMethod(XCrossingEvent, set_y_root, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCrossingEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XCrossingEvent, zero, void)},
	{}
};

$ClassInfo _XCrossingEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XCrossingEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XCrossingEvent_FieldInfo_,
	_XCrossingEvent_MethodInfo_
};

$Object* allocate$XCrossingEvent($Class* clazz) {
	return $of($alloc(XCrossingEvent));
}

int32_t XCrossingEvent::getSize() {
	$init(XCrossingEvent);
	return 104;
}

int32_t XCrossingEvent::getDataSize() {
	return getSize();
}

int64_t XCrossingEvent::getPData() {
	return this->pData;
}

void XCrossingEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XCrossingEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XCrossingEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XCrossingEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XCrossingEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XCrossingEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XCrossingEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XCrossingEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XCrossingEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XCrossingEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XCrossingEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XCrossingEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XCrossingEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XCrossingEvent::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XCrossingEvent::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XCrossingEvent::get_subwindow() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XCrossingEvent::set_subwindow(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XCrossingEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 56));
}

void XCrossingEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 56, v);
}

int32_t XCrossingEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XCrossingEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XCrossingEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XCrossingEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XCrossingEvent::get_x_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XCrossingEvent::set_x_root(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XCrossingEvent::get_y_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XCrossingEvent::set_y_root(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XCrossingEvent::get_mode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XCrossingEvent::set_mode(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t XCrossingEvent::get_detail() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void XCrossingEvent::set_detail(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

bool XCrossingEvent::get_same_screen() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XCrossingEvent::set_same_screen(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

bool XCrossingEvent::get_focus() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 92));
}

void XCrossingEvent::set_focus(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 92, v);
}

int32_t XCrossingEvent::get_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 96));
}

void XCrossingEvent::set_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 96, v);
}

$String* XCrossingEvent::getName() {
	return "XCrossingEvent"_s;
}

$String* XCrossingEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 680));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("subwindow = "_s)->append(get_subwindow())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("x_root = "_s)->append(get_x_root())->append(", "_s);
	ret->append("y_root = "_s)->append(get_y_root())->append(", "_s);
	ret->append("mode = "_s)->append(get_mode())->append(", "_s);
	ret->append("detail = "_s)->append(get_detail())->append(", "_s);
	ret->append("same_screen = "_s)->append(get_same_screen())->append(", "_s);
	ret->append("focus = "_s)->append(get_focus())->append(", "_s);
	ret->append("state = "_s)->append(get_state())->append(", "_s);
	return ret->toString();
}

$Object* XCrossingEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XCrossingEvent::zero() {
	$XWrapperBase::zero();
}

$String* XCrossingEvent::toString() {
	return $XWrapperBase::toString();
}

XCrossingEvent::XCrossingEvent() {
}

$Class* XCrossingEvent::load$($String* name, bool initialize) {
	$loadClass(XCrossingEvent, name, initialize, &_XCrossingEvent_ClassInfo_, allocate$XCrossingEvent);
	return class$;
}

$Class* XCrossingEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun