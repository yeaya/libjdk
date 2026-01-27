#include <sun/awt/X11/ColorEntry.h>

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

$FieldInfo _ColorEntry_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(ColorEntry, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(ColorEntry, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(ColorEntry, pData)},
	{}
};

$MethodInfo _ColorEntry_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(ColorEntry, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(ColorEntry, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ColorEntry, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(ColorEntry, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(ColorEntry, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ColorEntry, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(ColorEntry, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(ColorEntry, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ColorEntry, getSize, int32_t)},
	{"get_b", "()B", nullptr, $PUBLIC, $virtualMethod(ColorEntry, get_b, int8_t)},
	{"get_flags", "()B", nullptr, $PUBLIC, $virtualMethod(ColorEntry, get_flags, int8_t)},
	{"get_g", "()B", nullptr, $PUBLIC, $virtualMethod(ColorEntry, get_g, int8_t)},
	{"get_r", "()B", nullptr, $PUBLIC, $virtualMethod(ColorEntry, get_r, int8_t)},
	{"set_b", "(B)V", nullptr, $PUBLIC, $virtualMethod(ColorEntry, set_b, void, int8_t)},
	{"set_flags", "(B)V", nullptr, $PUBLIC, $virtualMethod(ColorEntry, set_flags, void, int8_t)},
	{"set_g", "(B)V", nullptr, $PUBLIC, $virtualMethod(ColorEntry, set_g, void, int8_t)},
	{"set_r", "(B)V", nullptr, $PUBLIC, $virtualMethod(ColorEntry, set_r, void, int8_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ColorEntry, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ColorEntry, zero, void)},
	{}
};

$ClassInfo _ColorEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.ColorEntry",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_ColorEntry_FieldInfo_,
	_ColorEntry_MethodInfo_
};

$Object* allocate$ColorEntry($Class* clazz) {
	return $of($alloc(ColorEntry));
}

int32_t ColorEntry::getSize() {
	$init(ColorEntry);
	return 4;
}

int32_t ColorEntry::getDataSize() {
	return getSize();
}

int64_t ColorEntry::getPData() {
	return this->pData;
}

void ColorEntry::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void ColorEntry::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void ColorEntry::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int8_t ColorEntry::get_r() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 0));
}

void ColorEntry::set_r(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 0, v);
}

int8_t ColorEntry::get_g() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 1));
}

void ColorEntry::set_g(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 1, v);
}

int8_t ColorEntry::get_b() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 2));
}

void ColorEntry::set_b(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 2, v);
}

int8_t ColorEntry::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getByte(this->pData + 3));
}

void ColorEntry::set_flags(int8_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putByte(this->pData + 3, v);
}

$String* ColorEntry::getName() {
	return "ColorEntry"_s;
}

$String* ColorEntry::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 160));
	ret->append("r = "_s)->append((int32_t)get_r())->append(", "_s);
	ret->append("g = "_s)->append((int32_t)get_g())->append(", "_s);
	ret->append("b = "_s)->append((int32_t)get_b())->append(", "_s);
	ret->append("flags = "_s)->append((int32_t)get_flags())->append(", "_s);
	return ret->toString();
}

$Object* ColorEntry::clone() {
	return $of($XWrapperBase::clone());
}

void ColorEntry::zero() {
	$XWrapperBase::zero();
}

$String* ColorEntry::toString() {
	return $XWrapperBase::toString();
}

ColorEntry::ColorEntry() {
}

$Class* ColorEntry::load$($String* name, bool initialize) {
	$loadClass(ColorEntry, name, initialize, &_ColorEntry_ClassInfo_, allocate$ColorEntry);
	return class$;
}

$Class* ColorEntry::class$ = nullptr;

		} // X11
	} // awt
} // sun