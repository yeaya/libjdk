#include <sun/awt/X11/XWindowAttributes.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/Screen.h>
#include <sun/awt/X11/Visual.h>
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
using $Screen = ::sun::awt::X11::Screen;
using $Visual = ::sun::awt::X11::Visual;
using $XWrapperBase = ::sun::awt::X11::XWrapperBase;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowAttributes_FieldInfo_[] = {
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE, $field(XWindowAttributes, unsafe)},
	{"should_free_memory", "Z", nullptr, $PRIVATE | $FINAL, $field(XWindowAttributes, should_free_memory)},
	{"pData", "J", nullptr, 0, $field(XWindowAttributes, pData)},
	{}
};

$MethodInfo _XWindowAttributes_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(XWindowAttributes, init$, void, int64_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XWindowAttributes, init$, void)},
	{"clone", "()Lsun/awt/X11/XEvent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XWindowAttributes, clone, $Object*)},
	{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, dispose, void)},
	{"getDataSize", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, getDataSize, int32_t)},
	{"getFieldsAsString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XWindowAttributes, getFieldsAsString, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(XWindowAttributes, getName, $String*)},
	{"getPData", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, getPData, int64_t)},
	{"getSize", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(XWindowAttributes, getSize, int32_t)},
	{"get_all_event_masks", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_all_event_masks, int64_t)},
	{"get_backing_pixel", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_backing_pixel, int64_t)},
	{"get_backing_planes", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_backing_planes, int64_t)},
	{"get_backing_store", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_backing_store, int32_t)},
	{"get_bit_gravity", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_bit_gravity, int32_t)},
	{"get_border_width", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_border_width, int32_t)},
	{"get_class", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_class, int32_t)},
	{"get_colormap", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_colormap, int64_t)},
	{"get_depth", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_depth, int32_t)},
	{"get_do_not_propagate_mask", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_do_not_propagate_mask, int64_t)},
	{"get_height", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_height, int32_t)},
	{"get_map_installed", "()Z", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_map_installed, bool)},
	{"get_map_state", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_map_state, int32_t)},
	{"get_override_redirect", "()Z", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_override_redirect, bool)},
	{"get_root", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_root, int64_t)},
	{"get_save_under", "()Z", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_save_under, bool)},
	{"get_screen", "(I)Lsun/awt/X11/Screen;", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_screen, $Screen*, int32_t)},
	{"get_screen", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_screen, int64_t)},
	{"get_visual", "(I)Lsun/awt/X11/Visual;", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_visual, $Visual*, int32_t)},
	{"get_visual", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_visual, int64_t)},
	{"get_width", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_width, int32_t)},
	{"get_win_gravity", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_win_gravity, int32_t)},
	{"get_x", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_x, int32_t)},
	{"get_y", "()I", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_y, int32_t)},
	{"get_your_event_mask", "()J", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, get_your_event_mask, int64_t)},
	{"set_all_event_masks", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_all_event_masks, void, int64_t)},
	{"set_backing_pixel", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_backing_pixel, void, int64_t)},
	{"set_backing_planes", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_backing_planes, void, int64_t)},
	{"set_backing_store", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_backing_store, void, int32_t)},
	{"set_bit_gravity", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_bit_gravity, void, int32_t)},
	{"set_border_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_border_width, void, int32_t)},
	{"set_class", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_class, void, int32_t)},
	{"set_colormap", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_colormap, void, int64_t)},
	{"set_depth", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_depth, void, int32_t)},
	{"set_do_not_propagate_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_do_not_propagate_mask, void, int64_t)},
	{"set_height", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_height, void, int32_t)},
	{"set_map_installed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_map_installed, void, bool)},
	{"set_map_state", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_map_state, void, int32_t)},
	{"set_override_redirect", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_override_redirect, void, bool)},
	{"set_root", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_root, void, int64_t)},
	{"set_save_under", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_save_under, void, bool)},
	{"set_screen", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_screen, void, int64_t)},
	{"set_visual", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_visual, void, int64_t)},
	{"set_width", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_width, void, int32_t)},
	{"set_win_gravity", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_win_gravity, void, int32_t)},
	{"set_x", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_x, void, int32_t)},
	{"set_y", "(I)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_y, void, int32_t)},
	{"set_your_event_mask", "(J)V", nullptr, $PUBLIC, $virtualMethod(XWindowAttributes, set_your_event_mask, void, int64_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XWindowAttributes, toString, $String*)},
	{"zero", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(XWindowAttributes, zero, void)},
	{}
};

$ClassInfo _XWindowAttributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XWindowAttributes",
	"sun.awt.X11.XWrapperBase",
	nullptr,
	_XWindowAttributes_FieldInfo_,
	_XWindowAttributes_MethodInfo_
};

$Object* allocate$XWindowAttributes($Class* clazz) {
	return $of($alloc(XWindowAttributes));
}

int32_t XWindowAttributes::getSize() {
	$init(XWindowAttributes);
	return 136;
}

int32_t XWindowAttributes::getDataSize() {
	return getSize();
}

int64_t XWindowAttributes::getPData() {
	return this->pData;
}

void XWindowAttributes::init$(int64_t addr) {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = addr;
	this->should_free_memory = false;
}

void XWindowAttributes::init$() {
	$XWrapperBase::init$();
	$init($XlibWrapper);
	$set(this, unsafe, $XlibWrapper::unsafe);
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Creating"_s);
	this->pData = $nc(this->unsafe)->allocateMemory(getSize());
	this->should_free_memory = true;
}

void XWindowAttributes::dispose() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest("Disposing"_s);
	if (this->should_free_memory) {
		$nc($XWrapperBase::log)->finest("freeing memory"_s);
		$nc(this->unsafe)->freeMemory(this->pData);
	}
}

int32_t XWindowAttributes::get_x() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 0));
}

void XWindowAttributes::set_x(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 0, v);
}

int32_t XWindowAttributes::get_y() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 4));
}

void XWindowAttributes::set_y(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 4, v);
}

int32_t XWindowAttributes::get_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 8));
}

void XWindowAttributes::set_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 8, v);
}

int32_t XWindowAttributes::get_height() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 12));
}

void XWindowAttributes::set_height(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 12, v);
}

int32_t XWindowAttributes::get_border_width() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 16));
}

void XWindowAttributes::set_border_width(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 16, v);
}

int32_t XWindowAttributes::get_depth() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 20));
}

void XWindowAttributes::set_depth(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 20, v);
}

$Visual* XWindowAttributes::get_visual(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 24) != 0) ? ($new($Visual, $Native::getLong(this->pData + 24) + index * 56)) : (($Visual*)nullptr);
}

int64_t XWindowAttributes::get_visual() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 24);
}

void XWindowAttributes::set_visual(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 24, v);
}

int64_t XWindowAttributes::get_root() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 32));
}

void XWindowAttributes::set_root(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 32, v);
}

int32_t XWindowAttributes::get_class() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 40));
}

void XWindowAttributes::set_class(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 40, v);
}

int32_t XWindowAttributes::get_bit_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 44));
}

void XWindowAttributes::set_bit_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 44, v);
}

int32_t XWindowAttributes::get_win_gravity() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 48));
}

void XWindowAttributes::set_win_gravity(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 48, v);
}

int32_t XWindowAttributes::get_backing_store() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 52));
}

void XWindowAttributes::set_backing_store(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 52, v);
}

int64_t XWindowAttributes::get_backing_planes() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 56));
}

void XWindowAttributes::set_backing_planes(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 56, v);
}

int64_t XWindowAttributes::get_backing_pixel() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 64));
}

void XWindowAttributes::set_backing_pixel(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 64, v);
}

bool XWindowAttributes::get_save_under() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 72));
}

void XWindowAttributes::set_save_under(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 72, v);
}

int64_t XWindowAttributes::get_colormap() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 80));
}

void XWindowAttributes::set_colormap(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 80, v);
}

bool XWindowAttributes::get_map_installed() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 88));
}

void XWindowAttributes::set_map_installed(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 88, v);
}

int32_t XWindowAttributes::get_map_state() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getInt(this->pData + 92));
}

void XWindowAttributes::set_map_state(int32_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putInt(this->pData + 92, v);
}

int64_t XWindowAttributes::get_all_event_masks() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 96));
}

void XWindowAttributes::set_all_event_masks(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 96, v);
}

int64_t XWindowAttributes::get_your_event_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 104));
}

void XWindowAttributes::set_your_event_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 104, v);
}

int64_t XWindowAttributes::get_do_not_propagate_mask() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 112));
}

void XWindowAttributes::set_do_not_propagate_mask(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 112, v);
}

bool XWindowAttributes::get_override_redirect() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getBool(this->pData + 120));
}

void XWindowAttributes::set_override_redirect(bool v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putBool(this->pData + 120, v);
}

$Screen* XWindowAttributes::get_screen(int32_t index) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return ($Native::getLong(this->pData + 128) != 0) ? ($new($Screen, $Native::getLong(this->pData + 128) + index * 128)) : (($Screen*)nullptr);
}

int64_t XWindowAttributes::get_screen() {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	return $Native::getLong(this->pData + 128);
}

void XWindowAttributes::set_screen(int64_t v) {
	$init($XWrapperBase);
	$nc($XWrapperBase::log)->finest(""_s);
	$Native::putLong(this->pData + 128, v);
}

$String* XWindowAttributes::getName() {
	return "XWindowAttributes"_s;
}

$String* XWindowAttributes::getFieldsAsString() {
	$var($StringBuilder, ret, $new($StringBuilder, 920));
	ret->append("x = "_s)->append(get_x())->append(", "_s);
	ret->append("y = "_s)->append(get_y())->append(", "_s);
	ret->append("width = "_s)->append(get_width())->append(", "_s);
	ret->append("height = "_s)->append(get_height())->append(", "_s);
	ret->append("border_width = "_s)->append(get_border_width())->append(", "_s);
	ret->append("depth = "_s)->append(get_depth())->append(", "_s);
	ret->append("visual = "_s)->append(get_visual())->append(", "_s);
	ret->append("root = "_s)->append(get_root())->append(", "_s);
	ret->append("class = "_s)->append(get_class())->append(", "_s);
	ret->append("bit_gravity = "_s)->append(get_bit_gravity())->append(", "_s);
	ret->append("win_gravity = "_s)->append(get_win_gravity())->append(", "_s);
	ret->append("backing_store = "_s)->append(get_backing_store())->append(", "_s);
	ret->append("backing_planes = "_s)->append(get_backing_planes())->append(", "_s);
	ret->append("backing_pixel = "_s)->append(get_backing_pixel())->append(", "_s);
	ret->append("save_under = "_s)->append(get_save_under())->append(", "_s);
	ret->append("colormap = "_s)->append(get_colormap())->append(", "_s);
	ret->append("map_installed = "_s)->append(get_map_installed())->append(", "_s);
	ret->append("map_state = "_s)->append(get_map_state())->append(", "_s);
	ret->append("all_event_masks = "_s)->append(get_all_event_masks())->append(", "_s);
	ret->append("your_event_mask = "_s)->append(get_your_event_mask())->append(", "_s);
	ret->append("do_not_propagate_mask = "_s)->append(get_do_not_propagate_mask())->append(", "_s);
	ret->append("override_redirect = "_s)->append(get_override_redirect())->append(", "_s);
	ret->append("screen = "_s)->append(get_screen())->append(", "_s);
	return ret->toString();
}

$Object* XWindowAttributes::clone() {
	return $of($XWrapperBase::clone());
}

void XWindowAttributes::zero() {
	$XWrapperBase::zero();
}

$String* XWindowAttributes::toString() {
	return $XWrapperBase::toString();
}

XWindowAttributes::XWindowAttributes() {
}

$Class* XWindowAttributes::load$($String* name, bool initialize) {
	$loadClass(XWindowAttributes, name, initialize, &_XWindowAttributes_ClassInfo_, allocate$XWindowAttributes);
	return class$;
}

$Class* XWindowAttributes::class$ = nullptr;

		} // X11
	} // awt
} // sun