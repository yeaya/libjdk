#include <javax/swing/UIManager.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/Module.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/Vector.h>
#include <javax/swing/FocusManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MultiUIDefaults.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <javax/swing/SwingPaintEventDispatcher.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$1.h>
#include <javax/swing/UIManager$2.h>
#include <javax/swing/UIManager$LAFState.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/RequestFocusController.h>
#include <sun/awt/SunToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef HANDLE_TOP_LEVEL_PAINT
#undef LAF_STATE_KEY
#undef MACOSX
#undef WINDOWS

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $LookAndFeelArray = $Array<::javax::swing::LookAndFeel>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $KeyEventPostProcessor = ::java::awt::KeyEventPostProcessor;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Vector = ::java::util::Vector;
using $FocusManager = ::javax::swing::FocusManager;
using $Icon = ::javax::swing::Icon;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;
using $SwingPaintEventDispatcher = ::javax::swing::SwingPaintEventDispatcher;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager$1 = ::javax::swing::UIManager$1;
using $UIManager$2 = ::javax::swing::UIManager$2;
using $UIManager$LAFState = ::javax::swing::UIManager$LAFState;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $Border = ::javax::swing::border::Border;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {

$FieldInfo _UIManager_FieldInfo_[] = {
	{"classLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, classLock)},
	{"defaultLAFKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, defaultLAFKey)},
	{"auxiliaryLAFsKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, auxiliaryLAFsKey)},
	{"multiplexingLAFKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, multiplexingLAFKey)},
	{"installedLAFsKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, installedLAFsKey)},
	{"disableMnemonicKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UIManager, disableMnemonicKey)},
	{"installedLAFs", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE | $STATIC, $staticField(UIManager, installedLAFs)},
	{}
};

$MethodInfo _UIManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UIManager, init$, void)},
	{"addAuxiliaryLookAndFeel", "(Ljavax/swing/LookAndFeel;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, addAuxiliaryLookAndFeel, void, $LookAndFeel*)},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"checkProperty", "(Ljava/util/Properties;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, checkProperty, void, $Properties*, $String*)},
	{"createLookAndFeel", "(Ljava/lang/String;)Ljavax/swing/LookAndFeel;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, createLookAndFeel, $LookAndFeel*, $String*), "javax.swing.UnsupportedLookAndFeelException"},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, get, $Object*, Object$*)},
	{"get", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, get, $Object*, Object$*, $Locale*)},
	{"getAuxiliaryLookAndFeels", "()[Ljavax/swing/LookAndFeel;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getAuxiliaryLookAndFeels, $LookAndFeelArray*)},
	{"getBoolean", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getBoolean, bool, Object$*)},
	{"getBoolean", "(Ljava/lang/Object;Ljava/util/Locale;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getBoolean, bool, Object$*, $Locale*)},
	{"getBorder", "(Ljava/lang/Object;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getBorder, $Border*, Object$*)},
	{"getBorder", "(Ljava/lang/Object;Ljava/util/Locale;)Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getBorder, $Border*, Object$*, $Locale*)},
	{"getColor", "(Ljava/lang/Object;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getColor, $Color*, Object$*)},
	{"getColor", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getColor, $Color*, Object$*, $Locale*)},
	{"getCrossPlatformLookAndFeelClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getCrossPlatformLookAndFeelClassName, $String*)},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getDefaults, $UIDefaults*)},
	{"getDimension", "(Ljava/lang/Object;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getDimension, $Dimension*, Object$*)},
	{"getDimension", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getDimension, $Dimension*, Object$*, $Locale*)},
	{"getFont", "(Ljava/lang/Object;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getFont, $Font*, Object$*)},
	{"getFont", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Font;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getFont, $Font*, Object$*, $Locale*)},
	{"getIcon", "(Ljava/lang/Object;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getIcon, $Icon*, Object$*)},
	{"getIcon", "(Ljava/lang/Object;Ljava/util/Locale;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getIcon, $Icon*, Object$*, $Locale*)},
	{"getInsets", "(Ljava/lang/Object;)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getInsets, $Insets*, Object$*)},
	{"getInsets", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/awt/Insets;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getInsets, $Insets*, Object$*, $Locale*)},
	{"getInstalledLookAndFeels", "()[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getInstalledLookAndFeels, $UIManager$LookAndFeelInfoArray*)},
	{"getInt", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getInt, int32_t, Object$*)},
	{"getInt", "(Ljava/lang/Object;Ljava/util/Locale;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getInt, int32_t, Object$*, $Locale*)},
	{"getLAFState", "()Ljavax/swing/UIManager$LAFState;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, getLAFState, $UIManager$LAFState*)},
	{"getLookAndFeel", "()Ljavax/swing/LookAndFeel;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getLookAndFeel, $LookAndFeel*)},
	{"getLookAndFeelDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getLookAndFeelDefaults, $UIDefaults*)},
	{"getMultiLookAndFeel", "()Ljavax/swing/LookAndFeel;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, getMultiLookAndFeel, $LookAndFeel*)},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getPropertyChangeListeners, $PropertyChangeListenerArray*)},
	{"getString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getString, $String*, Object$*)},
	{"getString", "(Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getString, $String*, Object$*, $Locale*)},
	{"getString", "(Ljava/lang/Object;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(UIManager, getString, $String*, Object$*, $Component*)},
	{"getSystemLookAndFeelClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getSystemLookAndFeelClassName, $String*)},
	{"getUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, getUI, $ComponentUI*, $JComponent*)},
	{"initialize", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, initialize, void)},
	{"initializeAuxiliaryLAFs", "(Ljava/util/Properties;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, initializeAuxiliaryLAFs, void, $Properties*)},
	{"initializeDefaultLAF", "(Ljava/util/Properties;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, initializeDefaultLAF, void, $Properties*)},
	{"initializeInstalledLAFs", "(Ljava/util/Properties;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, initializeInstalledLAFs, void, $Properties*)},
	{"initializeSystemDefaults", "(Ljava/util/Properties;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, initializeSystemDefaults, void, $Properties*)},
	{"installLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, installLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
	{"installLookAndFeel", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, installLookAndFeel, void, $String*, $String*)},
	{"loadSwingProperties", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, loadSwingProperties, $Properties*)},
	{"makeInstalledLAFKey", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, makeInstalledLAFKey, $String*, $String*, $String*)},
	{"makeSwingPropertiesFilename", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, makeSwingPropertiesFilename, $String*)},
	{"maybeInitialize", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, maybeInitialize, void)},
	{"maybeInitializeFocusPolicy", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(UIManager, maybeInitializeFocusPolicy, void, $JComponent*)},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, put, $Object*, Object$*, Object$*)},
	{"removeAuxiliaryLookAndFeel", "(Ljavax/swing/LookAndFeel;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, removeAuxiliaryLookAndFeel, bool, $LookAndFeel*)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"setInstalledLookAndFeels", "([Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, setInstalledLookAndFeels, void, $UIManager$LookAndFeelInfoArray*), "java.lang.SecurityException"},
	{"setLookAndFeel", "(Ljavax/swing/LookAndFeel;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, setLookAndFeel, void, $LookAndFeel*), "javax.swing.UnsupportedLookAndFeelException"},
	{"setLookAndFeel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UIManager, setLookAndFeel, void, $String*), "java.lang.ClassNotFoundException,java.lang.InstantiationException,java.lang.IllegalAccessException,javax.swing.UnsupportedLookAndFeelException"},
	{}
};

$InnerClassInfo _UIManager_InnerClassesInfo_[] = {
	{"javax.swing.UIManager$LookAndFeelInfo", "javax.swing.UIManager", "LookAndFeelInfo", $PUBLIC | $STATIC},
	{"javax.swing.UIManager$LAFState", "javax.swing.UIManager", "LAFState", $PRIVATE | $STATIC},
	{"javax.swing.UIManager$2", nullptr, nullptr, 0},
	{"javax.swing.UIManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UIManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.UIManager",
	"java.lang.Object",
	"java.io.Serializable",
	_UIManager_FieldInfo_,
	_UIManager_MethodInfo_,
	nullptr,
	nullptr,
	_UIManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.UIManager$LookAndFeelInfo,javax.swing.UIManager$LAFState,javax.swing.UIManager$2,javax.swing.UIManager$1"
};

$Object* allocate$UIManager($Class* clazz) {
	return $of($alloc(UIManager));
}

$Object* UIManager::classLock = nullptr;
$String* UIManager::defaultLAFKey = nullptr;
$String* UIManager::auxiliaryLAFsKey = nullptr;
$String* UIManager::multiplexingLAFKey = nullptr;
$String* UIManager::installedLAFsKey = nullptr;
$String* UIManager::disableMnemonicKey = nullptr;
$UIManager$LookAndFeelInfoArray* UIManager::installedLAFs = nullptr;

void UIManager::init$() {
}

$UIManager$LAFState* UIManager::getLAFState() {
	$init(UIManager);
	$init($SwingUtilities2);
	$var($UIManager$LAFState, rv, $cast($UIManager$LAFState, $SwingUtilities::appContextGet($SwingUtilities2::LAF_STATE_KEY)));
	if (rv == nullptr) {
		$synchronized(UIManager::classLock) {
			$assign(rv, $cast($UIManager$LAFState, $SwingUtilities::appContextGet($SwingUtilities2::LAF_STATE_KEY)));
			if (rv == nullptr) {
				$SwingUtilities::appContextPut($SwingUtilities2::LAF_STATE_KEY, ($assign(rv, $new($UIManager$LAFState))));
			}
		}
	}
	return rv;
}

$String* UIManager::makeInstalledLAFKey($String* laf, $String* attr) {
	$init(UIManager);
	return $str({"swing.installedlaf."_s, laf, "."_s, attr});
}

$String* UIManager::makeSwingPropertiesFilename() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($String, sep, $File::separator);
	$var($String, javaHome, $System::getProperty("java.home"_s));
	if (javaHome == nullptr) {
		$assign(javaHome, "<java.home undefined>"_s);
	}
	return $str({javaHome, sep, "conf"_s, sep, "swing.properties"_s});
}

$UIManager$LookAndFeelInfoArray* UIManager::getInstalledLookAndFeels() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	$var($UIManager$LookAndFeelInfoArray, ilafs, $nc($(getLAFState()))->installedLAFs);
	if (ilafs == nullptr) {
		$assign(ilafs, UIManager::installedLAFs);
	}
	$var($UIManager$LookAndFeelInfoArray, rv, $new($UIManager$LookAndFeelInfoArray, $nc(ilafs)->length));
	$System::arraycopy(ilafs, 0, rv, 0, ilafs->length);
	return rv;
}

void UIManager::setInstalledLookAndFeels($UIManager$LookAndFeelInfoArray* infos) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	$var($UIManager$LookAndFeelInfoArray, newInfos, $new($UIManager$LookAndFeelInfoArray, $nc(infos)->length));
	$System::arraycopy(infos, 0, newInfos, 0, infos->length);
	$set($nc($(getLAFState())), installedLAFs, newInfos);
}

void UIManager::installLookAndFeel($UIManager$LookAndFeelInfo* info) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, infos, getInstalledLookAndFeels());
	$var($UIManager$LookAndFeelInfoArray, newInfos, $new($UIManager$LookAndFeelInfoArray, $nc(infos)->length + 1));
	$System::arraycopy(infos, 0, newInfos, 0, infos->length);
	newInfos->set(infos->length, info);
	setInstalledLookAndFeels(newInfos);
}

void UIManager::installLookAndFeel($String* name, $String* className) {
	$init(UIManager);
	installLookAndFeel($$new($UIManager$LookAndFeelInfo, name, className));
}

$LookAndFeel* UIManager::getLookAndFeel() {
	$init(UIManager);
	maybeInitialize();
	return $nc($(getLAFState()))->lookAndFeel;
}

$LookAndFeel* UIManager::createLookAndFeel($String* name$renamed) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$beforeCallerSensitive();
	$Objects::requireNonNull(name);
	if ("GTK look and feel"_s->equals(name)) {
		$assign(name, "GTK+"_s);
	}
	try {
		{
			$var($UIManager$LookAndFeelInfoArray, arr$, UIManager::installedLAFs);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
				{
					if ($nc($($nc(info)->getName()))->equals(name)) {
						$var($Module, var$0, UIManager::class$->getModule());
						$Class* cls = $Class::forName(var$0, $(info->getClassName()));
						$var($LookAndFeel, laf, $cast($LookAndFeel, $nc(cls)->newInstance()));
						if (!$nc(laf)->isSupportedLookAndFeel()) {
							break;
						}
						return laf;
					}
				}
			}
		}
	} catch ($ReflectiveOperationException& ignore) {
	} catch ($IllegalArgumentException& ignore) {
	}
	$throwNew($UnsupportedLookAndFeelException, name);
	$shouldNotReachHere();
}

void UIManager::setLookAndFeel($LookAndFeel* newLookAndFeel) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	if ((newLookAndFeel != nullptr) && !newLookAndFeel->isSupportedLookAndFeel()) {
		$var($String, s, $str({$(newLookAndFeel->toString()), " not supported on this platform"_s}));
		$throwNew($UnsupportedLookAndFeelException, s);
	}
	$var($UIManager$LAFState, lafState, getLAFState());
	$var($LookAndFeel, oldLookAndFeel, $nc(lafState)->lookAndFeel);
	if (oldLookAndFeel != nullptr) {
		oldLookAndFeel->uninitialize();
	}
	$set(lafState, lookAndFeel, newLookAndFeel);
	if (newLookAndFeel != nullptr) {
		$DefaultLookup::setDefaultLookup(nullptr);
		newLookAndFeel->initialize();
		lafState->setLookAndFeelDefaults($(newLookAndFeel->getDefaults()));
	} else {
		lafState->setLookAndFeelDefaults(nullptr);
	}
	$var($SwingPropertyChangeSupport, changeSupport, lafState->getPropertyChangeSupport(false));
	if (changeSupport != nullptr) {
		changeSupport->firePropertyChange("lookAndFeel"_s, $of(oldLookAndFeel), $of(newLookAndFeel));
	}
}

void UIManager::setLookAndFeel($String* className) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ("javax.swing.plaf.metal.MetalLookAndFeel"_s->equals(className)) {
		setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} else {
		$Class* lnfClass = $SwingUtilities::loadSystemClass(className);
		setLookAndFeel(($cast($LookAndFeel, $($nc(lnfClass)->newInstance()))));
	}
}

$String* UIManager::getSystemLookAndFeelClassName() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, systemLAF, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.systemlaf"_s)))));
	if (systemLAF != nullptr) {
		return systemLAF;
	}
	$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
	$init($OSInfo$OSType);
	if (osType == $OSInfo$OSType::WINDOWS) {
		return "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s;
	} else {
		$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
		if ($instanceOf($SunToolkit, toolkit)) {
			$var($SunToolkit, suntk, $cast($SunToolkit, toolkit));
			$var($String, desktop, $nc(suntk)->getDesktop());
			bool gtkAvailable = suntk->isNativeGTKAvailable();
			if ("gnome"_s->equals(desktop) && gtkAvailable) {
				return "com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s;
			}
		}
		if (osType == $OSInfo$OSType::MACOSX) {
			if ($nc($($nc($of(toolkit))->getClass()->getName()))->equals("sun.lwawt.macosx.LWCToolkit"_s)) {
				return "com.apple.laf.AquaLookAndFeel"_s;
			}
		}
	}
	return getCrossPlatformLookAndFeelClassName();
}

$String* UIManager::getCrossPlatformLookAndFeelClassName() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, laf, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.crossplatformlaf"_s)))));
	if (laf != nullptr) {
		return laf;
	}
	return "javax.swing.plaf.metal.MetalLookAndFeel"_s;
}

$UIDefaults* UIManager::getDefaults() {
	$init(UIManager);
	maybeInitialize();
	return $nc($(getLAFState()))->multiUIDefaults;
}

$Font* UIManager::getFont(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getFont(key);
}

$Font* UIManager::getFont(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getFont(key, l);
}

$Color* UIManager::getColor(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getColor(key);
}

$Color* UIManager::getColor(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getColor(key, l);
}

$Icon* UIManager::getIcon(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getIcon(key);
}

$Icon* UIManager::getIcon(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getIcon(key, l);
}

$Border* UIManager::getBorder(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getBorder(key);
}

$Border* UIManager::getBorder(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getBorder(key, l);
}

$String* UIManager::getString(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getString(key);
}

$String* UIManager::getString(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getString(key, l);
}

$String* UIManager::getString(Object$* key, $Component* c) {
	$init(UIManager);
	$var($Locale, l, (c == nullptr) ? $Locale::getDefault() : $nc(c)->getLocale());
	return getString(key, l);
}

int32_t UIManager::getInt(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getInt(key);
}

int32_t UIManager::getInt(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getInt(key, l);
}

bool UIManager::getBoolean(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getBoolean(key);
}

bool UIManager::getBoolean(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getBoolean(key, l);
}

$Insets* UIManager::getInsets(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getInsets(key);
}

$Insets* UIManager::getInsets(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getInsets(key, l);
}

$Dimension* UIManager::getDimension(Object$* key) {
	$init(UIManager);
	return $nc($(getDefaults()))->getDimension(key);
}

$Dimension* UIManager::getDimension(Object$* key, $Locale* l) {
	$init(UIManager);
	return $nc($(getDefaults()))->getDimension(key, l);
}

$Object* UIManager::get(Object$* key) {
	$init(UIManager);
	return $of($nc($(getDefaults()))->get(key));
}

$Object* UIManager::get(Object$* key, $Locale* l) {
	$init(UIManager);
	return $of($nc($(getDefaults()))->get(key, l));
}

$Object* UIManager::put(Object$* key, Object$* value) {
	$init(UIManager);
	return $of($nc($(getDefaults()))->put(key, value));
}

$ComponentUI* UIManager::getUI($JComponent* target) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	maybeInitializeFocusPolicy(target);
	$var($ComponentUI, ui, nullptr);
	$var($LookAndFeel, multiLAF, $nc($(getLAFState()))->multiLookAndFeel);
	if (multiLAF != nullptr) {
		$assign(ui, $nc($(multiLAF->getDefaults()))->getUI(target));
	}
	if (ui == nullptr) {
		$assign(ui, $nc($(getDefaults()))->getUI(target));
	}
	return ui;
}

$UIDefaults* UIManager::getLookAndFeelDefaults() {
	$init(UIManager);
	maybeInitialize();
	return $nc($(getLAFState()))->getLookAndFeelDefaults();
}

$LookAndFeel* UIManager::getMultiLookAndFeel() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($LookAndFeel, multiLookAndFeel, $nc($(getLAFState()))->multiLookAndFeel);
	if (multiLookAndFeel == nullptr) {
		$var($String, defaultName, "javax.swing.plaf.multi.MultiLookAndFeel"_s);
		$var($String, className, $nc($nc($(getLAFState()))->swingProps)->getProperty(UIManager::multiplexingLAFKey, defaultName));
		try {
			$Class* lnfClass = $SwingUtilities::loadSystemClass(className);
			$assign(multiLookAndFeel, $cast($LookAndFeel, $nc(lnfClass)->newInstance()));
		} catch ($Exception& exc) {
			$nc($System::err)->println($$str({"UIManager: failed loading "_s, className}));
		}
	}
	return multiLookAndFeel;
}

void UIManager::addAuxiliaryLookAndFeel($LookAndFeel* laf) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	if (!$nc(laf)->isSupportedLookAndFeel()) {
		return;
	}
	$var($Vector, v, $nc($(getLAFState()))->auxLookAndFeels);
	if (v == nullptr) {
		$assign(v, $new($Vector));
	}
	if (!$nc(v)->contains(laf)) {
		v->addElement(laf);
		$nc(laf)->initialize();
		$set($nc($(getLAFState())), auxLookAndFeels, v);
		if ($nc($(getLAFState()))->multiLookAndFeel == nullptr) {
			$set($nc($(getLAFState())), multiLookAndFeel, getMultiLookAndFeel());
		}
	}
}

bool UIManager::removeAuxiliaryLookAndFeel($LookAndFeel* laf) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	bool result = false;
	$var($Vector, v, $nc($(getLAFState()))->auxLookAndFeels);
	if ((v == nullptr) || ($nc(v)->size() == 0)) {
		return false;
	}
	result = $nc(v)->removeElement(laf);
	if (result) {
		if (v->size() == 0) {
			$set($nc($(getLAFState())), auxLookAndFeels, nullptr);
			$set($nc($(getLAFState())), multiLookAndFeel, nullptr);
		} else {
			$set($nc($(getLAFState())), auxLookAndFeels, v);
		}
	}
	$nc(laf)->uninitialize();
	return result;
}

$LookAndFeelArray* UIManager::getAuxiliaryLookAndFeels() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	maybeInitialize();
	$var($Vector, v, $nc($(getLAFState()))->auxLookAndFeels);
	if ((v == nullptr) || ($nc(v)->size() == 0)) {
		return nullptr;
	} else {
		$var($LookAndFeelArray, rv, $new($LookAndFeelArray, v->size()));
		for (int32_t i = 0; i < rv->length; ++i) {
			rv->set(i, $cast($LookAndFeel, $(v->elementAt(i))));
		}
		return rv;
	}
}

void UIManager::addPropertyChangeListener($PropertyChangeListener* listener) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$synchronized(UIManager::classLock) {
		$nc($($nc($(getLAFState()))->getPropertyChangeSupport(true)))->addPropertyChangeListener(listener);
	}
}

void UIManager::removePropertyChangeListener($PropertyChangeListener* listener) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$synchronized(UIManager::classLock) {
		$nc($($nc($(getLAFState()))->getPropertyChangeSupport(true)))->removePropertyChangeListener(listener);
	}
}

$PropertyChangeListenerArray* UIManager::getPropertyChangeListeners() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$synchronized(UIManager::classLock) {
		return $nc($($nc($(getLAFState()))->getPropertyChangeSupport(true)))->getPropertyChangeListeners();
	}
}

$Properties* UIManager::loadSwingProperties() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (UIManager::class$->getClassLoader() != nullptr) {
		return $new($Properties);
	} else {
		$var($Properties, props, $new($Properties));
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($UIManager$1, props)));
		return props;
	}
}

void UIManager::checkProperty($Properties* props, $String* key) {
	$init(UIManager);
	$var($String, value, $System::getProperty(key));
	if (value != nullptr) {
		$nc(props)->put(key, value);
	}
}

void UIManager::initializeInstalledLAFs($Properties* swingProps) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$var($String, ilafsString, $nc(swingProps)->getProperty(UIManager::installedLAFsKey));
	if (ilafsString == nullptr) {
		return;
	}
	$var($Vector, lafs, $new($Vector));
	$var($StringTokenizer, st, $new($StringTokenizer, ilafsString, ","_s, false));
	while (st->hasMoreTokens()) {
		lafs->addElement($(st->nextToken()));
	}
	$var($Vector, ilafs, $new($Vector, lafs->size()));
	{
		$var($Iterator, i$, lafs->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, laf, $cast($String, i$->next()));
			{
				$var($String, name, swingProps->getProperty($(makeInstalledLAFKey(laf, "name"_s)), laf));
				$var($String, cls, swingProps->getProperty($(makeInstalledLAFKey(laf, "class"_s))));
				if (cls != nullptr) {
					ilafs->addElement($$new($UIManager$LookAndFeelInfo, name, cls));
				}
			}
		}
	}
	$var($UIManager$LookAndFeelInfoArray, installedLAFs, $new($UIManager$LookAndFeelInfoArray, ilafs->size()));
	for (int32_t i = 0; i < ilafs->size(); ++i) {
		installedLAFs->set(i, $cast($UIManager$LookAndFeelInfo, $(ilafs->elementAt(i))));
	}
	$set($nc($(getLAFState())), installedLAFs, installedLAFs);
}

void UIManager::initializeDefaultLAF($Properties* swingProps) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	if ($nc($(getLAFState()))->lookAndFeel != nullptr) {
		return;
	}
	$var($String, lafName, nullptr);
	$var($HashMap, lafData, $cast($HashMap, $nc($($AppContext::getAppContext()))->remove("swing.lafdata"_s)));
	if (lafData != nullptr) {
		$assign(lafName, $cast($String, lafData->remove("defaultlaf"_s)));
	}
	if (lafName == nullptr) {
		$assign(lafName, getCrossPlatformLookAndFeelClassName());
	}
	$assign(lafName, $nc(swingProps)->getProperty(UIManager::defaultLAFKey, lafName));
	try {
		setLookAndFeel(lafName);
	} catch ($Exception& e) {
		$throwNew($Error, $$str({"Cannot load "_s, lafName}));
	}
	if (lafData != nullptr) {
		{
			$var($Iterator, i$, $nc($(lafData->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, key, i$->next());
				{
					UIManager::put(key, $(lafData->get(key)));
				}
			}
		}
	}
}

void UIManager::initializeAuxiliaryLAFs($Properties* swingProps) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, auxLookAndFeelNames, $nc(swingProps)->getProperty(UIManager::auxiliaryLAFsKey));
	if (auxLookAndFeelNames == nullptr) {
		return;
	}
	$var($Vector, auxLookAndFeels, $new($Vector));
	$var($StringTokenizer, p, $new($StringTokenizer, auxLookAndFeelNames, ","_s));
	$var($String, factoryName, nullptr);
	while (p->hasMoreTokens()) {
		$var($String, className, p->nextToken());
		try {
			$Class* lnfClass = $SwingUtilities::loadSystemClass(className);
			$var($LookAndFeel, newLAF, $cast($LookAndFeel, $nc(lnfClass)->newInstance()));
			$nc(newLAF)->initialize();
			auxLookAndFeels->addElement(newLAF);
		} catch ($Exception& e) {
			$nc($System::err)->println($$str({"UIManager: failed loading auxiliary look and feel "_s, className}));
		}
	}
	if (auxLookAndFeels->size() == 0) {
		$assign(auxLookAndFeels, nullptr);
	} else {
		$set($nc($(getLAFState())), multiLookAndFeel, getMultiLookAndFeel());
		if ($nc($(getLAFState()))->multiLookAndFeel == nullptr) {
			$assign(auxLookAndFeels, nullptr);
		}
	}
	$set($nc($(getLAFState())), auxLookAndFeels, auxLookAndFeels);
}

