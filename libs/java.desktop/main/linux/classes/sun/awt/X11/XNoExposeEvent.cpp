#include <sun/awt/X11/XNoExposeEvent.h>

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

$FieldInfo _XNoExposeEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XNoExposeEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XNoExposeEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XNoExposeEvent, pData)},
	{}
};

$MethodInfo _XNoExposeEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XNoExposeEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XNoExposeEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XNoExposeEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XNoExposeEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XNoExposeEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XNoExposeEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_display, int64_t)},
	{"get_drawable", "()J", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_drawable, int64_t)},
	{"get_major_code", "()I", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_major_code, int32_t)},
	{"get_minor_code", "()I", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_minor_code, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, get_type, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_display, void, int64_t)},
	{"set_drawable", "(J)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_drawable, void, int64_t)},
	{"set_major_code", "(I)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_major_code, void, int32_t)},
	{"set_minor_code", "(I)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_minor_code, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XNoExposeEvent, set_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XNoExposeEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XNoExposeEvent, zero, void)},
	{}
};

$ClassInfo _XNoExposeEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XNoExposeEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XNoExposeEvent_FieldInfo_,
	_XNoExposeEvent_MethodInfo_
};

$Object* allocate$XNoExposeEvent($Class* clazz) {
	return $of($alloc(XNoExposeEvent));
}

int32_t XNoExposeEvent::getSize() {
	$init(XNoExposeEvent);
	return 48;
}

int32_t XNoExposeEvent::getDataSize() {
	return getSize();
}

int64_t XNoExposeEvent::getPData() {
	return this->pData;
}

void XNoExposeEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XNoExposeEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XNoExposeEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XNoExposeEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XNoExposeEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XNoExposeEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XNoExposeEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XNoExposeEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XNoExposeEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XNoExposeEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XNoExposeEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XNoExposeEvent::get_drawable() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XNoExposeEvent::set_drawable(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XNoExposeEvent::get_major_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XNoExposeEvent::set_major_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XNoExposeEvent::get_minor_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XNoExposeEvent::set_minor_code(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

$String* XNoExposeEvent::getName() {
	return "XNoExposeEvent"_s;
}

$String* XNoExposeEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("drawable = "_s)->append(get_drawable())->append(", "_s);
	ret->append("major_code = "_s)->append(get_major_code())->append(", "_s);
	ret->append("minor_code = "_s)->append(get_minor_code())->append(", "_s);
	return ret->toString();
}

$Object* XNoExposeEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XNoExposeEvent::zero() {
	$XWrapperBase::zero();
}

$String* XNoExposeEvent::toString() {
	return $XWrapperBase::toString();
}

XNoExposeEvent::XNoExposeEvent() {
}

$Class* XNoExposeEvent::load$($String* name, bool initialize) {
	$loadClass(XNoExposeEvent, name, initialize, &_XNoExposeEvent_ClassInfo_, allocate$XNoExposeEvent);
	return class$;
}

$Class* XNoExposeEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun