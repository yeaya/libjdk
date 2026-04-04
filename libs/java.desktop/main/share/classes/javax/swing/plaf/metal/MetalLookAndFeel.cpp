#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ErrorDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$FrameBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$InternalFrameBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuBarBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuItemBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$OptionDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$PaletteBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$PopupMenuBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$QuestionDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ScrollPaneBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$TableHeaderBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$ToolBarBorder.h>
#include <javax/swing/plaf/metal/MetalBorders$WarningDialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <javax/swing/plaf/metal/MetalFontDesktopProperty.h>
#include <javax/swing/plaf/metal/MetalHighContrastTheme.h>
#include <javax/swing/plaf/metal/MetalIconFactory$PaletteCloseIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$FontActiveValue.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$MetalLayoutStyle.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CONTROL_TEXT_FONT
#undef DARK
#undef FALSE
#undef INSTANCE
#undef LIGHT
#undef MENU_TEXT_FONT
#undef METAL_LOOK_AND_FEEL_INITED
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef TRUE
#undef USER_TEXT_FONT
#undef WINDOWS
#undef WINDOW_TITLE_FONT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $AccessController = ::java::security::AccessController;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;
using $MetalBorders$ErrorDialogBorder = ::javax::swing::plaf::metal::MetalBorders$ErrorDialogBorder;
using $MetalBorders$FrameBorder = ::javax::swing::plaf::metal::MetalBorders$FrameBorder;
using $MetalBorders$InternalFrameBorder = ::javax::swing::plaf::metal::MetalBorders$InternalFrameBorder;
using $MetalBorders$MenuBarBorder = ::javax::swing::plaf::metal::MetalBorders$MenuBarBorder;
using $MetalBorders$MenuItemBorder = ::javax::swing::plaf::metal::MetalBorders$MenuItemBorder;
using $MetalBorders$OptionDialogBorder = ::javax::swing::plaf::metal::MetalBorders$OptionDialogBorder;
using $MetalBorders$PaletteBorder = ::javax::swing::plaf::metal::MetalBorders$PaletteBorder;
using $MetalBorders$PopupMenuBorder = ::javax::swing::plaf::metal::MetalBorders$PopupMenuBorder;
using $MetalBorders$QuestionDialogBorder = ::javax::swing::plaf::metal::MetalBorders$QuestionDialogBorder;
using $MetalBorders$ScrollPaneBorder = ::javax::swing::plaf::metal::MetalBorders$ScrollPaneBorder;
using $MetalBorders$TableHeaderBorder = ::javax::swing::plaf::metal::MetalBorders$TableHeaderBorder;
using $MetalBorders$ToolBarBorder = ::javax::swing::plaf::metal::MetalBorders$ToolBarBorder;
using $MetalBorders$WarningDialogBorder = ::javax::swing::plaf::metal::MetalBorders$WarningDialogBorder;
using $MetalFontDesktopProperty = ::javax::swing::plaf::metal::MetalFontDesktopProperty;
using $MetalHighContrastTheme = ::javax::swing::plaf::metal::MetalHighContrastTheme;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalIconFactory$PaletteCloseIcon = ::javax::swing::plaf::metal::MetalIconFactory$PaletteCloseIcon;
using $MetalLookAndFeel$AATextListener = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener;
using $MetalLookAndFeel$FontActiveValue = ::javax::swing::plaf::metal::MetalLookAndFeel$FontActiveValue;
using $MetalLookAndFeel$MetalLayoutStyle = ::javax::swing::plaf::metal::MetalLookAndFeel$MetalLayoutStyle;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $AppContext = ::sun::awt::AppContext;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$0(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$1(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$2(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$3(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$4(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$5(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlShadow) {
		$set(this, controlShadow, controlShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$6(controlShadow, t);
	}
	$Color* controlShadow = nullptr;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controlShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlShadow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, init$, void, $Color*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$7(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$8(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$9(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$10(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$11(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlDarkShadow) {
		$set(this, controlDarkShadow, controlDarkShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$12(controlDarkShadow, t);
	}
	$Color* controlDarkShadow = nullptr;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controlDarkShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, controlDarkShadow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, init$, void, $Color*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$16(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$17(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$18(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$19(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$20(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$21(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$22(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$23(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$24(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$25(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$26(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$27(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$28(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$29(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$30(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$31(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$32(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$33(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$34(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$35(internalFrameIconSize, t);
	}
	int32_t internalFrameIconSize = 0;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, internalFrameIconSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$36(internalFrameIconSize, t);
	}
	int32_t internalFrameIconSize = 0;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, internalFrameIconSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$37(internalFrameIconSize, t);
	}
	int32_t internalFrameIconSize = 0;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, internalFrameIconSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t internalFrameIconSize) {
		this->internalFrameIconSize = internalFrameIconSize;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$38(internalFrameIconSize, t);
	}
	int32_t internalFrameIconSize = 0;
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"internalFrameIconSize", "I", nullptr, $PUBLIC, $field(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, internalFrameIconSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$39(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$40(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$41(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$43(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$44(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$46(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$51(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$52(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$53(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$54(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$55(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$56(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::class$ = nullptr;

class MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48 : public $UIDefaults$LazyValue {
	$class(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return MetalLookAndFeel::lambda$initComponentDefaults$57(t);
	}
};
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48);
	});
	return class$;
}
$Class* MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::class$ = nullptr;

bool MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = false;
bool MetalLookAndFeel::checkedWindows = false;
bool MetalLookAndFeel::isWindows$ = false;
bool MetalLookAndFeel::checkedSystemFontSettings = false;
bool MetalLookAndFeel::useSystemFonts$ = false;
$ReferenceQueue* MetalLookAndFeel::queue = nullptr;

void MetalLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
}

bool MetalLookAndFeel::isWindows() {
	$init(MetalLookAndFeel);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!MetalLookAndFeel::checkedWindows) {
		$OSInfo$OSType* osType = $cast($OSInfo$OSType, $AccessController::doPrivileged($($OSInfo::getOSTypeAction())));
		$init($OSInfo$OSType);
		if (osType == $OSInfo$OSType::WINDOWS) {
			MetalLookAndFeel::isWindows$ = true;
			$var($String, systemFonts, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "swing.useSystemFontSettings"_s))));
			MetalLookAndFeel::useSystemFonts$ = (systemFonts != nullptr && ($($Boolean::valueOf(systemFonts))->booleanValue()));
		}
		MetalLookAndFeel::checkedWindows = true;
	}
	return MetalLookAndFeel::isWindows$;
}

bool MetalLookAndFeel::useSystemFonts() {
	$init(MetalLookAndFeel);
	if (isWindows() && MetalLookAndFeel::useSystemFonts$) {
		if (MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED) {
			$var($Object, value, $UIManager::get("Application.useSystemFontSettings"_s));
			return (value == nullptr || $nc($Boolean::TRUE)->equals(value));
		}
		return true;
	}
	return false;
}

bool MetalLookAndFeel::useHighContrastTheme() {
	$init(MetalLookAndFeel);
	$useLocalObjectStack();
	bool var$0 = isWindows();
	if (var$0 && useSystemFonts()) {
		$var($Boolean, highContrast, $cast($Boolean, $$nc($Toolkit::getDefaultToolkit())->getDesktopProperty("win.highContrast.on"_s)));
		return (highContrast == nullptr) ? false : highContrast->booleanValue();
	}
	return false;
}

bool MetalLookAndFeel::usingOcean() {
	$init(MetalLookAndFeel);
	return ($instanceOf($OceanTheme, $(getCurrentTheme())));
}

$String* MetalLookAndFeel::getName() {
	return "Metal"_s;
}

$String* MetalLookAndFeel::getID() {
	return "Metal"_s;
}

$String* MetalLookAndFeel::getDescription() {
	return "The Java(tm) Look and Feel"_s;
}

bool MetalLookAndFeel::isNativeLookAndFeel() {
	return false;
}

bool MetalLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

bool MetalLookAndFeel::getSupportsWindowDecorations() {
	return true;
}

void MetalLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$BasicLookAndFeel::initClassDefaults(table);
	$var($String, metalPackageName, "javax.swing.plaf.metal."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		"ButtonUI"_s,
		$$str({metalPackageName, "MetalButtonUI"_s}),
		"CheckBoxUI"_s,
		$$str({metalPackageName, "MetalCheckBoxUI"_s}),
		"ComboBoxUI"_s,
		$$str({metalPackageName, "MetalComboBoxUI"_s}),
		"DesktopIconUI"_s,
		$$str({metalPackageName, "MetalDesktopIconUI"_s}),
		"FileChooserUI"_s,
		$$str({metalPackageName, "MetalFileChooserUI"_s}),
		"InternalFrameUI"_s,
		$$str({metalPackageName, "MetalInternalFrameUI"_s}),
		"LabelUI"_s,
		$$str({metalPackageName, "MetalLabelUI"_s}),
		"PopupMenuSeparatorUI"_s,
		$$str({metalPackageName, "MetalPopupMenuSeparatorUI"_s}),
		"ProgressBarUI"_s,
		$$str({metalPackageName, "MetalProgressBarUI"_s}),
		"RadioButtonUI"_s,
		$$str({metalPackageName, "MetalRadioButtonUI"_s}),
		"ScrollBarUI"_s,
		$$str({metalPackageName, "MetalScrollBarUI"_s}),
		"ScrollPaneUI"_s,
		$$str({metalPackageName, "MetalScrollPaneUI"_s}),
		"SeparatorUI"_s,
		$$str({metalPackageName, "MetalSeparatorUI"_s}),
		"SliderUI"_s,
		$$str({metalPackageName, "MetalSliderUI"_s}),
		"SplitPaneUI"_s,
		$$str({metalPackageName, "MetalSplitPaneUI"_s}),
		"TabbedPaneUI"_s,
		$$str({metalPackageName, "MetalTabbedPaneUI"_s}),
		"TextFieldUI"_s,
		$$str({metalPackageName, "MetalTextFieldUI"_s}),
		"ToggleButtonUI"_s,
		$$str({metalPackageName, "MetalToggleButtonUI"_s}),
		"ToolBarUI"_s,
		$$str({metalPackageName, "MetalToolBarUI"_s}),
		"ToolTipUI"_s,
		$$str({metalPackageName, "MetalToolTipUI"_s}),
		"TreeUI"_s,
		$$str({metalPackageName, "MetalTreeUI"_s}),
		"RootPaneUI"_s,
		$$str({metalPackageName, "MetalRootPaneUI"_s})
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void MetalLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$var($MetalTheme, theme, getCurrentTheme());
	$var($Color, control, $nc(theme)->getControl());
	$var($ObjectArray, systemColors, $new($ObjectArray, {
		"desktop"_s,
		$(theme->getDesktopColor()),
		"activeCaption"_s,
		$(theme->getWindowTitleBackground()),
		"activeCaptionText"_s,
		$(theme->getWindowTitleForeground()),
		"activeCaptionBorder"_s,
		$(theme->getPrimaryControlShadow()),
		"inactiveCaption"_s,
		$(theme->getWindowTitleInactiveBackground()),
		"inactiveCaptionText"_s,
		$(theme->getWindowTitleInactiveForeground()),
		"inactiveCaptionBorder"_s,
		$(theme->getControlShadow()),
		"window"_s,
		$(theme->getWindowBackground()),
		"windowBorder"_s,
		control,
		"windowText"_s,
		$(theme->getUserTextColor()),
		"menu"_s,
		$(theme->getMenuBackground()),
		"menuText"_s,
		$(theme->getMenuForeground()),
		"text"_s,
		$(theme->getWindowBackground()),
		"textText"_s,
		$(theme->getUserTextColor()),
		"textHighlight"_s,
		$(theme->getTextHighlightColor()),
		"textHighlightText"_s,
		$(theme->getHighlightedTextColor()),
		"textInactiveText"_s,
		$(theme->getInactiveSystemTextColor()),
		"control"_s,
		control,
		"controlText"_s,
		$(theme->getControlTextColor()),
		"controlHighlight"_s,
		$(theme->getControlHighlight()),
		"controlLtHighlight"_s,
		$(theme->getControlHighlight()),
		"controlShadow"_s,
		$(theme->getControlShadow()),
		"controlDkShadow"_s,
		$(theme->getControlDarkShadow()),
		"scrollbar"_s,
		control,
		"info"_s,
		$(theme->getPrimaryControl()),
		"infoText"_s,
		$(theme->getPrimaryControlInfo())
	}));
	$nc(table)->putDefaults(systemColors);
}

void MetalLookAndFeel::initResourceBundle($UIDefaults* table) {
	$$nc($SwingAccessor::getUIDefaultsAccessor())->addInternalBundle(table, "com.sun.swing.internal.plaf.metal.resources.metal"_s);
}

void MetalLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$BasicLookAndFeel::initComponentDefaults(table);
	initResourceBundle(table);
	$var($Color, acceleratorForeground, getAcceleratorForeground());
	$var($Color, acceleratorSelectedForeground, getAcceleratorSelectedForeground());
	$var($Color, control, getControl());
	$var($Color, controlHighlight, getControlHighlight());
	$var($Color, controlShadow, getControlShadow());
	$var($Color, controlDarkShadow, getControlDarkShadow());
	$var($Color, controlTextColor, getControlTextColor());
	$var($Color, focusColor, getFocusColor());
	$var($Color, inactiveControlTextColor, getInactiveControlTextColor());
	$var($Color, menuBackground, getMenuBackground());
	$var($Color, menuSelectedBackground, getMenuSelectedBackground());
	$var($Color, menuDisabledForeground, getMenuDisabledForeground());
	$var($Color, menuSelectedForeground, getMenuSelectedForeground());
	$var($Color, primaryControl, getPrimaryControl());
	$var($Color, primaryControlDarkShadow, getPrimaryControlDarkShadow());
	$var($Color, primaryControlShadow, getPrimaryControlShadow());
	$var($Color, systemTextColor, getSystemTextColor());
	$var($Insets, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($Integer, zero, $Integer::valueOf(0));
	$var($UIDefaults$LazyValue, textFieldBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0));
	$var($UIDefaults$LazyValue, dialogBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1));
	$var($UIDefaults$LazyValue, questionDialogBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($Object, fieldInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		"toggle-componentOrientation"_s
	})));
	$var($Object, passwordInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		$DefaultEditorKit::beginLineAction,
		"ctrl KP_LEFT"_s,
		$DefaultEditorKit::beginLineAction,
		"ctrl RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"ctrl KP_RIGHT"_s,
		$DefaultEditorKit::endLineAction,
		"ctrl shift LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"ctrl shift KP_LEFT"_s,
		$DefaultEditorKit::selectionBeginLineAction,
		"ctrl shift RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
		"ctrl shift KP_RIGHT"_s,
		$DefaultEditorKit::selectionEndLineAction,
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
		"toggle-componentOrientation"_s
	})));
	$var($Object, multilineInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
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
		"UP"_s,
		$DefaultEditorKit::upAction,
		"KP_UP"_s,
		$DefaultEditorKit::upAction,
		"DOWN"_s,
		$DefaultEditorKit::downAction,
		"KP_DOWN"_s,
		$DefaultEditorKit::downAction,
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
		"shift KP_UP"_s,
		$DefaultEditorKit::selectionUpAction,
		"shift DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"shift KP_DOWN"_s,
		$DefaultEditorKit::selectionDownAction,
		"ENTER"_s,
		$DefaultEditorKit::insertBreakAction,
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
		"TAB"_s,
		$DefaultEditorKit::insertTabAction,
		"ctrl BACK_SLASH"_s,
		"unselect"_s,
		"ctrl HOME"_s,
		$DefaultEditorKit::beginAction,
		"ctrl END"_s,
		$DefaultEditorKit::endAction,
		"ctrl shift HOME"_s,
		$DefaultEditorKit::selectionBeginAction,
		"ctrl shift END"_s,
		$DefaultEditorKit::selectionEndAction,
		"ctrl T"_s,
		"next-link-action"_s,
		"ctrl shift T"_s,
		"previous-link-action"_s,
		"ctrl SPACE"_s,
		"activate-link-action"_s,
		"control shift O"_s,
		"toggle-componentOrientation"_s
	})));
	$var($UIDefaults$LazyValue, scrollPaneBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3));
	$var($UIDefaults$LazyValue, buttonBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4));
	$var($UIDefaults$LazyValue, toggleButtonBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5));
	$var($UIDefaults$LazyValue, titledBorderBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlShadow));
	$var($UIDefaults$LazyValue, desktopIconBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7));
	$var($UIDefaults$LazyValue, menuBarBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8));
	$var($UIDefaults$LazyValue, popupMenuBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9));
	$var($UIDefaults$LazyValue, menuItemBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10));
	$var($Object, menuItemAcceleratorDelimiter, "-"_s);
	$var($UIDefaults$LazyValue, toolBarBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11));
	$var($UIDefaults$LazyValue, progressBarBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, controlDarkShadow));
	$var($UIDefaults$LazyValue, toolTipBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, primaryControlDarkShadow));
	$var($UIDefaults$LazyValue, toolTipBorderInactive, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, controlDarkShadow));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, $new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, focusColor));
	$var($Object, tabbedPaneTabAreaInsets, $new($InsetsUIResource, 4, 2, 0, 6));
	$var($Object, tabbedPaneTabInsets, $new($InsetsUIResource, 0, 9, 1, 9));
	int32_t internalFrameIconSize = 16;
	$var($ObjectArray, defaultCueList, $new($ObjectArray, {
		"OptionPane.errorSound"_s,
		"OptionPane.informationSound"_s,
		"OptionPane.questionSound"_s,
		"OptionPane.warningSound"_s
	}));
	$var($MetalTheme, theme, getCurrentTheme());
	$var($Object, menuTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::MENU_TEXT_FONT));
	$var($Object, controlTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::CONTROL_TEXT_FONT));
	$var($Object, userTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::USER_TEXT_FONT));
	$var($Object, windowTitleValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::WINDOW_TITLE_FONT));
	$var($Object, subTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::SUB_TEXT_FONT));
	$var($Object, systemTextValue, $new($MetalLookAndFeel$FontActiveValue, theme, $MetalTheme::SYSTEM_TEXT_FONT));
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"AuditoryCues.defaultCueList"_s,
		defaultCueList,
		"AuditoryCues.playList"_s,
		nullptr,
		"TextField.border"_s,
		textFieldBorder,
		"TextField.font"_s,
		userTextValue,
		"PasswordField.border"_s,
		textFieldBorder,
		"PasswordField.font"_s,
		userTextValue,
		"PasswordField.echoChar"_s,
		$($Character::valueOf((char16_t)8226)),
		"TextArea.font"_s,
		userTextValue,
		"TextPane.background"_s,
		$($nc(table)->get("window"_s)),
		"TextPane.font"_s,
		userTextValue,
		"EditorPane.background"_s,
		$($nc(table)->get("window"_s)),
		"EditorPane.font"_s,
		userTextValue,
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
		"FormattedTextField.border"_s,
		textFieldBorder,
		"FormattedTextField.font"_s,
		userTextValue,
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
		"Button.defaultButtonFollowsFocus"_s,
		$Boolean::FALSE,
		"Button.disabledText"_s,
		inactiveControlTextColor,
		"Button.select"_s,
		controlShadow,
		"Button.border"_s,
		buttonBorder,
		"Button.font"_s,
		controlTextValue,
		"Button.focus"_s,
		focusColor,
		"Button.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"CheckBox.disabledText"_s,
		inactiveControlTextColor,
		"Checkbox.select"_s,
		controlShadow,
		"CheckBox.font"_s,
		controlTextValue,
		"CheckBox.focus"_s,
		focusColor,
		"CheckBox.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13)),
		"CheckBox.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"CheckBox.totalInsets"_s,
		$$new($Insets, 4, 4, 4, 4),
		"RadioButton.disabledText"_s,
		inactiveControlTextColor,
		"RadioButton.select"_s,
		controlShadow,
		"RadioButton.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14)),
		"RadioButton.font"_s,
		controlTextValue,
		"RadioButton.focus"_s,
		focusColor,
		"RadioButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"RadioButton.totalInsets"_s,
		$$new($Insets, 4, 4, 4, 4),
		"ToggleButton.select"_s,
		controlShadow,
		"ToggleButton.disabledText"_s,
		inactiveControlTextColor,
		"ToggleButton.focus"_s,
		focusColor,
		"ToggleButton.border"_s,
		toggleButtonBorder,
		"ToggleButton.font"_s,
		controlTextValue,
		"ToggleButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"FileView.directoryIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		"FileView.fileIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16)),
		"FileView.computerIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17)),
		"FileView.hardDriveIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18)),
		"FileView.floppyDriveIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19)),
		"FileChooser.detailsViewIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20)),
		"FileChooser.homeFolderIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21)),
		"FileChooser.listViewIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22)),
		"FileChooser.newFolderIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23)),
		"FileChooser.upFolderIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24)),
		"FileChooser.usesSingleFilePane"_s,
		$Boolean::TRUE,
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
		"ToolTip.font"_s,
		systemTextValue,
		"ToolTip.border"_s,
		toolTipBorder,
		"ToolTip.borderInactive"_s,
		toolTipBorderInactive,
		"ToolTip.backgroundInactive"_s,
		control,
		"ToolTip.foregroundInactive"_s,
		controlDarkShadow,
		"ToolTip.hideAccelerator"_s,
		$Boolean::FALSE,
		"ToolTipManager.enableToolTipMode"_s,
		"activeApplication"_s,
		"Slider.font"_s,
		controlTextValue,
		"Slider.border"_s,
		nullptr,
		"Slider.foreground"_s,
		primaryControlShadow,
		"Slider.focus"_s,
		focusColor,
		"Slider.focusInsets"_s,
		zeroInsets,
		"Slider.trackWidth"_s,
		$($Integer::valueOf(7)),
		"Slider.majorTickLength"_s,
		$($Integer::valueOf(6)),
		"Slider.horizontalThumbIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25)),
		"Slider.verticalThumbIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26)),
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
			"ctrl PAGE_DOWN"_s,
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
			"ctrl PAGE_UP"_s,
			"positiveBlockIncrement"_s,
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"ProgressBar.font"_s,
		controlTextValue,
		"ProgressBar.foreground"_s,
		primaryControlShadow,
		"ProgressBar.selectionBackground"_s,
		primaryControlDarkShadow,
		"ProgressBar.border"_s,
		progressBarBorder,
		"ProgressBar.cellSpacing"_s,
		zero,
		"ProgressBar.cellLength"_s,
		$($Integer::valueOf(1)),
		"ComboBox.background"_s,
		control,
		"ComboBox.foreground"_s,
		controlTextColor,
		"ComboBox.selectionBackground"_s,
		primaryControlShadow,
		"ComboBox.selectionForeground"_s,
		controlTextColor,
		"ComboBox.font"_s,
		controlTextValue,
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
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"alt DOWN"_s,
			"togglePopup"_s,
			"alt KP_DOWN"_s,
			"togglePopup"_s,
			"alt UP"_s,
			"togglePopup"_s,
			"alt KP_UP"_s,
			"togglePopup"_s,
			"SPACE"_s,
			"spacePopup"_s,
			"ENTER"_s,
			"enterPressed"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s
		})),
		"InternalFrame.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27)),
		"InternalFrame.border"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28)),
		"InternalFrame.optionDialogBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29)),
		"InternalFrame.paletteBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30)),
		"InternalFrame.paletteTitleHeight"_s,
		$($Integer::valueOf(11)),
		"InternalFrame.paletteCloseIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31)),
		"InternalFrame.closeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, internalFrameIconSize)),
		"InternalFrame.maximizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33, internalFrameIconSize)),
		"InternalFrame.iconifyIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34, internalFrameIconSize)),
		"InternalFrame.minimizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35, internalFrameIconSize)),
		"InternalFrame.titleFont"_s,
		windowTitleValue,
		"InternalFrame.windowBindings"_s,
		nullptr,
		"InternalFrame.closeSound"_s,
		"sounds/FrameClose.wav"_s,
		"InternalFrame.maximizeSound"_s,
		"sounds/FrameMaximize.wav"_s,
		"InternalFrame.minimizeSound"_s,
		"sounds/FrameMinimize.wav"_s,
		"InternalFrame.restoreDownSound"_s,
		"sounds/FrameRestoreDown.wav"_s,
		"InternalFrame.restoreUpSound"_s,
		"sounds/FrameRestoreUp.wav"_s,
		"DesktopIcon.border"_s,
		desktopIconBorder,
		"DesktopIcon.font"_s,
		controlTextValue,
		"DesktopIcon.foreground"_s,
		controlTextColor,
		"DesktopIcon.background"_s,
		control,
		"DesktopIcon.width"_s,
		$($Integer::valueOf(160)),
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
			"shift RIGHT"_s,
			"shrinkRight"_s,
			"shift KP_RIGHT"_s,
			"shrinkRight"_s,
			"LEFT"_s,
			"left"_s,
			"KP_LEFT"_s,
			"left"_s,
			"shift LEFT"_s,
			"shrinkLeft"_s,
			"shift KP_LEFT"_s,
			"shrinkLeft"_s,
			"UP"_s,
			"up"_s,
			"KP_UP"_s,
			"up"_s,
			"shift UP"_s,
			"shrinkUp"_s,
			"shift KP_UP"_s,
			"shrinkUp"_s,
			"DOWN"_s,
			"down"_s,
			"KP_DOWN"_s,
			"down"_s,
			"shift DOWN"_s,
			"shrinkDown"_s,
			"shift KP_DOWN"_s,
			"shrinkDown"_s,
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
		"TitledBorder.font"_s,
		controlTextValue,
		"TitledBorder.titleColor"_s,
		systemTextColor,
		"TitledBorder.border"_s,
		titledBorderBorder,
		"Label.font"_s,
		controlTextValue,
		"Label.foreground"_s,
		systemTextColor,
		"Label.disabledForeground"_s,
		$(getInactiveSystemTextColor()),
		"List.font"_s,
		controlTextValue,
		"List.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
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
		"ScrollBar.background"_s,
		control,
		"ScrollBar.highlight"_s,
		controlHighlight,
		"ScrollBar.shadow"_s,
		controlShadow,
		"ScrollBar.darkShadow"_s,
		controlDarkShadow,
		"ScrollBar.thumb"_s,
		primaryControlShadow,
		"ScrollBar.thumbShadow"_s,
		primaryControlDarkShadow,
		"ScrollBar.thumbHighlight"_s,
		primaryControl,
		"ScrollBar.width"_s,
		$($Integer::valueOf(17)),
		"ScrollBar.allowsAbsolutePositioning"_s,
		$Boolean::TRUE,
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
			"HOME"_s,
			"minScroll"_s,
			"END"_s,
			"maxScroll"_s
		})),
		"ScrollPane.border"_s,
		scrollPaneBorder,
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
		"TabbedPane.font"_s,
		controlTextValue,
		"TabbedPane.tabAreaBackground"_s,
		control,
		"TabbedPane.background"_s,
		controlShadow,
		"TabbedPane.light"_s,
		control,
		"TabbedPane.focus"_s,
		primaryControlDarkShadow,
		"TabbedPane.selected"_s,
		control,
		"TabbedPane.selectHighlight"_s,
		controlHighlight,
		"TabbedPane.tabAreaInsets"_s,
		tabbedPaneTabAreaInsets,
		"TabbedPane.tabInsets"_s,
		tabbedPaneTabInsets,
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
		userTextValue,
		"Table.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"Table.scrollPaneBorder"_s,
		scrollPaneBorder,
		"Table.dropLineColor"_s,
		focusColor,
		"Table.dropLineShortColor"_s,
		primaryControlDarkShadow,
		"Table.gridColor"_s,
		controlShadow,
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
		"Table.ascendingSortIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), MetalLookAndFeel::class$, "icons/sortUp.png"_s)),
		"Table.descendingSortIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), MetalLookAndFeel::class$, "icons/sortDown.png"_s)),
		"TableHeader.font"_s,
		userTextValue,
		"TableHeader.cellBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36)),
		"MenuBar.border"_s,
		menuBarBorder,
		"MenuBar.font"_s,
		menuTextValue,
		"MenuBar.windowBindings"_s,
		$$new($ObjectArray, {
			"F10"_s,
			"takeFocus"_s
		}),
		"Menu.border"_s,
		menuItemBorder,
		"Menu.borderPainted"_s,
		$Boolean::TRUE,
		"Menu.menuPopupOffsetX"_s,
		zero,
		"Menu.menuPopupOffsetY"_s,
		zero,
		"Menu.submenuPopupOffsetX"_s,
		$($Integer::valueOf(-4)),
		"Menu.submenuPopupOffsetY"_s,
		$($Integer::valueOf(-3)),
		"Menu.font"_s,
		menuTextValue,
		"Menu.selectionForeground"_s,
		menuSelectedForeground,
		"Menu.selectionBackground"_s,
		menuSelectedBackground,
		"Menu.disabledForeground"_s,
		menuDisabledForeground,
		"Menu.acceleratorFont"_s,
		subTextValue,
		"Menu.acceleratorForeground"_s,
		acceleratorForeground,
		"Menu.acceleratorSelectionForeground"_s,
		acceleratorSelectedForeground,
		"Menu.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37)),
		"Menu.arrowIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38)),
		"MenuItem.border"_s,
		menuItemBorder,
		"MenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"MenuItem.font"_s,
		menuTextValue,
		"MenuItem.selectionForeground"_s,
		menuSelectedForeground,
		"MenuItem.selectionBackground"_s,
		menuSelectedBackground,
		"MenuItem.disabledForeground"_s,
		menuDisabledForeground,
		"MenuItem.acceleratorFont"_s,
		subTextValue,
		"MenuItem.acceleratorForeground"_s,
		acceleratorForeground,
		"MenuItem.acceleratorSelectionForeground"_s,
		acceleratorSelectedForeground,
		"MenuItem.acceleratorDelimiter"_s,
		menuItemAcceleratorDelimiter,
		"MenuItem.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37)),
		"MenuItem.arrowIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		"MenuItem.commandSound"_s,
		"sounds/MenuItemCommand.wav"_s,
		"OptionPane.windowBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"close"_s
		}),
		"OptionPane.informationSound"_s,
		"sounds/OptionPaneInformation.wav"_s,
		"OptionPane.warningSound"_s,
		"sounds/OptionPaneWarning.wav"_s,
		"OptionPane.errorSound"_s,
		"sounds/OptionPaneError.wav"_s,
		"OptionPane.questionSound"_s,
		"sounds/OptionPaneQuestion.wav"_s,
		"OptionPane.errorDialog.border.background"_s,
		$$new($ColorUIResource, 153, 51, 51),
		"OptionPane.errorDialog.titlePane.foreground"_s,
		$$new($ColorUIResource, 51, 0, 0),
		"OptionPane.errorDialog.titlePane.background"_s,
		$$new($ColorUIResource, 255, 153, 153),
		"OptionPane.errorDialog.titlePane.shadow"_s,
		$$new($ColorUIResource, 204, 102, 102),
		"OptionPane.questionDialog.border.background"_s,
		$$new($ColorUIResource, 51, 102, 51),
		"OptionPane.questionDialog.titlePane.foreground"_s,
		$$new($ColorUIResource, 0, 51, 0),
		"OptionPane.questionDialog.titlePane.background"_s,
		$$new($ColorUIResource, 153, 204, 153),
		"OptionPane.questionDialog.titlePane.shadow"_s,
		$$new($ColorUIResource, 102, 153, 102),
		"OptionPane.warningDialog.border.background"_s,
		$$new($ColorUIResource, 153, 102, 51),
		"OptionPane.warningDialog.titlePane.foreground"_s,
		$$new($ColorUIResource, 102, 51, 0),
		"OptionPane.warningDialog.titlePane.background"_s,
		$$new($ColorUIResource, 255, 204, 153),
		"OptionPane.warningDialog.titlePane.shadow"_s,
		$$new($ColorUIResource, 204, 153, 102),
		"Separator.background"_s,
		$(getSeparatorBackground()),
		"Separator.foreground"_s,
		$(getSeparatorForeground()),
		"PopupMenu.border"_s,
		popupMenuBorder,
		"PopupMenu.popupSound"_s,
		"sounds/PopupMenuPopup.wav"_s,
		"PopupMenu.font"_s,
		menuTextValue,
		"CheckBoxMenuItem.border"_s,
		menuItemBorder,
		"CheckBoxMenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"CheckBoxMenuItem.font"_s,
		menuTextValue,
		"CheckBoxMenuItem.selectionForeground"_s,
		menuSelectedForeground,
		"CheckBoxMenuItem.selectionBackground"_s,
		menuSelectedBackground,
		"CheckBoxMenuItem.disabledForeground"_s,
		menuDisabledForeground,
		"CheckBoxMenuItem.acceleratorFont"_s,
		subTextValue,
		"CheckBoxMenuItem.acceleratorForeground"_s,
		acceleratorForeground,
		"CheckBoxMenuItem.acceleratorSelectionForeground"_s,
		acceleratorSelectedForeground,
		"CheckBoxMenuItem.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40)),
		"CheckBoxMenuItem.arrowIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		"CheckBoxMenuItem.commandSound"_s,
		"sounds/MenuItemCommand.wav"_s,
		"RadioButtonMenuItem.border"_s,
		menuItemBorder,
		"RadioButtonMenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"RadioButtonMenuItem.font"_s,
		menuTextValue,
		"RadioButtonMenuItem.selectionForeground"_s,
		menuSelectedForeground,
		"RadioButtonMenuItem.selectionBackground"_s,
		menuSelectedBackground,
		"RadioButtonMenuItem.disabledForeground"_s,
		menuDisabledForeground,
		"RadioButtonMenuItem.acceleratorFont"_s,
		subTextValue,
		"RadioButtonMenuItem.acceleratorForeground"_s,
		acceleratorForeground,
		"RadioButtonMenuItem.acceleratorSelectionForeground"_s,
		acceleratorSelectedForeground,
		"RadioButtonMenuItem.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41)),
		"RadioButtonMenuItem.arrowIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		"RadioButtonMenuItem.commandSound"_s,
		"sounds/MenuItemCommand.wav"_s,
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
		"Spinner.arrowButtonInsets"_s,
		zeroInsets,
		"Spinner.border"_s,
		textFieldBorder,
		"Spinner.arrowButtonBorder"_s,
		buttonBorder,
		"Spinner.font"_s,
		controlTextValue,
		"SplitPane.dividerSize"_s,
		$($Integer::valueOf(10)),
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
		"SplitPane.centerOneTouchButtons"_s,
		$Boolean::FALSE,
		"SplitPane.dividerFocusColor"_s,
		primaryControl,
		"Tree.font"_s,
		userTextValue,
		"Tree.textBackground"_s,
		$(getWindowBackground()),
		"Tree.selectionBorderColor"_s,
		focusColor,
		"Tree.openIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		"Tree.closedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15)),
		"Tree.leafIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16)),
		"Tree.expandedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42)),
		"Tree.collapsedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43)),
		"Tree.line"_s,
		primaryControl,
		"Tree.hash"_s,
		primaryControl,
		"Tree.rowHeight"_s,
		zero,
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
		"ToolBar.border"_s,
		toolBarBorder,
		"ToolBar.background"_s,
		menuBackground,
		"ToolBar.foreground"_s,
		$(getMenuForeground()),
		"ToolBar.font"_s,
		menuTextValue,
		"ToolBar.dockingBackground"_s,
		menuBackground,
		"ToolBar.floatingBackground"_s,
		menuBackground,
		"ToolBar.dockingForeground"_s,
		primaryControlDarkShadow,
		"ToolBar.floatingForeground"_s,
		primaryControl,
		"ToolBar.rolloverBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44)),
		"ToolBar.nonrolloverBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45)),
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
		"RootPane.frameBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46)),
		"RootPane.plainDialogBorder"_s,
		dialogBorder,
		"RootPane.informationDialogBorder"_s,
		dialogBorder,
		"RootPane.errorDialogBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47)),
		"RootPane.colorChooserDialogBorder"_s,
		questionDialogBorder,
		"RootPane.fileChooserDialogBorder"_s,
		questionDialogBorder,
		"RootPane.questionDialogBorder"_s,
		questionDialogBorder,
		"RootPane.warningDialogBorder"_s,
		$cast($UIDefaults$LazyValue, $$new(MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48)),
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
		})
	}));
	table->putDefaults(defaults);
	bool var$1 = isWindows();
	bool var$0 = var$1 && useSystemFonts();
	if (var$0 && $nc(theme)->isSystemTheme()) {
		$var($Object, messageFont, $new($MetalFontDesktopProperty, "win.messagebox.font.height"_s, $MetalTheme::CONTROL_TEXT_FONT));
		$assign(defaults, $new($ObjectArray, {
			"OptionPane.messageFont"_s,
			messageFont,
			"OptionPane.buttonFont"_s,
			messageFont
		}));
		table->putDefaults(defaults);
	}
	flushUnreferenced();
	bool lafCond = $SwingUtilities2::isLocalDisplay();
	$SwingUtilities2::putAATextInfo(lafCond, table);
	$new($MetalLookAndFeel$AATextListener, this);
}

