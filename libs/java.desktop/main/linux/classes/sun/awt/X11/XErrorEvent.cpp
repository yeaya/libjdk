#include <sun/awt/X11/XErrorEvent.h>

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

$FieldInfo _XErrorEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XErrorEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XErrorEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XErrorEvent, pData)},
	{}
};

$MethodInfo _XErrorEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XErrorEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XErrorEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XErrorEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XErrorEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XErrorEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XErrorEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_display, int64_t)},
	{"get_error_code", "()B", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_error_code, int8_t)},
	{"get_minor_code", "()B", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_minor_code, int8_t)},
	{"get_request_code", "()B", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_request_code, int8_t)},
	{"get_resourceid", "()J", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_resourceid, int64_t)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_serial, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, get_type, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_display, void, int64_t)},
	{"set_error_code", "(B)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_error_code, void, int8_t)},
	{"set_minor_code", "(B)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_minor_code, void, int8_t)},
	{"set_request_code", "(B)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_request_code, void, int8_t)},
	{"set_resourceid", "(J)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_resourceid, void, int64_t)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_serial, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XErrorEvent, set_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XErrorEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XErrorEvent, zero, void)},
	{}
};

$ClassInfo _XErrorEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XErrorEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XErrorEvent_FieldInfo_,
	_XErrorEvent_MethodInfo_
};

$Object* allocate$XErrorEvent($Class* clazz) {
	return $of($alloc(XErrorEvent));
}

int32_t XErrorEvent::getSize() {
	$init(XErrorEvent);
	return 40;
}

int32_t XErrorEvent::getDataSize() {
	return getSize();
}

int64_t XErrorEvent::getPData() {
	return this->pData;
}

void XErrorEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XErrorEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XErrorEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XErrorEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XErrorEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XErrorEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XErrorEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t XErrorEvent::get_resourceid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void XErrorEvent::set_resourceid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t XErrorEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XErrorEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int8_t XErrorEvent::get_error_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 32));
}

void XErrorEvent::set_error_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 32, v);
}

int8_t XErrorEvent::get_request_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 33));
}

void XErrorEvent::set_request_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 33, v);
}

int8_t XErrorEvent::get_minor_code() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 34));
}

void XErrorEvent::set_minor_code(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 34, v);
}

$String* XErrorEvent::getName() {
	return "XErrorEvent"_s;
}

$String* XErrorEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 280));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("resourceid = "_s)->append(get_resourceid())->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("error_code = "_s)->append((int32_t)get_error_code())->append(", "_s);
	ret->append("request_code = "_s)->append((int32_t)get_request_code())->append(", "_s);
	ret->append("minor_code = "_s)->append((int32_t)get_minor_code())->append(", "_s);
	return ret->toString();
}

$Object* XErrorEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XErrorEvent::zero() {
	$XWrapperBase::zero();
}

$String* XErrorEvent::toString() {
	return $XWrapperBase::toString();
}

XErrorEvent::XErrorEvent() {
}

$Class* XErrorEvent::load$($String* name, bool initialize) {
	$loadClass(XErrorEvent, name, initialize, &_XErrorEvent_ClassInfo_, allocate$XErrorEvent);
	return class$;
}

$Class* XErrorEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun