#include <sun/swing/MenuItemLayoutHelper$RectSize.h>

#include <sun/swing/MenuItemLayoutHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {

$FieldInfo _MenuItemLayoutHelper$RectSize_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, width)},
	{"height", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, height)},
	{"origWidth", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, origWidth)},
	{"maxWidth", "I", nullptr, $PRIVATE, $field(MenuItemLayoutHelper$RectSize, maxWidth)},
	{}
};

$MethodInfo _MenuItemLayoutHelper$RectSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MenuItemLayoutHelper$RectSize, init$, void)},
	{"<init>", "(IIII)V", nullptr, $PUBLIC, $method(MenuItemLayoutHelper$RectSize, init$, void, int32_t, int32_t, int32_t, int32_t)},
	{"getHeight", "()I", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, getHeight, int32_t)},
	{"getMaxWidth", "()I", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, getMaxWidth, int32_t)},
	{"getOrigWidth", "()I", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, getOrigWidth, int32_t)},
	{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, getWidth, int32_t)},
	{"setHeight", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, setHeight, void, int32_t)},
	{"setMaxWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, setMaxWidth, void, int32_t)},
	{"setOrigWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, setOrigWidth, void, int32_t)},
	{"setWidth", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, setWidth, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MenuItemLayoutHelper$RectSize, toString, $String*)},
	{}
};

$InnerClassInfo _MenuItemLayoutHelper$RectSize_InnerClassesInfo_[] = {
	{"sun.swing.MenuItemLayoutHelper$RectSize", "sun.swing.MenuItemLayoutHelper", "RectSize", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MenuItemLayoutHelper$RectSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.MenuItemLayoutHelper$RectSize",
	"java.lang.Object",
	nullptr,
	_MenuItemLayoutHelper$RectSize_FieldInfo_,
	_MenuItemLayoutHelper$RectSize_MethodInfo_,
	nullptr,
	nullptr,
	_MenuItemLayoutHelper$RectSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.MenuItemLayoutHelper"
};

$Object* allocate$MenuItemLayoutHelper$RectSize($Class* clazz) {
	return $of($alloc(MenuItemLayoutHelper$RectSize));
}

void MenuItemLayoutHelper$RectSize::init$() {
}

void MenuItemLayoutHelper$RectSize::init$(int32_t width, int32_t height, int32_t origWidth, int32_t maxWidth) {
	this->width = width;
	this->height = height;
	this->origWidth = origWidth;
	this->maxWidth = maxWidth;
}

int32_t MenuItemLayoutHelper$RectSize::getWidth() {
	return this->width;
}

int32_t MenuItemLayoutHelper$RectSize::getHeight() {
	return this->height;
}

int32_t MenuItemLayoutHelper$RectSize::getOrigWidth() {
	return this->origWidth;
}

int32_t MenuItemLayoutHelper$RectSize::getMaxWidth() {
	return this->maxWidth;
}

void MenuItemLayoutHelper$RectSize::setWidth(int32_t width) {
	this->width = width;
}

void MenuItemLayoutHelper$RectSize::setHeight(int32_t height) {
	this->height = height;
}

void MenuItemLayoutHelper$RectSize::setOrigWidth(int32_t origWidth) {
	this->origWidth = origWidth;
}

void MenuItemLayoutHelper$RectSize::setMaxWidth(int32_t maxWidth) {
	this->maxWidth = maxWidth;
}

$String* MenuItemLayoutHelper$RectSize::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"[w="_s, $$str(this->width), ",h="_s, $$str(this->height), ",ow="_s, $$str(this->origWidth), ",mw="_s, $$str(this->maxWidth), "]"_s});
}

MenuItemLayoutHelper$RectSize::MenuItemLayoutHelper$RectSize() {
}

$Class* MenuItemLayoutHelper$RectSize::load$($String* name, bool initialize) {
	$loadClass(MenuItemLayoutHelper$RectSize, name, initialize, &_MenuItemLayoutHelper$RectSize_ClassInfo_, allocate$MenuItemLayoutHelper$RectSize);
	return class$;
}

$Class* MenuItemLayoutHelper$RectSize::class$ = nullptr;

	} // swing
} // sun