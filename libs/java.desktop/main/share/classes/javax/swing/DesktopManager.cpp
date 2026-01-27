#include <javax/swing/DesktopManager.h>

#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$MethodInfo _DesktopManager_MethodInfo_[] = {
	{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, activateFrame, void, $JInternalFrame*)},
	{"beginDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, beginDraggingFrame, void, $JComponent*)},
	{"beginResizingFrame", "(Ljavax/swing/JComponent;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, beginResizingFrame, void, $JComponent*, int32_t)},
	{"closeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, closeFrame, void, $JInternalFrame*)},
	{"deactivateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, deactivateFrame, void, $JInternalFrame*)},
	{"deiconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, deiconifyFrame, void, $JInternalFrame*)},
	{"dragFrame", "(Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, dragFrame, void, $JComponent*, int32_t, int32_t)},
	{"endDraggingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, endDraggingFrame, void, $JComponent*)},
	{"endResizingFrame", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, endResizingFrame, void, $JComponent*)},
	{"iconifyFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, iconifyFrame, void, $JInternalFrame*)},
	{"maximizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, maximizeFrame, void, $JInternalFrame*)},
	{"minimizeFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, minimizeFrame, void, $JInternalFrame*)},
	{"openFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, openFrame, void, $JInternalFrame*)},
	{"resizeFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, resizeFrame, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
	{"setBoundsForFrame", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DesktopManager, setBoundsForFrame, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _DesktopManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.DesktopManager",
	nullptr,
	nullptr,
	nullptr,
	_DesktopManager_MethodInfo_
};

$Object* allocate$DesktopManager($Class* clazz) {
	return $of($alloc(DesktopManager));
}

$Class* DesktopManager::load$($String* name, bool initialize) {
	$loadClass(DesktopManager, name, initialize, &_DesktopManager_ClassInfo_, allocate$DesktopManager);
	return class$;
}

$Class* DesktopManager::class$ = nullptr;

	} // swing
} // javax