#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Field.h>
#include <java/security/AccessController.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults$LazyInputMap.h>
#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/BorderUIResource$BevelBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$EmptyBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource$LineBorderUIResource.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/basic/BasicBorders.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$1.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$2.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$3.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$AWTEventHelper.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel$AudioAction.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/icon/SortArrowIcon.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef ALT_MASK
#undef BOLD
#undef DIALOG
#undef FALSE
#undef GUI_DISPOSED
#undef MENU_KEYBOARD_HELPER_KEY
#undef MONOSPACED
#undef MOUSE_GRABBER_KEY
#undef NAME
#undef PLAIN
#undef RAISED
#undef SANS_SERIF
#undef SERIF
#undef TRAILING
#undef TRUE

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyInputMap = ::javax::swing::UIDefaults$LazyInputMap;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $UIManager = ::javax::swing::UIManager;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $BorderUIResource$BevelBorderUIResource = ::javax::swing::plaf::BorderUIResource$BevelBorderUIResource;
using $BorderUIResource$EmptyBorderUIResource = ::javax::swing::plaf::BorderUIResource$EmptyBorderUIResource;
using $BorderUIResource$LineBorderUIResource = ::javax::swing::plaf::BorderUIResource$LineBorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicBorders = ::javax::swing::plaf::basic::BasicBorders;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $BasicIconFactory = ::javax::swing::plaf::basic::BasicIconFactory;
using $BasicLookAndFeel$1 = ::javax::swing::plaf::basic::BasicLookAndFeel$1;
using $BasicLookAndFeel$2 = ::javax::swing::plaf::basic::BasicLookAndFeel$2;
using $BasicLookAndFeel$3 = ::javax::swing::plaf::basic::BasicLookAndFeel$3;
using $BasicLookAndFeel$AWTEventHelper = ::javax::swing::plaf::basic::BasicLookAndFeel$AWTEventHelper;
using $BasicLookAndFeel$AudioAction = ::javax::swing::plaf::basic::BasicLookAndFeel$AudioAction;
using $BasicPopupMenuUI = ::javax::swing::plaf::basic::BasicPopupMenuUI;
using $BasicPopupMenuUI$MenuKeyboardHelper = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SortArrowIcon = ::sun::swing::icon::SortArrowIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$0(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$1(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$2(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$3(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$4(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$5(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$6(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$7(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$8(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$9(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($ColorUIResource* yellow) {
		$set(this, yellow, yellow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$10(yellow, t);
	}
	$ColorUIResource* yellow = nullptr;
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"yellow", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, yellow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/ColorUIResource;)V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, init$, void, $ColorUIResource*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$($Color* controlLtHighlight, $Color* control, $Color* controlDkShadow, $Color* controlShadow) {
		$set(this, controlLtHighlight, controlLtHighlight);
		$set(this, control, control);
		$set(this, controlDkShadow, controlDkShadow);
		$set(this, controlShadow, controlShadow);
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$11(controlLtHighlight, control, controlDkShadow, controlShadow, t);
	}
	$Color* controlLtHighlight = nullptr;
	$Color* control = nullptr;
	$Color* controlDkShadow = nullptr;
	$Color* controlShadow = nullptr;
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"controlLtHighlight", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlLtHighlight)},
		{"control", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, control)},
		{"controlDkShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlDkShadow)},
		{"controlShadow", "Ljava/awt/Color;", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlShadow)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, init$, void, $Color*, $Color*, $Color*, $Color*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$12(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$13(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$14(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$16(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$17(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$18(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$19(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$20(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$21(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$22(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$23(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t zero) {
		this->zero = zero;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$24(zero, t);
	}
	int32_t zero = 0;
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zero", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, zero)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t ten) {
		this->ten = ten;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$25(ten, t);
	}
	int32_t ten = 0;
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ten", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, ten)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$(int32_t zero) {
		this->zero = zero;
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$26(zero, t);
	}
	int32_t zero = 0;
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zero", "I", nullptr, $PUBLIC, $field(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, zero)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, init$, void, int32_t)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$27(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$28(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$29(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$30(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$31(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$35(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::class$ = nullptr;

class BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32 : public $UIDefaults$LazyValue {
	$class(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, $NO_CLASS_INIT, $UIDefaults$LazyValue)
public:
	void init$() {
	}
	virtual $Object* createValue($UIDefaults* t) override {
		return BasicLookAndFeel::lambda$initComponentDefaults$36(t);
	}
};
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, init$, void)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32",
		"java.lang.Object",
		"javax.swing.UIDefaults$LazyValue",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32);
	});
	return class$;
}
$Class* BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::class$ = nullptr;

$String* BasicLookAndFeel::toString() {
	return this->$LookAndFeel::toString();
}

int32_t BasicLookAndFeel::hashCode() {
	return this->$LookAndFeel::hashCode();
}

bool BasicLookAndFeel::equals(Object$* arg0) {
	return this->$LookAndFeel::equals(arg0);
}

$Object* BasicLookAndFeel::clone() {
	return this->$LookAndFeel::clone();
}

void BasicLookAndFeel::finalize() {
	this->$LookAndFeel::finalize();
}

bool BasicLookAndFeel::needsEventHelper = false;

void BasicLookAndFeel::init$() {
	$LookAndFeel::init$();
	$set(this, audioLock, $new($Object));
	$set(this, invocator, nullptr);
	$set(this, disposer, nullptr);
}

$UIDefaults* BasicLookAndFeel::getDefaults() {
	$var($UIDefaults, table, $new($UIDefaults, 610, 0.75f));
	initClassDefaults(table);
	initSystemColorDefaults(table);
	initComponentDefaults(table);
	return table;
}

void BasicLookAndFeel::initialize() {
	if (BasicLookAndFeel::needsEventHelper) {
		installAWTEventListener();
	}
}

void BasicLookAndFeel::installAWTEventListener() {
	if (this->invocator == nullptr) {
		$set(this, invocator, $new($BasicLookAndFeel$AWTEventHelper, this));
		BasicLookAndFeel::needsEventHelper = true;
		$set(this, disposer, $new($BasicLookAndFeel$1, this));
		$init($AppContext);
		$$nc($AppContext::getAppContext())->addPropertyChangeListener($AppContext::GUI_DISPOSED, this->disposer);
	}
}

void BasicLookAndFeel::uninitialize() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($AppContext, context, $AppContext::getAppContext());
	$init($BasicPopupMenuUI);
	$synchronized($BasicPopupMenuUI::MOUSE_GRABBER_KEY) {
		$var($Object, grabber, $nc(context)->get($BasicPopupMenuUI::MOUSE_GRABBER_KEY));
		if (grabber != nullptr) {
			$cast($BasicPopupMenuUI$MouseGrabber, grabber)->uninstall();
		}
	}
	$synchronized($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY) {
		$var($Object, helper, context->get($BasicPopupMenuUI::MENU_KEYBOARD_HELPER_KEY));
		if (helper != nullptr) {
			$cast($BasicPopupMenuUI$MenuKeyboardHelper, helper)->uninstall();
		}
	}
	if (this->invocator != nullptr) {
		$AccessController::doPrivileged(this->invocator);
		$set(this, invocator, nullptr);
	}
	if (this->disposer != nullptr) {
		context->removePropertyChangeListener($AppContext::GUI_DISPOSED, this->disposer);
		$set(this, disposer, nullptr);
	}
}

void BasicLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	$var($String, basicPackageName, "javax.swing.plaf.basic."_s);
	$var($ObjectArray, uiDefaults, $new($ObjectArray, {
		"ButtonUI"_s,
		$$str({basicPackageName, "BasicButtonUI"_s}),
		"CheckBoxUI"_s,
		$$str({basicPackageName, "BasicCheckBoxUI"_s}),
		"ColorChooserUI"_s,
		$$str({basicPackageName, "BasicColorChooserUI"_s}),
		"FormattedTextFieldUI"_s,
		$$str({basicPackageName, "BasicFormattedTextFieldUI"_s}),
		"MenuBarUI"_s,
		$$str({basicPackageName, "BasicMenuBarUI"_s}),
		"MenuUI"_s,
		$$str({basicPackageName, "BasicMenuUI"_s}),
		"MenuItemUI"_s,
		$$str({basicPackageName, "BasicMenuItemUI"_s}),
		"CheckBoxMenuItemUI"_s,
		$$str({basicPackageName, "BasicCheckBoxMenuItemUI"_s}),
		"RadioButtonMenuItemUI"_s,
		$$str({basicPackageName, "BasicRadioButtonMenuItemUI"_s}),
		"RadioButtonUI"_s,
		$$str({basicPackageName, "BasicRadioButtonUI"_s}),
		"ToggleButtonUI"_s,
		$$str({basicPackageName, "BasicToggleButtonUI"_s}),
		"PopupMenuUI"_s,
		$$str({basicPackageName, "BasicPopupMenuUI"_s}),
		"ProgressBarUI"_s,
		$$str({basicPackageName, "BasicProgressBarUI"_s}),
		"ScrollBarUI"_s,
		$$str({basicPackageName, "BasicScrollBarUI"_s}),
		"ScrollPaneUI"_s,
		$$str({basicPackageName, "BasicScrollPaneUI"_s}),
		"SplitPaneUI"_s,
		$$str({basicPackageName, "BasicSplitPaneUI"_s}),
		"SliderUI"_s,
		$$str({basicPackageName, "BasicSliderUI"_s}),
		"SeparatorUI"_s,
		$$str({basicPackageName, "BasicSeparatorUI"_s}),
		"SpinnerUI"_s,
		$$str({basicPackageName, "BasicSpinnerUI"_s}),
		"ToolBarSeparatorUI"_s,
		$$str({basicPackageName, "BasicToolBarSeparatorUI"_s}),
		"PopupMenuSeparatorUI"_s,
		$$str({basicPackageName, "BasicPopupMenuSeparatorUI"_s}),
		"TabbedPaneUI"_s,
		$$str({basicPackageName, "BasicTabbedPaneUI"_s}),
		"TextAreaUI"_s,
		$$str({basicPackageName, "BasicTextAreaUI"_s}),
		"TextFieldUI"_s,
		$$str({basicPackageName, "BasicTextFieldUI"_s}),
		"PasswordFieldUI"_s,
		$$str({basicPackageName, "BasicPasswordFieldUI"_s}),
		"TextPaneUI"_s,
		$$str({basicPackageName, "BasicTextPaneUI"_s}),
		"EditorPaneUI"_s,
		$$str({basicPackageName, "BasicEditorPaneUI"_s}),
		"TreeUI"_s,
		$$str({basicPackageName, "BasicTreeUI"_s}),
		"LabelUI"_s,
		$$str({basicPackageName, "BasicLabelUI"_s}),
		"ListUI"_s,
		$$str({basicPackageName, "BasicListUI"_s}),
		"ToolBarUI"_s,
		$$str({basicPackageName, "BasicToolBarUI"_s}),
		"ToolTipUI"_s,
		$$str({basicPackageName, "BasicToolTipUI"_s}),
		"ComboBoxUI"_s,
		$$str({basicPackageName, "BasicComboBoxUI"_s}),
		"TableUI"_s,
		$$str({basicPackageName, "BasicTableUI"_s}),
		"TableHeaderUI"_s,
		$$str({basicPackageName, "BasicTableHeaderUI"_s}),
		"InternalFrameUI"_s,
		$$str({basicPackageName, "BasicInternalFrameUI"_s}),
		"DesktopPaneUI"_s,
		$$str({basicPackageName, "BasicDesktopPaneUI"_s}),
		"DesktopIconUI"_s,
		$$str({basicPackageName, "BasicDesktopIconUI"_s}),
		"FileChooserUI"_s,
		$$str({basicPackageName, "BasicFileChooserUI"_s}),
		"OptionPaneUI"_s,
		$$str({basicPackageName, "BasicOptionPaneUI"_s}),
		"PanelUI"_s,
		$$str({basicPackageName, "BasicPanelUI"_s}),
		"ViewportUI"_s,
		$$str({basicPackageName, "BasicViewportUI"_s}),
		"RootPaneUI"_s,
		$$str({basicPackageName, "BasicRootPaneUI"_s})
	}));
	$nc(table)->putDefaults(uiDefaults);
}

void BasicLookAndFeel::initSystemColorDefaults($UIDefaults* table) {
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

void BasicLookAndFeel::loadSystemColors($UIDefaults* table, $StringArray* systemColors, bool useNative) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (useNative) {
		for (int32_t i = 0; i < $nc(systemColors)->length; i += 2) {
			$init($Color);
			$var($Color, color, $Color::black);
			try {
				$var($String, name, systemColors->get(i));
				$load($SystemColor);
				$assign(color, $cast($Color, $$nc($SystemColor::class$->getField(name))->get(nullptr)));
			} catch ($Exception& e) {
			}
			$nc(table)->put(systemColors->get(i), $$new($ColorUIResource, color));
		}
	} else {
		for (int32_t i = 0; i < $nc(systemColors)->length; i += 2) {
			$init($Color);
			$var($Color, color, $Color::black);
			try {
				$assign(color, $Color::decode(systemColors->get(i + 1)));
			} catch ($NumberFormatException& e) {
				e->printStackTrace();
			}
			$nc(table)->put(systemColors->get(i), $$new($ColorUIResource, color));
		}
	}
}

void BasicLookAndFeel::initResourceBundle($UIDefaults* table) {
	$useLocalObjectStack();
	$nc(table)->setDefaultLocale($($Locale::getDefault()));
	$$nc($SwingAccessor::getUIDefaultsAccessor())->addInternalBundle(table, "com.sun.swing.internal.plaf.basic.resources.basic"_s);
}

void BasicLookAndFeel::initComponentDefaults($UIDefaults* table) {
	$useLocalObjectStack();
	initResourceBundle(table);
	$var($Integer, fiveHundred, $Integer::valueOf(500));
	$var($Long, oneThousand, $Long::valueOf(1000));
	$var($UIDefaults$LazyValue, dialogPlain12, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0));
	$var($UIDefaults$LazyValue, serifPlain12, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1));
	$var($UIDefaults$LazyValue, sansSerifPlain12, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2));
	$var($UIDefaults$LazyValue, monospacedPlain12, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3));
	$var($UIDefaults$LazyValue, dialogBold12, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4));
	$init($Color);
	$var($ColorUIResource, red, $new($ColorUIResource, $Color::red));
	$var($ColorUIResource, black, $new($ColorUIResource, $Color::black));
	$var($ColorUIResource, white, $new($ColorUIResource, $Color::white));
	$var($ColorUIResource, yellow, $new($ColorUIResource, $Color::yellow));
	$var($ColorUIResource, gray, $new($ColorUIResource, $Color::gray));
	$var($ColorUIResource, lightGray, $new($ColorUIResource, $Color::lightGray));
	$var($ColorUIResource, darkGray, $new($ColorUIResource, $Color::darkGray));
	$var($ColorUIResource, scrollBarTrack, $new($ColorUIResource, 224, 224, 224));
	$var($Color, control, $nc(table)->getColor("control"_s));
	$var($Color, controlDkShadow, table->getColor("controlDkShadow"_s));
	$var($Color, controlHighlight, table->getColor("controlHighlight"_s));
	$var($Color, controlLtHighlight, table->getColor("controlLtHighlight"_s));
	$var($Color, controlShadow, table->getColor("controlShadow"_s));
	$var($Color, controlText, table->getColor("controlText"_s));
	$var($Color, menu, table->getColor("menu"_s));
	$var($Color, menuText, table->getColor("menuText"_s));
	$var($Color, textHighlight, table->getColor("textHighlight"_s));
	$var($Color, textHighlightText, table->getColor("textHighlightText"_s));
	$var($Color, textInactiveText, table->getColor("textInactiveText"_s));
	$var($Color, textText, table->getColor("textText"_s));
	$var($Color, window, table->getColor("window"_s));
	$var($InsetsUIResource, zeroInsets, $new($InsetsUIResource, 0, 0, 0, 0));
	$var($InsetsUIResource, twoInsets, $new($InsetsUIResource, 2, 2, 2, 2));
	$var($InsetsUIResource, threeInsets, $new($InsetsUIResource, 3, 3, 3, 3));
	$var($UIDefaults$LazyValue, marginBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5));
	$var($UIDefaults$LazyValue, etchedBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6));
	$var($UIDefaults$LazyValue, loweredBevelBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7));
	$var($UIDefaults$LazyValue, popupMenuBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8));
	$var($UIDefaults$LazyValue, blackLineBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9));
	$var($UIDefaults$LazyValue, focusCellHighlightBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10, yellow));
	$var($Object, noFocusBorder, $new($BorderUIResource$EmptyBorderUIResource, 1, 1, 1, 1));
	$var($UIDefaults$LazyValue, tableHeaderBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11, controlLtHighlight, control, controlDkShadow, controlShadow));
	$var($UIDefaults$LazyValue, buttonBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12));
	$var($UIDefaults$LazyValue, buttonToggleBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13));
	$var($UIDefaults$LazyValue, radioButtonBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14));
	$var($Object, newFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/NewFolder.gif"_s));
	$var($Object, upFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/UpFolder.gif"_s));
	$var($Object, homeFolderIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/HomeFolder.gif"_s));
	$var($Object, detailsViewIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/DetailsView.gif"_s));
	$var($Object, listViewIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/ListView.gif"_s));
	$var($Object, directoryIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Directory.gif"_s));
	$var($Object, fileIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/File.gif"_s));
	$var($Object, computerIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Computer.gif"_s));
	$var($Object, hardDriveIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/HardDrive.gif"_s));
	$var($Object, floppyDriveIcon, $SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/FloppyDrive.gif"_s));
	$var($UIDefaults$LazyValue, internalFrameBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8));
	$var($Object, listCellRendererActiveValue, $new($BasicLookAndFeel$2, this));
	$var($UIDefaults$LazyValue, menuBarBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15));
	$var($UIDefaults$LazyValue, menuItemCheckIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16));
	$var($UIDefaults$LazyValue, menuItemArrowIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17));
	$var($UIDefaults$LazyValue, menuArrowIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18));
	$var($UIDefaults$LazyValue, checkBoxIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19));
	$var($UIDefaults$LazyValue, radioButtonIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20));
	$var($UIDefaults$LazyValue, checkBoxMenuItemIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21));
	$var($UIDefaults$LazyValue, radioButtonMenuItemIcon, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22));
	$var($Object, menuItemAcceleratorDelimiter, "+"_s);
	$var($Object, optionPaneMinimumSize, $new($DimensionUIResource, 262, 90));
	int32_t zero = 0;
	$var($UIDefaults$LazyValue, zeroBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23, zero));
	int32_t ten = 10;
	$var($UIDefaults$LazyValue, optionPaneBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24, ten));
	$var($UIDefaults$LazyValue, optionPaneButtonAreaBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25, zero));
	$var($UIDefaults$LazyValue, progressBarBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26));
	$var($Object, minimumThumbSize, $new($DimensionUIResource, 8, 8));
	$var($Object, maximumThumbSize, $new($DimensionUIResource, 4096, 4096));
	$var($Object, sliderFocusInsets, twoInsets);
	$var($Object, toolBarSeparatorSize, $new($DimensionUIResource, 10, 10));
	$var($UIDefaults$LazyValue, splitPaneBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27));
	$var($UIDefaults$LazyValue, splitPaneDividerBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28));
	$var($Object, tabbedPaneTabInsets, $new($InsetsUIResource, 0, 4, 1, 4));
	$var($Object, tabbedPaneTabPadInsets, $new($InsetsUIResource, 2, 2, 2, 1));
	$var($Object, tabbedPaneTabAreaInsets, $new($InsetsUIResource, 3, 2, 0, 2));
	$var($Object, tabbedPaneContentBorderInsets, $new($InsetsUIResource, 2, 2, 3, 3));
	$var($UIDefaults$LazyValue, textFieldBorder, $new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29));
	$var($Object, editorMargin, threeInsets);
	$var($Object, caretBlinkRate, fiveHundred);
	$var($ObjectArray, allAuditoryCues, $new($ObjectArray, {
		"CheckBoxMenuItem.commandSound"_s,
		"InternalFrame.closeSound"_s,
		"InternalFrame.maximizeSound"_s,
		"InternalFrame.minimizeSound"_s,
		"InternalFrame.restoreDownSound"_s,
		"InternalFrame.restoreUpSound"_s,
		"MenuItem.commandSound"_s,
		"OptionPane.errorSound"_s,
		"OptionPane.informationSound"_s,
		"OptionPane.questionSound"_s,
		"OptionPane.warningSound"_s,
		"PopupMenu.popupSound"_s,
		"RadioButtonMenuItem.commandSound"_s
	}));
	$var($ObjectArray, noAuditoryCues, $new($ObjectArray, {"mute"_s}));
	$init($DefaultEditorKit);
	$init($JTextField);
	$var($ObjectArray, defaults, $new($ObjectArray, {
		"AuditoryCues.cueList"_s,
		allAuditoryCues,
		"AuditoryCues.allAuditoryCues"_s,
		allAuditoryCues,
		"AuditoryCues.noAuditoryCues"_s,
		noAuditoryCues,
		"AuditoryCues.playList"_s,
		nullptr,
		"Button.defaultButtonFollowsFocus"_s,
		$Boolean::TRUE,
		"Button.font"_s,
		dialogPlain12,
		"Button.background"_s,
		control,
		"Button.foreground"_s,
		controlText,
		"Button.shadow"_s,
		controlShadow,
		"Button.darkShadow"_s,
		controlDkShadow,
		"Button.light"_s,
		controlHighlight,
		"Button.highlight"_s,
		controlLtHighlight,
		"Button.border"_s,
		buttonBorder,
		"Button.margin"_s,
		$$new($InsetsUIResource, 2, 14, 2, 14),
		"Button.textIconGap"_s,
		$($Integer::valueOf(4)),
		"Button.textShiftOffset"_s,
		$($Integer::valueOf(zero)),
		"Button.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s,
			"ENTER"_s,
			"pressed"_s,
			"released ENTER"_s,
			"released"_s
		})),
		"ToggleButton.font"_s,
		dialogPlain12,
		"ToggleButton.background"_s,
		control,
		"ToggleButton.foreground"_s,
		controlText,
		"ToggleButton.shadow"_s,
		controlShadow,
		"ToggleButton.darkShadow"_s,
		controlDkShadow,
		"ToggleButton.light"_s,
		controlHighlight,
		"ToggleButton.highlight"_s,
		controlLtHighlight,
		"ToggleButton.border"_s,
		buttonToggleBorder,
		"ToggleButton.margin"_s,
		$$new($InsetsUIResource, 2, 14, 2, 14),
		"ToggleButton.textIconGap"_s,
		$($Integer::valueOf(4)),
		"ToggleButton.textShiftOffset"_s,
		$($Integer::valueOf(zero)),
		"ToggleButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"RadioButton.font"_s,
		dialogPlain12,
		"RadioButton.background"_s,
		control,
		"RadioButton.foreground"_s,
		controlText,
		"RadioButton.shadow"_s,
		controlShadow,
		"RadioButton.darkShadow"_s,
		controlDkShadow,
		"RadioButton.light"_s,
		controlHighlight,
		"RadioButton.highlight"_s,
		controlLtHighlight,
		"RadioButton.border"_s,
		radioButtonBorder,
		"RadioButton.margin"_s,
		twoInsets,
		"RadioButton.textIconGap"_s,
		$($Integer::valueOf(4)),
		"RadioButton.textShiftOffset"_s,
		$($Integer::valueOf(zero)),
		"RadioButton.icon"_s,
		radioButtonIcon,
		"RadioButton.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s,
			"RETURN"_s,
			"pressed"_s
		})),
		"CheckBox.font"_s,
		dialogPlain12,
		"CheckBox.background"_s,
		control,
		"CheckBox.foreground"_s,
		controlText,
		"CheckBox.border"_s,
		radioButtonBorder,
		"CheckBox.margin"_s,
		twoInsets,
		"CheckBox.textIconGap"_s,
		$($Integer::valueOf(4)),
		"CheckBox.textShiftOffset"_s,
		$($Integer::valueOf(zero)),
		"CheckBox.icon"_s,
		checkBoxIcon,
		"CheckBox.focusInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"pressed"_s,
			"released SPACE"_s,
			"released"_s
		})),
		"FileChooser.useSystemExtensionHiding"_s,
		$Boolean::FALSE,
		"ColorChooser.font"_s,
		dialogPlain12,
		"ColorChooser.background"_s,
		control,
		"ColorChooser.foreground"_s,
		controlText,
		"ColorChooser.swatchesSwatchSize"_s,
		$$new($Dimension, 10, 10),
		"ColorChooser.swatchesRecentSwatchSize"_s,
		$$new($Dimension, 10, 10),
		"ColorChooser.swatchesDefaultRecentColor"_s,
		control,
		"ComboBox.font"_s,
		sansSerifPlain12,
		"ComboBox.background"_s,
		window,
		"ComboBox.foreground"_s,
		textText,
		"ComboBox.buttonBackground"_s,
		control,
		"ComboBox.buttonShadow"_s,
		controlShadow,
		"ComboBox.buttonDarkShadow"_s,
		controlDkShadow,
		"ComboBox.buttonHighlight"_s,
		controlLtHighlight,
		"ComboBox.selectionBackground"_s,
		textHighlight,
		"ComboBox.selectionForeground"_s,
		textHighlightText,
		"ComboBox.disabledBackground"_s,
		control,
		"ComboBox.disabledForeground"_s,
		textInactiveText,
		"ComboBox.timeFactor"_s,
		oneThousand,
		"ComboBox.isEnterSelectablePopup"_s,
		$Boolean::FALSE,
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
			"ENTER"_s,
			"enterPressed"_s
		})),
		"ComboBox.noActionOnKeyNavigation"_s,
		$Boolean::FALSE,
		"FileChooser.newFolderIcon"_s,
		newFolderIcon,
		"FileChooser.upFolderIcon"_s,
		upFolderIcon,
		"FileChooser.homeFolderIcon"_s,
		homeFolderIcon,
		"FileChooser.detailsViewIcon"_s,
		detailsViewIcon,
		"FileChooser.listViewIcon"_s,
		listViewIcon,
		"FileChooser.readOnly"_s,
		$Boolean::FALSE,
		"FileChooser.usesSingleFilePane"_s,
		$Boolean::FALSE,
		"FileChooser.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancelSelection"_s,
			"F5"_s,
			"refresh"_s
		})),
		"FileView.directoryIcon"_s,
		directoryIcon,
		"FileView.fileIcon"_s,
		fileIcon,
		"FileView.computerIcon"_s,
		computerIcon,
		"FileView.hardDriveIcon"_s,
		hardDriveIcon,
		"FileView.floppyDriveIcon"_s,
		floppyDriveIcon,
		"InternalFrame.titleFont"_s,
		dialogBold12,
		"InternalFrame.borderColor"_s,
		control,
		"InternalFrame.borderShadow"_s,
		controlShadow,
		"InternalFrame.borderDarkShadow"_s,
		controlDkShadow,
		"InternalFrame.borderHighlight"_s,
		controlLtHighlight,
		"InternalFrame.borderLight"_s,
		controlHighlight,
		"InternalFrame.border"_s,
		internalFrameBorder,
		"InternalFrame.icon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/JavaCup16.png"_s)),
		"InternalFrame.maximizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		"InternalFrame.minimizeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		"InternalFrame.iconifyIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
		"InternalFrame.closeIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30)),
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
		$(table->get("activeCaption"_s)),
		"InternalFrame.activeTitleForeground"_s,
		$(table->get("activeCaptionText"_s)),
		"InternalFrame.inactiveTitleBackground"_s,
		$(table->get("inactiveCaption"_s)),
		"InternalFrame.inactiveTitleForeground"_s,
		$(table->get("inactiveCaptionText"_s)),
		"InternalFrame.windowBindings"_s,
		$$new($ObjectArray, {
			"shift ESCAPE"_s,
			"showSystemMenu"_s,
			"ctrl SPACE"_s,
			"showSystemMenu"_s,
			"ESCAPE"_s,
			"hideSystemMenu"_s
		}),
		"InternalFrameTitlePane.iconifyButtonOpacity"_s,
		$Boolean::TRUE,
		"InternalFrameTitlePane.maximizeButtonOpacity"_s,
		$Boolean::TRUE,
		"InternalFrameTitlePane.closeButtonOpacity"_s,
		$Boolean::TRUE,
		"DesktopIcon.border"_s,
		internalFrameBorder,
		"Desktop.minOnScreenInsets"_s,
		threeInsets,
		"Desktop.background"_s,
		$(table->get("desktop"_s)),
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
		"Label.font"_s,
		dialogPlain12,
		"Label.background"_s,
		control,
		"Label.foreground"_s,
		controlText,
		"Label.disabledForeground"_s,
		white,
		"Label.disabledShadow"_s,
		controlShadow,
		"Label.border"_s,
		nullptr,
		"List.font"_s,
		dialogPlain12,
		"List.background"_s,
		window,
		"List.foreground"_s,
		textText,
		"List.selectionBackground"_s,
		textHighlight,
		"List.selectionForeground"_s,
		textHighlightText,
		"List.noFocusBorder"_s,
		noFocusBorder,
		"List.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"List.dropLineColor"_s,
		controlShadow,
		"List.border"_s,
		nullptr,
		"List.cellRenderer"_s,
		listCellRendererActiveValue,
		"List.timeFactor"_s,
		oneThousand,
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
		"List.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"LEFT"_s,
			"selectNextColumn"_s,
			"KP_LEFT"_s,
			"selectNextColumn"_s,
			"shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"RIGHT"_s,
			"selectPreviousColumn"_s,
			"KP_RIGHT"_s,
			"selectPreviousColumn"_s,
			"shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectPreviousColumnChangeLead"_s
		})),
		"MenuBar.font"_s,
		dialogPlain12,
		"MenuBar.background"_s,
		menu,
		"MenuBar.foreground"_s,
		menuText,
		"MenuBar.shadow"_s,
		controlShadow,
		"MenuBar.highlight"_s,
		controlLtHighlight,
		"MenuBar.border"_s,
		menuBarBorder,
		"MenuBar.windowBindings"_s,
		$$new($ObjectArray, {
			"F10"_s,
			"takeFocus"_s
		}),
		"MenuItem.font"_s,
		dialogPlain12,
		"MenuItem.acceleratorFont"_s,
		dialogPlain12,
		"MenuItem.background"_s,
		menu,
		"MenuItem.foreground"_s,
		menuText,
		"MenuItem.selectionForeground"_s,
		textHighlightText,
		"MenuItem.selectionBackground"_s,
		textHighlight,
		"MenuItem.disabledForeground"_s,
		nullptr,
		"MenuItem.acceleratorForeground"_s,
		menuText,
		"MenuItem.acceleratorSelectionForeground"_s,
		textHighlightText,
		"MenuItem.acceleratorDelimiter"_s,
		menuItemAcceleratorDelimiter,
		"MenuItem.border"_s,
		marginBorder,
		"MenuItem.borderPainted"_s,
		$Boolean::FALSE,
		"MenuItem.margin"_s,
		twoInsets,
		"MenuItem.checkIcon"_s,
		menuItemCheckIcon,
		"MenuItem.arrowIcon"_s,
		menuItemArrowIcon,
		"MenuItem.commandSound"_s,
		nullptr,
		"RadioButtonMenuItem.font"_s,
		dialogPlain12,
		"RadioButtonMenuItem.acceleratorFont"_s,
		dialogPlain12,
		"RadioButtonMenuItem.background"_s,
		menu,
		"RadioButtonMenuItem.foreground"_s,
		menuText,
		"RadioButtonMenuItem.selectionForeground"_s,
		textHighlightText,
		"RadioButtonMenuItem.selectionBackground"_s,
		textHighlight,
		"RadioButtonMenuItem.disabledForeground"_s,
		nullptr,
		"RadioButtonMenuItem.acceleratorForeground"_s,
		menuText,
		"RadioButtonMenuItem.acceleratorSelectionForeground"_s,
		textHighlightText,
		"RadioButtonMenuItem.border"_s,
		marginBorder,
		"RadioButtonMenuItem.borderPainted"_s,
		$Boolean::FALSE,
		"RadioButtonMenuItem.margin"_s,
		twoInsets,
		"RadioButtonMenuItem.checkIcon"_s,
		radioButtonMenuItemIcon,
		"RadioButtonMenuItem.arrowIcon"_s,
		menuItemArrowIcon,
		"RadioButtonMenuItem.commandSound"_s,
		nullptr,
		"CheckBoxMenuItem.font"_s,
		dialogPlain12,
		"CheckBoxMenuItem.acceleratorFont"_s,
		dialogPlain12,
		"CheckBoxMenuItem.background"_s,
		menu,
		"CheckBoxMenuItem.foreground"_s,
		menuText,
		"CheckBoxMenuItem.selectionForeground"_s,
		textHighlightText,
		"CheckBoxMenuItem.selectionBackground"_s,
		textHighlight,
		"CheckBoxMenuItem.disabledForeground"_s,
		nullptr,
		"CheckBoxMenuItem.acceleratorForeground"_s,
		menuText,
		"CheckBoxMenuItem.acceleratorSelectionForeground"_s,
		textHighlightText,
		"CheckBoxMenuItem.border"_s,
		marginBorder,
		"CheckBoxMenuItem.borderPainted"_s,
		$Boolean::FALSE,
		"CheckBoxMenuItem.margin"_s,
		twoInsets,
		"CheckBoxMenuItem.checkIcon"_s,
		checkBoxMenuItemIcon,
		"CheckBoxMenuItem.arrowIcon"_s,
		menuItemArrowIcon,
		"CheckBoxMenuItem.commandSound"_s,
		nullptr,
		"Menu.font"_s,
		dialogPlain12,
		"Menu.acceleratorFont"_s,
		dialogPlain12,
		"Menu.background"_s,
		menu,
		"Menu.foreground"_s,
		menuText,
		"Menu.selectionForeground"_s,
		textHighlightText,
		"Menu.selectionBackground"_s,
		textHighlight,
		"Menu.disabledForeground"_s,
		nullptr,
		"Menu.acceleratorForeground"_s,
		menuText,
		"Menu.acceleratorSelectionForeground"_s,
		textHighlightText,
		"Menu.border"_s,
		marginBorder,
		"Menu.borderPainted"_s,
		$Boolean::FALSE,
		"Menu.margin"_s,
		twoInsets,
		"Menu.checkIcon"_s,
		menuItemCheckIcon,
		"Menu.arrowIcon"_s,
		menuArrowIcon,
		"Menu.menuPopupOffsetX"_s,
		$($Integer::valueOf(0)),
		"Menu.menuPopupOffsetY"_s,
		$($Integer::valueOf(0)),
		"Menu.submenuPopupOffsetX"_s,
		$($Integer::valueOf(0)),
		"Menu.submenuPopupOffsetY"_s,
		$($Integer::valueOf(0)),
		"Menu.shortcutKeys"_s,
		$$new($ints, {
			$SwingUtilities2::getSystemMnemonicKeyMask(),
			$SwingUtilities2::setAltGraphMask($SwingUtilities2::getSystemMnemonicKeyMask())
		}),
		"Menu.crossMenuMnemonic"_s,
		$Boolean::TRUE,
		"Menu.cancelMode"_s,
		"hideLastSubmenu"_s,
		"Menu.preserveTopLevelSelection"_s,
		$Boolean::FALSE,
		"PopupMenu.font"_s,
		dialogPlain12,
		"PopupMenu.background"_s,
		menu,
		"PopupMenu.foreground"_s,
		menuText,
		"PopupMenu.border"_s,
		popupMenuBorder,
		"PopupMenu.popupSound"_s,
		nullptr,
		"PopupMenu.selectedWindowInputMapBindings"_s,
		$$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s,
			"DOWN"_s,
			"selectNext"_s,
			"KP_DOWN"_s,
			"selectNext"_s,
			"UP"_s,
			"selectPrevious"_s,
			"KP_UP"_s,
			"selectPrevious"_s,
			"LEFT"_s,
			"selectParent"_s,
			"KP_LEFT"_s,
			"selectParent"_s,
			"RIGHT"_s,
			"selectChild"_s,
			"KP_RIGHT"_s,
			"selectChild"_s,
			"ENTER"_s,
			"return"_s,
			"ctrl ENTER"_s,
			"return"_s,
			"SPACE"_s,
			"return"_s
		}),
		"PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s,
		$$new($ObjectArray, {
			"LEFT"_s,
			"selectChild"_s,
			"KP_LEFT"_s,
			"selectChild"_s,
			"RIGHT"_s,
			"selectParent"_s,
			"KP_RIGHT"_s,
			"selectParent"_s
		}),
		"PopupMenu.consumeEventOnClose"_s,
		$Boolean::FALSE,
		"OptionPane.font"_s,
		dialogPlain12,
		"OptionPane.background"_s,
		control,
		"OptionPane.foreground"_s,
		controlText,
		"OptionPane.messageForeground"_s,
		controlText,
		"OptionPane.border"_s,
		optionPaneBorder,
		"OptionPane.messageAreaBorder"_s,
		zeroBorder,
		"OptionPane.buttonAreaBorder"_s,
		optionPaneButtonAreaBorder,
		"OptionPane.minimumSize"_s,
		optionPaneMinimumSize,
		"OptionPane.errorIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Error.gif"_s)),
		"OptionPane.informationIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Inform.gif"_s)),
		"OptionPane.warningIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Warn.gif"_s)),
		"OptionPane.questionIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/Question.gif"_s)),
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
		fiveHundred,
		"Panel.font"_s,
		dialogPlain12,
		"Panel.background"_s,
		control,
		"Panel.foreground"_s,
		textText,
		"ProgressBar.font"_s,
		dialogPlain12,
		"ProgressBar.foreground"_s,
		textHighlight,
		"ProgressBar.background"_s,
		control,
		"ProgressBar.selectionForeground"_s,
		control,
		"ProgressBar.selectionBackground"_s,
		textHighlight,
		"ProgressBar.border"_s,
		progressBarBorder,
		"ProgressBar.cellLength"_s,
		$($Integer::valueOf(1)),
		"ProgressBar.cellSpacing"_s,
		$($Integer::valueOf(zero)),
		"ProgressBar.repaintInterval"_s,
		$($Integer::valueOf(50)),
		"ProgressBar.cycleTime"_s,
		$($Integer::valueOf(3000)),
		"ProgressBar.horizontalSize"_s,
		$$new($DimensionUIResource, 146, 12),
		"ProgressBar.verticalSize"_s,
		$$new($DimensionUIResource, 12, 146),
		"Separator.shadow"_s,
		controlShadow,
		"Separator.highlight"_s,
		controlLtHighlight,
		"Separator.background"_s,
		controlLtHighlight,
		"Separator.foreground"_s,
		controlShadow,
		"ScrollBar.background"_s,
		scrollBarTrack,
		"ScrollBar.foreground"_s,
		control,
		"ScrollBar.track"_s,
		$(table->get("scrollbar"_s)),
		"ScrollBar.trackHighlight"_s,
		controlDkShadow,
		"ScrollBar.thumb"_s,
		control,
		"ScrollBar.thumbHighlight"_s,
		controlLtHighlight,
		"ScrollBar.thumbDarkShadow"_s,
		controlDkShadow,
		"ScrollBar.thumbShadow"_s,
		controlShadow,
		"ScrollBar.border"_s,
		nullptr,
		"ScrollBar.minimumThumbSize"_s,
		minimumThumbSize,
		"ScrollBar.maximumThumbSize"_s,
		maximumThumbSize,
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
		"ScrollBar.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"negativeUnitIncrement"_s,
			"KP_RIGHT"_s,
			"negativeUnitIncrement"_s,
			"LEFT"_s,
			"positiveUnitIncrement"_s,
			"KP_LEFT"_s,
			"positiveUnitIncrement"_s
		})),
		"ScrollBar.width"_s,
		$($Integer::valueOf(16)),
		"ScrollPane.font"_s,
		dialogPlain12,
		"ScrollPane.background"_s,
		control,
		"ScrollPane.foreground"_s,
		controlText,
		"ScrollPane.border"_s,
		textFieldBorder,
		"ScrollPane.viewportBorder"_s,
		nullptr,
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
		"ScrollPane.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ctrl PAGE_UP"_s,
			"scrollRight"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollLeft"_s
		})),
		"Viewport.font"_s,
		dialogPlain12,
		"Viewport.background"_s,
		control,
		"Viewport.foreground"_s,
		textText,
		"Slider.font"_s,
		dialogPlain12,
		"Slider.foreground"_s,
		control,
		"Slider.background"_s,
		control,
		"Slider.highlight"_s,
		controlLtHighlight,
		"Slider.tickColor"_s,
		$Color::black,
		"Slider.shadow"_s,
		controlShadow,
		"Slider.focus"_s,
		controlDkShadow,
		"Slider.border"_s,
		nullptr,
		"Slider.horizontalSize"_s,
		$$new($Dimension, 200, 21),
		"Slider.verticalSize"_s,
		$$new($Dimension, 21, 200),
		"Slider.minimumHorizontalSize"_s,
		$$new($Dimension, 36, 21),
		"Slider.minimumVerticalSize"_s,
		$$new($Dimension, 21, 36),
		"Slider.focusInsets"_s,
		sliderFocusInsets,
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
		"Slider.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"negativeUnitIncrement"_s,
			"KP_RIGHT"_s,
			"negativeUnitIncrement"_s,
			"LEFT"_s,
			"positiveUnitIncrement"_s,
			"KP_LEFT"_s,
			"positiveUnitIncrement"_s
		})),
		"Slider.onlyLeftMouseButtonDrag"_s,
		$Boolean::TRUE,
		"Spinner.font"_s,
		monospacedPlain12,
		"Spinner.background"_s,
		control,
		"Spinner.foreground"_s,
		control,
		"Spinner.border"_s,
		textFieldBorder,
		"Spinner.arrowButtonBorder"_s,
		nullptr,
		"Spinner.arrowButtonInsets"_s,
		nullptr,
		"Spinner.arrowButtonSize"_s,
		$$new($Dimension, 16, 5),
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
		"Spinner.editorBorderPainted"_s,
		$Boolean::FALSE,
		"Spinner.editorAlignment"_s,
		$($Integer::valueOf($JTextField::TRAILING)),
		"SplitPane.background"_s,
		control,
		"SplitPane.highlight"_s,
		controlLtHighlight,
		"SplitPane.shadow"_s,
		controlShadow,
		"SplitPane.darkShadow"_s,
		controlDkShadow,
		"SplitPane.border"_s,
		splitPaneBorder,
		"SplitPane.dividerSize"_s,
		$($Integer::valueOf(7)),
		"SplitPaneDivider.border"_s,
		splitPaneDividerBorder,
		"SplitPaneDivider.draggingColor"_s,
		darkGray,
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
		"TabbedPane.font"_s,
		dialogPlain12,
		"TabbedPane.background"_s,
		control,
		"TabbedPane.foreground"_s,
		controlText,
		"TabbedPane.highlight"_s,
		controlLtHighlight,
		"TabbedPane.light"_s,
		controlHighlight,
		"TabbedPane.shadow"_s,
		controlShadow,
		"TabbedPane.darkShadow"_s,
		controlDkShadow,
		"TabbedPane.selected"_s,
		nullptr,
		"TabbedPane.focus"_s,
		controlText,
		"TabbedPane.textIconGap"_s,
		$($Integer::valueOf(4)),
		"TabbedPane.tabsOverlapBorder"_s,
		$Boolean::FALSE,
		"TabbedPane.selectionFollowsFocus"_s,
		$Boolean::TRUE,
		"TabbedPane.labelShift"_s,
		$($Integer::valueOf(1)),
		"TabbedPane.selectedLabelShift"_s,
		$($Integer::valueOf(-1)),
		"TabbedPane.tabInsets"_s,
		tabbedPaneTabInsets,
		"TabbedPane.selectedTabPadInsets"_s,
		tabbedPaneTabPadInsets,
		"TabbedPane.tabAreaInsets"_s,
		tabbedPaneTabAreaInsets,
		"TabbedPane.contentBorderInsets"_s,
		tabbedPaneContentBorderInsets,
		"TabbedPane.tabRunOverlay"_s,
		$($Integer::valueOf(2)),
		"TabbedPane.tabsOpaque"_s,
		$Boolean::TRUE,
		"TabbedPane.contentOpaque"_s,
		$Boolean::TRUE,
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
		dialogPlain12,
		"Table.foreground"_s,
		controlText,
		"Table.background"_s,
		window,
		"Table.selectionForeground"_s,
		textHighlightText,
		"Table.selectionBackground"_s,
		textHighlight,
		"Table.dropLineColor"_s,
		controlShadow,
		"Table.dropLineShortColor"_s,
		black,
		"Table.gridColor"_s,
		gray,
		"Table.focusCellBackground"_s,
		window,
		"Table.focusCellForeground"_s,
		controlText,
		"Table.focusCellHighlightBorder"_s,
		focusCellHighlightBorder,
		"Table.scrollPaneBorder"_s,
		loweredBevelBorder,
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
		"Table.ancestorInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"selectPreviousColumn"_s,
			"KP_RIGHT"_s,
			"selectPreviousColumn"_s,
			"shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl shift KP_RIGHT"_s,
			"selectPreviousColumnExtendSelection"_s,
			"ctrl RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"ctrl KP_RIGHT"_s,
			"selectPreviousColumnChangeLead"_s,
			"LEFT"_s,
			"selectNextColumn"_s,
			"KP_LEFT"_s,
			"selectNextColumn"_s,
			"shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl shift KP_LEFT"_s,
			"selectNextColumnExtendSelection"_s,
			"ctrl LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl KP_LEFT"_s,
			"selectNextColumnChangeLead"_s,
			"ctrl PAGE_UP"_s,
			"scrollRightChangeSelection"_s,
			"ctrl PAGE_DOWN"_s,
			"scrollLeftChangeSelection"_s,
			"ctrl shift PAGE_UP"_s,
			"scrollRightExtendSelection"_s,
			"ctrl shift PAGE_DOWN"_s,
			"scrollLeftExtendSelection"_s
		})),
		"Table.ascendingSortIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31)),
		"Table.descendingSortIcon"_s,
		$cast($UIDefaults$LazyValue, $$new(BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32)),
		"Table.sortIconColor"_s,
		controlShadow,
		"TableHeader.font"_s,
		dialogPlain12,
		"TableHeader.foreground"_s,
		controlText,
		"TableHeader.background"_s,
		control,
		"TableHeader.cellBorder"_s,
		tableHeaderBorder,
		"TableHeader.focusCellBackground"_s,
		$(table->getColor("text"_s)),
		"TableHeader.focusCellForeground"_s,
		nullptr,
		"TableHeader.focusCellBorder"_s,
		nullptr,
		"TableHeader.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"SPACE"_s,
			"toggleSortOrder"_s,
			"LEFT"_s,
			"selectColumnToLeft"_s,
			"KP_LEFT"_s,
			"selectColumnToLeft"_s,
			"RIGHT"_s,
			"selectColumnToRight"_s,
			"KP_RIGHT"_s,
			"selectColumnToRight"_s,
			"alt LEFT"_s,
			"moveColumnLeft"_s,
			"alt KP_LEFT"_s,
			"moveColumnLeft"_s,
			"alt RIGHT"_s,
			"moveColumnRight"_s,
			"alt KP_RIGHT"_s,
			"moveColumnRight"_s,
			"alt shift LEFT"_s,
			"resizeLeft"_s,
			"alt shift KP_LEFT"_s,
			"resizeLeft"_s,
			"alt shift RIGHT"_s,
			"resizeRight"_s,
			"alt shift KP_RIGHT"_s,
			"resizeRight"_s,
			"ESCAPE"_s,
			"focusTable"_s
		})),
		"TextField.font"_s,
		sansSerifPlain12,
		"TextField.background"_s,
		window,
		"TextField.foreground"_s,
		textText,
		"TextField.shadow"_s,
		controlShadow,
		"TextField.darkShadow"_s,
		controlDkShadow,
		"TextField.light"_s,
		controlHighlight,
		"TextField.highlight"_s,
		controlLtHighlight,
		"TextField.inactiveForeground"_s,
		textInactiveText,
		"TextField.inactiveBackground"_s,
		control,
		"TextField.selectionBackground"_s,
		textHighlight,
		"TextField.selectionForeground"_s,
		textHighlightText,
		"TextField.caretForeground"_s,
		textText,
		"TextField.caretBlinkRate"_s,
		caretBlinkRate,
		"TextField.border"_s,
		textFieldBorder,
		"TextField.margin"_s,
		zeroInsets,
		"FormattedTextField.font"_s,
		sansSerifPlain12,
		"FormattedTextField.background"_s,
		window,
		"FormattedTextField.foreground"_s,
		textText,
		"FormattedTextField.inactiveForeground"_s,
		textInactiveText,
		"FormattedTextField.inactiveBackground"_s,
		control,
		"FormattedTextField.selectionBackground"_s,
		textHighlight,
		"FormattedTextField.selectionForeground"_s,
		textHighlightText,
		"FormattedTextField.caretForeground"_s,
		textText,
		"FormattedTextField.caretBlinkRate"_s,
		caretBlinkRate,
		"FormattedTextField.border"_s,
		textFieldBorder,
		"FormattedTextField.margin"_s,
		zeroInsets,
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
		"PasswordField.font"_s,
		monospacedPlain12,
		"PasswordField.background"_s,
		window,
		"PasswordField.foreground"_s,
		textText,
		"PasswordField.inactiveForeground"_s,
		textInactiveText,
		"PasswordField.inactiveBackground"_s,
		control,
		"PasswordField.selectionBackground"_s,
		textHighlight,
		"PasswordField.selectionForeground"_s,
		textHighlightText,
		"PasswordField.caretForeground"_s,
		textText,
		"PasswordField.caretBlinkRate"_s,
		caretBlinkRate,
		"PasswordField.border"_s,
		textFieldBorder,
		"PasswordField.margin"_s,
		zeroInsets,
		"PasswordField.echoChar"_s,
		$($Character::valueOf(u'*')),
		"TextArea.font"_s,
		monospacedPlain12,
		"TextArea.background"_s,
		window,
		"TextArea.foreground"_s,
		textText,
		"TextArea.inactiveForeground"_s,
		textInactiveText,
		"TextArea.selectionBackground"_s,
		textHighlight,
		"TextArea.selectionForeground"_s,
		textHighlightText,
		"TextArea.caretForeground"_s,
		textText,
		"TextArea.caretBlinkRate"_s,
		caretBlinkRate,
		"TextArea.border"_s,
		marginBorder,
		"TextArea.margin"_s,
		zeroInsets,
		"TextPane.font"_s,
		serifPlain12,
		"TextPane.background"_s,
		white,
		"TextPane.foreground"_s,
		textText,
		"TextPane.selectionBackground"_s,
		textHighlight,
		"TextPane.selectionForeground"_s,
		textHighlightText,
		"TextPane.caretForeground"_s,
		textText,
		"TextPane.caretBlinkRate"_s,
		caretBlinkRate,
		"TextPane.inactiveForeground"_s,
		textInactiveText,
		"TextPane.border"_s,
		marginBorder,
		"TextPane.margin"_s,
		editorMargin,
		"EditorPane.font"_s,
		serifPlain12,
		"EditorPane.background"_s,
		white,
		"EditorPane.foreground"_s,
		textText,
		"EditorPane.selectionBackground"_s,
		textHighlight,
		"EditorPane.selectionForeground"_s,
		textHighlightText,
		"EditorPane.caretForeground"_s,
		textText,
		"EditorPane.caretBlinkRate"_s,
		caretBlinkRate,
		"EditorPane.inactiveForeground"_s,
		textInactiveText,
		"EditorPane.border"_s,
		marginBorder,
		"EditorPane.margin"_s,
		editorMargin,
		"html.pendingImage"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/image-delayed.png"_s)),
		"html.missingImage"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/image-failed.png"_s)),
		"TitledBorder.font"_s,
		dialogPlain12,
		"TitledBorder.titleColor"_s,
		controlText,
		"TitledBorder.border"_s,
		etchedBorder,
		"ToolBar.font"_s,
		dialogPlain12,
		"ToolBar.background"_s,
		control,
		"ToolBar.foreground"_s,
		controlText,
		"ToolBar.shadow"_s,
		controlShadow,
		"ToolBar.darkShadow"_s,
		controlDkShadow,
		"ToolBar.light"_s,
		controlHighlight,
		"ToolBar.highlight"_s,
		controlLtHighlight,
		"ToolBar.dockingBackground"_s,
		control,
		"ToolBar.dockingForeground"_s,
		red,
		"ToolBar.floatingBackground"_s,
		control,
		"ToolBar.floatingForeground"_s,
		darkGray,
		"ToolBar.border"_s,
		etchedBorder,
		"ToolBar.separatorSize"_s,
		toolBarSeparatorSize,
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
		"ToolTip.font"_s,
		sansSerifPlain12,
		"ToolTip.background"_s,
		$(table->get("info"_s)),
		"ToolTip.foreground"_s,
		$(table->get("infoText"_s)),
		"ToolTip.border"_s,
		blackLineBorder,
		"ToolTipManager.enableToolTipMode"_s,
		"allWindows"_s,
		"Tree.paintLines"_s,
		$Boolean::TRUE,
		"Tree.lineTypeDashed"_s,
		$Boolean::FALSE,
		"Tree.font"_s,
		dialogPlain12,
		"Tree.background"_s,
		window,
		"Tree.foreground"_s,
		textText,
		"Tree.hash"_s,
		gray,
		"Tree.textForeground"_s,
		textText,
		"Tree.textBackground"_s,
		$(table->get("text"_s)),
		"Tree.selectionForeground"_s,
		textHighlightText,
		"Tree.selectionBackground"_s,
		textHighlight,
		"Tree.selectionBorderColor"_s,
		black,
		"Tree.dropLineColor"_s,
		controlShadow,
		"Tree.editorBorder"_s,
		blackLineBorder,
		"Tree.leftChildIndent"_s,
		$($Integer::valueOf(7)),
		"Tree.rightChildIndent"_s,
		$($Integer::valueOf(13)),
		"Tree.rowHeight"_s,
		$($Integer::valueOf(16)),
		"Tree.scrollsOnExpand"_s,
		$Boolean::TRUE,
		"Tree.openIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeOpen.gif"_s)),
		"Tree.closedIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeClosed.gif"_s)),
		"Tree.leafIcon"_s,
		$($SwingUtilities2::makeIcon($of(this)->getClass(), BasicLookAndFeel::class$, "icons/TreeLeaf.gif"_s)),
		"Tree.expandedIcon"_s,
		nullptr,
		"Tree.collapsedIcon"_s,
		nullptr,
		"Tree.changeSelectionWithFocus"_s,
		$Boolean::TRUE,
		"Tree.drawsFocusBorderAroundIcon"_s,
		$Boolean::FALSE,
		"Tree.timeFactor"_s,
		oneThousand,
		"Tree.focusInputMap"_s,
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
		"Tree.focusInputMap.RightToLeft"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"RIGHT"_s,
			"selectParent"_s,
			"KP_RIGHT"_s,
			"selectParent"_s,
			"LEFT"_s,
			"selectChild"_s,
			"KP_LEFT"_s,
			"selectChild"_s
		})),
		"Tree.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"ESCAPE"_s,
			"cancel"_s
		})),
		"RootPane.ancestorInputMap"_s,
		$$new($UIDefaults$LazyInputMap, $$new($ObjectArray, {
			"shift F10"_s,
			"postPopup"_s,
			"CONTEXT_MENU"_s,
			"postPopup"_s
		})),
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
}

int32_t BasicLookAndFeel::getFocusAcceleratorKeyMask() {
	$init(BasicLookAndFeel);
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	if ($instanceOf($SunToolkit, tk)) {
		return $cast($SunToolkit, tk)->getFocusAcceleratorKeyMask();
	}
	return $ActionEvent::ALT_MASK;
}

$Object* BasicLookAndFeel::getUIOfType($ComponentUI* ui, $Class* klass) {
	$init(BasicLookAndFeel);
	if ($nc(klass)->isInstance(ui)) {
		return $of(ui);
	}
	return nullptr;
}

$ActionMap* BasicLookAndFeel::getAudioActionMap() {
	$useLocalObjectStack();
	$var($ActionMap, audioActionMap, $cast($ActionMap, $UIManager::get("AuditoryCues.actionMap"_s)));
	if (audioActionMap == nullptr) {
		$var($ObjectArray, acList, $cast($ObjectArray, $UIManager::get("AuditoryCues.cueList"_s)));
		if (acList != nullptr) {
			$assign(audioActionMap, $new($ActionMapUIResource));
			for (int32_t counter = acList->length - 1; counter >= 0; --counter) {
				audioActionMap->put(acList->get(counter), $(createAudioAction(acList->get(counter))));
			}
		}
		$$nc($UIManager::getLookAndFeelDefaults())->put("AuditoryCues.actionMap"_s, audioActionMap);
	}
	return audioActionMap;
}

$Action* BasicLookAndFeel::createAudioAction(Object$* key) {
	$useLocalObjectStack();
	if (key != nullptr) {
		$var($String, audioKey, $cast($String, key));
		$var($String, audioValue, $cast($String, $UIManager::get(key)));
		return $new($BasicLookAndFeel$AudioAction, this, audioKey, audioValue);
	} else {
		return nullptr;
	}
}

$bytes* BasicLookAndFeel::loadAudioData($String* soundFile) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (soundFile == nullptr) {
		return nullptr;
	}
	$var($bytes, buffer, $cast($bytes, $AccessController::doPrivileged($$new($BasicLookAndFeel$3, this, soundFile))));
	if (buffer == nullptr) {
		$nc($System::err)->println($$str({$($of(this)->getClass()->getName()), "/"_s, soundFile, " not found."_s}));
		return nullptr;
	}
	if ($nc(buffer)->length == 0) {
		$nc($System::err)->println($$str({"warning: "_s, soundFile, " is zero-length"_s}));
		return nullptr;
	}
	return buffer;
}

void BasicLookAndFeel::playSound($Action* audioAction) {
	$useLocalObjectStack();
	if (audioAction != nullptr) {
		$var($ObjectArray, audioStrings, $cast($ObjectArray, $UIManager::get("AuditoryCues.playList"_s)));
		if (audioStrings != nullptr) {
			$var($HashSet, audioCues, $new($HashSet));
			{
				$var($ObjectArray, arr$, audioStrings);
				for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
					$var($Object0, audioString, arr$->get(i$));
					{
						audioCues->add(audioString);
					}
				}
			}
			$init($Action);
			$var($String, actionName, $cast($String, audioAction->getValue($Action::NAME)));
			if (audioCues->contains(actionName)) {
				audioAction->actionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, actionName));
			}
		}
	}
}

void BasicLookAndFeel::installAudioActionMap($ActionMap* map) {
	$init(BasicLookAndFeel);
	$useLocalObjectStack();
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf(BasicLookAndFeel, laf)) {
		$nc(map)->setParent($($cast(BasicLookAndFeel, laf)->getAudioActionMap()));
	}
}

void BasicLookAndFeel::playSound($JComponent* c, Object$* actionKey) {
	$init(BasicLookAndFeel);
	$useLocalObjectStack();
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	if ($instanceOf(BasicLookAndFeel, laf)) {
		$var($ActionMap, map, $nc(c)->getActionMap());
		if (map != nullptr) {
			$var($Action, audioAction, map->get(actionKey));
			if (audioAction != nullptr) {
				$cast(BasicLookAndFeel, laf)->playSound(audioAction);
			}
		}
	}
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$36($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($SortArrowIcon, false, "Table.sortIconColor"_s));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$35($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($SortArrowIcon, true, "Table.sortIconColor"_s));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$31($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::createEmptyFrameIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$30($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getTextFieldBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$29($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getSplitPaneDividerBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$28($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getSplitPaneBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$27($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getProgressBarBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$26(int32_t zero, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, 6, zero, zero, zero));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$25(int32_t ten, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, ten, ten, 12, ten));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$24(int32_t zero, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$EmptyBorderUIResource, zero, zero, zero, zero));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$23($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getRadioButtonMenuItemIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$22($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getCheckBoxMenuItemIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$21($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getRadioButtonIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$20($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getCheckBoxIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$19($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getMenuArrowIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$18($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getMenuItemArrowIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$17($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicIconFactory::getMenuItemCheckIcon();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$16($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getMenuBarBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$14($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getRadioButtonBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$13($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getToggleButtonBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$12($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getButtonBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$11($Color* controlLtHighlight, $Color* control, $Color* controlDkShadow, $Color* controlShadow, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$BevelBorderUIResource, $BevelBorder::RAISED, controlLtHighlight, control, controlDkShadow, controlShadow));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$10($ColorUIResource* yellow, $UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BorderUIResource$LineBorderUIResource, yellow));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$9($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BorderUIResource::getBlackLineBorderUIResource();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$8($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BasicBorders::getInternalFrameBorder();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$7($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BorderUIResource::getLoweredBevelBorderUIResource();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$6($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $BorderUIResource::getEtchedBorderUIResource();
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$5($UIDefaults* t) {
	$init(BasicLookAndFeel);
	return $of($new($BasicBorders$MarginBorder));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$4($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::BOLD, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$3($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::MONOSPACED, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$2($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SANS_SERIF, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$1($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::SERIF, $Font::PLAIN, 12));
}

$Object* BasicLookAndFeel::lambda$initComponentDefaults$0($UIDefaults* t) {
	$init(BasicLookAndFeel);
	$init($Font);
	return $of($new($FontUIResource, $Font::DIALOG, $Font::PLAIN, 12));
}

BasicLookAndFeel::BasicLookAndFeel() {
}

$Class* BasicLookAndFeel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$0::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$1$1::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$2$2::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$3$3::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$4$4::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$5$5::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$6$6::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$7$7::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$8$8::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$9$9::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$10$10::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$11$11::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$12$12::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$13$13::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$14$14::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$16$15::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$17$16::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$18$17::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$19$18::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$20$19::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$21$20::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$22$21::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$23$22::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$24$23::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$25$24::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$26$25::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$27$26::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$28$27::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$29$28::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$30$29::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$31$30::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$35$31::load$(name, initialize);
		}
		if (name->equals("javax.swing.plaf.basic.BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32")) {
			return BasicLookAndFeel$$Lambda$lambda$initComponentDefaults$36$32::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"needsEventHelper", "Z", nullptr, $STATIC, $staticField(BasicLookAndFeel, needsEventHelper)},
		{"audioLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(BasicLookAndFeel, audioLock)},
		{"clipPlaying", "Ljavax/sound/sampled/Clip;", nullptr, $PRIVATE, $field(BasicLookAndFeel, clipPlaying)},
		{"invocator", "Ljavax/swing/plaf/basic/BasicLookAndFeel$AWTEventHelper;", nullptr, 0, $field(BasicLookAndFeel, invocator)},
		{"disposer", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicLookAndFeel, disposer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PROTECTED, $method(BasicLookAndFeel, init$, void)},
		{"createAudioAction", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, createAudioAction, $Action*, Object$*)},
		{"getAudioActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, getAudioActionMap, $ActionMap*)},
		{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel, getDefaults, $UIDefaults*)},
		{"getFocusAcceleratorKeyMask", "()I", nullptr, $STATIC, $staticMethod(BasicLookAndFeel, getFocusAcceleratorKeyMask, int32_t)},
		{"getUIOfType", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $staticMethod(BasicLookAndFeel, getUIOfType, $Object*, $ComponentUI*, $Class*)},
		{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, initClassDefaults, void, $UIDefaults*)},
		{"initComponentDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, initComponentDefaults, void, $UIDefaults*)},
		{"initResourceBundle", "(Ljavax/swing/UIDefaults;)V", nullptr, $PRIVATE, $method(BasicLookAndFeel, initResourceBundle, void, $UIDefaults*)},
		{"initSystemColorDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, initSystemColorDefaults, void, $UIDefaults*)},
		{"initialize", "()V", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel, initialize, void)},
		{"installAWTEventListener", "()V", nullptr, 0, $virtualMethod(BasicLookAndFeel, installAWTEventListener, void)},
		{"installAudioActionMap", "(Ljavax/swing/ActionMap;)V", nullptr, $STATIC, $staticMethod(BasicLookAndFeel, installAudioActionMap, void, $ActionMap*)},
		{"lambda$initComponentDefaults$0", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$0, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$1", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$1, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$10", "(Ljavax/swing/plaf/ColorUIResource;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$10, $Object*, $ColorUIResource*, $UIDefaults*)},
		{"lambda$initComponentDefaults$11", "(Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$11, $Object*, $Color*, $Color*, $Color*, $Color*, $UIDefaults*)},
		{"lambda$initComponentDefaults$12", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$12, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$13", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$13, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$14", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$14, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$16", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$16, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$17", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$17, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$18", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$18, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$19", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$19, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$2", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$2, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$20", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$20, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$21", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$21, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$22", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$22, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$23", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$23, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$24", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$24, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$25", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$25, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$26", "(ILjavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$26, $Object*, int32_t, $UIDefaults*)},
		{"lambda$initComponentDefaults$27", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$27, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$28", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$28, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$29", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$29, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$3", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$3, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$30", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$30, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$31", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$31, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$35", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$35, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$36", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$36, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$4", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$4, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$5", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$5, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$6", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$6, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$7", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$7, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$8", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$8, $Object*, $UIDefaults*)},
		{"lambda$initComponentDefaults$9", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicLookAndFeel, lambda$initComponentDefaults$9, $Object*, $UIDefaults*)},
		{"loadAudioData", "(Ljava/lang/String;)[B", nullptr, $PRIVATE, $method(BasicLookAndFeel, loadAudioData, $bytes*, $String*)},
		{"loadSystemColors", "(Ljavax/swing/UIDefaults;[Ljava/lang/String;Z)V", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, loadSystemColors, void, $UIDefaults*, $StringArray*, bool)},
		{"playSound", "(Ljavax/swing/Action;)V", nullptr, $PROTECTED, $virtualMethod(BasicLookAndFeel, playSound, void, $Action*)},
		{"playSound", "(Ljavax/swing/JComponent;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(BasicLookAndFeel, playSound, void, $JComponent*, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"uninitialize", "()V", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel, uninitialize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper", "javax.swing.plaf.basic.BasicLookAndFeel", "AWTEventHelper", 0},
		{"javax.swing.plaf.basic.BasicLookAndFeel$AudioAction", "javax.swing.plaf.basic.BasicLookAndFeel", "AudioAction", $PRIVATE},
		{"javax.swing.plaf.basic.BasicLookAndFeel$3", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicLookAndFeel$2", nullptr, nullptr, 0},
		{"javax.swing.plaf.basic.BasicLookAndFeel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.plaf.basic.BasicLookAndFeel",
		"javax.swing.LookAndFeel",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicLookAndFeel$AWTEventHelper,javax.swing.plaf.basic.BasicLookAndFeel$AudioAction,javax.swing.plaf.basic.BasicLookAndFeel$3,javax.swing.plaf.basic.BasicLookAndFeel$2,javax.swing.plaf.basic.BasicLookAndFeel$1"
	};
	$loadClass(BasicLookAndFeel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicLookAndFeel));
	});
	return class$;
}

$Class* BasicLookAndFeel::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax