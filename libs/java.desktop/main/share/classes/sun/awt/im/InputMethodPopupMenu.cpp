#include <sun/awt/im/InputMethodPopupMenu.h>

#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/util/Locale.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <sun/awt/im/AWTInputMethodPopupMenu.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/im/JInputMethodPopupMenu.h>
#include <jcpp.h>

using $LocaleArray = $Array<::java::util::Locale>;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $AWTInputMethodPopupMenu = ::sun::awt::im::AWTInputMethodPopupMenu;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $JInputMethodPopupMenu = ::sun::awt::im::JInputMethodPopupMenu;

namespace sun {
	namespace awt {
		namespace im {

$MethodInfo _InputMethodPopupMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(InputMethodPopupMenu, init$, void)},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(InputMethodPopupMenu, actionPerformed, void, $ActionEvent*)},
	{"add", "(Ljava/lang/Object;)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, add, void, Object$*)},
	{"addMenuItem", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, addMenuItem, void, $String*, $String*, $String*)},
	{"addMenuItem", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, addMenuItem, void, Object$*, $String*, $String*, $String*)},
	{"addOneInputMethodToMenu", "(Lsun/awt/im/InputMethodLocator;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(InputMethodPopupMenu, addOneInputMethodToMenu, void, $InputMethodLocator*, $String*)},
	{"addSeparator", "()V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, addSeparator, void)},
	{"addToComponent", "(Ljava/awt/Component;)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, addToComponent, void, $Component*)},
	{"createSubmenu", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, createSubmenu, $Object*, $String*)},
	{"getInstance", "(Ljava/awt/Component;Ljava/lang/String;)Lsun/awt/im/InputMethodPopupMenu;", nullptr, $STATIC, $staticMethod(InputMethodPopupMenu, getInstance, InputMethodPopupMenu*, $Component*, $String*)},
	{"getLocaleName", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, 0, $virtualMethod(InputMethodPopupMenu, getLocaleName, $String*, $Locale*)},
	{"isSelected", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $STATIC, $staticMethod(InputMethodPopupMenu, isSelected, bool, $String*, $String*)},
	{"removeAll", "()V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, removeAll, void)},
	{"show", "(Ljava/awt/Component;II)V", nullptr, $ABSTRACT, $virtualMethod(InputMethodPopupMenu, show, void, $Component*, int32_t, int32_t)},
	{}
};

$ClassInfo _InputMethodPopupMenu_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.im.InputMethodPopupMenu",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_InputMethodPopupMenu_MethodInfo_
};

$Object* allocate$InputMethodPopupMenu($Class* clazz) {
	return $of($alloc(InputMethodPopupMenu));
}

void InputMethodPopupMenu::init$() {
}

InputMethodPopupMenu* InputMethodPopupMenu::getInstance($Component* client, $String* title) {
	$init(InputMethodPopupMenu);
	if (($instanceOf($JFrame, client)) || ($instanceOf($JDialog, client))) {
		return $new($JInputMethodPopupMenu, title);
	} else {
		return $new($AWTInputMethodPopupMenu, title);
	}
}

void InputMethodPopupMenu::addOneInputMethodToMenu($InputMethodLocator* locator, $String* currentSelection) {
	$useLocalCurrentObjectStackCache();
	$var($InputMethodDescriptor, descriptor, $nc(locator)->getDescriptor());
	$var($String, label, $nc(descriptor)->getInputMethodDisplayName(nullptr, $($Locale::getDefault())));
	$var($String, command, locator->getActionCommandString());
	$var($LocaleArray, locales, nullptr);
	int32_t localeCount = 0;
	try {
		$assign(locales, descriptor->getAvailableLocales());
		localeCount = $nc(locales)->length;
	} catch ($AWTException& e) {
		localeCount = 0;
	}
	if (localeCount == 0) {
		addMenuItem(label, nullptr, currentSelection);
	} else if (localeCount == 1) {
		if (descriptor->hasDynamicLocaleList()) {
			$assign(label, descriptor->getInputMethodDisplayName($nc(locales)->get(0), $($Locale::getDefault())));
			$assign(command, $nc($(locator->deriveLocator($nc(locales)->get(0))))->getActionCommandString());
		}
		addMenuItem(label, command, currentSelection);
	} else {
		$var($Object, submenu, createSubmenu(label));
		add(submenu);
		for (int32_t j = 0; j < localeCount; ++j) {
			$var($Locale, locale, $nc(locales)->get(j));
			$var($String, subLabel, getLocaleName(locale));
			$var($String, subCommand, $nc($(locator->deriveLocator(locale)))->getActionCommandString());
			addMenuItem(submenu, subLabel, subCommand, currentSelection);
		}
	}
}

bool InputMethodPopupMenu::isSelected($String* command, $String* currentSelection) {
	$init(InputMethodPopupMenu);
	if (command == nullptr || currentSelection == nullptr) {
		return false;
	}
	if ($nc(command)->equals(currentSelection)) {
		return true;
	}
	int32_t index = $nc(currentSelection)->indexOf((int32_t)u'\n');
	if (index != -1 && $(currentSelection->substring(0, index))->equals(command)) {
		return true;
	}
	return false;
}

$String* InputMethodPopupMenu::getLocaleName($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, localeString, $nc(locale)->toString());
	$var($String, localeName, $Toolkit::getProperty($$str({"AWT.InputMethodLanguage."_s, localeString}), nullptr));
	if (localeName == nullptr) {
		$assign(localeName, locale->getDisplayName());
		if (localeName == nullptr || $nc(localeName)->length() == 0) {
			$assign(localeName, localeString);
		}
	}
	return localeName;
}

void InputMethodPopupMenu::actionPerformed($ActionEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($String, choice, $nc(event)->getActionCommand());
	$nc(($cast($ExecutableInputMethodManager, $($InputMethodManager::getInstance()))))->changeInputMethod(choice);
}

InputMethodPopupMenu::InputMethodPopupMenu() {
}

$Class* InputMethodPopupMenu::load$($String* name, bool initialize) {
	$loadClass(InputMethodPopupMenu, name, initialize, &_InputMethodPopupMenu_ClassInfo_, allocate$InputMethodPopupMenu);
	return class$;
}

$Class* InputMethodPopupMenu::class$ = nullptr;

		} // im
	} // awt
} // sun