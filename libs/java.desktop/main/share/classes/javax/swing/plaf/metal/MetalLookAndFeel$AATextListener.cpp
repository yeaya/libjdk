#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>
#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Runnable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Map.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DESKTOPFONTHINTS

using $FrameArray = $Array<::java::awt::Frame>;
using $WindowArray = $Array<::java::awt::Window>;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WeakReference = ::java::lang::ref::WeakReference;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalLookAndFeel$AATextListener$1 = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener$1;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$Object* MetalLookAndFeel$AATextListener::clone() {
	return this->$WeakReference::clone();
}

int32_t MetalLookAndFeel$AATextListener::hashCode() {
	return this->$WeakReference::hashCode();
}

bool MetalLookAndFeel$AATextListener::equals(Object$* arg0) {
	return this->$WeakReference::equals(arg0);
}

$String* MetalLookAndFeel$AATextListener::toString() {
	return this->$WeakReference::toString();
}

void MetalLookAndFeel$AATextListener::finalize() {
	this->$WeakReference::finalize();
}

bool MetalLookAndFeel$AATextListener::updatePending = false;

void MetalLookAndFeel$AATextListener::init$($LookAndFeel* laf) {
	$init($MetalLookAndFeel);
	$WeakReference::init$(laf, $MetalLookAndFeel::queue);
	$init($SunToolkit);
	$set(this, key, $SunToolkit::DESKTOPFONTHINTS);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->addPropertyChangeListener(this->key, this);
}

void MetalLookAndFeel$AATextListener::propertyChange($PropertyChangeEvent* pce) {
	$useLocalObjectStack();
	$var($LookAndFeel, laf, $cast($LookAndFeel, get()));
	if (laf == nullptr || laf != $UIManager::getLookAndFeel()) {
		dispose();
		return;
	}
	$var($UIDefaults, defaults, $UIManager::getLookAndFeelDefaults());
	bool lafCond = $SwingUtilities2::isLocalDisplay();
	$SwingUtilities2::putAATextInfo(lafCond, defaults);
	updateUI();
}

void MetalLookAndFeel$AATextListener::dispose() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->removePropertyChangeListener(this->key, this);
}

void MetalLookAndFeel$AATextListener::updateWindowUI($Window* window) {
	$init(MetalLookAndFeel$AATextListener);
	$useLocalObjectStack();
	$SwingUtilities::updateComponentTreeUI(window);
	$var($WindowArray, ownedWins, $nc(window)->getOwnedWindows());
	{
		$var($WindowArray, arr$, ownedWins);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				updateWindowUI(w);
			}
		}
	}
}

void MetalLookAndFeel$AATextListener::updateAllUIs() {
	$init(MetalLookAndFeel$AATextListener);
	$useLocalObjectStack();
	$var($FrameArray, appFrames, $Frame::getFrames());
	{
		$var($FrameArray, arr$, appFrames);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Frame, frame, arr$->get(i$));
			{
				updateWindowUI(frame);
			}
		}
	}
}

void MetalLookAndFeel$AATextListener::setUpdatePending(bool update) {
	$init(MetalLookAndFeel$AATextListener);
	$synchronized(class$) {
		MetalLookAndFeel$AATextListener::updatePending = update;
	}
}

bool MetalLookAndFeel$AATextListener::isUpdatePending() {
	$init(MetalLookAndFeel$AATextListener);
	$synchronized(class$) {
		return MetalLookAndFeel$AATextListener::updatePending;
	}
}

void MetalLookAndFeel$AATextListener::updateUI() {
	if (!isUpdatePending()) {
		setUpdatePending(true);
		$var($Runnable, uiUpdater, $new($MetalLookAndFeel$AATextListener$1, this));
		$SwingUtilities::invokeLater(uiUpdater);
	}
}

MetalLookAndFeel$AATextListener::MetalLookAndFeel$AATextListener() {
}

$Class* MetalLookAndFeel$AATextListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalLookAndFeel$AATextListener, key)},
		{"updatePending", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel$AATextListener, updatePending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/LookAndFeel;)V", nullptr, 0, $method(MetalLookAndFeel$AATextListener, init$, void, $LookAndFeel*)},
		{"dispose", "()V", nullptr, 0, $virtualMethod(MetalLookAndFeel$AATextListener, dispose, void)},
		{"isUpdatePending", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MetalLookAndFeel$AATextListener, isUpdatePending, bool)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$AATextListener, propertyChange, void, $PropertyChangeEvent*)},
		{"setUpdatePending", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(MetalLookAndFeel$AATextListener, setUpdatePending, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateAllUIs", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(MetalLookAndFeel$AATextListener, updateAllUIs, void)},
		{"updateUI", "()V", nullptr, $PROTECTED, $virtualMethod(MetalLookAndFeel$AATextListener, updateUI, void)},
		{"updateWindowUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(MetalLookAndFeel$AATextListener, updateWindowUI, void, $Window*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
		{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener",
		"java.lang.ref.WeakReference",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ref/WeakReference<Ljavax/swing/LookAndFeel;>;Ljava/beans/PropertyChangeListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalLookAndFeel"
	};
	$loadClass(MetalLookAndFeel$AATextListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalLookAndFeel$AATextListener));
	});
	return class$;
}

$Class* MetalLookAndFeel$AATextListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax