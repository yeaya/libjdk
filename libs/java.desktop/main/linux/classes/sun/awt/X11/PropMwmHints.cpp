#include <sun/awt/X11/PropMwmHints.h>

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

$FieldInfo _PropMwmHints_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(PropMwmHints, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(PropMwmHints, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(PropMwmHints, pData)},
	{}
};

$MethodInfo _PropMwmHints_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(PropMwmHints, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(PropMwmHints, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PropMwmHints, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(PropMwmHints, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(PropMwmHints, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(PropMwmHints, getSize, int32_t)},
	{"get_decorations", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, get_decorations, int64_t)},
	{"get_flags", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, get_flags, int64_t)},
	{"get_functions", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, get_functions, int64_t)},
	{"get_inputMode", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, get_inputMode, int64_t)},
	{"get_status", "()J", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, get_status, int64_t)},
	{"set_decorations", "(J)V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, set_decorations, void, int64_t)},
	{"set_flags", "(J)V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, set_flags, void, int64_t)},
	{"set_functions", "(J)V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, set_functions, void, int64_t)},
	{"set_inputMode", "(J)V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, set_inputMode, void, int64_t)},
	{"set_status", "(J)V", nullptr, $PUBLIC, $virtualMethod(PropMwmHints, set_status, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PropMwmHints, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PropMwmHints, zero, void)},
	{}
};

$ClassInfo _PropMwmHints_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.PropMwmHints",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_PropMwmHints_FieldInfo_,
	_PropMwmHints_MethodInfo_
};

$Object* allocate$PropMwmHints($Class* clazz) {
	return $of($alloc(PropMwmHints));
}

int32_t PropMwmHints::getSize() {
	$init(PropMwmHints);
	return 40;
}

int32_t PropMwmHints::getDataSize() {
	return getSize();
}

int64_t PropMwmHints::getPData() {
	return this->pData;
}

void PropMwmHints::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void PropMwmHints::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void PropMwmHints::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int64_t PropMwmHints::get_flags() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0));
}

void PropMwmHints::set_flags(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t PropMwmHints::get_functions() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void PropMwmHints::set_functions(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t PropMwmHints::get_decorations() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void PropMwmHints::set_decorations(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int64_t PropMwmHints::get_inputMode() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void PropMwmHints::set_inputMode(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t PropMwmHints::get_status() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void PropMwmHints::set_status(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

$String* PropMwmHints::getName() {
	return "PropMwmHints"_s;
}

$String* PropMwmHints::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 200));
	ret->append("flags = "_s)->append(get_flags())->append(", "_s);
	ret->append("functions = "_s)->append(get_functions())->append(", "_s);
	ret->append("decorations = "_s)->append(get_decorations())->append(", "_s);
	ret->append("inputMode = "_s)->append(get_inputMode())->append(", "_s);
	ret->append("status = "_s)->append(get_status())->append(", "_s);
	return ret->toString();
}

$Object* PropMwmHints::clone() {
	return $of($XWrapperBase::clone());
}

void PropMwmHints::zero() {
	$XWrapperBase::zero();
}

$String* PropMwmHints::toString() {
	return $XWrapperBase::toString();
}

PropMwmHints::PropMwmHints() {
}

$Class* PropMwmHints::load$($String* name, bool initialize) {
	$loadClass(PropMwmHints, name, initialize, &_PropMwmHints_ClassInfo_, allocate$PropMwmHints);
	return class$;
}

$Class* PropMwmHints::class$ = nullptr;

		} // X11
	} // awt
} // sun