#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <com/sun/java/swing/plaf/windows/WindowsClassicLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$VistaMenuItemCheckIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$ScalableIconUIResource.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$AudioAction.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FontDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$LazyWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$RGBGrayFilter.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$SkinIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsFontSizeProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$WindowsLayoutStyle.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPBorderValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPDLUValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI$MnemonicListener.h>
#include <com/sun/java/swing/plaf/windows/WindowsPopupMenuUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$CollapsedIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsTreeUI$ExpandedIcon.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/util/Map.h>
#include <javax/swing/Action.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo$WindowsVersion.h>
#include <sun/awt/OSInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/icon/SortArrowIcon.h>
#include <sun/swing/plaf/windows/ClassicSortArrowIcon.h>
#include <jcpp.h>

#undef BOLD
#undef BP_GROUPBOX
#undef BP_PUSHBUTTON
#undef CP_COMBOBOX
#undef DESKTOPFONTHINTS
#undef DIALOG
#undef DISABLED
#undef EAST
#undef EP_EDIT
#undef FALSE
#undef FILLCOLOR
#undef HI_RES_DISABLED_ICON_CLIENT_KEY
#undef HP_HEADERSORTARROW
#undef LBP_LISTBOX
#undef LVP_LISTVIEW
#undef MENU
#undef MONOSPACED
#undef NORTH
#undef NULL_VALUE
#undef PLAIN
#undef POPUP_MENU_BORDER
#undef SANS_SERIF
#undef SORTEDDOWN
#undef SORTEDUP
#undef SOUTH
#undef TEXTCOLOR
#undef TRUE
#undef TYPE_INT_ARGB
#undef WEST
#undef WINDOWS
#undef WINDOWS_7
#undef WINDOWS_95
#undef WINDOWS_VISTA
#undef WINDOWS_XP

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $WindowsClassicLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsClassicLookAndFeel;
using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $WindowsIconFactory$VistaMenuItemCheckIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory$VistaMenuItemCheckIconFactory;
using $WindowsInternalFrameTitlePane$ScalableIconUIResource = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane$ScalableIconUIResource;
using $WindowsLookAndFeel$1 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$1;
using $WindowsLookAndFeel$2 = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$2;
using $WindowsLookAndFeel$ActiveWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon;
using $WindowsLookAndFeel$AudioAction = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$AudioAction;
using $WindowsLookAndFeel$FocusColorProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$FocusColorProperty;
using $WindowsLookAndFeel$FontDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$FontDesktopProperty;
using $WindowsLookAndFeel$LazyWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$LazyWindowsIcon;
using $WindowsLookAndFeel$RGBGrayFilter = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$RGBGrayFilter;
using $WindowsLookAndFeel$SkinIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$SkinIcon;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
using $WindowsLookAndFeel$WindowsFontProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsFontProperty;
using $WindowsLookAndFeel$WindowsFontSizeProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsFontSizeProperty;
using $WindowsLookAndFeel$WindowsLayoutStyle = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$WindowsLayoutStyle;
using $WindowsLookAndFeel$XPBorderValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPBorderValue;
using $WindowsLookAndFeel$XPColorValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPColorValue;
using $WindowsLookAndFeel$XPDLUValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPDLUValue;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $WindowsPopupMenuUI = ::com::sun::java::swing::plaf::windows::WindowsPopupMenuUI;
using $WindowsRootPaneUI = ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI;
using $WindowsTreeUI$CollapsedIcon = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$CollapsedIcon;
using $WindowsTreeUI$ExpandedIcon = ::com::sun::java::swing::plaf::windows::WindowsTreeUI$ExpandedIcon;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Toolkit = ::java::awt::Toolkit;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Action = ::javax::swing::Action;
using $BorderFactory = ::javax::swing::BorderFactory;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $SunToolkit = ::sun::awt::SunToolkit;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SortArrowIcon = ::sun::swing::icon::SortArrowIcon;
using $ClassicSortArrowIcon = ::sun::swing::plaf::windows::ClassicSortArrowIcon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initComponentDefaults$0(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initComponentDefaults$1(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initComponentDefaults$2(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initComponentDefaults$3(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initComponentDefaults$4(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(WindowsLookAndFeel* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return $nc(inst$)->lambda$initComponentDefaults$5(t);
	}
	WindowsLookAndFeel* inst$ = nullptr;
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, init$, void, WindowsLookAndFeel*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initVistaComponentDefaults$6(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initVistaComponentDefaults$7(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$initVistaComponentDefaults$8(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$9(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$10(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$11(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$12(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$13(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$15(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$16(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$18(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$19(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$20(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$21(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$22(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$23(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$24(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$25(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$26(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$27(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$28(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$29(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::class$ = nullptr;

class WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28 : public $UIDefaults$LazyValue {
	$class(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return WindowsLookAndFeel::lambda$getLazyValueDefaults$31(t);
	}
};
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28);
	});
	return class$;
}
$Class* WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::class$ = nullptr;

bool WindowsLookAndFeel::$assertionsDisabled = false;
$Object* WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY = nullptr;
bool WindowsLookAndFeel::isMnemonicHidden$ = false;
bool WindowsLookAndFeel::isClassicWindows$ = false;

void WindowsLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
	this->updatePending = false;
	this->useSystemFontSettings = true;
}

$String* WindowsLookAndFeel::getName() {
	return "Windows"_s;
}

$String* WindowsLookAndFeel::getDescription() {
	return "The Microsoft Windows Look and Feel"_s;
}

$String* WindowsLookAndFeel::getID() {
	return "Windows"_s;
}

bool WindowsLookAndFeel::isNativeLookAndFeel() {
	$init($OSInfo$OSType);
	return $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
}

bool WindowsLookAndFeel::isSupportedLookAndFeel() {
	return isNativeLookAndFeel();
}

void WindowsLookAndFeel::initialize() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$BasicLookAndFeel::initialize();
	$init($OSInfo);
	if ($$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_95) <= 0) {
		WindowsLookAndFeel::isClassicWindows$ = true;
	} else {
		WindowsLookAndFeel::isClassicWindows$ = false;
		$XPStyle::invalidateStyle();
	}
	$var($String, systemFonts, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "swing.useSystemFontSettings"_s))));
	this->useSystemFontSettings = (systemFonts == nullptr || $($Boolean::valueOf(systemFonts))->booleanValue());
	if (this->useSystemFontSettings) {
		$var($Object, value, $UIManager::get("Application.useSystemFontSettings"_s));
		this->useSystemFontSettings = (value == nullptr || $nc($Boolean::TRUE)->equals(value));
	}
	$init($WindowsRootPaneUI);
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->addKeyEventPostProcessor($WindowsRootPaneUI::altProcessor);
}

void WindowsLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$BasicLookAndFeel::initClassDefaults(table);
	$var($String, windowsPackageName, "com.sun.java.swing.plaf.windows."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		"ButtonUI"_s,
		$$str({windowsPackageName, "WindowsButtonUI"_s}),
		"CheckBoxUI"_s,
		$$str({windowsPackageName, "WindowsCheckBoxUI"_s}),
		"CheckBoxMenuItemUI"_s,
		$$str({windowsPackageName, "WindowsCheckBoxMenuItemUI"_s}),
		"LabelUI"_s,
		$$str({windowsPackageName, "WindowsLabelUI"_s}),
		"RadioButtonUI"_s,
		$$str({windowsPackageName, "WindowsRadioButtonUI"_s}),
		"RadioButtonMenuItemUI"_s,
		$$str({windowsPackageName, "WindowsRadioButtonMenuItemUI"_s}),
		"ToggleButtonUI"_s,
		$$str({windowsPackageName, "WindowsToggleButtonUI"_s}),
		"ProgressBarUI"_s,
		$$str({windowsPackageName, "WindowsProgressBarUI"_s}),
		"SliderUI"_s,
		$$str({windowsPackageName, "WindowsSliderUI"_s}),
		"SeparatorUI"_s,
		$$str({windowsPackageName, "WindowsSeparatorUI"_s}),
		"SplitPaneUI"_s,
		$$str({windowsPackageName, "WindowsSplitPaneUI"_s}),
		"SpinnerUI"_s,
		$$str({windowsPackageName, "WindowsSpinnerUI"_s}),
		"TabbedPaneUI"_s,
		$$str({windowsPackageName, "WindowsTabbedPaneUI"_s}),
		"TextAreaUI"_s,
		$$str({windowsPackageName, "WindowsTextAreaUI"_s}),
		"TextFieldUI"_s,
		$$str({windowsPackageName, "WindowsTextFieldUI"_s}),
		"PasswordFieldUI"_s,
		$$str({windowsPackageName, "WindowsPasswordFieldUI"_s}),
		"TextPaneUI"_s,
		$$str({windowsPackageName, "WindowsTextPaneUI"_s}),
		"EditorPaneUI"_s,
		$$str({windowsPackageName, "WindowsEditorPaneUI"_s}),
		"TreeUI"_s,
		$$str({windowsPackageName, "WindowsTreeUI"_s}),
		"ToolBarUI"_s,
		$$str({windowsPackageName, "WindowsToolBarUI"_s}),
		"ToolBarSeparatorUI"_s,
		$$str({windowsPackageName, "WindowsToolBarSeparatorUI"_s}),
		"ComboBoxUI"_s,
		$$str({windowsPackageName, "WindowsComboBoxUI"_s}),
		"TableHeaderUI"_s,
		$$str({windowsPackageName, "WindowsTableHeaderUI"_s}),
		"InternalFrameUI"_s,
		$$str({windowsPackageName, "WindowsInternalFrameUI"_s}),
		"DesktopPaneUI"_s,
		$$str({windowsPackageName, "WindowsDesktopPaneUI"_s}),
		"DesktopIconUI"_s,
		$$str({windowsPackageName, "WindowsDesktopIconUI"_s}),
		"FileChooserUI"_s,
		$$str({windowsPackageName, "WindowsFileChooserUI"_s}),
		"MenuUI"_s,
		$$str({windowsPackageName, "WindowsMenuUI"_s}),
		"MenuItemUI"_s,
		$$str({windowsPackageName, "WindowsMenuItemUI"_s}),
		"MenuBarUI"_s,
		$$str({windowsPackageName, "WindowsMenuBarUI"_s}),
		"PopupMenuUI"_s,
		$$str({windowsPackageName, "WindowsPopupMenuUI"_s}),
		"PopupMenuSeparatorUI"_s,
		$$str({windowsPackageName, "WindowsPopupMenuSeparatorUI"_s}),
		"ScrollBarUI"_s,
		$$str({windowsPackageName, "WindowsScrollBarUI"_s}),
		"RootPaneUI"_s,
		$$str({windowsPackageName, "WindowsRootPaneUI"_s})
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void WindowsLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$var($StringArray, defaultSystemColors, $new($StringArray, {
		"desktop"_s,
		"#005C5C"_s,
		"activeCaption"_s,
		"#000080"_s,
		"activeCaptionText"_s,
		"#FFFFFF"_s,
		"activeCaptionBorder"_s,
		"#C0C0C0"_s,
		"inactiveCaption"_s,
		"#808080"_s,
		"inactiveCaptionText"_s,
		"#C0C0C0"_s,
		"inactiveCaptionBorder"_s,
		"#C0C0C0"_s,
		"window"_s,
		"#FFFFFF"_s,
		"windowBorder"_s,
		"#000000"_s,
		"windowText"_s,
		"#000000"_s,
		"menu"_s,
		"#C0C0C0"_s,
		"menuPressedItemB"_s,
		"#000080"_s,
		"menuPressedItemF"_s,
		"#FFFFFF"_s,
		"menuText"_s,
		"#000000"_s,
		"text"_s,
		"#C0C0C0"_s,
		"textText"_s,
		"#000000"_s,
		"textHighlight"_s,
		"#000080"_s,
		"textHighlightText"_s,
		"#FFFFFF"_s,
		"textInactiveText"_s,
		"#808080"_s,
		"control"_s,
		"#C0C0C0"_s,
		"controlText"_s,
		"#000000"_s,
		"controlHighlight"_s,
		"#C0C0C0"_s,
		"controlLtHighlight"_s,
		"#FFFFFF"_s,
		"controlShadow"_s,
		"#808080"_s,
		"controlDkShadow"_s,
		"#000000"_s,
		"scrollbar"_s,
		"#E0E0E0"_s,
		"info"_s,
		"#FFFFE1"_s,
		"infoText"_s,
		"#000000"_s
	}));
	loadSystemColors(table, defaultSystemColors, isNativeLookAndFeel());
}

void WindowsLookAndFeel::initResourceBundle($UIDefaults* table) {
	$$nc($SwingAccessor::getUIDefaultsAccessor())->addInternalBundle(table, "com.sun.java.swing.plaf.windows.resources.windows"_s);
}

void WindowsLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$BasicLookAndFeel::initComponentDefaults(table);
	initResourceBundle(table);
	$var($UIDefaults$LazyValue, dialogPlain12, $new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0));
	$var($UIDefaults$LazyValue, sansSerifPlain12, $new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1));
	$var($UIDefaults$LazyValue, monospacedPlain12, $new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2));
	$var($UIDefaults$LazyValue, dialogBold12, $new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, gray, $new($ColorUIResource, $Color::gray));
	$var($ColorUIResource, darkGray, $new($ColorUIResource, $Color::darkGray));
	$var($ColorUIResource, scrollBarTrackHighlight, darkGray);
	$init($OSInfo);
	WindowsLookAndFeel::isClassicWindows$ = $$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_95) <= 0;
	$var($Object, treeExpandedIcon, $WindowsTreeUI$ExpandedIcon::createExpandedIcon());
	$var($Object, treeCollapsedIcon, $WindowsTreeUI$CollapsedIcon::createCollapsedIcon());
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"control A"_s,
		$DefaultEditorKit::selectAllAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"control RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"ctrl DELETE"_s,
		$DefaultEditorKit::deleteNextWordAction,
		"ctrl BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevWordAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"ENTER"_s,
		$JTextField::notifyAction,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"control A"_s,
		$DefaultEditorKit::selectAllAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"control RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"ENTER"_s,
		$JTextField::notifyAction,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"control C"_s,
		$DefaultEditorKit::copyAction,
		"control V"_s,
		$DefaultEditorKit::pasteAction,
		"control X"_s,
		$DefaultEditorKit::cutAction,
		"COPY"_s,
		$DefaultEditorKit::copyAction,
		"PASTE"_s,
		$DefaultEditorKit::pasteAction,
		"CUT"_s,
		$DefaultEditorKit::cutAction,
		"control INSERT"_s,
		$DefaultEditorKit::copyAction,
		"shift INSERT"_s,
		$DefaultEditorKit::pasteAction,
		"shift DELETE"_s,
		$DefaultEditorKit::cutAction,
		"shift LEFT"_s,
		$DefaultEditorKit::selectionBackwardAction,
		"shift RIGHT"_s,
		$DefaultEditorKit::selectionForwardAction,
		"control LEFT"_s,
		$DefaultEditorKit::previousWordAction,
		"control RIGHT"_s,
		$DefaultEditorKit::nextWordAction,
		"control shift LEFT"_s,
		$DefaultEditorKit::selectionPreviousWordAction,
		"control shift RIGHT"_s,
		$DefaultEditorKit::selectionNextWordAction,
		"control A"_s,
		$DefaultEditorKit::selectAllAction,
		"control BACK_SLASH"_s,
		"unselect"_s,
		"HOME"_s,
		$DefaultEditorKit::beginLineAction,
		"END"_s,
		$DefaultEditorKit::endLineAction,
		"shift HOME"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"shift END"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"control HOME"_s,
		$DefaultEditorKit::beginAction,
		"control END"_s,
		$DefaultEditorKit::endAction,
		"control shift HOME"_s,
		$DefaultEditorKit::selectionBeginAction,
		"control shift END"_s,
		$DefaultEditorKit::selectionEndAction,
		"UP"_s,
		$DefaultEditorKit::upAction,
		"DOWN"_s,
		$DefaultEditorKit::downAction,
		"BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"shift BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"ctrl H"_s,
		$DefaultEditorKit::deletePrevCharAction,
		"DELETE"_s,
		$DefaultEditorKit::deleteNextCharAction,
		"ctrl DELETE"_s,
		$DefaultEditorKit::deleteNextWordAction,
		"ctrl BACK_SPACE"_s,
		$DefaultEditorKit::deletePrevWordAction,
		"RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"KP_RIGHT"_s,
		$DefaultEditorKit::forwardAction,
		"KP_LEFT"_s,
		$DefaultEditorKit::backwardAction,
		"PAGE_UP"_s,
		$DefaultEditorKit::pageUpAction,
		"PAGE_DOWN"_s,
		$DefaultEditorKit::pageDownAction,
		"shift PAGE_UP"_s,
		"selection-page-up"_s,
		"shift PAGE_DOWN"_s,
		"selection-page-down"_s,
		"ctrl shift PAGE_UP"_s,
		"selection-page-left"_s,
		"ctrl shift PAGE_DOWN"_s,
		"selection-page-right"_s,
		"shift UP"_s,
		$DefaultEditorKit::selectionUpAction,
		"shift DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"ENTER"_s,
		$DefaultEditorKit::insertBreakAction,
		"TAB"_s,
		$DefaultEditorKit::insertTabAction,
		"control T"_s,
		"next-link-action"_s,
		"control shift T"_s,
		"previous-link-action"_s,
		"control SPACE"_s,
		"activate-link-action"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($Object, menuItemAcceleratorDelimiter, "+"_s);
	$var($Object, ControlBackgroundColor, $new($WindowsDesktopProperty, "win.3d.backgroundColor"_s, $($nc(table)->get("control"_s))));
	$var($Object, ControlLightColor, $new($WindowsDesktopProperty, "win.3d.lightColor"_s, $(table->get("controlHighlight"_s))));
	$var($Object, ControlHighlightColor, $new($WindowsDesktopProperty, "win.3d.highlightColor"_s, $(table->get("controlLtHighlight"_s))));
	$var($Object, ControlShadowColor, $new($WindowsDesktopProperty, "win.3d.shadowColor"_s, $(table->get("controlShadow"_s))));
	$var($Object, ControlDarkShadowColor, $new($WindowsDesktopProperty, "win.3d.darkShadowColor"_s, $(table->get("controlDkShadow"_s))));
	$var($Object, ControlTextColor, $new($WindowsDesktopProperty, "win.button.textColor"_s, $(table->get("controlText"_s))));
	$var($Object, MenuBackgroundColor, $new($WindowsDesktopProperty, "win.menu.backgroundColor"_s, $(table->get("menu"_s))));
	$var($Object, MenuBarBackgroundColor, $new($WindowsDesktopProperty, "win.menubar.backgroundColor"_s, $(table->get("menu"_s))));
	$var($Object, MenuTextColor, $new($WindowsDesktopProperty, "win.menu.textColor"_s, $(table->get("menuText"_s))));
	$var($Object, SelectionBackgroundColor, $new($WindowsDesktopProperty, "win.item.highlightColor"_s, $(table->get("textHighlight"_s))));
	$var($Object, SelectionTextColor, $new($WindowsDesktopProperty, "win.item.highlightTextColor"_s, $(table->get("textHighlightText"_s))));
	$var($Object, WindowBackgroundColor, $new($WindowsDesktopProperty, "win.frame.backgroundColor"_s, $(table->get("window"_s))));
	$var($Object, WindowTextColor, $new($WindowsDesktopProperty, "win.frame.textColor"_s, $(table->get("windowText"_s))));
	$var($Object, WindowBorderWidth, $new($WindowsDesktopProperty, "win.frame.sizingBorderWidth"_s, $($Integer::valueOf(1))));
	$var($Object, TitlePaneHeight, $new($WindowsDesktopProperty, "win.frame.captionHeight"_s, $($Integer::valueOf(18))));
	$var($Object, TitleButtonWidth, $new($WindowsDesktopProperty, "win.frame.captionButtonWidth"_s, $($Integer::valueOf(16))));
	$var($Object, TitleButtonHeight, $new($WindowsDesktopProperty, "win.frame.captionButtonHeight"_s, $($Integer::valueOf(16))));
	$var($Object, InactiveTextColor, $new($WindowsDesktopProperty, "win.text.grayedTextColor"_s, $(table->get("textInactiveText"_s))));
	$var($Object, ScrollbarBackgroundColor, $new($WindowsDesktopProperty, "win.scrollbar.backgroundColor"_s, $(table->get("scrollbar"_s))));
	$var($Object, buttonFocusColor, $new($WindowsLookAndFeel$FocusColorProperty));
	$init($TMSchema$Part);
	$init($TMSchema$Prop);
	$var($Object, TextBackground, $new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::EP_EDIT, nullptr, $TMSchema$Prop::FILLCOLOR, WindowBackgroundColor));
	$var($Object, ReadOnlyTextBackground, ControlBackgroundColor);
	$var($Object, DisabledTextBackground, ControlBackgroundColor);
	$var($Object, MenuFont, dialogPlain12);
	$var($Object, FixedControlFont, monospacedPlain12);
	$var($Object, ControlFont, dialogPlain12);
	$var($Object, MessageFont, dialogPlain12);
	$var($Object, WindowFont, dialogBold12);
	$var($Object, ToolTipFont, sansSerifPlain12);
	$var($Object, IconFont, ControlFont);
	$var($Object, scrollBarWidth, $new($WindowsDesktopProperty, "win.scrollbar.width"_s, $($Integer::valueOf(16))));
	$var($Object, menuBarHeight, $new($WindowsDesktopProperty, "win.menu.height"_s, nullptr));
	$var($Object, hotTrackingOn, $new($WindowsDesktopProperty, "win.item.hotTrackingOn"_s, $($Boolean::valueOf(true))));
	$var($Object, showMnemonics, $new($WindowsDesktopProperty, "win.menu.keyboardCuesOn"_s, $Boolean::TRUE));
	if (this->useSystemFontSettings) {
		$assign(MenuFont, getDesktopFontValue("win.menu.font"_s, MenuFont));
		$assign(FixedControlFont, getDesktopFontValue("win.ansiFixed.font"_s, FixedControlFont));
		$assign(ControlFont, getDesktopFontValue("win.defaultGUI.font"_s, ControlFont));
		$assign(MessageFont, getDesktopFontValue("win.messagebox.font"_s, MessageFont));
		$assign(WindowFont, getDesktopFontValue("win.frame.captionFont"_s, WindowFont));
		$assign(IconFont, getDesktopFontValue("win.icon.font"_s, IconFont));
		$assign(ToolTipFont, getDesktopFontValue("win.tooltip.font"_s, ToolTipFont));
		$SwingUtilities2::putAATextInfo(true, table);
		$init($SunToolkit);
		$set(this, aaSettings, $new($WindowsLookAndFeel$FontDesktopProperty, this, $SunToolkit::DESKTOPFONTHINTS));
	}
	if (this->useSystemFontSizeSettings) {
		$init($Font);
		$assign(MenuFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.menu.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(FixedControlFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.ansiFixed.font.height"_s, $Font::MONOSPACED, $Font::PLAIN, 12));
		$assign(ControlFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.defaultGUI.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(MessageFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.messagebox.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
		$assign(WindowFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.frame.captionFont.height"_s, $Font::DIALOG, $Font::BOLD, 12));
		$assign(ToolTipFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.tooltip.font.height"_s, $Font::SANS_SERIF, $Font::PLAIN, 12));
		$assign(IconFont, $new($WindowsLookAndFeel$WindowsFontSizeProperty, "win.icon.font.height"_s, $Font::DIALOG, $Font::PLAIN, 12));
	}
	bool var$0 = !($instanceOf($WindowsClassicLookAndFeel, this));
	if (var$0) {
		$init($OSInfo$OSType);
		bool var$1 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
		var$0 = var$1 && $$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_XP) >= 0;
	}
	if (var$0) {
		$var($String, prop, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "swing.noxp"_s))));
		if (prop == nullptr) {
			$set(this, themeActive, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.themeActive"_s));
			$set(this, dllName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.dllName"_s));
			$set(this, colorName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.colorName"_s));
			$set(this, sizeName, $new($WindowsLookAndFeel$TriggerDesktopProperty, this, "win.xpstyle.sizeName"_s));
		}
	}
	$var($Object, var$2, $Integer::valueOf(3));
	$var($Object, var$3, $Integer::valueOf(3));
	$var($Object, var$4, $Integer::valueOf(6));
	$var($Object, var$5, $Integer::valueOf(6));
	$var($Object, var$6, $Integer::valueOf(0));
	$var($Object, var$7, $new($EmptyBorder, 1, 3, 1, 1));
	$init($TMSchema$State);
	$var($Object, var$8, $Character::valueOf((char16_t)9679));
	$var($Object, var$9, $new($InsetsUIResource, 1, 4, 1, 4));
	$var($Object, var$10, $new($InsetsUIResource, 3, 2, 2, 2));
	$init($WindowsLookAndFeel$XPValue);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"AuditoryCues.playList"_s,
		nullptr,
		"Application.useSystemFontSettings"_s,
		$($Boolean::valueOf(this->useSystemFontSettings)),
		"TextField.focusInputMap"_s,
		fieldInputMap,
		"PasswordField.focusInputMap"_s,
		passwordInputMap,
		"TextArea.focusInputMap"_s,
		multilineInputMap,
		"TextPane.focusInputMap"_s,
		multilineInputMap,
		"EditorPane.focusInputMap"_s,
		multilineInputMap,
		"Button.font"_s,
		ControlFont,
		"Button.background"_s,
		ControlBackgroundColor,
		"Button.foreground"_s,
		ControlTextColor,
		"Button.shadow"_s,
		ControlShadowColor,
		"Button.darkShadow"_s,
		ControlDarkShadowColor,
		"Button.light"_s,
		ControlLightColor,
		"Button.highlight"_s,
		ControlHighlightColor,
		"Button.disabledForeground"_s,
		InactiveTextColor,
		"Button.disabledShadow"_s,
		ControlHighlightColor,
		"Button.focus"_s,
		buttonFocusColor,
		"Button.dashedRectGapX"_s,
		$$new($WindowsLookAndFeel$XPValue, var$2, $($Integer::valueOf(5))),
		"Button.dashedRectGapY"_s,
		$$new($WindowsLookAndFeel$XPValue, var$3, $($Integer::valueOf(4))),
		"Button.dashedRectGapWidth"_s,
		$$new($WindowsLookAndFeel$XPValue, var$4, $($Integer::valueOf(10))),
		"Button.dashedRectGapHeight"_s,
		$$new($WindowsLookAndFeel$XPValue, var$5, $($Integer::valueOf(8))),
		"Button.textShiftOffset"_s,
		$$new($WindowsLookAndFeel$XPValue, var$6, $($Integer::valueOf(1))),
		"Button.showMnemonics"_s,
		showMnemonics,
		"Button.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"Caret.width"_s,
		$$new($WindowsDesktopProperty, "win.caret.width"_s, nullptr),
		"CheckBox.font"_s,
		ControlFont,
		"CheckBox.interiorBackground"_s,
		WindowBackgroundColor,
		"CheckBox.background"_s,
		ControlBackgroundColor,
		"CheckBox.foreground"_s,
		WindowTextColor,
		"CheckBox.shadow"_s,
		ControlShadowColor,
		"CheckBox.darkShadow"_s,
		ControlDarkShadowColor,
		"CheckBox.light"_s,
		ControlLightColor,
		"CheckBox.highlight"_s,
		ControlHighlightColor,
		"CheckBox.focus"_s,
		buttonFocusColor,
		"CheckBox.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"CheckBox.totalInsets"_s,
		$$new($Insets, 4, 4, 4, 4),
		"CheckBoxMenuItem.font"_s,
		MenuFont,
		"CheckBoxMenuItem.background"_s,
		MenuBackgroundColor,
		"CheckBoxMenuItem.foreground"_s,
		MenuTextColor,
		"CheckBoxMenuItem.selectionForeground"_s,
		SelectionTextColor,
		"CheckBoxMenuItem.selectionBackground"_s,
		SelectionBackgroundColor,
		"CheckBoxMenuItem.acceleratorForeground"_s,
		MenuTextColor,
		"CheckBoxMenuItem.acceleratorSelectionForeground"_s,
		SelectionTextColor,
		"CheckBoxMenuItem.commandSound"_s,
		"win.sound.menuCommand"_s,
		"ComboBox.font"_s,
		ControlFont,
		"ComboBox.background"_s,
		WindowBackgroundColor,
		"ComboBox.foreground"_s,
		WindowTextColor,
		"ComboBox.buttonBackground"_s,
		ControlBackgroundColor,
		"ComboBox.buttonShadow"_s,
		ControlShadowColor,
		"ComboBox.buttonDarkShadow"_s,
		ControlDarkShadowColor,
		"ComboBox.buttonHighlight"_s,
		ControlHighlightColor,
		"ComboBox.selectionBackground"_s,
		SelectionBackgroundColor,
		"ComboBox.selectionForeground"_s,
		SelectionTextColor,
		"ComboBox.editorBorder"_s,
		$$new($WindowsLookAndFeel$XPValue, var$7, $$new($EmptyBorder, 1, 3, 1, 4)),
		"ComboBox.disabledBackground"_s,
		$$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::CP_COMBOBOX, $TMSchema$State::DISABLED, $TMSchema$Prop::FILLCOLOR, DisabledTextBackground),
		"ComboBox.disabledForeground"_s,
		$$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::CP_COMBOBOX, $TMSchema$State::DISABLED, $TMSchema$Prop::TEXTCOLOR, InactiveTextColor),
		"ComboBox.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"hidePopup"_s,
			"PAGE_UP"_s,
			"pageUpPassThrough"_s,
			"PAGE_DOWN"_s,
			"pageDownPassThrough"_s,
			"HOME"_s,
			"homePassThrough"_s,
			"END"_s,
			"endPassThrough"_s,
			"DOWN"_s,
			"selectNext2"_s,
			"KP_DOWN"_s,
			"selectNext2"_s,
			"UP"_s,
			"selectPrevious2"_s,
			"KP_UP"_s,
			"selectPrevious2"_s,
			"ENTER"_s,
			"enterPressed"_s,
			"F4"_s,
			"togglePopup"_s,
			"alt DOWN"_s,
			"togglePopup"_s,
			"alt KP_DOWN"_s,
			"togglePopup"_s,
			"alt UP"_s,
			"togglePopup"_s,
			"alt KP_UP"_s,
			"togglePopup"_s
		})),
		"Desktop.background"_s,
		$$new($WindowsDesktopProperty, "win.mdi.backgroundColor"_s, $(table->get("desktop"_s))),
		"Desktop.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl F5"_s,
			"restore"_s,
			"ctrl F4"_s,
			"close"_s,
			"ctrl F7"_s,
			"move"_s,
			"ctrl F8"_s,
			"resize"_s,
			"RIGHT"_s,
			"right"_s,
			"KP_RIGHT"_s,
			"right"_s,
			"LEFT"_s,
			"left"_s,
			"KP_LEFT"_s,
			"left"_s,
			"UP"_s,
			"up"_s,
			"KP_UP"_s,
			"up"_s,
			"DOWN"_s,
			"down"_s,
			"KP_DOWN"_s,
			"down"_s,
			"ESCAPE"_s,
			"escape"_s,
			"ctrl F9"_s,
			"minimize"_s,
			"ctrl F10"_s,
			"maximize"_s,
			"ctrl F6"_s,
			"selectNextFrame"_s,
			"ctrl TAB"_s,
			"selectNextFrame"_s,
			"ctrl alt F6"_s,
			"selectNextFrame"_s,
			"shift ctrl alt F6"_s,
			"selectPreviousFrame"_s,
			"ctrl F12"_s,
			"navigateNext"_s,
			"shift ctrl F12"_s,
			"navigatePrevious"_s
		})),
		"DesktopIcon.width"_s,
		$($Integer::valueOf(160)),
		"EditorPane.font"_s,
		ControlFont,
		"EditorPane.background"_s,
		WindowBackgroundColor,
		"EditorPane.foreground"_s,
		WindowTextColor,
		"EditorPane.selectionBackground"_s,
		SelectionBackgroundColor,
		"EditorPane.selectionForeground"_s,
		SelectionTextColor,
		"EditorPane.caretForeground"_s,
		WindowTextColor,
		"EditorPane.inactiveForeground"_s,
		InactiveTextColor,
		"EditorPane.inactiveBackground"_s,
		WindowBackgroundColor,
		"EditorPane.disabledBackground"_s,
		DisabledTextBackground,
		"FileChooser.homeFolderIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, nullptr, "icons/HomeFolder.gif"_s),
		"FileChooser.listFont"_s,
		IconFont,
		"FileChooser.listViewBackground"_s,
		$$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::LVP_LISTVIEW, nullptr, $TMSchema$Prop::FILLCOLOR, WindowBackgroundColor),
		"FileChooser.listViewBorder"_s,
		$$new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LVP_LISTVIEW, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4))),
		"FileChooser.listViewIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon ListView"_s, "icons/ListView.gif"_s),
		"FileChooser.listViewWindowsStyle"_s,
		$Boolean::TRUE,
		"FileChooser.detailsViewIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon DetailsView"_s, "icons/DetailsView.gif"_s),
		"FileChooser.viewMenuIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon ViewMenu"_s, "icons/ListView.gif"_s),
		"FileChooser.upFolderIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon UpFolder"_s, "icons/UpFolder.gif"_s),
		"FileChooser.newFolderIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "fileChooserIcon NewFolder"_s, "icons/NewFolder.gif"_s),
		"FileChooser.useSystemExtensionHiding"_s,
		$Boolean::TRUE,
		"FileChooser.usesSingleFilePane"_s,
		$Boolean::TRUE,
		"FileChooser.noPlacesBar"_s,
		$$new($WindowsDesktopProperty, "win.comdlg.noPlacesBar"_s, $Boolean::FALSE),
		"FileChooser.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancelSelection"_s,
			"F2"_s,
			"editFileName"_s,
			"F5"_s,
			"refresh"_s,
			"BACK_SPACE"_s,
			"Go Up"_s
		})),
		"FileView.directoryIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/Directory.gif"_s)),
		"FileView.fileIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/File.gif"_s)),
		"FileView.computerIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/Computer.gif"_s)),
		"FileView.hardDriveIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/HardDrive.gif"_s)),
		"FileView.floppyDriveIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/FloppyDrive.gif"_s)),
		"FormattedTextField.font"_s,
		ControlFont,
		"InternalFrame.titleFont"_s,
		WindowFont,
		"InternalFrame.titlePaneHeight"_s,
		TitlePaneHeight,
		"InternalFrame.titleButtonWidth"_s,
		TitleButtonWidth,
		"InternalFrame.titleButtonHeight"_s,
		TitleButtonHeight,
		"InternalFrame.titleButtonToolTipsOn"_s,
		hotTrackingOn,
		"InternalFrame.borderColor"_s,
		ControlBackgroundColor,
		"InternalFrame.borderShadow"_s,
		ControlShadowColor,
		"InternalFrame.borderDarkShadow"_s,
		ControlDarkShadowColor,
		"InternalFrame.borderHighlight"_s,
		ControlHighlightColor,
		"InternalFrame.borderLight"_s,
		ControlLightColor,
		"InternalFrame.borderWidth"_s,
		WindowBorderWidth,
		"InternalFrame.minimizeIconBackground"_s,
		ControlBackgroundColor,
		"InternalFrame.resizeIconHighlight"_s,
		ControlLightColor,
		"InternalFrame.resizeIconShadow"_s,
		ControlShadowColor,
		"InternalFrame.activeBorderColor"_s,
		$$new($WindowsDesktopProperty, "win.frame.activeBorderColor"_s, $(table->get("windowBorder"_s))),
		"InternalFrame.inactiveBorderColor"_s,
		$$new($WindowsDesktopProperty, "win.frame.inactiveBorderColor"_s, $(table->get("windowBorder"_s))),
		"InternalFrame.activeTitleBackground"_s,
		$$new($WindowsDesktopProperty, "win.frame.activeCaptionColor"_s, $(table->get("activeCaption"_s))),
		"InternalFrame.activeTitleGradient"_s,
		$$new($WindowsDesktopProperty, "win.frame.activeCaptionGradientColor"_s, $(table->get("activeCaption"_s))),
		"InternalFrame.activeTitleForeground"_s,
		$$new($WindowsDesktopProperty, "win.frame.captionTextColor"_s, $(table->get("activeCaptionText"_s))),
		"InternalFrame.inactiveTitleBackground"_s,
		$$new($WindowsDesktopProperty, "win.frame.inactiveCaptionColor"_s, $(table->get("inactiveCaption"_s))),
		"InternalFrame.inactiveTitleGradient"_s,
		$$new($WindowsDesktopProperty, "win.frame.inactiveCaptionGradientColor"_s, $(table->get("inactiveCaption"_s))),
		"InternalFrame.inactiveTitleForeground"_s,
		$$new($WindowsDesktopProperty, "win.frame.inactiveCaptionTextColor"_s, $(table->get("inactiveCaptionText"_s))),
		"InternalFrame.maximizeIcon"_s,
		$($WindowsIconFactory::createFrameMaximizeIcon()),
		"InternalFrame.minimizeIcon"_s,
		$($WindowsIconFactory::createFrameMinimizeIcon()),
		"InternalFrame.iconifyIcon"_s,
		$($WindowsIconFactory::createFrameIconifyIcon()),
		"InternalFrame.closeIcon"_s,
		$($WindowsIconFactory::createFrameCloseIcon()),
		"InternalFrame.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, this)),
		"InternalFrame.closeSound"_s,
		"win.sound.close"_s,
		"InternalFrame.maximizeSound"_s,
		"win.sound.maximize"_s,
		"InternalFrame.minimizeSound"_s,
		"win.sound.minimize"_s,
		"InternalFrame.restoreDownSound"_s,
		"win.sound.restoreDown"_s,
		"InternalFrame.restoreUpSound"_s,
		"win.sound.restoreUp"_s,
		"InternalFrame.windowBindings"_s,
		$$new($ObjectArray, {
			"shift ESCAPE"_s,
			"showSystemMenu"_s,
			"ctrl SPACE"_s,
			"showSystemMenu"_s,
			"ESCAPE"_s,
			"hideSystemMenu"_s
		}),
		"Label.font"_s,
		ControlFont,
		"Label.background"_s,
		ControlBackgroundColor,
		"Label.foreground"_s,
		WindowTextColor,
		"Label.disabledForeground"_s,
		InactiveTextColor,
		"Label.disabledShadow"_s,
		ControlHighlightColor,
		"List.font"_s,
		ControlFont,
		"List.background"_s,
		WindowBackgroundColor,
		"List.foreground"_s,
		WindowTextColor,
		"List.selectionBackground"_s,
		SelectionBackgroundColor,
		"List.selectionForeground"_s,
		SelectionTextColor,
		"List.lockToPositionOnScroll"_s,
		$Boolean::TRUE,
		"List.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"UP"_s,
			"selectPreviousRow"_s,
			"KP_UP"_s,
			"selectPreviousRow"_s,
			"shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousRowChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousRowChangeLead"_s,
			"DOWN"_s,
			"selectNextRow"_s,
			"KP_DOWN"_s,
			"selectNextRow"_s,
			"shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextRowChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextRowChangeLead"_s,
			"LEFT"_s,
			"selectPreviousColumn"_s,
			"KP_LEFT"_s,
			"selectPreviousColumn"_s,
			"shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"RIGHT"_s,
			"selectNextColumn"_s,
			"KP_RIGHT"_s,
			"selectNextColumn"_s,
			"shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"HOME"_s,
			"selectFirstRow"_s,
			"shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstRowChangeLead"_s,
			"END"_s,
			"selectLastRow"_s,
			"shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl END"_s,
			"selectLastRowChangeLead"_s,
			"PAGE_UP"_s,
			"scrollUp"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollUpChangeLead"_s,
			"PAGE_DOWN"_s,
			"scrollDown"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollDownChangeLead"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s
		})),
		"PopupMenu.font"_s,
		MenuFont,
		"PopupMenu.background"_s,
		MenuBackgroundColor,
		"PopupMenu.foreground"_s,
		MenuTextColor,
		"PopupMenu.popupSound"_s,
		"win.sound.menuPopup"_s,
		"PopupMenu.consumeEventOnClose"_s,
		$Boolean::FALSE,
		"Menu.font"_s,
		MenuFont,
		"Menu.foreground"_s,
		MenuTextColor,
		"Menu.background"_s,
		MenuBackgroundColor,
		"Menu.useMenuBarBackgroundForTopLevel"_s,
		$Boolean::TRUE,
		"Menu.selectionForeground"_s,
		SelectionTextColor,
		"Menu.selectionBackground"_s,
		SelectionBackgroundColor,
		"Menu.acceleratorForeground"_s,
		MenuTextColor,
		"Menu.acceleratorSelectionForeground"_s,
		SelectionTextColor,
		"Menu.menuPopupOffsetX"_s,
		$($Integer::valueOf(0)),
		"Menu.menuPopupOffsetY"_s,
		$($Integer::valueOf(0)),
		"Menu.submenuPopupOffsetX"_s,
		$($Integer::valueOf(-4)),
		"Menu.submenuPopupOffsetY"_s,
		$($Integer::valueOf(-3)),
		"Menu.crossMenuMnemonic"_s,
		$Boolean::FALSE,
		"Menu.preserveTopLevelSelection"_s,
		$Boolean::TRUE,
		"MenuBar.font"_s,
		MenuFont,
		"MenuBar.background"_s,
		$$new($WindowsLookAndFeel$XPValue, MenuBarBackgroundColor, MenuBackgroundColor),
		"MenuBar.foreground"_s,
		MenuTextColor,
		"MenuBar.shadow"_s,
		ControlShadowColor,
		"MenuBar.highlight"_s,
		ControlHighlightColor,
		"MenuBar.height"_s,
		menuBarHeight,
		"MenuBar.rolloverEnabled"_s,
		hotTrackingOn,
		"MenuBar.windowBindings"_s,
		$$new($ObjectArray, {
			"F10"_s,
			"takeFocus"_s
		}),
		"MenuItem.font"_s,
		MenuFont,
		"MenuItem.acceleratorFont"_s,
		MenuFont,
		"MenuItem.foreground"_s,
		MenuTextColor,
		"MenuItem.background"_s,
		MenuBackgroundColor,
		"MenuItem.selectionForeground"_s,
		SelectionTextColor,
		"MenuItem.selectionBackground"_s,
		SelectionBackgroundColor,
		"MenuItem.disabledForeground"_s,
		InactiveTextColor,
		"MenuItem.acceleratorForeground"_s,
		MenuTextColor,
		"MenuItem.acceleratorSelectionForeground"_s,
		SelectionTextColor,
		"MenuItem.acceleratorDelimiter"_s,
		menuItemAcceleratorDelimiter,
		"MenuItem.commandSound"_s,
		"win.sound.menuCommand"_s,
		"MenuItem.disabledAreNavigable"_s,
		$Boolean::TRUE,
		"RadioButton.font"_s,
		ControlFont,
		"RadioButton.interiorBackground"_s,
		WindowBackgroundColor,
		"RadioButton.background"_s,
		ControlBackgroundColor,
		"RadioButton.foreground"_s,
		WindowTextColor,
		"RadioButton.shadow"_s,
		ControlShadowColor,
		"RadioButton.darkShadow"_s,
		ControlDarkShadowColor,
		"RadioButton.light"_s,
		ControlLightColor,
		"RadioButton.highlight"_s,
		ControlHighlightColor,
		"RadioButton.focus"_s,
		buttonFocusColor,
		"RadioButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"RadioButton.totalInsets"_s,
		$$new($Insets, 4, 4, 4, 4),
		"RadioButtonMenuItem.font"_s,
		MenuFont,
		"RadioButtonMenuItem.foreground"_s,
		MenuTextColor,
		"RadioButtonMenuItem.background"_s,
		MenuBackgroundColor,
		"RadioButtonMenuItem.selectionForeground"_s,
		SelectionTextColor,
		"RadioButtonMenuItem.selectionBackground"_s,
		SelectionBackgroundColor,
		"RadioButtonMenuItem.disabledForeground"_s,
		InactiveTextColor,
		"RadioButtonMenuItem.acceleratorForeground"_s,
		MenuTextColor,
		"RadioButtonMenuItem.acceleratorSelectionForeground"_s,
		SelectionTextColor,
		"RadioButtonMenuItem.commandSound"_s,
		"win.sound.menuCommand"_s,
		"OptionPane.font"_s,
		MessageFont,
		"OptionPane.messageFont"_s,
		MessageFont,
		"OptionPane.buttonFont"_s,
		MessageFont,
		"OptionPane.background"_s,
		ControlBackgroundColor,
		"OptionPane.foreground"_s,
		WindowTextColor,
		"OptionPane.buttonMinimumWidth"_s,
		$$new($WindowsLookAndFeel$XPDLUValue, this, 50, 50, $SwingConstants::EAST),
		"OptionPane.messageForeground"_s,
		ControlTextColor,
		"OptionPane.errorIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Error"_s, "icons/Error.gif"_s),
		"OptionPane.informationIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Information"_s, "icons/Inform.gif"_s),
		"OptionPane.questionIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Question"_s, "icons/Question.gif"_s),
		"OptionPane.warningIcon"_s,
		$$new($WindowsLookAndFeel$LazyWindowsIcon, "optionPaneIcon Warning"_s, "icons/Warn.gif"_s),
		"OptionPane.windowBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"close"_s
		}),
		"OptionPane.errorSound"_s,
		"win.sound.hand"_s,
		"OptionPane.informationSound"_s,
		"win.sound.asterisk"_s,
		"OptionPane.questionSound"_s,
		"win.sound.question"_s,
		"OptionPane.warningSound"_s,
		"win.sound.exclamation"_s,
		"FormattedTextField.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			$DefaultEditorKit::copyAction,
			"ctrl V"_s,
			$DefaultEditorKit::pasteAction,
			"ctrl X"_s,
			$DefaultEditorKit::cutAction,
			"COPY"_s,
			$DefaultEditorKit::copyAction,
			"PASTE"_s,
			$DefaultEditorKit::pasteAction,
			"CUT"_s,
			$DefaultEditorKit::cutAction,
			"control INSERT"_s,
			$DefaultEditorKit::copyAction,
			"shift INSERT"_s,
			$DefaultEditorKit::pasteAction,
			"shift DELETE"_s,
			$DefaultEditorKit::cutAction,
			"shift LEFT"_s,
			$DefaultEditorKit::selectionBackwardAction,
			"shift KP_LEFT"_s,
			$DefaultEditorKit::selectionBackwardAction,
			"shift RIGHT"_s,
			$DefaultEditorKit::selectionForwardAction,
			"shift KP_RIGHT"_s,
			$DefaultEditorKit::selectionForwardAction,
			"ctrl LEFT"_s,
			$DefaultEditorKit::previousWordAction,
			"ctrl KP_LEFT"_s,
			$DefaultEditorKit::previousWordAction,
			"ctrl RIGHT"_s,
			$DefaultEditorKit::nextWordAction,
			"ctrl KP_RIGHT"_s,
			$DefaultEditorKit::nextWordAction,
			"ctrl shift LEFT"_s,
			$DefaultEditorKit::selectionPreviousWordAction,
			"ctrl shift KP_LEFT"_s,
			$DefaultEditorKit::selectionPreviousWordAction,
			"ctrl shift RIGHT"_s,
			$DefaultEditorKit::selectionNextWordAction,
			"ctrl shift KP_RIGHT"_s,
			$DefaultEditorKit::selectionNextWordAction,
			"ctrl A"_s,
			$DefaultEditorKit::selectAllAction,
			"HOME"_s,
			$DefaultEditorKit::beginLineAction,
			"END"_s,
			$DefaultEditorKit::endLineAction,
			"shift HOME"_s,
			$DefaultEditorKit::selectionBeginLineAction,
			"shift END"_s,
			$DefaultEditorKit::selectionEndLineAction,
			"BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"shift BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"ctrl H"_s,
			$DefaultEditorKit::deletePrevCharAction,
			"DELETE"_s,
			$DefaultEditorKit::deleteNextCharAction,
			"ctrl DELETE"_s,
			$DefaultEditorKit::deleteNextWordAction,
			"ctrl BACK_SPACE"_s,
			$DefaultEditorKit::deletePrevWordAction,
			"RIGHT"_s,
			$DefaultEditorKit::forwardAction,
			"LEFT"_s,
			$DefaultEditorKit::backwardAction,
			"KP_RIGHT"_s,
			$DefaultEditorKit::forwardAction,
			"KP_LEFT"_s,
			$DefaultEditorKit::backwardAction,
			"ENTER"_s,
			$JTextField::notifyAction,
			"ctrl BACK_SLASH"_s,
			"unselect"_s,
			"control shift O"_s,
			"toggle-componentOrientation"_s,
			"ESCAPE"_s,
			"reset-field-edit"_s,
			"UP"_s,
			"increment"_s,
			"KP_UP"_s,
			"increment"_s,
			"DOWN"_s,
			"decrement"_s,
			"KP_DOWN"_s,
			"decrement"_s
		})),
		"FormattedTextField.inactiveBackground"_s,
		ReadOnlyTextBackground,
		"FormattedTextField.disabledBackground"_s,
		DisabledTextBackground,
		"FormattedTextField.background"_s,
		TextBackground,
		"FormattedTextField.foreground"_s,
		WindowTextColor,
		"Panel.font"_s,
		ControlFont,
		"Panel.background"_s,
		ControlBackgroundColor,
		"Panel.foreground"_s,
		WindowTextColor,
		"PasswordField.font"_s,
		ControlFont,
		"PasswordField.background"_s,
		TextBackground,
		"PasswordField.foreground"_s,
		WindowTextColor,
		"PasswordField.inactiveForeground"_s,
		InactiveTextColor,
		"PasswordField.inactiveBackground"_s,
		ReadOnlyTextBackground,
		"PasswordField.disabledBackground"_s,
		DisabledTextBackground,
		"PasswordField.selectionBackground"_s,
		SelectionBackgroundColor,
		"PasswordField.selectionForeground"_s,
		SelectionTextColor,
		"PasswordField.caretForeground"_s,
		WindowTextColor,
		"PasswordField.echoChar"_s,
		$$new($WindowsLookAndFeel$XPValue, var$8, $($Character::valueOf(u'*'))),
		"ProgressBar.font"_s,
		ControlFont,
		"ProgressBar.foreground"_s,
		SelectionBackgroundColor,
		"ProgressBar.background"_s,
		ControlBackgroundColor,
		"ProgressBar.shadow"_s,
		ControlShadowColor,
		"ProgressBar.highlight"_s,
		ControlHighlightColor,
		"ProgressBar.selectionForeground"_s,
		ControlBackgroundColor,
		"ProgressBar.selectionBackground"_s,
		SelectionBackgroundColor,
		"ProgressBar.cellLength"_s,
		$($Integer::valueOf(7)),
		"ProgressBar.cellSpacing"_s,
		$($Integer::valueOf(2)),
		"ProgressBar.indeterminateInsets"_s,
		$$new($Insets, 3, 3, 3, 3),
		"RootPane.defaultButtonWindowKeyBindings"_s,
		$$new($ObjectArray, {
			"ENTER"_s,
			"press"_s,
			"released ENTER"_s,
			"release"_s,
			"ctrl ENTER"_s,
			"press"_s,
			"ctrl released ENTER"_s,
			"release"_s
		}),
		"ScrollBar.background"_s,
		ScrollbarBackgroundColor,
		"ScrollBar.foreground"_s,
		ControlBackgroundColor,
		"ScrollBar.track"_s,
		white,
		"ScrollBar.trackForeground"_s,
		ScrollbarBackgroundColor,
		"ScrollBar.trackHighlight"_s,
		black,
		"ScrollBar.trackHighlightForeground"_s,
		scrollBarTrackHighlight,
		"ScrollBar.thumb"_s,
		ControlBackgroundColor,
		"ScrollBar.thumbHighlight"_s,
		ControlHighlightColor,
		"ScrollBar.thumbDarkShadow"_s,
		ControlDarkShadowColor,
		"ScrollBar.thumbShadow"_s,
		ControlShadowColor,
		"ScrollBar.width"_s,
		scrollBarWidth,
		"ScrollBar.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"positiveUnitIncrement"_s,
			"KP_RIGHT"_s,
			"positiveUnitIncrement"_s,
			"DOWN"_s,
			"positiveUnitIncrement"_s,
			"KP_DOWN"_s,
			"positiveUnitIncrement"_s,
			"PAGE_DOWN"_s,
			"positiveBlockIncrement"_s,
			"ctrl PAGE_DOWN"_s,
			"positiveBlockIncrement"_s,
			"LEFT"_s,
			"negativeUnitIncrement"_s,
			"KP_LEFT"_s,
			"negativeUnitIncrement"_s,
			"UP"_s,
			"negativeUnitIncrement"_s,
			"KP_UP"_s,
			"negativeUnitIncrement"_s,
			"PAGE_UP"_s,
			"negativeBlockIncrement"_s,
			"ctrl PAGE_UP"_s,
			"negativeBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"ScrollPane.font"_s,
		ControlFont,
		"ScrollPane.background"_s,
		ControlBackgroundColor,
		"ScrollPane.foreground"_s,
		ControlTextColor,
		"ScrollPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"unitScrollRight"_s,
			"KP_RIGHT"_s,
			"unitScrollRight"_s,
			"DOWN"_s,
			"unitScrollDown"_s,
			"KP_DOWN"_s,
			"unitScrollDown"_s,
			"LEFT"_s,
			"unitScrollLeft"_s,
			"KP_LEFT"_s,
			"unitScrollLeft"_s,
			"UP"_s,
			"unitScrollUp"_s,
			"KP_UP"_s,
			"unitScrollUp"_s,
			"PAGE_UP"_s,
			"scrollUp"_s,
			"PAGE_DOWN"_s,
			"scrollDown"_s,
			"ctrl PAGE_UP"_s,
			"scrollLeft"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollRight"_s,
			"ctrl HOME"_s,
			"scrollHome"_s,
			"ctrl END"_s,
			"scrollEnd"_s
		})),
		"Separator.background"_s,
		ControlHighlightColor,
		"Separator.foreground"_s,
		ControlShadowColor,
		"Slider.font"_s,
		ControlFont,
		"Slider.foreground"_s,
		ControlBackgroundColor,
		"Slider.background"_s,
		ControlBackgroundColor,
		"Slider.highlight"_s,
		ControlHighlightColor,
		"Slider.shadow"_s,
		ControlShadowColor,
		"Slider.focus"_s,
		ControlDarkShadowColor,
		"Slider.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"positiveUnitIncrement"_s,
			"KP_RIGHT"_s,
			"positiveUnitIncrement"_s,
			"DOWN"_s,
			"negativeUnitIncrement"_s,
			"KP_DOWN"_s,
			"negativeUnitIncrement"_s,
			"PAGE_DOWN"_s,
			"negativeBlockIncrement"_s,
			"LEFT"_s,
			"negativeUnitIncrement"_s,
			"KP_LEFT"_s,
			"negativeUnitIncrement"_s,
			"UP"_s,
			"positiveUnitIncrement"_s,
			"KP_UP"_s,
			"positiveUnitIncrement"_s,
			"PAGE_UP"_s,
			"positiveBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"Spinner.font"_s,
		ControlFont,
		"Spinner.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"increment"_s,
			"KP_UP"_s,
			"increment"_s,
			"DOWN"_s,
			"decrement"_s,
			"KP_DOWN"_s,
			"decrement"_s
		})),
		"SplitPane.background"_s,
		ControlBackgroundColor,
		"SplitPane.highlight"_s,
		ControlHighlightColor,
		"SplitPane.shadow"_s,
		ControlShadowColor,
		"SplitPane.darkShadow"_s,
		ControlDarkShadowColor,
		"SplitPane.dividerSize"_s,
		$($Integer::valueOf(5)),
		"SplitPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"negativeIncrement"_s,
			"DOWN"_s,
			"positiveIncrement"_s,
			"LEFT"_s,
			"negativeIncrement"_s,
			"RIGHT"_s,
			"positiveIncrement"_s,
			"KP_UP"_s,
			"negativeIncrement"_s,
			"KP_DOWN"_s,
			"positiveIncrement"_s,
			"KP_LEFT"_s,
			"negativeIncrement"_s,
			"KP_RIGHT"_s,
			"positiveIncrement"_s,
			"HOME"_s,
			"selectMin"_s,
			"END"_s,
			"selectMax"_s,
			"F8"_s,
			"startResize"_s,
			"F6"_s,
			"toggleFocus"_s,
			"ctrl TAB"_s,
			"focusOutForward"_s,
			"ctrl shift TAB"_s,
			"focusOutBackward"_s
		})),
		"TabbedPane.tabsOverlapBorder"_s,
		$$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, $Boolean::FALSE),
		"TabbedPane.tabInsets"_s,
		$$new($WindowsLookAndFeel$XPValue, var$9, $$new($InsetsUIResource, 0, 4, 1, 4)),
		"TabbedPane.tabAreaInsets"_s,
		$$new($WindowsLookAndFeel$XPValue, var$10, $$new($InsetsUIResource, 3, 2, 0, 2)),
		"TabbedPane.font"_s,
		ControlFont,
		"TabbedPane.background"_s,
		ControlBackgroundColor,
		"TabbedPane.foreground"_s,
		ControlTextColor,
		"TabbedPane.highlight"_s,
		ControlHighlightColor,
		"TabbedPane.light"_s,
		ControlLightColor,
		"TabbedPane.shadow"_s,
		ControlShadowColor,
		"TabbedPane.darkShadow"_s,
		ControlDarkShadowColor,
		"TabbedPane.focus"_s,
		ControlTextColor,
		"TabbedPane.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"navigateRight"_s,
			"KP_RIGHT"_s,
			"navigateRight"_s,
			"LEFT"_s,
			"navigateLeft"_s,
			"KP_LEFT"_s,
			"navigateLeft"_s,
			"UP"_s,
			"navigateUp"_s,
			"KP_UP"_s,
			"navigateUp"_s,
			"DOWN"_s,
			"navigateDown"_s,
			"KP_DOWN"_s,
			"navigateDown"_s,
			"ctrl DOWN"_s,
			"requestFocusForVisibleComponent"_s,
			"ctrl KP_DOWN"_s,
			"requestFocusForVisibleComponent"_s
		})),
		"TabbedPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl TAB"_s,
			"navigateNext"_s,
			"ctrl shift TAB"_s,
			"navigatePrevious"_s,
			"ctrl PAGE_DOWN"_s,
			"navigatePageDown"_s,
			"ctrl PAGE_UP"_s,
			"navigatePageUp"_s,
			"ctrl UP"_s,
			"requestFocus"_s,
			"ctrl KP_UP"_s,
			"requestFocus"_s
		})),
		"Table.font"_s,
		ControlFont,
		"Table.foreground"_s,
		ControlTextColor,
		"Table.background"_s,
		WindowBackgroundColor,
		"Table.highlight"_s,
		ControlHighlightColor,
		"Table.light"_s,
		ControlLightColor,
		"Table.shadow"_s,
		ControlShadowColor,
		"Table.darkShadow"_s,
		ControlDarkShadowColor,
		"Table.selectionForeground"_s,
		SelectionTextColor,
		"Table.selectionBackground"_s,
		SelectionBackgroundColor,
		"Table.gridColor"_s,
		gray,
		"Table.focusCellBackground"_s,
		WindowBackgroundColor,
		"Table.focusCellForeground"_s,
		ControlTextColor,
		"Table.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"RIGHT"_s,
			"selectNextColumn"_s,
			"KP_RIGHT"_s,
			"selectNextColumn"_s,
			"shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectNextColumnChangeLead"_s,
			"LEFT"_s,
			"selectPreviousColumn"_s,
			"KP_LEFT"_s,
			"selectPreviousColumn"_s,
			"shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectPreviousColumnChangeLead"_s,
			"DOWN"_s,
			"selectNextRow"_s,
			"KP_DOWN"_s,
			"selectNextRow"_s,
			"shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextRowExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextRowChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextRowChangeLead"_s,
			"UP"_s,
			"selectPreviousRow"_s,
			"KP_UP"_s,
			"selectPreviousRow"_s,
			"shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousRowExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousRowChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousRowChangeLead"_s,
			"HOME"_s,
			"selectFirstColumn"_s,
			"shift HOME"_s,
			"selectFirstColumnExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstRowExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstRow"_s,
			"END"_s,
			"selectLastColumn"_s,
			"shift END"_s,
			"selectLastColumnExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastRowExtendSelection"_s,
			"ctrl END"_s,
			"selectLastRow"_s,
			"PAGE_UP"_s,
			"scrollUpChangeSelection"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollLeftExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollLeftChangeSelection"_s,
			"PAGE_DOWN"_s,
			"scrollDownChangeSelection"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollRightExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollRightChangeSelection"_s,
			"TAB"_s,
			"selectNextColumnCell"_s,
			"shift TAB"_s,
			"selectPreviousColumnCell"_s,
			"ENTER"_s,
			"selectNextRowCell"_s,
			"shift ENTER"_s,
			"selectPreviousRowCell"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"ESCAPE"_s,
			"cancel"_s,
			"F2"_s,
			"startEditing"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s,
			"F8"_s,
			"focusHeader"_s
		})),
		"Table.sortIconHighlight"_s,
		ControlShadowColor,
		"Table.sortIconLight"_s,
		white,
		"TableHeader.font"_s,
		ControlFont,
		"TableHeader.foreground"_s,
		ControlTextColor,
		"TableHeader.background"_s,
		ControlBackgroundColor,
		"TableHeader.focusCellBackground"_s,
		$$new($WindowsLookAndFeel$XPValue, $WindowsLookAndFeel$XPValue::NULL_VALUE, WindowBackgroundColor),
		"TextArea.font"_s,
		FixedControlFont,
		"TextArea.background"_s,
		WindowBackgroundColor,
		"TextArea.foreground"_s,
		WindowTextColor,
		"TextArea.inactiveForeground"_s,
		InactiveTextColor,
		"TextArea.inactiveBackground"_s,
		WindowBackgroundColor,
		"TextArea.disabledBackground"_s,
		DisabledTextBackground,
		"TextArea.selectionBackground"_s,
		SelectionBackgroundColor,
		"TextArea.selectionForeground"_s,
		SelectionTextColor,
		"TextArea.caretForeground"_s,
		WindowTextColor,
		"TextField.font"_s,
		ControlFont,
		"TextField.background"_s,
		TextBackground,
		"TextField.foreground"_s,
		WindowTextColor,
		"TextField.shadow"_s,
		ControlShadowColor,
		"TextField.darkShadow"_s,
		ControlDarkShadowColor,
		"TextField.light"_s,
		ControlLightColor,
		"TextField.highlight"_s,
		ControlHighlightColor,
		"TextField.inactiveForeground"_s,
		InactiveTextColor,
		"TextField.inactiveBackground"_s,
		ReadOnlyTextBackground,
		"TextField.disabledBackground"_s,
		DisabledTextBackground,
		"TextField.selectionBackground"_s,
		SelectionBackgroundColor,
		"TextField.selectionForeground"_s,
		SelectionTextColor,
		"TextField.caretForeground"_s,
		WindowTextColor,
		"TextPane.font"_s,
		ControlFont,
		"TextPane.background"_s,
		WindowBackgroundColor,
		"TextPane.foreground"_s,
		WindowTextColor,
		"TextPane.selectionBackground"_s,
		SelectionBackgroundColor,
		"TextPane.selectionForeground"_s,
		SelectionTextColor,
		"TextPane.inactiveBackground"_s,
		WindowBackgroundColor,
		"TextPane.disabledBackground"_s,
		DisabledTextBackground,
		"TextPane.caretForeground"_s,
		WindowTextColor,
		"TitledBorder.font"_s,
		ControlFont,
		"TitledBorder.titleColor"_s,
		$$new($WindowsLookAndFeel$XPColorValue, $TMSchema$Part::BP_GROUPBOX, nullptr, $TMSchema$Prop::TEXTCOLOR, WindowTextColor),
		"ToggleButton.font"_s,
		ControlFont,
		"ToggleButton.background"_s,
		ControlBackgroundColor,
		"ToggleButton.foreground"_s,
		ControlTextColor,
		"ToggleButton.shadow"_s,
		ControlShadowColor,
		"ToggleButton.darkShadow"_s,
		ControlDarkShadowColor,
		"ToggleButton.light"_s,
		ControlLightColor,
		"ToggleButton.highlight"_s,
		ControlHighlightColor,
		"ToggleButton.focus"_s,
		ControlTextColor,
		"ToggleButton.textShiftOffset"_s,
		$($Integer::valueOf(1)),
		"ToggleButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"ToolBar.font"_s,
		MenuFont,
		"ToolBar.background"_s,
		ControlBackgroundColor,
		"ToolBar.foreground"_s,
		ControlTextColor,
		"ToolBar.shadow"_s,
		ControlShadowColor,
		"ToolBar.darkShadow"_s,
		ControlDarkShadowColor,
		"ToolBar.light"_s,
		ControlLightColor,
		"ToolBar.highlight"_s,
		ControlHighlightColor,
		"ToolBar.dockingBackground"_s,
		ControlBackgroundColor,
		"ToolBar.dockingForeground"_s,
		red,
		"ToolBar.floatingBackground"_s,
		ControlBackgroundColor,
		"ToolBar.floatingForeground"_s,
		darkGray,
		"ToolBar.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"UP"_s,
			"navigateUp"_s,
			"KP_UP"_s,
			"navigateUp"_s,
			"DOWN"_s,
			"navigateDown"_s,
			"KP_DOWN"_s,
			"navigateDown"_s,
			"LEFT"_s,
			"navigateLeft"_s,
			"KP_LEFT"_s,
			"navigateLeft"_s,
			"RIGHT"_s,
			"navigateRight"_s,
			"KP_RIGHT"_s,
			"navigateRight"_s
		})),
		"ToolBar.separatorSize"_s,
		nullptr,
		"ToolTip.font"_s,
		ToolTipFont,
		"ToolTip.background"_s,
		$$new($WindowsDesktopProperty, "win.tooltip.backgroundColor"_s, $(table->get("info"_s))),
		"ToolTip.foreground"_s,
		$$new($WindowsDesktopProperty, "win.tooltip.textColor"_s, $(table->get("infoText"_s))),
		"ToolTipManager.enableToolTipMode"_s,
		"activeApplication"_s,
		"Tree.selectionBorderColor"_s,
		black,
		"Tree.drawDashedFocusIndicator"_s,
		$Boolean::TRUE,
		"Tree.lineTypeDashed"_s,
		$Boolean::TRUE,
		"Tree.font"_s,
		ControlFont,
		"Tree.background"_s,
		WindowBackgroundColor,
		"Tree.foreground"_s,
		WindowTextColor,
		"Tree.hash"_s,
		gray,
		"Tree.leftChildIndent"_s,
		$($Integer::valueOf(8)),
		"Tree.rightChildIndent"_s,
		$($Integer::valueOf(11)),
		"Tree.textForeground"_s,
		WindowTextColor,
		"Tree.textBackground"_s,
		WindowBackgroundColor,
		"Tree.selectionForeground"_s,
		SelectionTextColor,
		"Tree.selectionBackground"_s,
		SelectionBackgroundColor,
		"Tree.expandedIcon"_s,
		treeExpandedIcon,
		"Tree.collapsedIcon"_s,
		treeCollapsedIcon,
		"Tree.openIcon"_s,
		$$new($WindowsLookAndFeel$ActiveWindowsIcon, this, "win.icon.shellIconBPP"_s, "shell32Icon 5"_s, "icons/TreeOpen.gif"_s),
		"Tree.closedIcon"_s,
		$$new($WindowsLookAndFeel$ActiveWindowsIcon, this, "win.icon.shellIconBPP"_s, "shell32Icon 4"_s, "icons/TreeClosed.gif"_s),
		"Tree.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ADD"_s,
			"expand"_s,
			"SUBTRACT"_s,
			"collapse"_s,
			"ctrl C"_s,
			"copy"_s,
			"ctrl V"_s,
			"paste"_s,
			"ctrl X"_s,
			"cut"_s,
			"COPY"_s,
			"copy"_s,
			"PASTE"_s,
			"paste"_s,
			"CUT"_s,
			"cut"_s,
			"control INSERT"_s,
			"copy"_s,
			"shift INSERT"_s,
			"paste"_s,
			"shift DELETE"_s,
			"cut"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s,
			"shift UP"_s,
			"selectPreviousExtendSelection"_s,
			"shift KP_UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl shift UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl shift KP_UP"_s,
			"selectPreviousExtendSelection"_s,
			"ctrl UP"_s,
			"selectPreviousChangeLead"_s,
			"ctrl KP_UP"_s,
			"selectPreviousChangeLead"_s,
			"DOWN"_s,
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"shift DOWN"_s,
			"selectNextExtendSelection"_s,
			"shift KP_DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl shift DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl shift KP_DOWN"_s,
			"selectNextExtendSelection"_s,
			"ctrl DOWN"_s,
			"selectNextChangeLead"_s,
			"ctrl KP_DOWN"_s,
			"selectNextChangeLead"_s,
			"RIGHT"_s,
			"selectChild"_s,
			"KP_RIGHT"_s,
			"selectChild"_s,
			"LEFT"_s,
			"selectParent"_s,
			"KP_LEFT"_s,
			"selectParent"_s,
			"PAGE_UP"_s,
			"scrollUpChangeSelection"_s,
			"shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollUpExtendSelection"_s,
			"ctrl PAGE_UP"_s,
			"scrollUpChangeLead"_s,
			"PAGE_DOWN"_s,
			"scrollDownChangeSelection"_s,
			"shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollDownExtendSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollDownChangeLead"_s,
			"HOME"_s,
			"selectFirst"_s,
			"shift HOME"_s,
			"selectFirstExtendSelection"_s,
			"ctrl shift HOME"_s,
			"selectFirstExtendSelection"_s,
			"ctrl HOME"_s,
			"selectFirstChangeLead"_s,
			"END"_s,
			"selectLast"_s,
			"shift END"_s,
			"selectLastExtendSelection"_s,
			"ctrl shift END"_s,
			"selectLastExtendSelection"_s,
			"ctrl END"_s,
			"selectLastChangeLead"_s,
			"F2"_s,
			"startEditing"_s,
			"ctrl A"_s,
			"selectAll"_s,
			"ctrl SLASH"_s,
			"selectAll"_s,
			"ctrl BACK_SLASH"_s,
			"clearSelection"_s,
			"ctrl LEFT"_s,
			"scrollLeft"_s,
			"ctrl KP_LEFT"_s,
			"scrollLeft"_s,
			"ctrl RIGHT"_s,
			"scrollRight"_s,
			"ctrl KP_RIGHT"_s,
			"scrollRight"_s,
			"SPACE"_s,
			"addToSelection"_s,
			"ctrl SPACE"_s,
			"toggleAndAnchor"_s,
			"shift SPACE"_s,
			"extendTo"_s,
			"ctrl shift SPACE"_s,
			"moveSelectionTo"_s
		})),
		"Tree.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s
		})),
		"Viewport.font"_s,
		ControlFont,
		"Viewport.background"_s,
		ControlBackgroundColor,
		"Viewport.foreground"_s,
		WindowTextColor
	}));
	table->putDefaults(defaults);
	table->putDefaults($(getLazyValueDefaults()));
	initVistaComponentDefaults(table);
}

bool WindowsLookAndFeel::isOnVista() {
	$init(WindowsLookAndFeel);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	return var$0 && $$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_VISTA) >= 0;
}

bool WindowsLookAndFeel::isOnWindows7() {
	$init(WindowsLookAndFeel);
	$init($OSInfo$OSType);
	bool var$0 = $OSInfo::getOSType() == $OSInfo$OSType::WINDOWS;
	return var$0 && $$nc($OSInfo::getWindowsVersion())->compareTo($OSInfo::WINDOWS_7) >= 0;
}

void WindowsLookAndFeel::initVistaComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	if (!isOnVista()) {
		return;
	}
	$var($StringArray, menuClasses, $new($StringArray, {
		"MenuItem"_s,
		"Menu"_s,
		"CheckBoxMenuItem"_s,
		"RadioButtonMenuItem"_s
	}));
	$var($ObjectArray, menuDefaults, $new($ObjectArray, menuClasses->length * 2));
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".opaque"_s}));
		$var($Object, oldValue, $nc(table)->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $Boolean::FALSE, oldValue));
	}
	$nc(table)->putDefaults(menuDefaults);
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".acceleratorSelectionForeground"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $(table->getColor($$str({menuClasses->get(i), ".acceleratorForeground"_s}))), oldValue));
	}
	table->putDefaults(menuDefaults);
	$var($WindowsIconFactory$VistaMenuItemCheckIconFactory, menuItemCheckIconFactory, $WindowsIconFactory::getMenuItemCheckIconFactory());
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".checkIconFactory"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, menuItemCheckIconFactory, oldValue));
	}
	table->putDefaults(menuDefaults);
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".checkIcon"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $($nc(menuItemCheckIconFactory)->getIcon(menuClasses->get(i))), oldValue));
	}
	table->putDefaults(menuDefaults);
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".evenHeight"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, oldValue));
	}
	table->putDefaults(menuDefaults);
	if (!isOnWindows7()) {
		$var($InsetsUIResource, insets, $new($InsetsUIResource, 0, 0, 0, 0));
		for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".margin"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, insets, oldValue));
		}
		table->putDefaults(menuDefaults);
		$var($Integer, checkIconOffsetInteger, $Integer::valueOf(0));
		for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
			$var($String, key, $str({menuClasses->get(i), ".checkIconOffset"_s}));
			$var($Object, oldValue, table->get(key));
			menuDefaults->set(j++, key);
			menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, checkIconOffsetInteger, oldValue));
		}
		table->putDefaults(menuDefaults);
	}
	int32_t var$1 = $WindowsPopupMenuUI::getSpanBeforeGutter();
	int32_t var$0 = var$1 + $WindowsPopupMenuUI::getGutterWidth();
	$var($Integer, afterCheckIconGap, $Integer::valueOf(var$0 + $WindowsPopupMenuUI::getSpanAfterGutter()));
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".afterCheckIconGap"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, afterCheckIconGap, oldValue));
	}
	table->putDefaults(menuDefaults);
	$var($Object, minimumTextOffset, $new($WindowsLookAndFeel$1, this));
	for (int32_t i = 0, j = 0; i < menuClasses->length; ++i) {
		$var($String, key, $str({menuClasses->get(i), ".minimumTextOffset"_s}));
		$var($Object, oldValue, table->get(key));
		menuDefaults->set(j++, key);
		menuDefaults->set(j++, $$new($WindowsLookAndFeel$XPValue, minimumTextOffset, oldValue));
	}
	table->putDefaults(menuDefaults);
	$var($String, POPUP_MENU_BORDER, "PopupMenu.border"_s);
	$init($TMSchema$Part);
	$var($TMSchema$Part, var$2, $TMSchema$Part::MENU);
	$var($Object, var$3, $cast($UIDefaults$LazyValue, $new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6)));
	$var($Object, popupMenuBorder, $new($WindowsLookAndFeel$XPBorderValue, var$2, var$3, $($BorderFactory::createEmptyBorder(2, 2, 2, 2))));
	table->put(POPUP_MENU_BORDER, popupMenuBorder);
	$init($TMSchema$State);
	$var($Object, var$4, $new($WindowsLookAndFeel$SkinIcon, $TMSchema$Part::HP_HEADERSORTARROW, $TMSchema$State::SORTEDDOWN));
	table->put("Table.ascendingSortIcon"_s, $$new($WindowsLookAndFeel$XPValue, var$4, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7))));
	$var($Object, var$5, $new($WindowsLookAndFeel$SkinIcon, $TMSchema$Part::HP_HEADERSORTARROW, $TMSchema$State::SORTEDUP));
	table->put("Table.descendingSortIcon"_s, $$new($WindowsLookAndFeel$XPValue, var$5, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8))));
}

$Object* WindowsLookAndFeel::getDesktopFontValue($String* fontName, Object$* backup) {
	if (this->useSystemFontSettings) {
		return $new($WindowsLookAndFeel$WindowsFontProperty, fontName, backup);
	}
	return nullptr;
}

$ObjectArray* WindowsLookAndFeel::getLazyValueDefaults() {
	$useLocalObjectStack();
	$init($TMSchema$Part);
	$var($Object, buttonBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::BP_PUSHBUTTON, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9))));
	$var($Object, textFieldBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::EP_EDIT, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10))));
	$var($Object, var$0, $new($InsetsUIResource, 2, 2, 2, 2));
	$var($Object, textFieldMargin, $new($WindowsLookAndFeel$XPValue, var$0, $$new($InsetsUIResource, 1, 1, 1, 1)));
	$var($Object, spinnerBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::EP_EDIT, textFieldBorder, $$new($EmptyBorder, 2, 2, 2, 2)));
	$var($Object, spinnerArrowInsets, $new($WindowsLookAndFeel$XPValue, $$new($InsetsUIResource, 1, 1, 1, 1), nullptr));
	$var($Object, comboBoxBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::CP_COMBOBOX, textFieldBorder));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11));
	$var($UIDefaults$LazyValue, etchedBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12));
	$var($UIDefaults$LazyValue, internalFrameBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13));
	$var($UIDefaults$LazyValue, loweredBevelBorder, $new(WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4));
	$var($UIDefaults$LazyValue, marginBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14));
	$var($UIDefaults$LazyValue, menuBarBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15));
	$var($Object, popupMenuBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::MENU, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6))));
	$var($UIDefaults$LazyValue, progressBarBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16));
	$var($UIDefaults$LazyValue, radioButtonBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17));
	$var($Object, scrollPaneBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LBP_LISTBOX, textFieldBorder));
	$var($Object, tableScrollPaneBorder, $new($WindowsLookAndFeel$XPBorderValue, $TMSchema$Part::LBP_LISTBOX, loweredBevelBorder));
	$var($UIDefaults$LazyValue, tableHeaderBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18));
	$var($UIDefaults$LazyValue, toolBarBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19));
	$var($UIDefaults$LazyValue, toolTipBorder, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20));
	$var($UIDefaults$LazyValue, checkBoxIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21));
	$var($UIDefaults$LazyValue, radioButtonIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22));
	$var($UIDefaults$LazyValue, radioButtonMenuItemIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23));
	$var($UIDefaults$LazyValue, menuItemCheckIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24));
	$var($UIDefaults$LazyValue, menuItemArrowIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25));
	$var($UIDefaults$LazyValue, menuArrowIcon, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26));
	$var($Color, highlight, $cast($Color, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("win.3d.highlightColor"_s)));
	$var($Color, shadow, $cast($Color, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("win.3d.shadowColor"_s)));
	$var($Object, var$1, $cast($UIDefaults$LazyValue, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27)));
	$var($Object, var$2, $cast($UIDefaults$LazyValue, $new(WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28)));
	$var($ObjectArray, lazyDefaults, $new($ObjectArray, {
		"Button.border"_s,
		buttonBorder,
		"CheckBox.border"_s,
		radioButtonBorder,
		"ComboBox.border"_s,
		comboBoxBorder,
		"DesktopIcon.border"_s,
		internalFrameBorder,
		"FormattedTextField.border"_s,
		textFieldBorder,
		"FormattedTextField.margin"_s,
		textFieldMargin,
		"InternalFrame.border"_s,
		internalFrameBorder,
		"List.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"Table.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"Menu.border"_s,
		marginBorder,
		"MenuBar.border"_s,
		menuBarBorder,
		"MenuItem.border"_s,
		marginBorder,
		"PasswordField.border"_s,
		textFieldBorder,
		"PasswordField.margin"_s,
		textFieldMargin,
		"PopupMenu.border"_s,
		popupMenuBorder,
		"ProgressBar.border"_s,
		progressBarBorder,
		"RadioButton.border"_s,
		radioButtonBorder,
		"ScrollPane.border"_s,
		scrollPaneBorder,
		"Spinner.border"_s,
		spinnerBorder,
		"Spinner.arrowButtonInsets"_s,
		spinnerArrowInsets,
		"Spinner.arrowButtonSize"_s,
		$$new($Dimension, 17, 9),
		"Table.scrollPaneBorder"_s,
		tableScrollPaneBorder,
		"TableHeader.cellBorder"_s,
		tableHeaderBorder,
		"TextArea.margin"_s,
		textFieldMargin,
		"TextField.border"_s,
		textFieldBorder,
		"TextField.margin"_s,
		textFieldMargin,
		"TitledBorder.border"_s,
		$$new($WindowsLookAndFeel$2, this, highlight, shadow),
		"ToggleButton.border"_s,
		radioButtonBorder,
		"ToolBar.border"_s,
		toolBarBorder,
		"ToolTip.border"_s,
		toolTipBorder,
		"CheckBox.icon"_s,
		checkBoxIcon,
		"Menu.arrowIcon"_s,
		menuArrowIcon,
		"MenuItem.checkIcon"_s,
		menuItemCheckIcon,
		"MenuItem.arrowIcon"_s,
		menuItemArrowIcon,
		"RadioButton.icon"_s,
		radioButtonIcon,
		"RadioButtonMenuItem.checkIcon"_s,
		radioButtonMenuItemIcon,
		"InternalFrame.layoutTitlePaneAtOrigin"_s,
		$$new($WindowsLookAndFeel$XPValue, $Boolean::TRUE, $Boolean::FALSE),
		"Table.ascendingSortIcon"_s,
		$$new($WindowsLookAndFeel$XPValue, var$1, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7))),
		"Table.descendingSortIcon"_s,
		$$new($WindowsLookAndFeel$XPValue, var$2, $cast($UIDefaults$LazyValue, $$new(WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8)))
	}));
	return lazyDefaults;
}

void WindowsLookAndFeel::uninitialize() {
	$useLocalObjectStack();
	$BasicLookAndFeel::uninitialize();
	$init($WindowsPopupMenuUI);
	if ($WindowsPopupMenuUI::mnemonicListener != nullptr) {
		$$nc($MenuSelectionManager::defaultManager())->removeChangeListener($WindowsPopupMenuUI::mnemonicListener);
	}
	$init($WindowsRootPaneUI);
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->removeKeyEventPostProcessor($WindowsRootPaneUI::altProcessor);
	$WindowsDesktopProperty::flushUnreferencedProperties();
}

void WindowsLookAndFeel::setMnemonicHidden(bool hide) {
	$init(WindowsLookAndFeel);
	if ($UIManager::getBoolean("Button.showMnemonics"_s) == true) {
		WindowsLookAndFeel::isMnemonicHidden$ = false;
	} else {
		WindowsLookAndFeel::isMnemonicHidden$ = hide;
	}
}

bool WindowsLookAndFeel::isMnemonicHidden() {
	$init(WindowsLookAndFeel);
	if ($UIManager::getBoolean("Button.showMnemonics"_s) == true) {
		WindowsLookAndFeel::isMnemonicHidden$ = false;
	}
	return WindowsLookAndFeel::isMnemonicHidden$;
}

bool WindowsLookAndFeel::isClassicWindows() {
	$init(WindowsLookAndFeel);
	return WindowsLookAndFeel::isClassicWindows$;
}

void WindowsLookAndFeel::provideErrorFeedback($Component* component) {
	$BasicLookAndFeel::provideErrorFeedback(component);
}

$LayoutStyle* WindowsLookAndFeel::getLayoutStyle() {
	$var($LayoutStyle, style, this->style);
	if (style == nullptr) {
		$assign(style, $new($WindowsLookAndFeel$WindowsLayoutStyle, this));
		$set(this, style, style);
	}
	return style;
}

$Action* WindowsLookAndFeel::createAudioAction(Object$* key) {
	$useLocalObjectStack();
	if (key != nullptr) {
		$var($String, audioKey, $cast($String, key));
		$var($String, audioValue, $cast($String, $UIManager::get(key)));
		return $new($WindowsLookAndFeel$AudioAction, audioKey, audioValue);
	} else {
		return nullptr;
	}
}

void WindowsLookAndFeel::repaintRootPane($Component* c$renamed) {
	$init(WindowsLookAndFeel);
	$useLocalObjectStack();
	$var($Component, c, c$renamed);
	$var($JRootPane, root, nullptr);
	for (; c != nullptr; $assign(c, c->getParent())) {
		if ($instanceOf($JRootPane, c)) {
			$assign(root, $cast($JRootPane, c));
		}
	}
	if (root != nullptr) {
		root->repaint();
	} else {
		$nc(c)->repaint();
	}
}

int32_t WindowsLookAndFeel::dluToPixels(int32_t dlu, int32_t direction) {
	if (this->baseUnitX == 0) {
		calculateBaseUnits();
	}
	if (direction == $SwingConstants::EAST || direction == $SwingConstants::WEST) {
		return dlu * this->baseUnitX / 4;
	}
	if (!WindowsLookAndFeel::$assertionsDisabled && !(direction == $SwingConstants::NORTH || direction == $SwingConstants::SOUTH)) {
		$throwNew($AssertionError);
	}
	return dlu * this->baseUnitY / 8;
}

void WindowsLookAndFeel::calculateBaseUnits() {
	$useLocalObjectStack();
	$var($FontMetrics, metrics, $$nc($Toolkit::getDefaultToolkit())->getFontMetrics($($UIManager::getFont("Button.font"_s))));
	this->baseUnitX = $nc(metrics)->stringWidth("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"_s);
	this->baseUnitX = (this->baseUnitX / 26 + 1) / 2;
	int32_t var$0 = metrics->getAscent();
	this->baseUnitY = var$0 + metrics->getDescent() - 1;
}

$Icon* WindowsLookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	$useLocalObjectStack();
	bool var$1 = icon != nullptr && component != nullptr && $nc($Boolean::TRUE)->equals($(component->getClientProperty(WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY)));
	bool var$0 = var$1 && icon->getIconWidth() > 0;
	if (var$0 && icon->getIconHeight() > 0) {
		int32_t var$2 = icon->getIconWidth();
		$var($BufferedImage, img, $new($BufferedImage, var$2, icon->getIconWidth(), $BufferedImage::TYPE_INT_ARGB));
		icon->paintIcon(component, $(img->getGraphics()), 0, 0);
		$var($ImageFilter, filter, $new($WindowsLookAndFeel$RGBGrayFilter));
		$var($ImageProducer, producer, $new($FilteredImageSource, $(img->getSource()), filter));
		$var($Image, resultImage, component->createImage(producer));
		return $new($ImageIconUIResource, resultImage);
	}
	return $BasicLookAndFeel::getDisabledIcon(component, icon);
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$31($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($SortArrowIcon, false, "Table.sortIconColor"_s));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$29($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($SortArrowIcon, true, "Table.sortIconColor"_s));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$28($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getMenuArrowIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$27($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getMenuItemArrowIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$26($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getMenuItemCheckIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$25($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getRadioButtonMenuItemIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$24($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getRadioButtonIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$23($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsIconFactory::getCheckBoxIcon();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$22($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BorderUIResource::getBlackLineBorderUIResource();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$21($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsBorders::getToolBarBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$20($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsBorders::getTableHeaderBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$19($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BasicBorders::getRadioButtonBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$18($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsBorders::getProgressBarBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$16($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BasicBorders::getMenuBarBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$15($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$13($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsBorders::getInternalFrameBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$12($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BorderUIResource::getEtchedBorderUIResource();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$11($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $WindowsBorders::getFocusCellHighlightBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$10($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BasicBorders::getTextFieldBorder();
}

$Object* WindowsLookAndFeel::lambda$getLazyValueDefaults$9($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BasicBorders::getButtonBorder();
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$8($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($ClassicSortArrowIcon, false));
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$7($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $of($new($ClassicSortArrowIcon, true));
}

$Object* WindowsLookAndFeel::lambda$initVistaComponentDefaults$6($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BasicBorders::getInternalFrameBorder();
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$useLocalObjectStack();
	$load($BasicLookAndFeel);
	return $of($new($WindowsInternalFrameTitlePane$ScalableIconUIResource, $$new($ObjectArray, {
		$($SwingUtilities2::makeIcon($of(this)->getClass(), $BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)),
		$($SwingUtilities2::makeIcon($of(this)->getClass(), WindowsLookAndFeel::class$, "icons/JavaCup32.png"_s))
	})));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	return $BorderUIResource::getLoweredBevelBorderUIResource();
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::BOLD, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
}

$Object* WindowsLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(WindowsLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
}

void WindowsLookAndFeel::clinit$($Class* clazz) {
	WindowsLookAndFeel::$assertionsDisabled = !WindowsLookAndFeel::class$->desiredAssertionStatus();
	$assignStatic(WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY, $new($StringUIClientPropertyKey, "WindowsLookAndFeel.generateHiResDisabledIcon"_s));
	WindowsLookAndFeel::isMnemonicHidden$ = true;
	WindowsLookAndFeel::isClassicWindows$ = false;
}

WindowsLookAndFeel::WindowsLookAndFeel() {
}

$Class* WindowsLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5")) {
			return WindowsLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6")) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7")) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8")) {
			return WindowsLookAndFeel$$Lambda$lambda$initVistaComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$9$9::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$10$10::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$11$11::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$12$12::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$13$13::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$15$14::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$16$15::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$18$16::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$19$17::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$20$18::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$21$19::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$22$20::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$23$21::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$24$22::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$25$23::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$26$24::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$27$25::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$28$26::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$29$27::load$(name, initialize);
		}
		if (name->equals("com.sun.java.swing.plaf.windows.WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28")) {
			return WindowsLookAndFeel$$Lambda$lambda$getLazyValueDefaults$31$28::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLookAndFeel, $assertionsDisabled)},
		{"HI_RES_DISABLED_ICON_CLIENT_KEY", "Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(WindowsLookAndFeel, HI_RES_DISABLED_ICON_CLIENT_KEY)},
		{"updatePending", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, updatePending)},
		{"useSystemFontSettings", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, useSystemFontSettings)},
		{"useSystemFontSizeSettings", "Z", nullptr, $PRIVATE, $field(WindowsLookAndFeel, useSystemFontSizeSettings)},
		{"themeActive", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, themeActive)},
		{"dllName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, dllName)},
		{"colorName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, colorName)},
		{"sizeName", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, sizeName)},
		{"aaSettings", "Lcom/sun/java/swing/plaf/windows/WindowsDesktopProperty;", nullptr, $PRIVATE, $field(WindowsLookAndFeel, aaSettings)},
		{"style", "Ljavax/swing/LayoutStyle;", nullptr, $PRIVATE | $TRANSIENT, $field(WindowsLookAndFeel, style)},
		{"baseUnitX", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel, baseUnitX)},
		{"baseUnitY", "I", nullptr, $PRIVATE, $field(WindowsLookAndFeel, baseUnitY)},
		{"isMnemonicHidden", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsLookAndFeel, isMnemonicHidden$)},
		{"isClassicWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsLookAndFeel, isClassicWindows$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsLookAndFeel, init$, void)},
		{"calculateBaseUnits", "()V", nullptr, $PRIVATE, $method(WindowsLookAndFeel, calculateBaseUnits, void)},
		{"createAudioAction", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel, createAudioAction, $Action*, Object$*)},
		{"dluToPixels", "(II)I", nullptr, $PRIVATE, $method(WindowsLookAndFeel, dluToPixels, int32_t, int32_t, int32_t)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, getDescription, $String*)},
		{"getDesktopFontValue", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(WindowsLookAndFeel, getDesktopFontValue, $Object*, $String*, Object$*)},
		{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, getDisabledIcon, $Icon*, $JComponent*, $Icon*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, getID, $String*)},
		{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, getLayoutStyle, $LayoutStyle*)},
		{"getLazyValueDefaults", "()[Ljava/lang/Object;", nullptr, $PRIVATE, $method(WindowsLookAndFeel, getLazyValueDefaults, $ObjectArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, getName, $String*)},
		{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel, initClassDefaults, void, $UIDefaults*)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(WindowsLookAndFeel, initResourceBundle, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(WindowsLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{"initVistaComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(WindowsLookAndFeel, initVistaComponentDefaults, void, $UIDefaults*)},
		{"initialize", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, initialize, void)},
		{"isClassicWindows", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsLookAndFeel, isClassicWindows, bool)},
		{"isMnemonicHidden", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsLookAndFeel, isMnemonicHidden, bool)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, isNativeLookAndFeel, bool)},
		{"isOnVista", "()Z", nullptr, $STATIC, $staticMethod(WindowsLookAndFeel, isOnVista, bool)},
		{"isOnWindows7", "()Z", nullptr, $STATIC, $staticMethod(WindowsLookAndFeel, isOnWindows7, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, isSupportedLookAndFeel, bool)},
		{"lambda$getLazyValueDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$10, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$11, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$12, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$13, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$15", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$15, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$16, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$18, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$19, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$20, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$21, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$22, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$23, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$24, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$25, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$26, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$27, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$28, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$29, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$31, $Object*, $UIDefaults*)},
		{"lambda$getLazyValueDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$getLazyValueDefaults$9, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initComponentDefaults$0, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initComponentDefaults$1, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initComponentDefaults$2, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initComponentDefaults$3, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initComponentDefaults$4, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNTHETIC, $method(WindowsLookAndFeel, lambda$initComponentDefaults$5, $Object*, $UIDefaults*)},
		{"lambda$initVistaComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initVistaComponentDefaults$6, $Object*, $UIDefaults*)},
		{"lambda$initVistaComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initVistaComponentDefaults$7, $Object*, $UIDefaults*)},
		{"lambda$initVistaComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsLookAndFeel, lambda$initVistaComponentDefaults$8, $Object*, $UIDefaults*)},
		{"provideErrorFeedback", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, provideErrorFeedback, void, $Component*)},
		{"repaintRootPane", "(Ljava/awt/Component;)V", nullptr, $STATIC, $staticMethod(WindowsLookAndFeel, repaintRootPane, void, $Component*)},
		{"setMnemonicHidden", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsLookAndFeel, setMnemonicHidden, void, bool)},
		{"uninitialize", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel, uninitialize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FocusColorProperty", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "RGBGrayFilter", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsLayoutStyle", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FontDesktopProperty", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPDLUValue", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPColorValue", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPBorderValue", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontSizeProperty", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "WindowsFontProperty", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "SkinIcon", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "ActiveWindowsIcon", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "LazyWindowsIcon", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "AudioAction", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
		"javax.swing.plaf.basic.BasicLookAndFeel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$RGBGrayFilter,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsLayoutStyle,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FontDesktopProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPDLUValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontSizeProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$WindowsFontProperty,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$SkinIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$LazyWindowsIcon,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$AudioAction,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$2,com.sun.java.swing.plaf.windows.WindowsLookAndFeel$1"
	};
	$loadClass(WindowsLookAndFeel, name, initialize, &classInfo$$, WindowsLookAndFeel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsLookAndFeel));
	});
	return class$;
}

$Class* WindowsLookAndFeel::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com