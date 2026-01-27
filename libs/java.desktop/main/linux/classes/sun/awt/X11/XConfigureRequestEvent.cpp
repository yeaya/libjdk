#include <sun/awt/X11/XConfigureRequestEvent.h>

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

$FieldInfo _XConfigureRequestEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XConfigureRequestEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XConfigureRequestEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XConfigureRequestEvent, pData)},
	{}
};

$MethodInfo _XConfigureRequestEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XConfigureRequestEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XConfigureRequestEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XConfigureRequestEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XConfigureRequestEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XConfigureRequestEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XConfigureRequestEvent, getSize, int32_t)},
	{"get_above", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_above, int64_t)},
	{"get_border_width", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_border_width, int32_t)},
	{"get_detail", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_detail, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_display, int64_t)},
	{"get_height", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_height, int32_t)},
	{"get_parent", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_parent, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_type, int32_t)},
	{"get_value_mask", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_value_mask, int64_t)},
	{"get_width", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_width, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_window, int64_t)},
	{"get_x", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_x, int32_t)},
	{"get_y", "()I", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, get_y, int32_t)},
	{"set_above", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_above, void, int64_t)},
	{"set_border_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_border_width, void, int32_t)},
	{"set_detail", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_detail, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_display, void, int64_t)},
	{"set_height", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_height, void, int32_t)},
	{"set_parent", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_parent, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_type, void, int32_t)},
	{"set_value_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_value_mask, void, int64_t)},
	{"set_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_width, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_window, void, int64_t)},
	{"set_x", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_x, void, int32_t)},
	{"set_y", "(I)V", nullptr, $PUBLIC, $virtualMethod(XConfigureRequestEvent, set_y, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XConfigureRequestEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XConfigureRequestEvent, zero, void)},
	{}
};

$ClassInfo _XConfigureRequestEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XConfigureRequestEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XConfigureRequestEvent_FieldInfo_,
	_XConfigureRequestEvent_MethodInfo_
};

$Object* allocate$XConfigureRequestEvent($Class* clazz) {
	return $of($alloc(XConfigureRequestEvent));
}

int32_t XConfigureRequestEvent::getSize() {
	$init(XConfigureRequestEvent);
	return 96;
}

int32_t XConfigureRequestEvent::getDataSize() {
	return getSize();
}

int64_t XConfigureRequestEvent::getPData() {
	return this->pData;
}

void XConfigureRequestEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XConfigureRequestEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XConfigureRequestEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XConfigureRequestEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XConfigureRequestEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XConfigureRequestEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XConfigureRequestEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XConfigureRequestEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XConfigureRequestEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XConfigureRequestEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XConfigureRequestEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XConfigureRequestEvent::get_parent() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XConfigureRequestEvent::set_parent(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XConfigureRequestEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XConfigureRequestEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int32_t XConfigureRequestEvent::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XConfigureRequestEvent::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XConfigureRequestEvent::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XConfigureRequestEvent::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XConfigureRequestEvent::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XConfigureRequestEvent::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XConfigureRequestEvent::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XConfigureRequestEvent::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XConfigureRequestEvent::get_border_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XConfigureRequestEvent::set_border_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int64_t XConfigureRequestEvent::get_above() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void XConfigureRequestEvent::set_above(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int32_t XConfigureRequestEvent::get_detail() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XConfigureRequestEvent::set_detail(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int64_t XConfigureRequestEvent::get_value_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 88));
}

void XConfigureRequestEvent::set_value_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

$String* XConfigureRequestEvent::getName() {
	return "XConfigureRequestEvent"_s;
}

$String* XConfigureRequestEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 560));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("parent = "_s)->append(get_parent())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("border_width = "_s)->append(get_border_width())->append(", "_s);
	ret->append("above = "_s)->append(get_above())->append(", "_s);
	ret->append("detail = "_s)->append(get_detail())->append(", "_s);
	ret->append("value_mask = "_s)->append(get_value_mask())->append(", "_s);
	return ret->toString();
}

$Object* XConfigureRequestEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XConfigureRequestEvent::zero() {
	$XWrapperBase::zero();
}

$String* XConfigureRequestEvent::toString() {
	return $XWrapperBase::toString();
}

XConfigureRequestEvent::XConfigureRequestEvent() {
}

$Class* XConfigureRequestEvent::load$($String* name, bool initialize) {
	$loadClass(XConfigureRequestEvent, name, initialize, &_XConfigureRequestEvent_ClassInfo_, allocate$XConfigureRequestEvent);
	return class$;
}

$Class* XConfigureRequestEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun