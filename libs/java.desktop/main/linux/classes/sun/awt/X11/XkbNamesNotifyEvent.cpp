#include <sun/awt/X11/XkbNamesNotifyEvent.h>

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

$FieldInfo _XkbNamesNotifyEvent_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XkbNamesNotifyEvent, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XkbNamesNotifyEvent, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XkbNamesNotifyEvent, pData)},
	{}
};

$MethodInfo _XkbNamesNotifyEvent_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XkbNamesNotifyEvent, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XkbNamesNotifyEvent, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbNamesNotifyEvent, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbNamesNotifyEvent, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XkbNamesNotifyEvent, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XkbNamesNotifyEvent, getSize, int32_t)},
	{"get_changed", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_changed, int32_t)},
	{"get_changed_groups", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_changed_groups, int32_t)},
	{"get_changed_indicators", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_changed_indicators, int32_t)},
	{"get_changed_vmods", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_changed_vmods, int32_t)},
	{"get_device", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_device, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_display, int64_t)},
	{"get_first_key", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_first_key, int32_t)},
	{"get_first_lvl", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_first_lvl, int32_t)},
	{"get_first_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_first_type, int32_t)},
	{"get_num_aliases", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_num_aliases, int32_t)},
	{"get_num_keys", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_num_keys, int32_t)},
	{"get_num_lvls", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_num_lvls, int32_t)},
	{"get_num_radio_groups", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_num_radio_groups, int32_t)},
	{"get_num_types", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_num_types, int32_t)},
	{"get_send_event", "()Z", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_send_event, bool)},
	{"get_serial", "()J", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_serial, int64_t)},
	{"get_time", "()J", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_time, int64_t)},
	{"get_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_type, int32_t)},
	{"get_xkb_type", "()I", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, get_xkb_type, int32_t)},
	{"set_changed", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_changed, void, int32_t)},
	{"set_changed_groups", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_changed_groups, void, int32_t)},
	{"set_changed_indicators", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_changed_indicators, void, int32_t)},
	{"set_changed_vmods", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_changed_vmods, void, int32_t)},
	{"set_device", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_device, void, int32_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_display, void, int64_t)},
	{"set_first_key", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_first_key, void, int32_t)},
	{"set_first_lvl", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_first_lvl, void, int32_t)},
	{"set_first_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_first_type, void, int32_t)},
	{"set_num_aliases", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_num_aliases, void, int32_t)},
	{"set_num_keys", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_num_keys, void, int32_t)},
	{"set_num_lvls", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_num_lvls, void, int32_t)},
	{"set_num_radio_groups", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_num_radio_groups, void, int32_t)},
	{"set_num_types", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_num_types, void, int32_t)},
	{"set_send_event", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_send_event, void, bool)},
	{"set_serial", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_serial, void, int64_t)},
	{"set_time", "(J)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_time, void, int64_t)},
	{"set_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_type, void, int32_t)},
	{"set_xkb_type", "(I)V", nullptr, $PUBLIC, $virtualMethod(XkbNamesNotifyEvent, set_xkb_type, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbNamesNotifyEvent, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XkbNamesNotifyEvent, zero, void)},
	{}
};

$ClassInfo _XkbNamesNotifyEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XkbNamesNotifyEvent",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XkbNamesNotifyEvent_FieldInfo_,
	_XkbNamesNotifyEvent_MethodInfo_
};

$Object* allocate$XkbNamesNotifyEvent($Class* clazz) {
	return $of($alloc(XkbNamesNotifyEvent));
}

int32_t XkbNamesNotifyEvent::getSize() {
	$init(XkbNamesNotifyEvent);
	return 96;
}

int32_t XkbNamesNotifyEvent::getDataSize() {
	return getSize();
}

int64_t XkbNamesNotifyEvent::getPData() {
	return this->pData;
}

void XkbNamesNotifyEvent::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XkbNamesNotifyEvent::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XkbNamesNotifyEvent::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XkbNamesNotifyEvent::get_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XkbNamesNotifyEvent::set_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XkbNamesNotifyEvent::get_serial() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 8));
}

void XkbNamesNotifyEvent::set_serial(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 8, v);
}

bool XkbNamesNotifyEvent::get_send_event() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 16));
}

void XkbNamesNotifyEvent::set_send_event(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 16, v);
}

int64_t XkbNamesNotifyEvent::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void XkbNamesNotifyEvent::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XkbNamesNotifyEvent::get_time() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getULong(this->pData + 32));
}

void XkbNamesNotifyEvent::set_time(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putULong(this->pData + 32, v);
}

int32_t XkbNamesNotifyEvent::get_xkb_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XkbNamesNotifyEvent::set_xkb_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XkbNamesNotifyEvent::get_device() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XkbNamesNotifyEvent::set_device(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XkbNamesNotifyEvent::get_changed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XkbNamesNotifyEvent::set_changed(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XkbNamesNotifyEvent::get_first_type() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XkbNamesNotifyEvent::set_first_type(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int32_t XkbNamesNotifyEvent::get_num_types() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void XkbNamesNotifyEvent::set_num_types(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

int32_t XkbNamesNotifyEvent::get_first_lvl() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 60));
}

void XkbNamesNotifyEvent::set_first_lvl(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 60, v);
}

int32_t XkbNamesNotifyEvent::get_num_lvls() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 64));
}

void XkbNamesNotifyEvent::set_num_lvls(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 64, v);
}

int32_t XkbNamesNotifyEvent::get_num_aliases() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 68));
}

void XkbNamesNotifyEvent::set_num_aliases(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 68, v);
}

int32_t XkbNamesNotifyEvent::get_num_radio_groups() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 72));
}

void XkbNamesNotifyEvent::set_num_radio_groups(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 72, v);
}

int32_t XkbNamesNotifyEvent::get_changed_vmods() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 76));
}

void XkbNamesNotifyEvent::set_changed_vmods(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 76, v);
}

int32_t XkbNamesNotifyEvent::get_changed_groups() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 80));
}

void XkbNamesNotifyEvent::set_changed_groups(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 80, v);
}

int32_t XkbNamesNotifyEvent::get_changed_indicators() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 84));
}

void XkbNamesNotifyEvent::set_changed_indicators(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 84, v);
}

int32_t XkbNamesNotifyEvent::get_first_key() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 88));
}

void XkbNamesNotifyEvent::set_first_key(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 88, v);
}

int32_t XkbNamesNotifyEvent::get_num_keys() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XkbNamesNotifyEvent::set_num_keys(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

$String* XkbNamesNotifyEvent::getName() {
	return "XkbNamesNotifyEvent"_s;
}

$String* XkbNamesNotifyEvent::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 760));
	$init($XlibWrapper);
	ret->append("type = "_s)->append($nc($XlibWrapper::eventToString)->get(get_type()))->append(", "_s);
	ret->append("serial = "_s)->append(get_serial())->append(", "_s);
	ret->append("send_event = "_s)->append(get_send_event())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("time = "_s)->append(get_time())->append(", "_s);
	ret->append("xkb_type = "_s)->append(get_xkb_type())->append(", "_s);
	ret->append("device = "_s)->append(get_device())->append(", "_s);
	ret->append("changed = "_s)->append(get_changed())->append(", "_s);
	ret->append("first_type = "_s)->append(get_first_type())->append(", "_s);
	ret->append("num_types = "_s)->append(get_num_types())->append(", "_s);
	ret->append("first_lvl = "_s)->append(get_first_lvl())->append(", "_s);
	ret->append("num_lvls = "_s)->append(get_num_lvls())->append(", "_s);
	ret->append("num_aliases = "_s)->append(get_num_aliases())->append(", "_s);
	ret->append("num_radio_groups = "_s)->append(get_num_radio_groups())->append(", "_s);
	ret->append("changed_vmods = "_s)->append(get_changed_vmods())->append(", "_s);
	ret->append("changed_groups = "_s)->append(get_changed_groups())->append(", "_s);
	ret->append("changed_indicators = "_s)->append(get_changed_indicators())->append(", "_s);
	ret->append("first_key = "_s)->append(get_first_key())->append(", "_s);
	ret->append("num_keys = "_s)->append(get_num_keys())->append(", "_s);
	return ret->toString();
}

$Object* XkbNamesNotifyEvent::clone() {
	return $of($XWrapperBase::clone());
}

void XkbNamesNotifyEvent::zero() {
	$XWrapperBase::zero();
}

$String* XkbNamesNotifyEvent::toString() {
	return $XWrapperBase::toString();
}

XkbNamesNotifyEvent::XkbNamesNotifyEvent() {
}

$Class* XkbNamesNotifyEvent::load$($String* name, bool initialize) {
	$loadClass(XkbNamesNotifyEvent, name, initialize, &_XkbNamesNotifyEvent_ClassInfo_, allocate$XkbNamesNotifyEvent);
	return class$;
}

$Class* XkbNamesNotifyEvent::class$ = nullptr;

		} // X11
	} // awt
} // sun