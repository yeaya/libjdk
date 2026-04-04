#include <FileChooserListenerLeak.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/HierarchyBoundsListener.h>
#include <java/awt/event/HierarchyListener.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/event/MouseWheelListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/MenuDragMouseListener.h>
#include <javax/swing/event/MenuKeyListener.h>
#include <javax/swing/event/MenuListener.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class FileChooserListenerLeak$$Lambda$lambda$main$0 : public $Runnable {
	$class(FileChooserListenerLeak$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FileChooserListenerLeak::lambda$main$0();
	}
};
$Class* FileChooserListenerLeak$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileChooserListenerLeak$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FileChooserListenerLeak$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FileChooserListenerLeak$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FileChooserListenerLeak$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileChooserListenerLeak$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* FileChooserListenerLeak$$Lambda$lambda$main$0::class$ = nullptr;

void FileChooserListenerLeak::init$() {
}

void FileChooserListenerLeak::main($StringArray* args) {
	$EventQueue::invokeAndWait($$new(FileChooserListenerLeak$$Lambda$lambda$main$0));
}

void FileChooserListenerLeak::checkListenersCount($Component* comp) {
	$useLocalObjectStack();
	test($($nc(comp)->getComponentListeners()));
	test($(comp->getFocusListeners()));
	test($(comp->getHierarchyListeners()));
	test($(comp->getHierarchyBoundsListeners()));
	test($(comp->getKeyListeners()));
	test($(comp->getMouseListeners()));
	test($(comp->getMouseMotionListeners()));
	test($(comp->getMouseWheelListeners()));
	test($(comp->getInputMethodListeners()));
	test($(comp->getPropertyChangeListeners()));
	if ($instanceOf($JComponent, comp)) {
		test($($cast($JComponent, comp)->getAncestorListeners()));
		test($($cast($JComponent, comp)->getVetoableChangeListeners()));
	}
	if ($instanceOf($JMenuItem, comp)) {
		test($($cast($JMenuItem, comp)->getMenuKeyListeners()));
		test($($cast($JMenuItem, comp)->getMenuDragMouseListeners()));
	}
	if ($instanceOf($JMenu, comp)) {
		test($($cast($JMenu, comp)->getMenuListeners()));
	}
	if ($instanceOf($Container, comp)) {
		$var($ComponentArray, arr$, $cast($Container, comp)->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				checkListenersCount(child);
			}
		}
	}
}

void FileChooserListenerLeak::test($ObjectArray* listeners) {
	$useLocalObjectStack();
	int32_t length = $nc(listeners)->length;
	if (length > 20) {
		$throwNew($RuntimeException, $$str({"The count of listeners is: "_s, $$str(length)}));
	}
}

void FileChooserListenerLeak::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void FileChooserListenerLeak::lambda$main$0() {
	$useLocalObjectStack();
	$var($JFileChooser, chooser, $new($JFileChooser));
	checkListenersCount(chooser);
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	for (int32_t i = 0; i < 100; ++i) {
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, installedLookAndFeel, arr$->get(i$));
			{
				setLookAndFeel(installedLookAndFeel);
				$SwingUtilities::updateComponentTreeUI(chooser);
			}
		}
	}
	checkListenersCount(chooser);
}

FileChooserListenerLeak::FileChooserListenerLeak() {
}

$Class* FileChooserListenerLeak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FileChooserListenerLeak$$Lambda$lambda$main$0")) {
			return FileChooserListenerLeak$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileChooserListenerLeak, init$, void)},
		{"checkListenersCount", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileChooserListenerLeak, checkListenersCount, void, $Component*)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FileChooserListenerLeak, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FileChooserListenerLeak, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileChooserListenerLeak, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"test", "([Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(FileChooserListenerLeak, test, void, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"FileChooserListenerLeak",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileChooserListenerLeak, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileChooserListenerLeak);
	});
	return class$;
}

$Class* FileChooserListenerLeak::class$ = nullptr;