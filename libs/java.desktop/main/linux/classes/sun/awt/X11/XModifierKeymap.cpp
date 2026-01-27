#include <sun/awt/X11/XModifierKeymap.h>

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

$FieldInfo _XModifierKeymap_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XModifierKeymap, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XModifierKeymap, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XModifierKeymap, pData)},
	{}
};

$MethodInfo _XModifierKeymap_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XModifierKeymap, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XModifierKeymap, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XModifierKeymap, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XModifierKeymap, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XModifierKeymap, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XModifierKeymap, getSize, int32_t)},
	{"get_max_keypermod", "()I", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, get_max_keypermod, int32_t)},
	{"get_modifiermap", "(I)J", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, get_modifiermap, int64_t, int32_t)},
	{"get_modifiermap", "()J", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, get_modifiermap, int64_t)},
	{"set_max_keypermod", "(I)V", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, set_max_keypermod, void, int32_t)},
	{"set_modifiermap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XModifierKeymap, set_modifiermap, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XModifierKeymap, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XModifierKeymap, zero, void)},
	{}
};

$ClassInfo _XModifierKeymap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XModifierKeymap",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XModifierKeymap_FieldInfo_,
	_XModifierKeymap_MethodInfo_
};

$Object* allocate$XModifierKeymap($Class* clazz) {
	return $of($alloc(XModifierKeymap));
}

int32_t XModifierKeymap::getSize() {
	$init(XModifierKeymap);
	return 16;
}

int32_t XModifierKeymap::getDataSize() {
	return getSize();
}

int64_t XModifierKeymap::getPData() {
	return this->pData;
}

void XModifierKeymap::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XModifierKeymap::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XModifierKeymap::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XModifierKeymap::get_max_keypermod() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XModifierKeymap::set_max_keypermod(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int64_t XModifierKeymap::get_modifiermap(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t XModifierKeymap::get_modifiermap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void XModifierKeymap::set_modifiermap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* XModifierKeymap::getName() {
	return "XModifierKeymap"_s;
}

$String* XModifierKeymap::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 80));
	ret->append("max_keypermod = "_s)->append(get_max_keypermod())->append(", "_s);
	ret->append("modifiermap = "_s)->append(get_modifiermap())->append(", "_s);
	return ret->toString();
}

$Object* XModifierKeymap::clone() {
	return $of($XWrapperBase::clone());
}

void XModifierKeymap::zero() {
	$XWrapperBase::zero();
}

$String* XModifierKeymap::toString() {
	return $XWrapperBase::toString();
}

XModifierKeymap::XModifierKeymap() {
}

$Class* XModifierKeymap::load$($String* name, bool initialize) {
	$loadClass(XModifierKeymap, name, initialize, &_XModifierKeymap_ClassInfo_, allocate$XModifierKeymap);
	return class$;
}

$Class* XModifierKeymap::class$ = nullptr;

		} // X11
	} // awt
} // sun