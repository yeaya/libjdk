#include <com/apple/laf/ScreenMenuPropertyHandler.h>

#include <java/awt/Font.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _ScreenMenuPropertyHandler_MethodInfo_[] = {
	{"setAccelerator", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setAccelerator, void, $KeyStroke*)},
	{"setChildVisible", "(Ljavax/swing/JMenuItem;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setChildVisible, void, $JMenuItem*, bool)},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setEnabled, void, bool)},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setFont, void, $Font*)},
	{"setIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setIcon, void, $Icon*)},
	{"setIndeterminate", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setIndeterminate, void, bool)},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setLabel, void, $String*)},
	{"setToolTipText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ScreenMenuPropertyHandler, setToolTipText, void, $String*)},
	{}
};

$ClassInfo _ScreenMenuPropertyHandler_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.apple.laf.ScreenMenuPropertyHandler",
	nullptr,
	nullptr,
	nullptr,
	_ScreenMenuPropertyHandler_MethodInfo_
};

$Object* allocate$ScreenMenuPropertyHandler($Class* clazz) {
	return $of($alloc(ScreenMenuPropertyHandler));
}

$Class* ScreenMenuPropertyHandler::load$($String* name, bool initialize) {
	$loadClass(ScreenMenuPropertyHandler, name, initialize, &_ScreenMenuPropertyHandler_ClassInfo_, allocate$ScreenMenuPropertyHandler);
	return class$;
}

$Class* ScreenMenuPropertyHandler::class$ = nullptr;

		} // laf
	} // apple
} // com