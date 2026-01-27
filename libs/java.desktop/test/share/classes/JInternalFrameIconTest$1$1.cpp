#include <JInternalFrameIconTest$1$1.h>

#include <JInternalFrameIconTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/ImageIcon.h>
#include <jcpp.h>

using $JInternalFrameIconTest$1 = ::JInternalFrameIconTest$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;

$FieldInfo _JInternalFrameIconTest$1$1_FieldInfo_[] = {
	{"this$0", "LJInternalFrameIconTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrameIconTest$1$1, this$0)},
	{}
};

$MethodInfo _JInternalFrameIconTest$1$1_MethodInfo_[] = {
	{"<init>", "(LJInternalFrameIconTest$1;)V", nullptr, 0, $method(JInternalFrameIconTest$1$1, init$, void, $JInternalFrameIconTest$1*)},
	{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$1$1, getIconHeight, int32_t)},
	{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$1$1, getIconWidth, int32_t)},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(JInternalFrameIconTest$1$1, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
	{}
};

$EnclosingMethodInfo _JInternalFrameIconTest$1$1_EnclosingMethodInfo_ = {
	"JInternalFrameIconTest$1",
	"run",
	"()V"
};

$InnerClassInfo _JInternalFrameIconTest$1$1_InnerClassesInfo_[] = {
	{"JInternalFrameIconTest$1", nullptr, nullptr, 0},
	{"JInternalFrameIconTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JInternalFrameIconTest$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"JInternalFrameIconTest$1$1",
	"javax.swing.ImageIcon",
	nullptr,
	_JInternalFrameIconTest$1$1_FieldInfo_,
	_JInternalFrameIconTest$1$1_MethodInfo_,
	nullptr,
	&_JInternalFrameIconTest$1$1_EnclosingMethodInfo_,
	_JInternalFrameIconTest$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JInternalFrameIconTest"
};

$Object* allocate$JInternalFrameIconTest$1$1($Class* clazz) {
	return $of($alloc(JInternalFrameIconTest$1$1));
}

void JInternalFrameIconTest$1$1::init$($JInternalFrameIconTest$1* this$0) {
	$set(this, this$0, this$0);
	$ImageIcon::init$();
}

int32_t JInternalFrameIconTest$1$1::getIconWidth() {
	return 16;
}

int32_t JInternalFrameIconTest$1$1::getIconHeight() {
	return 16;
}

void JInternalFrameIconTest$1$1::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($Color);
	$nc(g)->setColor($Color::black);
	g->fillRect(x, y, 16, 16);
}

JInternalFrameIconTest$1$1::JInternalFrameIconTest$1$1() {
}

$Class* JInternalFrameIconTest$1$1::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameIconTest$1$1, name, initialize, &_JInternalFrameIconTest$1$1_ClassInfo_, allocate$JInternalFrameIconTest$1$1);
	return class$;
}

$Class* JInternalFrameIconTest$1$1::class$ = nullptr;