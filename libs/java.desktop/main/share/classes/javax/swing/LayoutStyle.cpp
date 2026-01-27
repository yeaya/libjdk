#include <javax/swing/LayoutStyle.h>

#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {

$MethodInfo _LayoutStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LayoutStyle, init$, void)},
	{"getContainerGap", "(Ljavax/swing/JComponent;ILjava/awt/Container;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutStyle, getContainerGap, int32_t, $JComponent*, int32_t, $Container*)},
	{"getInstance", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutStyle, getInstance, LayoutStyle*)},
	{"getPreferredGap", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;Ljavax/swing/LayoutStyle$ComponentPlacement;ILjava/awt/Container;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutStyle, getPreferredGap, int32_t, $JComponent*, $JComponent*, $LayoutStyle$ComponentPlacement*, int32_t, $Container*)},
	{"setInstance", "(Ljavax/swing/LayoutStyle;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutStyle, setInstance, void, LayoutStyle*)},
	{}
};

$InnerClassInfo _LayoutStyle_InnerClassesInfo_[] = {
	{"javax.swing.LayoutStyle$ComponentPlacement", "javax.swing.LayoutStyle", "ComponentPlacement", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LayoutStyle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.LayoutStyle",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LayoutStyle_MethodInfo_,
	nullptr,
	nullptr,
	_LayoutStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.LayoutStyle$ComponentPlacement"
};

$Object* allocate$LayoutStyle($Class* clazz) {
	return $of($alloc(LayoutStyle));
}

void LayoutStyle::setInstance(LayoutStyle* style) {
	$useLocalCurrentObjectStackCache();
	$load(LayoutStyle);
	$synchronized(LayoutStyle::class$) {
		if (style == nullptr) {
			$nc($($AppContext::getAppContext()))->remove(LayoutStyle::class$);
		} else {
			$nc($($AppContext::getAppContext()))->put(LayoutStyle::class$, style);
		}
	}
}

LayoutStyle* LayoutStyle::getInstance() {
	$useLocalCurrentObjectStackCache();
	$var(LayoutStyle, style, nullptr);
	$load(LayoutStyle);
	$synchronized(LayoutStyle::class$) {
		$assign(style, $cast(LayoutStyle, $nc($($AppContext::getAppContext()))->get(LayoutStyle::class$)));
	}
	if (style == nullptr) {
		return $nc($($UIManager::getLookAndFeel()))->getLayoutStyle();
	}
	return style;
}

void LayoutStyle::init$() {
}

LayoutStyle::LayoutStyle() {
}

$Class* LayoutStyle::load$($String* name, bool initialize) {
	$loadClass(LayoutStyle, name, initialize, &_LayoutStyle_ClassInfo_, allocate$LayoutStyle);
	return class$;
}

$Class* LayoutStyle::class$ = nullptr;

	} // swing
} // javax