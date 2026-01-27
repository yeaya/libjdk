#include <sun/awt/X11/XKeymapEvent.h>

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

$FieldInfo _XKeymapEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XKeymapEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XKeymapEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XKeymapEvent, pData)},
	{}
};

$MethodInfo _XKeymapEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XKeymapEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XKeymapEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XKeymapEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XKeymapEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XKeymapEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XKeymapEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_display, int64_t)},
	{"get_key_vector", "(I)B", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_key_vector, int8_t, int32_t)},
	{"get_key_vector", "()J", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_key_vector, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_type, int32_t)},
	{"get_window", "()J", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, get_window, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_display, void, int64_t)},
	{"set_key_vector", "(IB)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_key_vector, void, int32_t, int8_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_type, void, int32_t)},
	{"set_window", "(J)V", nullptr, $PUBLIC, $virtualMethod(XKeymapEvent, set_window, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XKeymapEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XKeymapEvent, zero, void)},
	{}
};

$ClassInfo _XKeymapEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XKeymapEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XKeymapEvent_FieldInfo_,
	_XKeymapEvent_MethodInfo_
};

$Object* allocate$XKeymapEvent($Class* clazz) {
	return $of($alloc(XKeymapEvent));
}

int32_t XKeymapEvent::getSize() {
	$init(XKeymapEvent);
	return 72;
}

int32_t XKeymapEvent::getDataSize() {
	return getSize();
}

int64_t XKeymapEvent::getPData() {
	return this->pData;
}

void XKeymapEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XKeymapEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XKeymapEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XKeymapEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XKeymapEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XKeymapEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XKeymapEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XKeymapEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XKeymapEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XKeymapEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XKeymapEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XKeymapEvent::get_window() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XKeymapEvent::set_window(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int8_t XKeymapEvent::get_key_vector(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getByte(this->pData + 40 + index * 1);
}

void XKeymapEvent::set_key_vector(int32_t index, int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 40 + index * 1, v);
}

int64_t XKeymapEvent::get_key_vector() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return this->pData + 40;
}

$String* XKeymapEvent::getName() {
	return "XKeymapEvent"_s;
}

$String* XKeymapEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 240));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("window = "_s)->append($(getWindow(get_window())))->append(", "_s);
	ret->append("{"_s)->append((int32_t)get_key_vector(0))->append(" "_s)->append((int32_t)get_key_vector(1))->append(" "_s)->append((int32_t)get_key_vector(2))->append(" "_s)->append((int32_t)get_key_vector(3))->append(" "_s)->append((int32_t)get_key_vector(4))->append(" "_s)->append((int32_t)get_key_vector(5))->append(" "_s)->append((int32_t)get_key_vector(6))->append(" "_s)->append((int32_t)get_key_vector(7))->append(" "_s)->append((int32_t)get_key_vector(8))->append(" "_s)->append((int32_t)get_key_vector(9))->append(" "_s)->append((int32_t)get_key_vector(10))->append(" "_s)->append((int32_t)get_key_vector(11))->append(" "_s)->append((int32_t)get_key_vector(12))->append(" "_s)->append((int32_t)get_key_vector(13))->append(" "_s)->append((int32_t)get_key_vector(14))->append(" "_s)->append((int32_t)get_key_vector(15))->append(" "_s)->append((int32_t)get_key_vector(16))->append(" "_s)->append((int32_t)get_key_vector(17))->append(" "_s)->append((int32_t)get_key_vector(18))->append(" "_s)->append((int32_t)get_key_vector(19))->append(" "_s)->append((int32_t)get_key_vector(20))->append(" "_s)->append((int32_t)get_key_vector(21))->append(" "_s)->append((int32_t)get_key_vector(22))->append(" "_s)->append((int32_t)get_key_vector(23))->append(" "_s)->append((int32_t)get_key_vector(24))->append(" "_s)->append((int32_t)get_key_vector(25))->append(" "_s)->append((int32_t)get_key_vector(26))->append(" "_s)->append((int32_t)get_key_vector(27))->append(" "_s)->append((int32_t)get_key_vector(28))->append(" "_s)->append((int32_t)get_key_vector(29))->append(" "_s)->append((int32_t)get_key_vector(30))->append(" "_s)->append((int32_t)get_key_vector(31))->append(" "_s)->append("}"_s);
	return ret->toString();
}

$Object* XKeymapEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XKeymapEvent::zero() {
	$XWrapperBase::zero();
}

$String* XKeymapEvent::toString() {
	return $XWrapperBase::toString();
}

XKeymapEvent::XKeymapEvent() {
}

$Class* XKeymapEvent::load$($String* name, bool initialize) {
	$loadClass(XKeymapEvent, name, initialize, &_XKeymapEvent_ClassInfo_, allocate$XKeymapEvent);
	return class$;
}

$Class* XKeymapEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun