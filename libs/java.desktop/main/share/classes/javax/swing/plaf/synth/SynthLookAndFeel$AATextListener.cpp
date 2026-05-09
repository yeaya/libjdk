#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener.h>
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
#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
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
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthLookAndFeel$AATextListener$1 = ::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener$1;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$Object* SynthLookAndFeel$AATextListener::clone() {
	return this->$WeakReference::clone();
}

int32_t SynthLookAndFeel$AATextListener::hashCode() {
	return this->$WeakReference::hashCode();
}

bool SynthLookAndFeel$AATextListener::equals(Object$* arg0) {
	return this->$WeakReference::equals(arg0);
}

$String* SynthLookAndFeel$AATextListener::toString() {
	return this->$WeakReference::toString();
}

void SynthLookAndFeel$AATextListener::finalize() {
	this->$WeakReference::finalize();
}

bool SynthLookAndFeel$AATextListener::updatePending = false;

void SynthLookAndFeel$AATextListener::init$($LookAndFeel* laf) {
	$init($SynthLookAndFeel);
	$WeakReference::init$(laf, $SynthLookAndFeel::queue);
	$init($SunToolkit);
	$set(this, key, $SunToolkit::DESKTOPFONTHINTS);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->addPropertyChangeListener(this->key, this);
}

void SynthLookAndFeel$AATextListener::propertyChange($PropertyChangeEvent* pce) {
	$useLocalObjectStack();
	$var($UIDefaults, defaults, $UIManager::getLookAndFeelDefaults());
	if ($nc(defaults)->getBoolean("Synth.doNotSetTextAA"_s)) {
		dispose();
		return;
	}
	$var($LookAndFeel, laf, $cast($LookAndFeel, get()));
	if (laf == nullptr || laf != $UIManager::getLookAndFeel()) {
		dispose();
		return;
	}
	$SwingUtilities2::putAATextInfo($SynthLookAndFeel::useLAFConditions(), defaults);
	updateUI();
}

void SynthLookAndFeel$AATextListener::dispose() {
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$nc(tk)->removePropertyChangeListener(this->key, this);
}

void SynthLookAndFeel$AATextListener::updateWindowUI($Window* window) {
	$init(SynthLookAndFeel$AATextListener);
	$useLocalObjectStack();
	$SynthLookAndFeel::updateStyles(window);
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

void SynthLookAndFeel$AATextListener::updateAllUIs() {
	$init(SynthLookAndFeel$AATextListener);
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

void SynthLookAndFeel$AATextListener::setUpdatePending(bool update) {
	$init(SynthLookAndFeel$AATextListener);
	$synchronized(class$) {
		SynthLookAndFeel$AATextListener::updatePending = update;
	}
}

bool SynthLookAndFeel$AATextListener::isUpdatePending() {
	$init(SynthLookAndFeel$AATextListener);
	$synchronized(class$) {
		return SynthLookAndFeel$AATextListener::updatePending;
	}
}

void SynthLookAndFeel$AATextListener::updateUI() {
	if (!isUpdatePending()) {
		setUpdatePending(true);
		$var($Runnable, uiUpdater, $new($SynthLookAndFeel$AATextListener$1, this));
		$SwingUtilities::invokeLater(uiUpdater);
	}
}

SynthLookAndFeel$AATextListener::SynthLookAndFeel$AATextListener() {
}

$Class* SynthLookAndFeel$AATextListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthLookAndFeel$AATextListener, key)},
		{"updatePending", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SynthLookAndFeel$AATextListener, updatePending)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/LookAndFeel;)V", nullptr, 0, $method(SynthLookAndFeel$AATextListener, init$, void, $LookAndFeel*)},
		{"dispose", "()V", nullptr, 0, $virtualMethod(SynthLookAndFeel$AATextListener, dispose, void)},
		{"isUpdatePending", "()Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(SynthLookAndFeel$AATextListener, isUpdatePending, bool)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthLookAndFeel$AATextListener, propertyChange, void, $PropertyChangeEvent*)},
		{"setUpdatePending", "(Z)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(SynthLookAndFeel$AATextListener, setUpdatePending, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"updateAllUIs", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthLookAndFeel$AATextListener, updateAllUIs, void)},
		{"updateUI", "()V", nullptr, $PROTECTED, $virtualMethod(SynthLookAndFeel$AATextListener, updateUI, void)},
		{"updateWindowUI", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SynthLookAndFeel$AATextListener, updateWindowUI, void, $Window*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener", "javax.swing.plaf.synth.SynthLookAndFeel", "AATextListener", $PRIVATE | $STATIC},
		{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener",
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
		"javax.swing.plaf.synth.SynthLookAndFeel"
	};
	$loadClass(SynthLookAndFeel$AATextListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthLookAndFeel$AATextListener));
	});
	return class$;
}

$Class* SynthLookAndFeel$AATextListener::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax