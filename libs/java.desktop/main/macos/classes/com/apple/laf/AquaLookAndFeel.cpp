#include <com/apple/laf/AquaLookAndFeel.h>
#include <apple/laf/JRSUIUtils$TabbedPane.h>
#include <apple/laf/JRSUIUtils.h>
#include <com/apple/laf/AquaButtonBorder.h>
#include <com/apple/laf/AquaButtonCheckBoxUI.h>
#include <com/apple/laf/AquaButtonRadioUI.h>
#include <com/apple/laf/AquaFonts.h>
#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaIcon$SystemIcon.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaInternalFrameUI.h>
#include <com/apple/laf/AquaKeyBindings$LateBoundInputMap.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <com/apple/laf/AquaListUI.h>
#include <com/apple/laf/AquaLookAndFeel$1.h>
#include <com/apple/laf/AquaLookAndFeel$2.h>
#include <com/apple/laf/AquaLookAndFeel$3.h>
#include <com/apple/laf/AquaMenuBarBorder.h>
#include <com/apple/laf/AquaMenuBorder.h>
#include <com/apple/laf/AquaMenuPainter.h>
#include <com/apple/laf/AquaMnemonicHandler.h>
#include <com/apple/laf/AquaScrollRegionBorder.h>
#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <com/apple/laf/AquaTableHeaderBorder.h>
#include <com/apple/laf/AquaTextFieldBorder.h>
#include <com/apple/laf/AquaToolBarUI.h>
#include <com/apple/laf/ScreenPopupFactory.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef FALSE
#undef GRAY
#undef PKG_PREFIX
#undef TRAILING
#undef TRUE

using $JRSUIUtils = ::apple::laf::JRSUIUtils;
using $JRSUIUtils$TabbedPane = ::apple::laf::JRSUIUtils$TabbedPane;
using $AquaButtonBorder = ::com::apple::laf::AquaButtonBorder;
using $AquaButtonCheckBoxUI = ::com::apple::laf::AquaButtonCheckBoxUI;
using $AquaButtonRadioUI = ::com::apple::laf::AquaButtonRadioUI;
using $AquaFonts = ::com::apple::laf::AquaFonts;
using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaIcon$SystemIcon = ::com::apple::laf::AquaIcon$SystemIcon;
using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaInternalFrameUI = ::com::apple::laf::AquaInternalFrameUI;
using $AquaKeyBindings = ::com::apple::laf::AquaKeyBindings;
using $AquaListUI = ::com::apple::laf::AquaListUI;
using $AquaLookAndFeel$1 = ::com::apple::laf::AquaLookAndFeel$1;
using $AquaLookAndFeel$2 = ::com::apple::laf::AquaLookAndFeel$2;
using $AquaLookAndFeel$3 = ::com::apple::laf::AquaLookAndFeel$3;
using $AquaMenuBarBorder = ::com::apple::laf::AquaMenuBarBorder;
using $AquaMenuBorder = ::com::apple::laf::AquaMenuBorder;
using $AquaMenuPainter = ::com::apple::laf::AquaMenuPainter;
using $AquaMnemonicHandler = ::com::apple::laf::AquaMnemonicHandler;
using $AquaScrollRegionBorder = ::com::apple::laf::AquaScrollRegionBorder;
using $AquaSplitPaneDividerUI = ::com::apple::laf::AquaSplitPaneDividerUI;
using $AquaTableHeaderBorder = ::com::apple::laf::AquaTableHeaderBorder;
using $AquaTextFieldBorder = ::com::apple::laf::AquaTextFieldBorder;
using $AquaToolBarUI = ::com::apple::laf::AquaToolBarUI;
using $ScreenPopupFactory = ::com::apple::laf::ScreenPopupFactory;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ActionMap = ::javax::swing::ActionMap;
using $BorderFactory = ::javax::swing::BorderFactory;
using $PopupFactory = ::javax::swing::PopupFactory;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$0(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$1(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$2(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$3(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$4(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$5(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$6(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$7(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$8(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$9(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$10(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$11(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$12(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$13(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$14(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$15(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$16(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$17(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$18(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$19(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$20(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$21(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$23(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$24(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$25(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$26(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$27(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$28(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$29(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$30(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$31(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$32(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$35(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$37(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$38(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$39(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$40(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$41(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$42(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::class$ = nullptr;

class AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39 : public $UIDefaults$LazyValue {
	$class(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		 return AquaLookAndFeel::lambda$initComponentDefaults$43(t);
	}
};
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39);
	});
	return class$;
}
$Class* AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::class$ = nullptr;

$String* AquaLookAndFeel::sPropertyPrefix = nullptr;
$String* AquaLookAndFeel::PKG_PREFIX = nullptr;

void AquaLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
}

$String* AquaLookAndFeel::getName() {
	return "Mac OS X"_s;
}

$String* AquaLookAndFeel::getID() {
	return "Aqua"_s;
}

$String* AquaLookAndFeel::getDescription() {
	return "Aqua Look and Feel for Mac OS X"_s;
}

bool AquaLookAndFeel::getSupportsWindowDecorations() {
	return false;
}

bool AquaLookAndFeel::isNativeLookAndFeel() {
	return true;
}

bool AquaLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

void AquaLookAndFeel::initialize() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($AquaLookAndFeel$1, this));
	$AccessController::doPrivileged($$new($AquaLookAndFeel$2, this));
	$BasicLookAndFeel::initialize();
	$var($ScreenPopupFactory, spf, $new($ScreenPopupFactory));
	spf->setActive(true);
	$PopupFactory::setSharedInstance(spf);
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->addKeyEventPostProcessor($($AquaMnemonicHandler::getInstance()));
}

void AquaLookAndFeel::uninitialize() {
	$useLocalObjectStack();
	$$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->removeKeyEventPostProcessor($($AquaMnemonicHandler::getInstance()));
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	if (popupFactory != nullptr && $instanceOf($ScreenPopupFactory, popupFactory)) {
		$cast($ScreenPopupFactory, popupFactory)->setActive(false);
	}
	$BasicLookAndFeel::uninitialize();
}

$ActionMap* AquaLookAndFeel::getAudioActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, audioActionMap, $cast($ActionMap, $UIManager::get("AuditoryCues.actionMap"_s)));
	if (audioActionMap != nullptr) {
		return audioActionMap;
	}
	$var($ObjectArray, acList, $cast($ObjectArray, $UIManager::get("AuditoryCues.cueList"_s)));
	if (acList != nullptr) {
		$assign(audioActionMap, $new($ActionMapUIResource));
		for (int32_t counter = acList->length - 1; counter >= 0; --counter) {
			audioActionMap->put(acList->get(counter), $(createAudioAction(acList->get(counter))));
		}
	}
	$$nc($UIManager::getLookAndFeelDefaults())->put("AuditoryCues.actionMap"_s, audioActionMap);
	return audioActionMap;
}

$UIDefaults* AquaLookAndFeel::getDefaults() {
	$var($UIDefaults, table, $new($UIDefaults));
	try {
		initClassDefaults(table);
		$BasicLookAndFeel::initSystemColorDefaults(table);
		$BasicLookAndFeel::initComponentDefaults(table);
		initSystemColorDefaults(table);
		initComponentDefaults(table);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
	return table;
}

void AquaLookAndFeel::initResourceBundle($UIDefaults* table) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc(table)->setDefaultLocale($($Locale::getDefault()));
	$$nc($SwingAccessor::getUIDefaultsAccessor())->addInternalBundle(table, $$str({AquaLookAndFeel::PKG_PREFIX, "resources.aqua"_s}));
	try {
		$var($ResourceBundle, aquaProperties, $ResourceBundle::getBundle($$str({AquaLookAndFeel::PKG_PREFIX, "resources.aqua"_s})));
		$var($Enumeration, propertyKeys, $nc(aquaProperties)->getKeys());
		while ($nc(propertyKeys)->hasMoreElements()) {
			$var($String, key, $cast($String, propertyKeys->nextElement()));
			table->put(key, $(aquaProperties->getString(key)));
		}
	} catch ($Exception& e) {
	}
}

void AquaLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	initResourceBundle(table);
	$var($InsetsUIResource, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($InsetsUIResource, menuItemMargin, zeroInsets);
	$var($Boolean, useOpaqueComponents, $Boolean::TRUE);
	$var($Boolean, buttonShouldBeOpaque, $Boolean::FALSE);
	$var($Object, listCellRendererActiveValue, $new($AquaLookAndFeel$3, this));
	$var($Border, toolTipBorder, $new($BorderUIResource$EmptyBorderUIResource, 2, 0, 2, 0));
	$var($ColorUIResource, toolTipBackground, $new($ColorUIResource, 255, 255, $cast(int32_t, (255.0 * 0.8))));
	$init($Color);
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, smokyGlass, $new($ColorUIResource, $$new($Color, 0, 0, 0, 152)));
	$var($ColorUIResource, dockIconRim, $new($ColorUIResource, $$new($Color, 192, 192, 192, 192)));
	$var($ColorUIResource, mediumTranslucentBlack, $new($ColorUIResource, $$new($Color, 0, 0, 0, 100)));
	$var($ColorUIResource, translucentWhite, $new($ColorUIResource, $$new($Color, 255, 255, 255, 254)));
	$var($ColorUIResource, disabled, $new($ColorUIResource, 0.5f, 0.5f, 0.5f));
	$var($ColorUIResource, disabledShadow, $new($ColorUIResource, 0.25f, 0.25f, 0.25f));
	$var($ColorUIResource, selected, $new($ColorUIResource, 1.0f, 0.4f, 0.4f));
	$var($ColorUIResource, selectedTabTitlePressedColor, $new($ColorUIResource, 240, 240, 240));
	$var($ColorUIResource, selectedTabTitleDisabledColor, $new($ColorUIResource, $$new($Color, (float)1, (float)1, (float)1, 0.55f)));
	$var($ColorUIResource, selectedTabTitleNormalColor, white);
	$var($Color, selectedControlTextColor, $AquaImageFactory::getSelectedControlColorUIResource());
	$var($ColorUIResource, selectedTabTitleShadowDisabledColor, $new($ColorUIResource, $$new($Color, (float)0, (float)0, (float)0, 0.25f)));
	$var($ColorUIResource, selectedTabTitleShadowNormalColor, mediumTranslucentBlack);
	$var($ColorUIResource, nonSelectedTabTitleNormalColor, black);
	$var($ColorUIResource, toolbarDragHandleColor, $new($ColorUIResource, 140, 140, 140));
	$var($UIDefaults$LazyValue, marginBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0));
	int32_t zero = 0;
	$var($Object, editorMargin, zeroInsets);
	int32_t textCaretBlinkRate = 500;
	$var($UIDefaults$LazyValue, textFieldBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1));
	$var($Object, textAreaBorder, marginBorder);
	$var($UIDefaults$LazyValue, scollListBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2));
	$var($UIDefaults$LazyValue, aquaTitledBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3));
	$var($UIDefaults$LazyValue, aquaInsetBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4));
	$var($Border, listHeaderBorder, $AquaTableHeaderBorder::getListHeaderBorder());
	$var($Border, zeroBorder, $new($BorderUIResource$EmptyBorderUIResource, 0, 0, 0, 0));
	$var($Color, selectionBackground, $AquaImageFactory::getSelectionBackgroundColorUIResource());
	$var($Color, selectionForeground, $AquaImageFactory::getSelectionForegroundColorUIResource());
	$var($Color, selectionInactiveBackground, $AquaImageFactory::getSelectionInactiveBackgroundColorUIResource());
	$var($Color, selectionInactiveForeground, $AquaImageFactory::getSelectionInactiveForegroundColorUIResource());
	$var($Color, textHighlightText, $AquaImageFactory::getTextSelectionForegroundColorUIResource());
	$var($Color, textHighlight, $AquaImageFactory::getTextSelectionBackgroundColorUIResource());
	$var($Color, textHighlightInactive, $new($ColorUIResource, 212, 212, 212));
	$var($Color, textInactiveText, disabled);
	$var($Color, textForeground, black);
	$var($Color, textBackground, white);
	$var($Color, textInactiveBackground, white);
	$var($Color, textPasswordFieldCapsLockIconColor, mediumTranslucentBlack);
	$var($UIDefaults$LazyValue, internalFrameBorder, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5));
	$var($Color, desktopBackgroundColor, $new($ColorUIResource, $$new($Color, 65, 105, 170)));
	$var($Color, focusRingColor, $AquaImageFactory::getFocusRingColorUIResource());
	$var($Border, focusCellHighlightBorder, $new($BorderUIResource$LineBorderUIResource, focusRingColor));
	$var($Color, windowBackgroundColor, $AquaImageFactory::getWindowBackgroundColorUIResource());
	$var($Color, panelBackgroundColor, windowBackgroundColor);
	$var($Color, tabBackgroundColor, windowBackgroundColor);
	$var($Color, controlBackgroundColor, windowBackgroundColor);
	$var($UIDefaults$LazyValue, controlFont, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6));
	$var($UIDefaults$LazyValue, controlSmallFont, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7));
	$var($UIDefaults$LazyValue, alertHeaderFont, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8));
	$var($UIDefaults$LazyValue, menuFont, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9));
	$var($UIDefaults$LazyValue, viewFont, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10));
	$var($Color, menuBackgroundColor, $new($ColorUIResource, $Color::white));
	$var($Color, menuForegroundColor, black);
	$var($Color, menuSelectedForegroundColor, white);
	$var($Color, menuSelectedBackgroundColor, focusRingColor);
	$var($Color, menuDisabledBackgroundColor, menuBackgroundColor);
	$var($Color, menuDisabledForegroundColor, disabled);
	$var($Color, menuAccelForegroundColor, black);
	$var($Color, menuAccelSelectionForegroundColor, black);
	$var($Border, menuBorder, $new($AquaMenuBorder));
	$var($UIDefaults$LazyInputMap, controlFocusInputMap, $new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
		"SPACE"_s,
		"pressed"_s,
		"released SPACE"_s,
		"released"_s
	})));
	$var($UIDefaults$LazyValue, confirmIcon, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11));
	$var($UIDefaults$LazyValue, cautionIcon, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12));
	$var($UIDefaults$LazyValue, stopIcon, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13));
	$var($UIDefaults$LazyValue, securityIcon, $new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14));
	$var($AquaKeyBindings, aquaKeyBindings, $AquaKeyBindings::instance());
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"control"_s,
		windowBackgroundColor,
		"Button.background"_s,
		controlBackgroundColor,
		"Button.foreground"_s,
		black,
		"Button.disabledText"_s,
		disabled,
		"Button.select"_s,
		selected,
		"Button.border"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15)),
		"Button.font"_s,
		controlFont,
		"Button.textIconGap"_s,
		$($Integer::valueOf(4)),
		"Button.textShiftOffset"_s,
		$($Integer::valueOf(zero)),
		"Button.focusInputMap"_s,
		controlFocusInputMap,
		"Button.margin"_s,
		$$new($InsetsUIResource, 0, 2, 0, 2),
		"Button.opaque"_s,
		buttonShouldBeOpaque,
		"CheckBox.background"_s,
		controlBackgroundColor,
		"CheckBox.foreground"_s,
		black,
		"CheckBox.disabledText"_s,
		disabled,
		"CheckBox.select"_s,
		selected,
		"CheckBox.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16)),
		"CheckBox.font"_s,
		controlFont,
		"CheckBox.border"_s,
		$($AquaButtonBorder::getBevelButtonBorder()),
		"CheckBox.margin"_s,
		$$new($InsetsUIResource, 1, 1, 0, 1),
		"CheckBox.focusInputMap"_s,
		controlFocusInputMap,
		"CheckBoxMenuItem.font"_s,
		menuFont,
		"CheckBoxMenuItem.acceleratorFont"_s,
		menuFont,
		"CheckBoxMenuItem.background"_s,
		menuBackgroundColor,
		"CheckBoxMenuItem.foreground"_s,
		menuForegroundColor,
		"CheckBoxMenuItem.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"CheckBoxMenuItem.selectionForeground"_s,
		menuSelectedForegroundColor,
		"CheckBoxMenuItem.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"CheckBoxMenuItem.disabledForeground"_s,
		menuDisabledForegroundColor,
		"CheckBoxMenuItem.acceleratorForeground"_s,
		menuAccelForegroundColor,
		"CheckBoxMenuItem.acceleratorSelectionForeground"_s,
		menuAccelSelectionForegroundColor,
		"CheckBoxMenuItem.acceleratorDelimiter"_s,
		""_s,
		"CheckBoxMenuItem.border"_s,
		menuBorder,
		"CheckBoxMenuItem.margin"_s,
		menuItemMargin,
		"CheckBoxMenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"CheckBoxMenuItem.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17)),
		"CheckBoxMenuItem.dashIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18)),
		"ColorChooser.background"_s,
		panelBackgroundColor,
		"ComboBox.font"_s,
		controlFont,
		"ComboBox.background"_s,
		controlBackgroundColor,
		"ComboBox.foreground"_s,
		menuForegroundColor,
		"ComboBox.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"ComboBox.selectionForeground"_s,
		menuSelectedForegroundColor,
		"ComboBox.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"ComboBox.disabledForeground"_s,
		menuDisabledForegroundColor,
		"ComboBox.ancestorInputMap"_s,
		$($nc(aquaKeyBindings)->getComboBoxInputMap()),
		"DesktopIcon.border"_s,
		internalFrameBorder,
		"DesktopIcon.borderColor"_s,
		smokyGlass,
		"DesktopIcon.borderRimColor"_s,
		dockIconRim,
		"DesktopIcon.labelBackground"_s,
		mediumTranslucentBlack,
		"Desktop.background"_s,
		desktopBackgroundColor,
		"EditorPane.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getMultiLineTextInputMap()),
		"EditorPane.font"_s,
		controlFont,
		"EditorPane.background"_s,
		textBackground,
		"EditorPane.foreground"_s,
		textForeground,
		"EditorPane.selectionBackground"_s,
		textHighlight,
		"EditorPane.selectionForeground"_s,
		textHighlightText,
		"EditorPane.caretForeground"_s,
		textForeground,
		"EditorPane.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"EditorPane.inactiveForeground"_s,
		textInactiveText,
		"EditorPane.inactiveBackground"_s,
		textInactiveBackground,
		"EditorPane.border"_s,
		textAreaBorder,
		"EditorPane.margin"_s,
		editorMargin,
		"FileChooser.newFolderIcon"_s,
		$($AquaIcon$SystemIcon::getFolderIconUIResource()),
		"FileChooser.upFolderIcon"_s,
		$($AquaIcon$SystemIcon::getFolderIconUIResource()),
		"FileChooser.homeFolderIcon"_s,
		$($AquaIcon$SystemIcon::getDesktopIconUIResource()),
		"FileChooser.detailsViewIcon"_s,
		$($AquaIcon$SystemIcon::getComputerIconUIResource()),
		"FileChooser.listViewIcon"_s,
		$($AquaIcon$SystemIcon::getComputerIconUIResource()),
		"FileView.directoryIcon"_s,
		$($AquaIcon$SystemIcon::getFolderIconUIResource()),
		"FileView.fileIcon"_s,
		$($AquaIcon$SystemIcon::getDocumentIconUIResource()),
		"FileView.computerIcon"_s,
		$($AquaIcon$SystemIcon::getDesktopIconUIResource()),
		"FileView.hardDriveIcon"_s,
		$($AquaIcon$SystemIcon::getHardDriveIconUIResource()),
		"FileView.floppyDriveIcon"_s,
		$($AquaIcon$SystemIcon::getFloppyIconUIResource()),
		"FileChooser.cancelButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.saveButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.openButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.updateButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.helpButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.directoryOpenButtonMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.lookInLabelMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.fileNameLabelMnemonic"_s,
		$($Integer::valueOf(zero)),
		"FileChooser.filesOfTypeLabelMnemonic"_s,
		$($Integer::valueOf(zero)),
		"Focus.color"_s,
		focusRingColor,
		"FormattedTextField.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getFormattedTextFieldInputMap()),
		"FormattedTextField.font"_s,
		controlFont,
		"FormattedTextField.background"_s,
		textBackground,
		"FormattedTextField.foreground"_s,
		textForeground,
		"FormattedTextField.inactiveForeground"_s,
		textInactiveText,
		"FormattedTextField.inactiveBackground"_s,
		textInactiveBackground,
		"FormattedTextField.selectionBackground"_s,
		textHighlight,
		"FormattedTextField.selectionForeground"_s,
		textHighlightText,
		"FormattedTextField.caretForeground"_s,
		textForeground,
		"FormattedTextField.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"FormattedTextField.border"_s,
		textFieldBorder,
		"FormattedTextField.margin"_s,
		zeroInsets,
		"IconButton.font"_s,
		controlSmallFont,
		"InternalFrame.titleFont"_s,
		menuFont,
		"InternalFrame.background"_s,
		windowBackgroundColor,
		"InternalFrame.borderColor"_s,
		windowBackgroundColor,
		"InternalFrame.borderShadow"_s,
		$Color::red,
		"InternalFrame.borderDarkShadow"_s,
		$Color::green,
		"InternalFrame.borderHighlight"_s,
		$Color::blue,
		"InternalFrame.borderLight"_s,
		$Color::yellow,
		"InternalFrame.opaque"_s,
		$Boolean::FALSE,
		"InternalFrame.border"_s,
		nullptr,
		"InternalFrame.icon"_s,
		nullptr,
		"InternalFrame.paletteBorder"_s,
		nullptr,
		"InternalFrame.paletteTitleFont"_s,
		menuFont,
		"InternalFrame.paletteBackground"_s,
		windowBackgroundColor,
		"InternalFrame.optionDialogBorder"_s,
		nullptr,
		"InternalFrame.optionDialogTitleFont"_s,
		menuFont,
		"InternalFrame.optionDialogBackground"_s,
		windowBackgroundColor,
		"InternalFrame.closeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19)),
		"InternalFrame.maximizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20)),
		"InternalFrame.iconifyIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21)),
		"InternalFrame.minimizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21)),
		"InternalFrame.closeSound"_s,
		nullptr,
		"InternalFrame.maximizeSound"_s,
		nullptr,
		"InternalFrame.minimizeSound"_s,
		nullptr,
		"InternalFrame.restoreDownSound"_s,
		nullptr,
		"InternalFrame.restoreUpSound"_s,
		nullptr,
		"InternalFrame.activeTitleBackground"_s,
		windowBackgroundColor,
		"InternalFrame.activeTitleForeground"_s,
		textForeground,
		"InternalFrame.inactiveTitleBackground"_s,
		windowBackgroundColor,
		"InternalFrame.inactiveTitleForeground"_s,
		textInactiveText,
		"InternalFrame.windowBindings"_s,
		$$new($ObjectArray, {
			"shift ESCAPE"_s,
			"showSystemMenu"_s,
			"ctrl SPACE"_s,
			"showSystemMenu"_s,
			"ESCAPE"_s,
			"hideSystemMenu"_s
		}),
		"TitledBorder.font"_s,
		controlFont,
		"TitledBorder.titleColor"_s,
		black,
		"TitledBorder.aquaVariant"_s,
		aquaTitledBorder,
		"InsetBorder.aquaVariant"_s,
		aquaInsetBorder,
		"Label.font"_s,
		controlFont,
		"Label.background"_s,
		controlBackgroundColor,
		"Label.foreground"_s,
		black,
		"Label.disabledForeground"_s,
		disabled,
		"Label.disabledShadow"_s,
		disabledShadow,
		"Label.opaque"_s,
		useOpaqueComponents,
		"Label.border"_s,
		nullptr,
		"List.font"_s,
		viewFont,
		"List.background"_s,
		white,
		"List.foreground"_s,
		black,
		"List.selectionBackground"_s,
		selectionBackground,
		"List.selectionForeground"_s,
		selectionForeground,
		"List.selectionInactiveBackground"_s,
		selectionInactiveBackground,
		"List.selectionInactiveForeground"_s,
		selectionInactiveForeground,
		"List.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"List.border"_s,
		nullptr,
		"List.cellRenderer"_s,
		listCellRendererActiveValue,
		"List.sourceListBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22)),
		"List.sourceListSelectionBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23)),
		"List.sourceListFocusedSelectionBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24)),
		"List.evenRowBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25)),
		"List.oddRowBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26)),
		"List.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getListInputMap()),
		"Menu.font"_s,
		menuFont,
		"Menu.acceleratorFont"_s,
		menuFont,
		"Menu.background"_s,
		menuBackgroundColor,
		"Menu.foreground"_s,
		menuForegroundColor,
		"Menu.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"Menu.selectionForeground"_s,
		menuSelectedForegroundColor,
		"Menu.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"Menu.disabledForeground"_s,
		menuDisabledForegroundColor,
		"Menu.acceleratorForeground"_s,
		menuAccelForegroundColor,
		"Menu.acceleratorSelectionForeground"_s,
		menuAccelSelectionForegroundColor,
		"Menu.border"_s,
		menuBorder,
		"Menu.borderPainted"_s,
		$Boolean::FALSE,
		"Menu.margin"_s,
		menuItemMargin,
		"Menu.arrowIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27)),
		"Menu.consumesTabs"_s,
		$Boolean::TRUE,
		"Menu.menuPopupOffsetY"_s,
		$($Integer::valueOf(1)),
		"Menu.submenuPopupOffsetY"_s,
		$($Integer::valueOf(-4)),
		"MenuBar.font"_s,
		menuFont,
		"MenuBar.background"_s,
		menuBackgroundColor,
		"MenuBar.foreground"_s,
		menuForegroundColor,
		"MenuBar.border"_s,
		$$new($AquaMenuBarBorder),
		"MenuBar.margin"_s,
		$$new($InsetsUIResource, 0, 8, 0, 8),
		"MenuBar.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"MenuBar.selectionForeground"_s,
		menuSelectedForegroundColor,
		"MenuBar.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"MenuBar.disabledForeground"_s,
		menuDisabledForegroundColor,
		"MenuBar.backgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28)),
		"MenuBar.selectedBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29)),
		"MenuItem.font"_s,
		menuFont,
		"MenuItem.acceleratorFont"_s,
		menuFont,
		"MenuItem.background"_s,
		menuBackgroundColor,
		"MenuItem.foreground"_s,
		menuForegroundColor,
		"MenuItem.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"MenuItem.selectionForeground"_s,
		menuSelectedForegroundColor,
		"MenuItem.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"MenuItem.disabledForeground"_s,
		menuDisabledForegroundColor,
		"MenuItem.acceleratorForeground"_s,
		menuAccelForegroundColor,
		"MenuItem.acceleratorSelectionForeground"_s,
		menuAccelSelectionForegroundColor,
		"MenuItem.acceleratorDelimiter"_s,
		""_s,
		"MenuItem.border"_s,
		menuBorder,
		"MenuItem.margin"_s,
		menuItemMargin,
		"MenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"MenuItem.selectedBackgroundPainter"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		"OptionPane.font"_s,
		alertHeaderFont,
		"OptionPane.messageFont"_s,
		controlFont,
		"OptionPane.buttonFont"_s,
		controlFont,
		"OptionPane.background"_s,
		windowBackgroundColor,
		"OptionPane.foreground"_s,
		black,
		"OptionPane.messageForeground"_s,
		black,
		"OptionPane.border"_s,
		$$new($BorderUIResource$EmptyBorderUIResource, 12, 21, 17, 21),
		"OptionPane.messageAreaBorder"_s,
		zeroBorder,
		"OptionPane.buttonAreaBorder"_s,
		$$new($BorderUIResource$EmptyBorderUIResource, 13, 0, 0, 0),
		"OptionPane.minimumSize"_s,
		$$new($DimensionUIResource, 262, 90),
		"OptionPane.errorIcon"_s,
		stopIcon,
		"OptionPane.informationIcon"_s,
		confirmIcon,
		"OptionPane.warningIcon"_s,
		cautionIcon,
		"OptionPane.questionIcon"_s,
		confirmIcon,
		"_SecurityDecisionIcon"_s,
		securityIcon,
		"OptionPane.windowBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"close"_s
		}),
		"OptionPane.errorSound"_s,
		nullptr,
		"OptionPane.informationSound"_s,
		nullptr,
		"OptionPane.questionSound"_s,
		nullptr,
		"OptionPane.warningSound"_s,
		nullptr,
		"OptionPane.buttonClickThreshhold"_s,
		$($Integer::valueOf(500)),
		"OptionPane.yesButtonMnemonic"_s,
		""_s,
		"OptionPane.noButtonMnemonic"_s,
		""_s,
		"OptionPane.okButtonMnemonic"_s,
		""_s,
		"OptionPane.cancelButtonMnemonic"_s,
		""_s,
		"Panel.font"_s,
		controlFont,
		"Panel.background"_s,
		panelBackgroundColor,
		"Panel.foreground"_s,
		black,
		"Panel.opaque"_s,
		useOpaqueComponents,
		"PasswordField.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getPasswordFieldInputMap()),
		"PasswordField.font"_s,
		controlFont,
		"PasswordField.background"_s,
		textBackground,
		"PasswordField.foreground"_s,
		textForeground,
		"PasswordField.inactiveForeground"_s,
		textInactiveText,
		"PasswordField.inactiveBackground"_s,
		textInactiveBackground,
		"PasswordField.selectionBackground"_s,
		textHighlight,
		"PasswordField.selectionForeground"_s,
		textHighlightText,
		"PasswordField.caretForeground"_s,
		textForeground,
		"PasswordField.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"PasswordField.border"_s,
		textFieldBorder,
		"PasswordField.margin"_s,
		zeroInsets,
		"PasswordField.echoChar"_s,
		$($Character::valueOf((char16_t)9679)),
		"PasswordField.capsLockIconColor"_s,
		textPasswordFieldCapsLockIconColor,
		"PopupMenu.font"_s,
		menuFont,
		"PopupMenu.background"_s,
		menuBackgroundColor,
		"PopupMenu.translucentBackground"_s,
		white,
		"PopupMenu.foreground"_s,
		menuForegroundColor,
		"PopupMenu.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"PopupMenu.selectionForeground"_s,
		menuSelectedForegroundColor,
		"PopupMenu.border"_s,
		menuBorder,
		"ProgressBar.font"_s,
		controlFont,
		"ProgressBar.foreground"_s,
		black,
		"ProgressBar.background"_s,
		controlBackgroundColor,
		"ProgressBar.selectionForeground"_s,
		black,
		"ProgressBar.selectionBackground"_s,
		white,
		"ProgressBar.border"_s,
		$$new($BorderUIResource, $($BorderFactory::createEmptyBorder())),
		"ProgressBar.repaintInterval"_s,
		$($Integer::valueOf(20)),
		"RadioButton.background"_s,
		controlBackgroundColor,
		"RadioButton.foreground"_s,
		black,
		"RadioButton.disabledText"_s,
		disabled,
		"RadioButton.select"_s,
		selected,
		"RadioButton.icon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31)),
		"RadioButton.font"_s,
		controlFont,
		"RadioButton.border"_s,
		$($AquaButtonBorder::getBevelButtonBorder()),
		"RadioButton.margin"_s,
		$$new($InsetsUIResource, 1, 1, 0, 1),
		"RadioButton.focusInputMap"_s,
		controlFocusInputMap,
		"RadioButtonMenuItem.font"_s,
		menuFont,
		"RadioButtonMenuItem.acceleratorFont"_s,
		menuFont,
		"RadioButtonMenuItem.background"_s,
		menuBackgroundColor,
		"RadioButtonMenuItem.foreground"_s,
		menuForegroundColor,
		"RadioButtonMenuItem.selectionBackground"_s,
		menuSelectedBackgroundColor,
		"RadioButtonMenuItem.selectionForeground"_s,
		menuSelectedForegroundColor,
		"RadioButtonMenuItem.disabledBackground"_s,
		menuDisabledBackgroundColor,
		"RadioButtonMenuItem.disabledForeground"_s,
		menuDisabledForegroundColor,
		"RadioButtonMenuItem.acceleratorForeground"_s,
		menuAccelForegroundColor,
		"RadioButtonMenuItem.acceleratorSelectionForeground"_s,
		menuAccelSelectionForegroundColor,
		"RadioButtonMenuItem.acceleratorDelimiter"_s,
		""_s,
		"RadioButtonMenuItem.border"_s,
		menuBorder,
		"RadioButtonMenuItem.margin"_s,
		menuItemMargin,
		"RadioButtonMenuItem.borderPainted"_s,
		$Boolean::TRUE,
		"RadioButtonMenuItem.checkIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17)),
		"RadioButtonMenuItem.dashIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18)),
		"Separator.background"_s,
		nullptr,
		"Separator.foreground"_s,
		$$new($ColorUIResource, 212, 212, 212),
		"ScrollBar.border"_s,
		nullptr,
		"ScrollBar.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getScrollBarInputMap()),
		"ScrollBar.focusInputMap.RightToLeft"_s,
		$($nc(aquaKeyBindings)->getScrollBarRightToLeftInputMap()),
		"ScrollBar.width"_s,
		$($Integer::valueOf(16)),
		"ScrollBar.background"_s,
		white,
		"ScrollBar.foreground"_s,
		black,
		"ScrollPane.font"_s,
		controlFont,
		"ScrollPane.background"_s,
		white,
		"ScrollPane.foreground"_s,
		black,
		"ScrollPane.border"_s,
		scollListBorder,
		"ScrollPane.viewportBorder"_s,
		nullptr,
		"ScrollPane.ancestorInputMap"_s,
		$($nc(aquaKeyBindings)->getScrollPaneInputMap()),
		"ScrollPane.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, 0)),
		"Viewport.font"_s,
		controlFont,
		"Viewport.background"_s,
		white,
		"Viewport.foreground"_s,
		black,
		"Slider.foreground"_s,
		black,
		"Slider.background"_s,
		controlBackgroundColor,
		"Slider.font"_s,
		controlSmallFont,
		"Slider.tickColor"_s,
		$$new($ColorUIResource, $Color::GRAY),
		"Slider.border"_s,
		nullptr,
		"Slider.focusInsets"_s,
		$$new($InsetsUIResource, 2, 2, 2, 2),
		"Slider.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getSliderInputMap()),
		"Slider.focusInputMap.RightToLeft"_s,
		$($nc(aquaKeyBindings)->getSliderRightToLeftInputMap()),
		"Spinner.font"_s,
		controlFont,
		"Spinner.background"_s,
		controlBackgroundColor,
		"Spinner.foreground"_s,
		black,
		"Spinner.border"_s,
		nullptr,
		"Spinner.arrowButtonSize"_s,
		$$new($Dimension, 16, 5),
		"Spinner.ancestorInputMap"_s,
		$($nc(aquaKeyBindings)->getSpinnerInputMap()),
		"Spinner.editorBorderPainted"_s,
		$Boolean::TRUE,
		"Spinner.editorAlignment"_s,
		$($Integer::valueOf($SwingConstants::TRAILING)),
		"SplitPane.background"_s,
		panelBackgroundColor,
		"SplitPane.border"_s,
		scollListBorder,
		"SplitPane.dividerSize"_s,
		$($Integer::valueOf(9)),
		"SplitPaneDivider.border"_s,
		nullptr,
		"SplitPaneDivider.horizontalGradientVariant"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32)),
		"TabbedPane.font"_s,
		controlFont,
		"TabbedPane.smallFont"_s,
		controlSmallFont,
		"TabbedPane.useSmallLayout"_s,
		$Boolean::FALSE,
		"TabbedPane.background"_s,
		tabBackgroundColor,
		"TabbedPane.foreground"_s,
		black,
		"TabbedPane.opaque"_s,
		useOpaqueComponents,
		"TabbedPane.textIconGap"_s,
		$($Integer::valueOf(4)),
		"TabbedPane.tabInsets"_s,
		$$new($InsetsUIResource, 0, 10, 3, 10),
		"TabbedPane.leftTabInsets"_s,
		$$new($InsetsUIResource, 0, 10, 3, 10),
		"TabbedPane.rightTabInsets"_s,
		$$new($InsetsUIResource, 0, 10, 3, 10),
		"TabbedPane.tabAreaInsets"_s,
		$$new($InsetsUIResource, 3, 9, -1, 9),
		"TabbedPane.contentBorderInsets"_s,
		$$new($InsetsUIResource, 8, 0, 0, 0),
		"TabbedPane.selectedTabPadInsets"_s,
		$$new($InsetsUIResource, 0, 0, 0, 0),
		"TabbedPane.tabsOverlapBorder"_s,
		$Boolean::TRUE,
		"TabbedPane.selectedTabTitlePressedColor"_s,
		selectedTabTitlePressedColor,
		"TabbedPane.selectedTabTitleDisabledColor"_s,
		selectedTabTitleDisabledColor,
		"TabbedPane.selectedTabTitleNormalColor"_s,
		$JRSUIUtils::isMacOSXBigSurOrAbove() ? $of(selectedControlTextColor) : $of(selectedTabTitleNormalColor),
		"TabbedPane.selectedTabTitleShadowDisabledColor"_s,
		selectedTabTitleShadowDisabledColor,
		"TabbedPane.selectedTabTitleShadowNormalColor"_s,
		selectedTabTitleShadowNormalColor,
		"TabbedPane.nonSelectedTabTitleNormalColor"_s,
		nonSelectedTabTitleNormalColor,
		"Table.font"_s,
		viewFont,
		"Table.foreground"_s,
		black,
		"Table.background"_s,
		white,
		"Table.selectionForeground"_s,
		selectionForeground,
		"Table.selectionBackground"_s,
		selectionBackground,
		"Table.selectionInactiveBackground"_s,
		selectionInactiveBackground,
		"Table.selectionInactiveForeground"_s,
		selectionInactiveForeground,
		"Table.gridColor"_s,
		white,
		"Table.focusCellBackground"_s,
		textHighlightText,
		"Table.focusCellForeground"_s,
		textHighlight,
		"Table.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"Table.scrollPaneBorder"_s,
		scollListBorder,
		"Table.ancestorInputMap"_s,
		$($nc(aquaKeyBindings)->getTableInputMap()),
		"Table.ancestorInputMap.RightToLeft"_s,
		$($nc(aquaKeyBindings)->getTableRightToLeftInputMap()),
		"TableHeader.font"_s,
		controlSmallFont,
		"TableHeader.foreground"_s,
		black,
		"TableHeader.background"_s,
		white,
		"TableHeader.cellBorder"_s,
		listHeaderBorder,
		"TextArea.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getMultiLineTextInputMap()),
		"TextArea.font"_s,
		controlFont,
		"TextArea.background"_s,
		textBackground,
		"TextArea.foreground"_s,
		textForeground,
		"TextArea.inactiveForeground"_s,
		textInactiveText,
		"TextArea.inactiveBackground"_s,
		textInactiveBackground,
		"TextArea.selectionBackground"_s,
		textHighlight,
		"TextArea.selectionForeground"_s,
		textHighlightText,
		"TextArea.caretForeground"_s,
		textForeground,
		"TextArea.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"TextArea.border"_s,
		textAreaBorder,
		"TextArea.margin"_s,
		zeroInsets,
		"TextComponent.selectionBackgroundInactive"_s,
		textHighlightInactive,
		"TextField.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getTextFieldInputMap()),
		"TextField.font"_s,
		controlFont,
		"TextField.background"_s,
		textBackground,
		"TextField.foreground"_s,
		textForeground,
		"TextField.inactiveForeground"_s,
		textInactiveText,
		"TextField.inactiveBackground"_s,
		textInactiveBackground,
		"TextField.selectionBackground"_s,
		textHighlight,
		"TextField.selectionForeground"_s,
		textHighlightText,
		"TextField.caretForeground"_s,
		textForeground,
		"TextField.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"TextField.border"_s,
		textFieldBorder,
		"TextField.margin"_s,
		zeroInsets,
		"TextPane.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getMultiLineTextInputMap()),
		"TextPane.font"_s,
		controlFont,
		"TextPane.background"_s,
		textBackground,
		"TextPane.foreground"_s,
		textForeground,
		"TextPane.selectionBackground"_s,
		textHighlight,
		"TextPane.selectionForeground"_s,
		textHighlightText,
		"TextPane.caretForeground"_s,
		textForeground,
		"TextPane.caretBlinkRate"_s,
		$($Integer::valueOf(textCaretBlinkRate)),
		"TextPane.inactiveForeground"_s,
		textInactiveText,
		"TextPane.inactiveBackground"_s,
		textInactiveBackground,
		"TextPane.border"_s,
		textAreaBorder,
		"TextPane.margin"_s,
		editorMargin,
		"ToggleButton.background"_s,
		controlBackgroundColor,
		"ToggleButton.foreground"_s,
		black,
		"ToggleButton.disabledText"_s,
		disabled,
		"ToggleButton.border"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15)),
		"ToggleButton.font"_s,
		controlFont,
		"ToggleButton.focusInputMap"_s,
		controlFocusInputMap,
		"ToggleButton.margin"_s,
		$$new($InsetsUIResource, 2, 2, 2, 2),
		"ToolBar.font"_s,
		controlFont,
		"ToolBar.background"_s,
		panelBackgroundColor,
		"ToolBar.foreground"_s,
		$$new($ColorUIResource, $Color::gray),
		"ToolBar.dockingBackground"_s,
		panelBackgroundColor,
		"ToolBar.dockingForeground"_s,
		selectionBackground,
		"ToolBar.floatingBackground"_s,
		panelBackgroundColor,
		"ToolBar.floatingForeground"_s,
		$$new($ColorUIResource, $Color::darkGray),
		"ToolBar.border"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33)),
		"ToolBar.borderHandleColor"_s,
		toolbarDragHandleColor,
		"ToolBar.separatorSize"_s,
		nullptr,
		"ToolBarButton.margin"_s,
		$$new($InsetsUIResource, 3, 3, 3, 3),
		"ToolBarButton.insets"_s,
		$$new($InsetsUIResource, 1, 1, 1, 1),
		"ToolTip.font"_s,
		controlSmallFont,
		"ToolTip.background"_s,
		toolTipBackground,
		"ToolTip.foreground"_s,
		black,
		"ToolTip.border"_s,
		toolTipBorder,
		"Tree.font"_s,
		viewFont,
		"Tree.background"_s,
		white,
		"Tree.foreground"_s,
		black,
		"Tree.hash"_s,
		white,
		"Tree.line"_s,
		white,
		"Tree.textForeground"_s,
		black,
		"Tree.textBackground"_s,
		white,
		"Tree.selectionForeground"_s,
		selectionForeground,
		"Tree.selectionBackground"_s,
		selectionBackground,
		"Tree.selectionInactiveBackground"_s,
		selectionInactiveBackground,
		"Tree.selectionInactiveForeground"_s,
		selectionInactiveForeground,
		"Tree.selectionBorderColor"_s,
		selectionBackground,
		"Tree.editorBorderSelectionColor"_s,
		nullptr,
		"Tree.leftChildIndent"_s,
		$($Integer::valueOf(7)),
		"Tree.rightChildIndent"_s,
		$($Integer::valueOf(13)),
		"Tree.rowHeight"_s,
		$($Integer::valueOf(19)),
		"Tree.scrollsOnExpand"_s,
		$Boolean::FALSE,
		"Tree.openIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34)),
		"Tree.closedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35)),
		"Tree.leafIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36)),
		"Tree.expandedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37)),
		"Tree.collapsedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38)),
		"Tree.rightToLeftCollapsedIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39)),
		"Tree.changeSelectionWithFocus"_s,
		$Boolean::TRUE,
		"Tree.drawsFocusBorderAroundIcon"_s,
		$Boolean::FALSE,
		"Tree.focusInputMap"_s,
		$($nc(aquaKeyBindings)->getTreeInputMap()),
		"Tree.focusInputMap.RightToLeft"_s,
		$($nc(aquaKeyBindings)->getTreeRightToLeftInputMap()),
		"Tree.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s
		}))
	}));
	$nc(table)->putDefaults(defaults);
	$SwingUtilities2::putAATextInfo(true, table);
}

void AquaLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
}

void AquaLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$var($String, basicPackageName, "javax.swing.plaf.basic."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		"ButtonUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonUI"_s}),
		"CheckBoxUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonCheckBoxUI"_s}),
		"CheckBoxMenuItemUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s}),
		"LabelUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaLabelUI"_s}),
		"ListUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaListUI"_s}),
		"MenuUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuUI"_s}),
		"MenuItemUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s}),
		"OptionPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaOptionPaneUI"_s}),
		"PanelUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaPanelUI"_s}),
		"RadioButtonMenuItemUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuItemUI"_s}),
		"RadioButtonUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonRadioUI"_s}),
		"ProgressBarUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaProgressBarUI"_s}),
		"RootPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaRootPaneUI"_s}),
		"SliderUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaSliderUI"_s}),
		"ScrollBarUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaScrollBarUI"_s}),
		"TabbedPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, ($JRSUIUtils$TabbedPane::shouldUseTabbedPaneContrastUI() ? "AquaTabbedPaneContrastUI"_s : "AquaTabbedPaneUI"_s)}),
		"TableUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTableUI"_s}),
		"ToggleButtonUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaButtonToggleUI"_s}),
		"ToolBarUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolBarUI"_s}),
		"ToolTipUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolTipUI"_s}),
		"TreeUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTreeUI"_s}),
		"InternalFrameUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFrameUI"_s}),
		"DesktopIconUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFrameDockIconUI"_s}),
		"DesktopPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaInternalFramePaneUI"_s}),
		"EditorPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaEditorPaneUI"_s}),
		"TextFieldUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextFieldUI"_s}),
		"TextPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextPaneUI"_s}),
		"ComboBoxUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaComboBoxUI"_s}),
		"PopupMenuUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuUI"_s}),
		"TextAreaUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextAreaUI"_s}),
		"MenuBarUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaMenuBarUI"_s}),
		"FileChooserUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaFileChooserUI"_s}),
		"PasswordFieldUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextPasswordFieldUI"_s}),
		"TableHeaderUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTableHeaderUI"_s}),
		"FormattedTextFieldUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaTextFieldFormattedUI"_s}),
		"SpinnerUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaSpinnerUI"_s}),
		"SplitPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaSplitPaneUI"_s}),
		"ScrollPaneUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaScrollPaneUI"_s}),
		"PopupMenuSeparatorUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuSeparatorUI"_s}),
		"SeparatorUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaPopupMenuSeparatorUI"_s}),
		"ToolBarSeparatorUI"_s,
		$$str({AquaLookAndFeel::PKG_PREFIX, "AquaToolBarSeparatorUI"_s}),
		"ColorChooserUI"_s,
		$$str({basicPackageName, "BasicColorChooserUI"_s}),
		"ViewportUI"_s,
		$$str({basicPackageName, "BasicViewportUI"_s})
	}));
	$nc(table)->putDefaults(uiDefaults);
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$43($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getTreeRightToLeftCollapsedIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$42($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getTreeCollapsedIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$41($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getTreeExpandedIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$40($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeDocumentIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$39($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeFolderIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$38($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getTreeOpenFolderIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$37($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaToolBarUI::getToolBarBorder();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$35($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaSplitPaneDividerUI::getHorizontalSplitDividerGradientVariant();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$32($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaButtonRadioUI::getSizingRadioButtonIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaMenuPainter::getSelectedMenuItemPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaMenuPainter::getSelectedMenuBarItemPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaMenuPainter::getMenuBarPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getMenuArrowIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaListUI::getListOddBackgroundPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$26($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaListUI::getListEvenBackgroundPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$25($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaListUI::getSourceListFocusedSelectionBackgroundPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$24($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaListUI::getSourceListSelectionBackgroundPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaListUI::getSourceListBackgroundPainter();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaInternalFrameUI::exportMinimizeIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaInternalFrameUI::exportZoomIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaInternalFrameUI::exportCloseIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getMenuItemDashIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaImageFactory::getMenuItemCheckIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaButtonCheckBoxUI::getSizingCheckBoxIcon();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$15($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaButtonBorder::getDynamicButtonBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$14($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getLockImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$13($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getStopImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$12($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getCautionImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$11($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaImageFactory::getConfirmImageIcon());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$10($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getViewFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getMenuFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getAlertHeaderFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getControlTextSmallFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$6($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaFonts::getControlTextFont());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $BasicBorders::getInternalFrameBorder();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaGroupBorder::getTitlelessBorder();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $AquaGroupBorder::getBorderForTitledBorder();
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaScrollRegionBorder::getScrollRegionBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($AquaTextFieldBorder::getTextFieldBorder());
}

$Object* AquaLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(AquaLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

AquaLookAndFeel::AquaLookAndFeel() {
}

void AquaLookAndFeel::clinit$($Class* clazz) {
	$assignStatic(AquaLookAndFeel::sPropertyPrefix, "apple.laf."_s);
	$assignStatic(AquaLookAndFeel::PKG_PREFIX, "com.apple.laf."_s);
}

$Class* AquaLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$15$15::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$16$16::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$17$17::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$18$18::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$19$19::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$20$20::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$21$21::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$32$31::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$35$32::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$37$33::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$38$34::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$39$35::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$40$36::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$41$37::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$42$38::load$(name, initialize);
		}
		if (name->equals("com.apple.laf.AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39")) {
			return AquaLookAndFeel$$Lambda$lambda$initComponentDefaults$43$39::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"sPropertyPrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaLookAndFeel, sPropertyPrefix)},
		{"PKG_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaLookAndFeel, PKG_PREFIX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaLookAndFeel, init$, void)},
		{"getAudioActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED, $virtualMethod(AquaLookAndFeel, getAudioActionMap, $ActionMap*)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, getDefaults, $UIDefaults*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, getDescription, $String*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, getID, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, getName, $String*)},
		{"getSupportsWindowDecorations", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, getSupportsWindowDecorations, bool)},
		{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(AquaLookAndFeel, initClassDefaults, void, $UIDefaults*)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(AquaLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(AquaLookAndFeel, initResourceBundle, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(AquaLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{"initialize", "()V", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, initialize, void)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, isSupportedLookAndFeel, bool)},
		{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$0, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$1, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$10", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$10, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$11", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$11, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$12, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$13, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$14", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$14, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$15", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$15, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$16, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$17, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$18, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$19, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$2, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$20, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$21, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$23, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$24", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$24, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$25", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$25, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$26", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$26, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$27, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$28, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$29, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$3, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$30, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$31, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$32", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$32, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$35", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$35, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$37", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$37, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$38", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$38, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$39", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$39, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$4, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$40", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$40, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$41", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$41, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$42", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$42, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$43", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$43, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$5, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$6, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$7, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$8, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(AquaLookAndFeel, lambda$initComponentDefaults$9, $Object*, $UIDefaults*)},
		{"uninitialize", "()V", nullptr, $PUBLIC, $virtualMethod(AquaLookAndFeel, uninitialize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaLookAndFeel$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaLookAndFeel$2", nullptr, nullptr, 0},
		{"com.apple.laf.AquaLookAndFeel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaLookAndFeel",
		"javax.swing.plaf.basic.BasicLookAndFeel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaLookAndFeel$3,com.apple.laf.AquaLookAndFeel$2,com.apple.laf.AquaLookAndFeel$1"
	};
	$loadClass(AquaLookAndFeel, name, initialize, &classInfo$$, AquaLookAndFeel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaLookAndFeel));
	});
	return class$;
}

$Class* AquaLookAndFeel::class$ = nullptr;

		} // laf
	} // apple
} // com