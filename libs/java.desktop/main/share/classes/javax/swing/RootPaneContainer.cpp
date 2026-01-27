#include <javax/swing/RootPaneContainer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

$MethodInfo _RootPaneContainer_MethodInfo_[] = {
	{"getContentPane", "()Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, getContentPane, $Container*)},
	{"getGlassPane", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, getGlassPane, $Component*)},
	{"getLayeredPane", "()Ljavax/swing/JLayeredPane;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, getLayeredPane, $JLayeredPane*)},
	{"getRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, getRootPane, $JRootPane*)},
	{"setContentPane", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, setContentPane, void, $Container*)},
	{"setGlassPane", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, setGlassPane, void, $Component*)},
	{"setLayeredPane", "(Ljavax/swing/JLayeredPane;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RootPaneContainer, setLayeredPane, void, $JLayeredPane*)},
	{}
};

$ClassInfo _RootPaneContainer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.RootPaneContainer",
	nullptr,
	nullptr,
	nullptr,
	_RootPaneContainer_MethodInfo_
};

$Object* allocate$RootPaneContainer($Class* clazz) {
	return $of($alloc(RootPaneContainer));
}

$Class* RootPaneContainer::load$($String* name, bool initialize) {
	$loadClass(RootPaneContainer, name, initialize, &_RootPaneContainer_ClassInfo_, allocate$RootPaneContainer);
	return class$;
}

$Class* RootPaneContainer::class$ = nullptr;

	} // swing
} // javax