#include <sun/awt/X11/Screen.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Depth.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/Visual.h>
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
using $Depth = ::sun::awt::X11::Depth;
using $Native = ::sun::awt::X11::Native;
using $Visual = ::sun::awt::X11::Visual;
using $XExtData = ::sun::awt::X11::XExtData;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _Screen_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(Screen, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(Screen, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(Screen, pData)},
	{}
};

$MethodInfo _Screen_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(Screen, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(Screen, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Screen, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(Screen, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Screen, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Screen, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Screen, getSize, int32_t)},
	{"get_backing_store", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_backing_store, int32_t)},
	{"get_black_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_black_pixel, int64_t)},
	{"get_cmap", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_cmap, int64_t)},
	{"get_default_gc", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_default_gc, int64_t)},
	{"get_depths", "(I)Lsun/awt/X11/Depth;", nullptr, $PUBLIC, $virtualMethod(Screen, get_depths, $Depth*, int32_t)},
	{"get_depths", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_depths, int64_t)},
	{"get_display", "(I)J", nullptr, $PUBLIC, $virtualMethod(Screen, get_display, int64_t, int32_t)},
	{"get_display", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_display, int64_t)},
	{"get_ext_data", "(I)Lsun/awt/X11/XExtData;", nullptr, $PUBLIC, $virtualMethod(Screen, get_ext_data, $XExtData*, int32_t)},
	{"get_ext_data", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_ext_data, int64_t)},
	{"get_height", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_height, int32_t)},
	{"get_max_maps", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_max_maps, int32_t)},
	{"get_mheight", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_mheight, int32_t)},
	{"get_min_maps", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_min_maps, int32_t)},
	{"get_mwidth", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_mwidth, int32_t)},
	{"get_ndepths", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_ndepths, int32_t)},
	{"get_root", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_root, int64_t)},
	{"get_root_depth", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_root_depth, int32_t)},
	{"get_root_input_mask", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_root_input_mask, int64_t)},
	{"get_root_visual", "(I)Lsun/awt/X11/Visual;", nullptr, $PUBLIC, $virtualMethod(Screen, get_root_visual, $Visual*, int32_t)},
	{"get_root_visual", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_root_visual, int64_t)},
	{"get_save_unders", "()Z", nullptr, $PUBLIC, $virtualMethod(Screen, get_save_unders, bool)},
	{"get_white_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(Screen, get_white_pixel, int64_t)},
	{"get_width", "()I", nullptr, $PUBLIC, $virtualMethod(Screen, get_width, int32_t)},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_backing_store, void, int32_t)},
	{"set_black_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_black_pixel, void, int64_t)},
	{"set_cmap", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_cmap, void, int64_t)},
	{"set_default_gc", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_default_gc, void, int64_t)},
	{"set_depths", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_depths, void, int64_t)},
	{"set_display", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_display, void, int64_t)},
	{"set_ext_data", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_ext_data, void, int64_t)},
	{"set_height", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_height, void, int32_t)},
	{"set_max_maps", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_max_maps, void, int32_t)},
	{"set_mheight", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_mheight, void, int32_t)},
	{"set_min_maps", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_min_maps, void, int32_t)},
	{"set_mwidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_mwidth, void, int32_t)},
	{"set_ndepths", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_ndepths, void, int32_t)},
	{"set_root", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_root, void, int64_t)},
	{"set_root_depth", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_root_depth, void, int32_t)},
	{"set_root_input_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_root_input_mask, void, int64_t)},
	{"set_root_visual", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_root_visual, void, int64_t)},
	{"set_save_unders", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_save_unders, void, bool)},
	{"set_white_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_white_pixel, void, int64_t)},
	{"set_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(Screen, set_width, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Screen, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Screen, zero, void)},
	{}
};

$ClassInfo _Screen_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.Screen",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_Screen_FieldInfo_,
	_Screen_MethodInfo_
};

$Object* allocate$Screen($Class* clazz) {
	return $of($alloc(Screen));
}

int32_t Screen::getSize() {
	$init(Screen);
	return 128;
}

int32_t Screen::getDataSize() {
	return getSize();
}

int64_t Screen::getPData() {
	return this->pData;
}

void Screen::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void Screen::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void Screen::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

$XExtData* Screen::get_ext_data(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 0) != 0) ? ($new($XExtData, $Native::getLong(this->pData + 0) + index * 32)) : (($XExtData*)nullptr);
}

int64_t Screen::get_ext_data() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 0);
}

void Screen::set_ext_data(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 0, v);
}

int64_t Screen::get_display(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	int64_t var$0 = $Native::getLong(this->pData + 8);
	return var$0 + index * $Native::getLongSize();
}

int64_t Screen::get_display() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 8);
}

void Screen::set_display(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 8, v);
}

int64_t Screen::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 16));
}

void Screen::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 16, v);
}

int32_t Screen::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 24));
}

void Screen::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 24, v);
}

int32_t Screen::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 28));
}

void Screen::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 28, v);
}

int32_t Screen::get_mwidth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 32));
}

void Screen::set_mwidth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 32, v);
}

int32_t Screen::get_mheight() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 36));
}

void Screen::set_mheight(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 36, v);
}

int32_t Screen::get_ndepths() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void Screen::set_ndepths(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

$Depth* Screen::get_depths(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 48) != 0) ? ($new($Depth, $Native::getLong(this->pData + 48) + index * 16)) : (($Depth*)nullptr);
}

int64_t Screen::get_depths() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 48);
}

void Screen::set_depths(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 48, v);
}

int32_t Screen::get_root_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 56));
}

void Screen::set_root_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 56, v);
}

$Visual* Screen::get_root_visual(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64) != 0) ? ($new($Visual, $Native::getLong(this->pData + 64) + index * 56)) : (($Visual*)nullptr);
}

int64_t Screen::get_root_visual() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 64);
}

void Screen::set_root_visual(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

int64_t Screen::get_default_gc() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 72));
}

void Screen::set_default_gc(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 72, v);
}

int64_t Screen::get_cmap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void Screen::set_cmap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

int64_t Screen::get_white_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 88));
}

void Screen::set_white_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 88, v);
}

int64_t Screen::get_black_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void Screen::set_black_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int32_t Screen::get_max_maps() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 104));
}

void Screen::set_max_maps(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 104, v);
}

int32_t Screen::get_min_maps() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 108));
}

void Screen::set_min_maps(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 108, v);
}

int32_t Screen::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 112));
}

void Screen::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 112, v);
}

bool Screen::get_save_unders() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 116));
}

void Screen::set_save_unders(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 116, v);
}

int64_t Screen::get_root_input_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 120));
}

void Screen::set_root_input_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 120, v);
}

$String* Screen::getName() {
	return "Screen"_s;
}

$String* Screen::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 800));
	ret->append("ext_data = "_s)->append(get_ext_data())->append(", "_s);
	ret->append("display = "_s)->append(get_display())->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("mwidth = "_s)->append(get_mwidth())->append(", "_s);
	ret->append("mheight = "_s)->append(get_mheight())->append(", "_s);
	ret->append("ndepths = "_s)->append(get_ndepths())->append(", "_s);
	ret->append("depths = "_s)->append(get_depths())->append(", "_s);
	ret->append("root_depth = "_s)->append(get_root_depth())->append(", "_s);
	ret->append("root_visual = "_s)->append(get_root_visual())->append(", "_s);
	ret->append("default_gc = "_s)->append(get_default_gc())->append(", "_s);
	ret->append("cmap = "_s)->append(get_cmap())->append(", "_s);
	ret->append("white_pixel = "_s)->append(get_white_pixel())->append(", "_s);
	ret->append("black_pixel = "_s)->append(get_black_pixel())->append(", "_s);
	ret->append("max_maps = "_s)->append(get_max_maps())->append(", "_s);
	ret->append("min_maps = "_s)->append(get_min_maps())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("save_unders = "_s)->append(get_save_unders())->append(", "_s);
	ret->append("root_input_mask = "_s)->append(get_root_input_mask())->append(", "_s);
	return ret->toString();
}

$Object* Screen::clone() {
	return $of($XWrapperBase::clone());
}

void Screen::zero() {
	$XWrapperBase::zero();
}

$String* Screen::toString() {
	return $XWrapperBase::toString();
}

Screen::Screen() {
}

$Class* Screen::load$($String* name, bool initialize) {
	$loadClass(Screen, name, initialize, &_Screen_ClassInfo_, allocate$Screen);
	return class$;
}

$Class* Screen::class$ = nullptr;

		} // X11
	} // awt
} // sun