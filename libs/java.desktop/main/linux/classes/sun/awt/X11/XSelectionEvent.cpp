#include <sun/awt/X11/XSelectionEvent.h>

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

$FieldInfo _XSelectionEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XSelectionEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XSelectionEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XSelectionEvent, pData)},
	{}
};

$MethodInfo _XSelectionEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XSelectionEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSelectionEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSelectionEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XSelectionEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XSelectionEvent, getSize, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_display, int64_t)},
	{"get_property", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_property, int64_t)},
	{"get_requestor", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_requestor, int64_t)},
	{"get_selection", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_selection, int64_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_serial, int64_t)},
	{"get_target", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_target, int64_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, get_type, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_display, void, int64_t)},
	{"set_property", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_property, void, int64_t)},
	{"set_requestor", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_requestor, void, int64_t)},
	{"set_selection", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_selection, void, int64_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_serial, void, int64_t)},
	{"set_target", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_target, void, int64_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XSelectionEvent, set_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XSelectionEvent, zero, void)},
	{}
};

$ClassInfo _XSelectionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XSelectionEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XSelectionEvent_FieldInfo_,
	_XSelectionEvent_MethodInfo_
};

$Object* allocate$XSelectionEvent($Class* clazz) {
	return $of($alloc(XSelectionEvent));
}

int32_t XSelectionEvent::getSize() {
	$init(XSelectionEvent);
	return 72;
}

int32_t XSelectionEvent::getDataSize() {
	return getSize();
}

int64_t XSelectionEvent::getPData() {
	return this->pData;
}

void XSelectionEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XSelectionEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XSelectionEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XSelectionEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XSelectionEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XSelectionEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void XSelectionEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

bool XSelectionEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XSelectionEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XSelectionEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XSelectionEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XSelectionEvent::get_requestor() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XSelectionEvent::set_requestor(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t XSelectionEvent::get_selection() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void XSelectionEvent::set_selection(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int64_t XSelectionEvent::get_target() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48));
}

void XSelectionEvent::set_target(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int64_t XSelectionEvent::get_property() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XSelectionEvent::set_property(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XSelectionEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 64));
}

void XSelectionEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 64, v);
}

$String* XSelectionEvent::getName() {
	return "XSelectionEvent"_s;
}

$String* XSelectionEvent::getFieldsAsString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, ret, $new($StringBuilder, 360));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("requestor = "_s)->append(get_requestor())->append(", "_s);
	ret->append("selection = "_s)->append($($of($XAtom::get(get_selection()))))->append(", "_s);
	ret->append("target = "_s)->append($($of($XAtom::get(get_target()))))->append(", "_s);
	ret->append("property = "_s)->append($($of($XAtom::get(get_property()))))->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	return ret->toString();
}

$Object* XSelectionEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XSelectionEvent::zero() {
	$XWrapperBase::zero();
}

$String* XSelectionEvent::toString() {
	return $XWrapperBase::toString();
}

XSelectionEvent::XSelectionEvent() {
}

$Class* XSelectionEvent::load$($String* name, bool initialize) {
	$loadClass(XSelectionEvent, name, initialize, &_XSelectionEvent_ClassInfo_, allocate$XSelectionEvent);
	return class$;
}

$Class* XSelectionEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun