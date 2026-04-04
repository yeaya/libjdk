#include <com/sun/java/swing/plaf/windows/WindowsDesktopManager.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

int32_t WindowsDesktopManager::hashCode() {
	 return this->$DefaultDesktopManager::hashCode();
}

bool WindowsDesktopManager::equals(Object$* arg0) {
	 return this->$DefaultDesktopManager::equals(arg0);
}

$Object* WindowsDesktopManager::clone() {
	 return this->$DefaultDesktopManager::clone();
}

$String* WindowsDesktopManager::toString() {
	 return this->$DefaultDesktopManager::toString();
}

void WindowsDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void WindowsDesktopManager::init$() {
	$DefaultDesktopManager::init$();
}

void WindowsDesktopManager::activateFrame($JInternalFrame* f) {
	$var($JInternalFrame, currentFrame, this->currentFrameRef != nullptr ? $cast($JInternalFrame, this->currentFrameRef->get()) : ($JInternalFrame*)nullptr);
	try {
		$DefaultDesktopManager::activateFrame(f);
		if (currentFrame != nullptr && f != currentFrame) {
			bool var$1 = !currentFrame->isClosed();
			bool var$0 = var$1 && currentFrame->isMaximum();
			if (var$0 && (!$equals($nc(f)->getClientProperty("JInternalFrame.frameType"_s), "optionDialog"_s))) {
				if (!currentFrame->isIcon()) {
					currentFrame->setMaximum(false);
					if (f->isMaximizable()) {
						if (!f->isMaximum()) {
							f->setMaximum(true);
						} else {
							bool var$2 = f->isMaximum();
							if (var$2 && f->isIcon()) {
								f->setIcon(false);
							} else {
								f->setMaximum(false);
							}
						}
					}
				}
			}
			if (currentFrame->isSelected()) {
				currentFrame->setSelected(false);
			}
		}
		if (!$nc(f)->isSelected()) {
			f->setSelected(true);
		}
	} catch ($PropertyVetoException& e) {
	}
	if (f != currentFrame) {
		$set(this, currentFrameRef, $new($WeakReference, f));
	}
}

WindowsDesktopManager::WindowsDesktopManager() {
}

$Class* WindowsDesktopManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"currentFrameRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JInternalFrame;>;", $PRIVATE, $field(WindowsDesktopManager, currentFrameRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsDesktopManager, init$, void)},
		{"activateFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopManager, activateFrame, void, $JInternalFrame*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsDesktopManager",
		"javax.swing.DefaultDesktopManager",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsDesktopManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsDesktopManager));
	});
	return class$;
}

$Class* WindowsDesktopManager::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com