void UIManager::initializeSystemDefaults($Properties* swingProps) {
	$init(UIManager);
	$set($nc($(getLAFState())), swingProps, swingProps);
}

void UIManager::maybeInitialize() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$synchronized(UIManager::classLock) {
		if (!$nc($(getLAFState()))->initialized) {
			$nc($(getLAFState()))->initialized = true;
			initialize();
		}
	}
}

void UIManager::maybeInitializeFocusPolicy($JComponent* comp) {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JRootPane, comp)) {
		$synchronized(UIManager::classLock) {
			if (!$nc($(getLAFState()))->focusPolicyInitialized) {
				$nc($(getLAFState()))->focusPolicyInitialized = true;
				if ($FocusManager::isFocusManagerEnabled()) {
					$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setDefaultFocusTraversalPolicy($$new($LayoutFocusTraversalPolicy));
				}
			}
		}
	}
}

void UIManager::initialize() {
	$init(UIManager);
	$useLocalCurrentObjectStackCache();
	$var($Properties, swingProps, loadSwingProperties());
	initializeSystemDefaults(swingProps);
	initializeDefaultLAF(swingProps);
	initializeAuxiliaryLAFs(swingProps);
	initializeInstalledLAFs(swingProps);
	$init($RepaintManager);
	if ($RepaintManager::HANDLE_TOP_LEVEL_PAINT) {
		$PaintEventDispatcher::setPaintEventDispatcher($$new($SwingPaintEventDispatcher));
	}
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addKeyEventPostProcessor($$new($UIManager$2));
	$init($JComponent);
	$nc($($AWTAccessor::getComponentAccessor()))->setRequestFocusController($JComponent::focusController);
}

void clinit$UIManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(UIManager::defaultLAFKey, "swing.defaultlaf"_s);
	$assignStatic(UIManager::auxiliaryLAFsKey, "swing.auxiliarylaf"_s);
	$assignStatic(UIManager::multiplexingLAFKey, "swing.plaf.multiplexinglaf"_s);
	$assignStatic(UIManager::installedLAFsKey, "swing.installedlafs"_s);
	$assignStatic(UIManager::disableMnemonicKey, "swing.disablenavaids"_s);
	$beforeCallerSensitive();
	$assignStatic(UIManager::classLock, $new($Object));
	{
		$var($ArrayList, iLAFs, $new($ArrayList, 4));
		iLAFs->add($$new($UIManager$LookAndFeelInfo, "Metal"_s, "javax.swing.plaf.metal.MetalLookAndFeel"_s));
		iLAFs->add($$new($UIManager$LookAndFeelInfo, "Nimbus"_s, "javax.swing.plaf.nimbus.NimbusLookAndFeel"_s));
		iLAFs->add($$new($UIManager$LookAndFeelInfo, "CDE/Motif"_s, "com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s));
		$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
		$init($OSInfo$OSType);
		if (osType == $OSInfo$OSType::WINDOWS) {
			iLAFs->add($$new($UIManager$LookAndFeelInfo, "Windows"_s, "com.sun.java.swing.plaf.windows.WindowsLookAndFeel"_s));
			if ($nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.xpstyle.themeActive"_s) != nullptr) {
				iLAFs->add($$new($UIManager$LookAndFeelInfo, "Windows Classic"_s, "com.sun.java.swing.plaf.windows.WindowsClassicLookAndFeel"_s));
			}
		} else {
			if (osType == $OSInfo$OSType::MACOSX) {
				iLAFs->add($$new($UIManager$LookAndFeelInfo, "Mac OS X"_s, "com.apple.laf.AquaLookAndFeel"_s));
			} else {
				iLAFs->add($$new($UIManager$LookAndFeelInfo, "GTK+"_s, "com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s));
			}
		}
		$assignStatic(UIManager::installedLAFs, $fcast($UIManager$LookAndFeelInfoArray, iLAFs->toArray($$new($UIManager$LookAndFeelInfoArray, iLAFs->size()))));
	}
}

UIManager::UIManager() {
}

$Class* UIManager::load$($String* name, bool initialize) {
	$loadClass(UIManager, name, initialize, &_UIManager_ClassInfo_, clinit$UIManager, allocate$UIManager);
	return class$;
}

$Class* UIManager::class$ = nullptr;

	} // swing
} // javax