#include <sun/awt/X11/Visual.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XExtData.h>
#include <sun/awt/X11/XWrapperBase.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XExtData = ::sun::awt::X11::XExtData;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _Visual_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(Visual, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(Visual, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(Visual, pData)},
	{}
};

$MethodInfo _Visual_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(Visual, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Visual, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Visual, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Visual, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(Visual, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Visual, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Visual, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Visual, getSize, int32_t)},
	{"get_bits_per_rgb", "()I", nullptr, $PUBLIC, $virtualMethod(Visual, get_bits_per_rgb, int32_t)},
	{"get_blue_mask", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, get_blue_mask, int64_t)},
	{"get_class", "()I", nullptr, $PUBLIC, $virtualMethod(Visual, get_class, int32_t)},
	{"get_ext_data", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC, $virtualMethod(Visual, get_ext_data, $XExtData*, int32_t)},
	{"get_ext_data", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, get_ext_data, int64_t)},
	{"get_green_mask", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, get_green_mask, int64_t)},
	{"get_map_entries", "()I", nullptr, $PUBLIC, $virtualMethod(Visual, get_map_entries, int32_t)},
	{"get_red_mask", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, get_red_mask, int64_t)},
	{"get_visualid", "()J", nullptr, $PUBLIC, $virtualMethod(Visual, get_visualid, int64_t)},
	{"set_bits_per_rgb", "(I)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_bits_per_rgb, void, int32_t)},
	{"set_blue_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_blue_mask, void, int64_t)},
	{"set_class", "(I)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_class, void, int32_t)},
	{"set_ext_data", "(J)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_ext_data, void, int64_t)},
	{"set_green_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_green_mask, void, int64_t)},
	{"set_map_entries", "(I)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_map_entries, void, int32_t)},
	{"set_red_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_red_mask, void, int64_t)},
	{"set_visualid", "(J)V", nullptr, $PUBLIC, $virtualMethod(Visual, set_visualid, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Visual, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Visual, zero, void)},
	{}
};

$ClassInfo _Visual_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.Visual",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_Visual_FieldInfo_,
	_Visual_MethodInfo_
};

$Object* allocate$Visual($Class* clazz) {
	return $of($alloc(Visual));
}

int32_t Visual::getSize() {
	$init(Visual);
	return 56;
}

int32_t Visual::getDataSize() {
	return getSize();
}

int64_t Visual::getPData() {
	return this->pData;
}

void Visual::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void Visual::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void Visual::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XExtData* Visual::get_ext_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XExtData, $Native::getLong(this->pData + 0) + index * 32)) : (($XExtData*)nullptr);
}

int64_t Visual::get_ext_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void Visual::set_ext_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t Visual::get_visualid() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 8));
}

void Visual::set_visualid(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int32_t Visual::get_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void Visual::set_class(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int64_t Visual::get_red_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24));
}

void Visual::set_red_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t Visual::get_green_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void Visual::set_green_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int64_t Visual::get_blue_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 40));
}

void Visual::set_blue_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 40, v);
}

int32_t Visual::get_bits_per_rgb() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void Visual::set_bits_per_rgb(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t Visual::get_map_entries() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void Visual::set_map_entries(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

$String* Visual::getName() {
	return "Visual"_s;
}

$String* Visual::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 320));
	ret->append("ext_data = "_s)->append(get_ext_data())->append(", "_s);
	ret->append("visualid = "_s)->append(get_visualid())->append(", "_s);
	ret->append("class = "_s)->append(get_class())->append(", "_s);
	ret->append("red_mask = "_s)->append(get_red_mask())->append(", "_s);
	ret->append("green_mask = "_s)->append(get_green_mask())->append(", "_s);
	ret->append("blue_mask = "_s)->append(get_blue_mask())->append(", "_s);
	ret->append("bits_per_rgb = "_s)->append(get_bits_per_rgb())->append(", "_s);
	ret->append("map_entries = "_s)->append(get_map_entries())->append(", "_s);
	return ret->toString();
}

$Object* Visual::clone() {
	return $of($XWrapperBase::clone());
}

void Visual::zero() {
	$XWrapperBase::zero();
}

$String* Visual::toString() {
	return $XWrapperBase::toString();
}

Visual::Visual() {
}

$Class* Visual::load$($String* name, bool initialize) {
	$loadClass(Visual, name, initialize, &_Visual_ClassInfo_, allocate$Visual);
	return class$;
}

$Class* Visual::class$ = nullptr;

		} // X11
	} // awt
} // sun