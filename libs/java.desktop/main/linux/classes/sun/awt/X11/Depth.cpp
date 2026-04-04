#include <sun/awt/X11/Depth.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/Visual.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Native = ::sun::awt::X11::Native;
using $Visual = ::sun::awt::X11::Visual;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

int32_t Depth::getSize() {
	$init(Depth);
	return 16;
}

int32_t Depth::getDataSize() {
	return getSize();
}

int64_t Depth::getPData() {
	return this->pData;
}

void Depth::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void Depth::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void Depth::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$XWrapperBase::log->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t Depth::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void Depth::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t Depth::get_nvisuals() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void Depth::set_nvisuals(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

$Visual* Depth::get_visuals(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8) != 0) ? ($new($Visual, $Native::getLong(this->pData + 8) + index * 56)) : (($Visual*)nullptr);
}

int64_t Depth::get_visuals() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void Depth::set_visuals(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

$String* Depth::getName() {
	return "Depth"_s;
}

$String* Depth::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 120));
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("nvisuals = "_s)->append(get_nvisuals())->append(", "_s);
	ret->append("visuals = "_s)->append(get_visuals())->append(", "_s);
	return ret->toString();
}

$Object* Depth::clone() {
	return $XWrapperBase::clone();
}

void Depth::zero() {
	$XWrapperBase::zero();
}

$String* Depth::toString() {
	return $XWrapperBase::toString();
}

Depth::Depth() {
}

$Class* Depth::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(Depth, unsafe)},
		{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(Depth, should_free_memory)},
		{"pData", "J", nullptr, 0, $field(Depth, pData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, $PUBLIC, $method(Depth, init$, void, int64_t)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Depth, init$, void)},
		{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Depth, clone, $Object*)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Depth, dispose, void)},
		{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(Depth, getDataSize, int32_t)},
		{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Depth, getFieldsAsString, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Depth, getName, $String*)},
		{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(Depth, getPData, int64_t)},
		{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Depth, getSize, int32_t)},
		{"get_depth", "()I", nullptr, $PUBLIC, $virtualMethod(Depth, get_depth, int32_t)},
		{"get_nvisuals", "()I", nullptr, $PUBLIC, $virtualMethod(Depth, get_nvisuals, int32_t)},
		{"get_visuals", "(I)Lsun/awt/X11/Visual;", nullptr, $PUBLIC, $virtualMethod(Depth, get_visuals, $Visual*, int32_t)},
		{"get_visuals", "()J", nullptr, $PUBLIC, $virtualMethod(Depth, get_visuals, int64_t)},
		{"set_depth", "(I)V", nullptr, $PUBLIC, $virtualMethod(Depth, set_depth, void, int32_t)},
		{"set_nvisuals", "(I)V", nullptr, $PUBLIC, $virtualMethod(Depth, set_nvisuals, void, int32_t)},
		{"set_visuals", "(J)V", nullptr, $PUBLIC, $virtualMethod(Depth, set_visuals, void, int64_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Depth, toString, $String*)},
		{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Depth, zero, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.X11.Depth",
		"sun.awt.X11.XWrapperBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Depth, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Depth);
	});
	return class$;
}

$Class* Depth::class$ = nullptr;

		} // X11
	} // awt
} // sun