void MetalLookAndFeel::createDefaultTheme() {
	getCurrentTheme();
}

$UIDefaults* MetalLookAndFeel::getDefaults() {
	$useLocalObjectStack();
	MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = true;
	createDefaultTheme();
	$var($UIDefaults, table, $BasicLookAndFeel::getDefaults());
	$var($MetalTheme, currentTheme, getCurrentTheme());
	$nc(currentTheme)->addCustomEntriesToTable(table);
	currentTheme->install();
	return table;
}

void MetalLookAndFeel::provideErrorFeedback($Component* component) {
	$BasicLookAndFeel::provideErrorFeedback(component);
}

void MetalLookAndFeel::setCurrentTheme($MetalTheme* theme) {
	$init(MetalLookAndFeel);
	if (theme == nullptr) {
		$throwNew($NullPointerException, "Can\'t have null theme"_s);
	}
	$$nc($AppContext::getAppContext())->put("currentMetalTheme"_s, theme);
}

$MetalTheme* MetalLookAndFeel::getCurrentTheme() {
	$init(MetalLookAndFeel);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($MetalTheme, currentTheme, nullptr);
	$var($AppContext, context, $AppContext::getAppContext());
	$assign(currentTheme, $cast($MetalTheme, $nc(context)->get("currentMetalTheme"_s)));
	if (currentTheme == nullptr) {
		if (useHighContrastTheme()) {
			$assign(currentTheme, $new($MetalHighContrastTheme));
		} else {
			$var($String, theme, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "swing.metalTheme"_s))));
			if ("steel"_s->equals(theme)) {
				$assign(currentTheme, $new($DefaultMetalTheme));
			} else {
				$assign(currentTheme, $new($OceanTheme));
			}
		}
		setCurrentTheme(currentTheme);
	}
	return currentTheme;
}

$Icon* MetalLookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	if (($instanceOf($ImageIcon, icon)) && MetalLookAndFeel::usingOcean()) {
		return $MetalUtils::getOceanDisabledButtonIcon($($cast($ImageIcon, icon)->getImage()));
	}
	return $BasicLookAndFeel::getDisabledIcon(component, icon);
}

$Icon* MetalLookAndFeel::getDisabledSelectedIcon($JComponent* component, $Icon* icon) {
	if (($instanceOf($ImageIcon, icon)) && MetalLookAndFeel::usingOcean()) {
		return $MetalUtils::getOceanDisabledButtonIcon($($cast($ImageIcon, icon)->getImage()));
	}
	return $BasicLookAndFeel::getDisabledSelectedIcon(component, icon);
}

$FontUIResource* MetalLookAndFeel::getControlTextFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlTextFont();
}

$FontUIResource* MetalLookAndFeel::getSystemTextFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getSystemTextFont();
}

$FontUIResource* MetalLookAndFeel::getUserTextFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getUserTextFont();
}

$FontUIResource* MetalLookAndFeel::getMenuTextFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuTextFont();
}

$FontUIResource* MetalLookAndFeel::getWindowTitleFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowTitleFont();
}

$FontUIResource* MetalLookAndFeel::getSubTextFont() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getSubTextFont();
}

$ColorUIResource* MetalLookAndFeel::getDesktopColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getDesktopColor();
}

$ColorUIResource* MetalLookAndFeel::getFocusColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getFocusColor();
}

$ColorUIResource* MetalLookAndFeel::getWhite() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWhite();
}

$ColorUIResource* MetalLookAndFeel::getBlack() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getBlack();
}

$ColorUIResource* MetalLookAndFeel::getControl() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControl();
}

$ColorUIResource* MetalLookAndFeel::getControlShadow() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlShadow();
}

$ColorUIResource* MetalLookAndFeel::getControlDarkShadow() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlDarkShadow();
}

$ColorUIResource* MetalLookAndFeel::getControlInfo() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlInfo();
}

$ColorUIResource* MetalLookAndFeel::getControlHighlight() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlHighlight();
}

$ColorUIResource* MetalLookAndFeel::getControlDisabled() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlDisabled();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControl() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getPrimaryControl();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlShadow() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getPrimaryControlShadow();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlDarkShadow() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getPrimaryControlDarkShadow();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlInfo() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getPrimaryControlInfo();
}

$ColorUIResource* MetalLookAndFeel::getPrimaryControlHighlight() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getPrimaryControlHighlight();
}

$ColorUIResource* MetalLookAndFeel::getSystemTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getSystemTextColor();
}

$ColorUIResource* MetalLookAndFeel::getControlTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getControlTextColor();
}

$ColorUIResource* MetalLookAndFeel::getInactiveControlTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getInactiveControlTextColor();
}

$ColorUIResource* MetalLookAndFeel::getInactiveSystemTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getInactiveSystemTextColor();
}

$ColorUIResource* MetalLookAndFeel::getUserTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getUserTextColor();
}

$ColorUIResource* MetalLookAndFeel::getTextHighlightColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getTextHighlightColor();
}

$ColorUIResource* MetalLookAndFeel::getHighlightedTextColor() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getHighlightedTextColor();
}

$ColorUIResource* MetalLookAndFeel::getWindowBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowTitleBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowTitleForeground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleInactiveBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowTitleInactiveBackground();
}

$ColorUIResource* MetalLookAndFeel::getWindowTitleInactiveForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getWindowTitleInactiveForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuBackground();
}

$ColorUIResource* MetalLookAndFeel::getMenuForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuSelectedBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuSelectedBackground();
}

$ColorUIResource* MetalLookAndFeel::getMenuSelectedForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuSelectedForeground();
}

$ColorUIResource* MetalLookAndFeel::getMenuDisabledForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getMenuDisabledForeground();
}

$ColorUIResource* MetalLookAndFeel::getSeparatorBackground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getSeparatorBackground();
}

$ColorUIResource* MetalLookAndFeel::getSeparatorForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getSeparatorForeground();
}

$ColorUIResource* MetalLookAndFeel::getAcceleratorForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getAcceleratorForeground();
}

$ColorUIResource* MetalLookAndFeel::getAcceleratorSelectedForeground() {
	$init(MetalLookAndFeel);
	return $$nc(getCurrentTheme())->getAcceleratorSelectedForeground();
}

$LayoutStyle* MetalLookAndFeel::getLayoutStyle() {
	$init($MetalLookAndFeel$MetalLayoutStyle);
	return $MetalLookAndFeel$MetalLayoutStyle::INSTANCE;
}

void MetalLookAndFeel::flushUnreferenced() {
	$init(MetalLookAndFeel);
	$var($MetalLookAndFeel$AATextListener, aatl, nullptr);
	while (($assign(aatl, $cast($MetalLookAndFeel$AATextListener, $nc(MetalLookAndFeel::queue)->poll()))) != nullptr) {
		$nc(aatl)->dispose();
	}
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$57($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$WarningDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$56($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ErrorDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$55($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$FrameBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$54($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getToolBarNonrolloverBorder();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$53($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getToolBarRolloverBorder();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$52($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeControlIcon($($Boolean::valueOf($MetalIconFactory::LIGHT))->booleanValue());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$51($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeControlIcon($($Boolean::valueOf($MetalIconFactory::DARK))->booleanValue());
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$46($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getRadioButtonMenuItemIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$44($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getCheckBoxMenuItemIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$43($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getMenuItemArrowIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$41($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getMenuArrowIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$40($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getMenuItemCheckIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$39($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$TableHeaderBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$38(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getInternalFrameAltMaximizeIcon(internalFrameIconSize);
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$37(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getInternalFrameMinimizeIcon(internalFrameIconSize);
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$36(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getInternalFrameMaximizeIcon(internalFrameIconSize);
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$35(int32_t internalFrameIconSize, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getInternalFrameCloseIcon(internalFrameIconSize);
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$34($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalIconFactory$PaletteCloseIcon));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$33($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$PaletteBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$32($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$OptionDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$InternalFrameBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getInternalFrameDefaultMenuIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getVerticalSliderThumbIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getHorizontalSliderThumbIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getFileChooserUpFolderIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$26($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getFileChooserNewFolderIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$25($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getFileChooserListViewIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$24($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getFileChooserHomeFolderIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getFileChooserDetailViewIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$22($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeFloppyDriveIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeHardDriveIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeComputerIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeLeafIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getTreeFolderIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getRadioButtonIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalIconFactory::getCheckBoxIcon();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$12($Color* controlDarkShadow, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, controlDarkShadow, 1));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$11($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ToolBarBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$10($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$MenuItemBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$PopupMenuBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$MenuBarBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getDesktopIconBorder();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$6($Color* controlShadow, $UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, controlShadow));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getToggleButtonBorder();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getButtonBorder();
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$ScrollPaneBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$QuestionDialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $of($new($MetalBorders$DialogBorder));
}

$Object* MetalLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(MetalLookAndFeel);
	return $MetalBorders::getTextFieldBorder();
}

void MetalLookAndFeel::clinit$($Class* clazz) {
	MetalLookAndFeel::METAL_LOOK_AND_FEEL_INITED = false;
	$assignStatic(MetalLookAndFeel::queue, $new($ReferenceQueue));
}

MetalLookAndFeel::MetalLookAndFeel() {
}

$Class* MetalLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$16$13::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$17$14::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$18$15::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$19$16::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$20$17::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$21$18::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$22$19::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$23$20::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$24$21::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$25$22::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$26$23::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$27$24::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$28$25::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$29$26::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$30$27::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$31$28::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$32$29::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$33$30::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$34$31::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$36$33::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$37$34::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$38$35::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$39$36::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$40$37::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$41$38::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$44$40::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$46$41::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$51$42::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$52$43::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$53$44::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$54$45::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$55$46::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$56$47::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.metal.MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48")) {
			return MetalLookAndFeel$$Lambda$lambda$initComponentDefaults$57$48::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"METAL_LOOK_AND_FEEL_INITED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, METAL_LOOK_AND_FEEL_INITED)},
		{"checkedWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, checkedWindows)},
		{"isWindows", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, isWindows$)},
		{"checkedSystemFontSettings", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, checkedSystemFontSettings)},
		{"useSystemFonts", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MetalLookAndFeel, useSystemFonts$)},
		{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljavax/swing/LookAndFeel;>;", $STATIC, $staticField(MetalLookAndFeel, queue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalLookAndFeel, init$, void)},
		{"createDefaultTheme", "()V", nullptr, $PROTECTED, $virtualMethod(MetalLookAndFeel, createDefaultTheme, void)},
		{"flushUnreferenced", "()V", nullptr, $STATIC, $staticMethod(MetalLookAndFeel, flushUnreferenced, void)},
		{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getAcceleratorForeground, $ColorUIResource*)},
		{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getAcceleratorSelectedForeground, $ColorUIResource*)},
		{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getBlack, $ColorUIResource*)},
		{"getControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControl, $ColorUIResource*)},
		{"getControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlDarkShadow, $ColorUIResource*)},
		{"getControlDisabled", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlDisabled, $ColorUIResource*)},
		{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlHighlight, $ColorUIResource*)},
		{"getControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlInfo, $ColorUIResource*)},
		{"getControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlShadow, $ColorUIResource*)},
		{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlTextColor, $ColorUIResource*)},
		{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getControlTextFont, $FontUIResource*)},
		{"getCurrentTheme", "()Ljavax/swing/plaf/metal/MetalTheme;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getCurrentTheme, $MetalTheme*)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getDefaults, $UIDefaults*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getDescription, $String*)},
		{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getDesktopColor, $ColorUIResource*)},
		{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getDisabledIcon, $Icon*, $JComponent*, $Icon*)},
		{"getDisabledSelectedIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getDisabledSelectedIcon, $Icon*, $JComponent*, $Icon*)},
		{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getFocusColor, $ColorUIResource*)},
		{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getHighlightedTextColor, $ColorUIResource*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getID, $String*)},
		{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getInactiveControlTextColor, $ColorUIResource*)},
		{"getInactiveSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getInactiveSystemTextColor, $ColorUIResource*)},
		{"getLayoutStyle", "()Ljavax/swing/LayoutStyle;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getLayoutStyle, $LayoutStyle*)},
		{"getMenuBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuBackground, $ColorUIResource*)},
		{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuDisabledForeground, $ColorUIResource*)},
		{"getMenuForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuForeground, $ColorUIResource*)},
		{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuSelectedBackground, $ColorUIResource*)},
		{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuSelectedForeground, $ColorUIResource*)},
		{"getMenuTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getMenuTextFont, $FontUIResource*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getName, $String*)},
		{"getPrimaryControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getPrimaryControl, $ColorUIResource*)},
		{"getPrimaryControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getPrimaryControlDarkShadow, $ColorUIResource*)},
		{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getPrimaryControlHighlight, $ColorUIResource*)},
		{"getPrimaryControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getPrimaryControlInfo, $ColorUIResource*)},
		{"getPrimaryControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getPrimaryControlShadow, $ColorUIResource*)},
		{"getSeparatorBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getSeparatorBackground, $ColorUIResource*)},
		{"getSeparatorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getSeparatorForeground, $ColorUIResource*)},
		{"getSubTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getSubTextFont, $FontUIResource*)},
		{"getSupportsWindowDecorations", "()Z", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, getSupportsWindowDecorations, bool)},
		{"getSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getSystemTextColor, $ColorUIResource*)},
		{"getSystemTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getSystemTextFont, $FontUIResource*)},
		{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getTextHighlightColor, $ColorUIResource*)},
		{"getUserTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getUserTextColor, $ColorUIResource*)},
		{"getUserTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getUserTextFont, $FontUIResource*)},
		{"getWhite", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWhite, $ColorUIResource*)},
		{"getWindowBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowBackground, $ColorUIResource*)},
		{"getWindowTitleBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowTitleBackground, $ColorUIResource*)},
		{"getWindowTitleFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowTitleFont, $FontUIResource*)},
		{"getWindowTitleForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowTitleForeground, $ColorUIResource*)},
		{"getWindowTitleInactiveBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowTitleInactiveBackground, $ColorUIResource*)},
		{"getWindowTitleInactiveForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, getWindowTitleInactiveForeground, $ColorUIResource*)},
		{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(MetalLookAndFeel, initClassDefaults, void, $UIDefaults*)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(MetalLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(MetalLookAndFeel, initResourceBundle, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(MetalLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, isSupportedLookAndFeel, bool)},
		{"isWindows", "()Z", nullptr, $STATIC, $staticMethod(MetalLookAndFeel, isWindows, bool)},
		{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$0, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$1, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$10, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$11, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$12", "(Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$12, $Object*, $Color*, $UIDefaults*)},
		{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$16, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$17, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$18, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$19, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$2, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$20, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$21, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$22, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$23, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$24, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$25, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$26, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$27, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$28, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$29, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$3, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$30, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$31, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$32", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$32, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$33", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$33, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$34", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$34, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$35", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$35, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$36", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$36, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$37", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$37, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$38", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$38, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$39", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$39, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$4, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$40", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$40, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$41", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$41, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$43", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$43, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$44", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$44, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$46", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$46, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$5, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$51", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$51, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$52", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$52, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$53", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$53, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$54", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$54, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$55", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$55, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$56", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$56, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$57", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$57, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$6", "(Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$6, $Object*, $Color*, $UIDefaults*)},
		{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$7, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$8, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MetalLookAndFeel, lambda$initComponentDefaults$9, $Object*, $UIDefaults*)},
		{"provideErrorFeedback", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel, provideErrorFeedback, void, $Component*)},
		{"setCurrentTheme", "(Ljavax/swing/plaf/metal/MetalTheme;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalLookAndFeel, setCurrentTheme, void, $MetalTheme*)},
		{"useHighContrastTheme", "()Z", nullptr, $PRIVATE | $STATIC, $staticMethod(MetalLookAndFeel, useHighContrastTheme, bool)},
		{"useSystemFonts", "()Z", nullptr, $STATIC, $staticMethod(MetalLookAndFeel, useSystemFonts, bool)},
		{"usingOcean", "()Z", nullptr, $STATIC, $staticMethod(MetalLookAndFeel, usingOcean, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalLookAndFeel$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle", "javax.swing.plaf.metal.MetalLookAndFeel", "MetalLayoutStyle", $PRIVATE | $STATIC},
		{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
		{"javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue", "javax.swing.plaf.metal.MetalLookAndFeel", "FontActiveValue", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalLookAndFeel",
		"javax.swing.plaf.basic.BasicLookAndFeel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalLookAndFeel$1,javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle,javax.swing.plaf.metal.MetalLookAndFeel$AATextListener,javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1,javax.swing.plaf.metal.MetalLookAndFeel$FontActiveValue"
	};
	$loadClass(MetalLookAndFeel, name, initialize, &classInfo$$, MetalLookAndFeel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalLookAndFeel));
	});
	return class$;
}

$Class* MetalLookAndFeel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax